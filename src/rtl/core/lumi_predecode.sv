// =================================================================
// LUMI-DESIGN-PREDECODE | 需求: ERR-042 修复 | 承接: design/fetch-bpred.html
// 模块: lumi_predecode — pre-decode 指令边界扫描器
// 阶段: M3-S1 Bug 修复 | 日期: 2026-07-14
// =================================================================
// 功能: 从 128-bit raw fetch block 中识别 RV32IMAC 指令边界
//   - 16-bit 压缩指令 (hw[1:0] != 2'b11) → c_ext_expand 展开
//   - 32-bit 指令 (hw[1:0] == 2'b11)
//   - 跨 cache line 边界: carry_hw + carry_valid (shift buffer)
//   - pred_taken: 只发射第一条指令 (分支本身)

module lumi_predecode #(
    parameter int FETCH_WIDTH = lumi_pkg::FETCH_WIDTH  // 6
) (
    input  logic [127:0]            raw_data,        // 128-bit ICache line data
    input  logic [31:0]             base_pc,         // 16-byte 对齐的 cache line 基地址
    input  logic [3:0]              start_offset,    // PC[3:0]: 起始字节偏移 (0 或偶数)
    input  logic [15:0]             carry_hw,        // 上一个 fetch 的未完成 halfword
    input  logic                    carry_valid,     // carry_hw 有效
    input  logic                    pred_taken,      // 分支预测 taken (只发射第一条)

    output logic [31:0]             inst       [FETCH_WIDTH-1:0],  // 展开后的 32-bit 指令
    output logic [31:0]             inst_pc    [FETCH_WIDTH-1:0],  // 每条指令的 PC
    output logic [FETCH_WIDTH-1:0]  inst_valid,                    // 有效标志
    output logic [FETCH_WIDTH-1:0]  inst_compressed,               // 原始为 16-bit 压缩指令
    output logic [15:0]             inst_raw   [FETCH_WIDTH-1:0],  // 原始 16-bit halfword
    output logic [3:0]              inst_count,                    // 有效指令数
    output logic [4:0]              bytes_consumed,                // PC 前进量
    output logic [15:0]             carry_hw_out,                  // 未完成的 halfword
    output logic                    carry_valid_out                // carry_hw_out 有效
);

    import lumi_pkg::*;

    // ─── 局部变量 (always_comb 顶层, Verilator 兼容) ─────────
    logic [127:0] raw_swapped;    // halfword 交换后的 raw_data
    logic [143:0] eff_data;       // 有效数据: carry(16) + raw(128) = 144 bit
    logic [4:0]   bo;             // 当前字节偏移 (在 eff_data 中)
    logic [15:0]  hw;             // 当前 halfword
    logic         stop_scan;      // 停止扫描标志
    logic [3:0]   cnt;            // 指令计数

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        // ── 默认值 ──
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            inst[i]            = 32'h0;
            inst_pc[i]         = 32'h0;
            inst_valid[i]      = 1'b0;
            inst_compressed[i] = 1'b0;
            inst_raw[i]        = 16'h0;
        end
        carry_hw_out    = 16'h0;
        carry_valid_out = 1'b0;
        cnt             = 4'h0;
        stop_scan       = 1'b0;

        // ── 字节序说明 ──
        // V1 SRAM 是 32-bit word-addressed, ic_data 拼接格式:
        //   {SRAM[idx+3], SRAM[idx+2], SRAM[idx+1], SRAM[idx]}
        // 这等价于小端字节序: ic_data[31:0] = 地址+0 的 word.
        // 因此 ic_data 已经是正确的线性字节序, 无需交换.
        raw_swapped = raw_data;

        // ── 构造 144-bit 有效数据 ──
        // carry_valid: eff_data = {raw_swapped[127:0], carry_hw[15:0]}
        //   byte[1:0] = carry, byte[17:2] = raw_swapped
        //   起始 bo = 2 (跳过 carry 的 2 字节)
        // 无 carry: eff_data = {16'h0, raw_swapped[127:0]}
        //   byte[15:0] = raw_swapped, 起始 bo = start_offset
        if (carry_valid) begin
            eff_data = {raw_swapped, carry_hw};
            bo = 5'd2;

            // 先处理 carry 指令 (索引 0, PC = base_pc - 2)
            hw = eff_data[0 +: 16];  // carry_hw
            inst_raw[0] = carry_hw;
            inst_pc[0]  = base_pc - 32'd2;

            if (hw[1:0] != 2'b11) begin
                inst[0]            = lumi_pkg::c_ext_expand(hw);
                inst_compressed[0] = 1'b1;
                bo                 = bo + 5'd2;  // 16-bit: advance 2 bytes
            end else begin
                inst[0]            = eff_data[0 +: 32];  // {data[15:0], carry_hw}
                inst_compressed[0] = 1'b0;
                bo                 = bo + 5'd4;  // 32-bit: advance 4 bytes
            end
            inst_valid[0] = 1'b1;
            cnt           = 4'd1;
        end else begin
            eff_data = {16'h0, raw_swapped};
            bo = {1'b0, start_offset};
        end

        // ── 主扫描循环 ──
        for (int i = carry_valid ? 1 : 0; i < FETCH_WIDTH; i++) begin
            if (!stop_scan && !(pred_taken && i > (carry_valid ? 1 : 0))) begin
                // ERR-042 fix: 边界检查区分 carry/非 carry
                // carry: eff_data = {raw(16B), carry(2B)} = 18B
                // 非 carry: eff_data = {0(2B), raw(16B)} = 18B, 但仅 raw 的 16B 有效
                if (bo + 5'd2 > (carry_valid ? 5'd18 : 5'd16)) begin
                    // 数据不足 (eff_data 总 18 字节, 无 carry 时 raw_data 仅 16 字节)
                    stop_scan = 1'b1;
                end else begin
                    hw = eff_data[bo*8 +: 16];
                    inst_raw[i] = hw;

                    // PC 计算:
                    // carry_valid: eff_data[bo] = raw_data[bo-2] → PC = base_pc + (bo-2)
                    // 无 carry:    eff_data[bo] = raw_data[bo-start_offset]
                    //              → PC = base_pc + (bo - start_offset)
                    if (carry_valid)
                        inst_pc[i] = base_pc + {27'h0, bo - 5'd2};
                    else
                        inst_pc[i] = base_pc + {28'h0, bo[3:0]} - {28'h0, start_offset};

                    if (hw[1:0] != 2'b11) begin
                        // 压缩指令 (16-bit)
                        inst[i]            = lumi_pkg::c_ext_expand(hw);
                        inst_compressed[i] = 1'b1;
                        inst_valid[i]      = 1'b1;
                        cnt                = cnt + 4'd1;
                        bo                 = bo + 5'd2;
                    end else begin
                        // 32-bit 指令
                        if (bo + 5'd4 > (carry_valid ? 5'd18 : 5'd16)) begin
                            // 跨 cache line 边界
                            carry_hw_out    = hw;
                            carry_valid_out = 1'b1;
                            stop_scan       = 1'b1;
                        end else begin
                            inst[i]            = eff_data[bo*8 +: 32];
                            inst_compressed[i] = 1'b0;
                            inst_valid[i]      = 1'b1;
                            cnt                = cnt + 4'd1;
                            bo                 = bo + 5'd4;
                        end
                    end
                end
            end
        end

        inst_count = cnt;

        // DEBUG: predecode 输出 (已移除)

        // ── bytes_consumed 计算 ──
        // 从 raw_data 消费的字节数 (不含 carry 的 2 字节, 不含 start_offset)
        if (carry_valid)
            bytes_consumed = bo - 5'd2;
        else
            bytes_consumed = bo - {1'b0, start_offset};

        // ── pred_taken 修正: 只发射第一条指令 ──
        if (pred_taken) begin
            for (int i = 1; i < FETCH_WIDTH; i++) begin
                inst_valid[i]      = 1'b0;
                inst[i]            = 32'h0;
                inst_pc[i]         = 32'h0;
                inst_compressed[i] = 1'b0;
                inst_raw[i]        = 16'h0;
            end
            inst_count      = inst_valid[0] ? 4'd1 : 4'd0;
            carry_hw_out    = 16'h0;
            carry_valid_out = 1'b0;
            if (carry_valid) begin
                // carry 指令: 从 raw_data 消费 2 字节
                bytes_consumed = 5'd2;
            end else begin
                // 无 carry: 仅第一条指令宽度 (start_offset 已在 PC 中, 不重复计算)
                bytes_consumed = inst_valid[0] ? (inst_compressed[0] ? 5'd2 : 5'd4) : 5'd0;
            end
        end
    end

endmodule
