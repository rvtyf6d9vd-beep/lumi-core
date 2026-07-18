// =================================================================
// LUMI-DESIGN-DEC | 需求: LUMI-DEC-001~005 | 承接: design/decode-issue.html §3.1~3.2
// 模块: lumi_decode_issue — D/I 级解码与发射
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: RV32 指令解码 + 立即数生成 + FU 分类 + 冒险检测 + skip-stalled 发射
// D 级: 解码 FETCH_WIDTH(6) 条指令, 提取字段
// I 级: 选择 ISSUE_WIDTH(3) 条就绪指令, 分配 FU, 旁路 mux
// skip-stalled: 被阻塞的指令跳过, 后续独立指令继续发射 (decode-issue.html §3.2)

module lumi_decode_issue #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH,
    parameter int FETCH_WIDTH = lumi_pkg::FETCH_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── Predecode 输入 (← lumi_core_top, 组合逻辑输出) ────────
    input  logic [31:0]             pd_inst      [FETCH_WIDTH-1:0],
    input  logic [FETCH_WIDTH-1:0]  pd_inst_valid,
    input  logic [31:0]             pd_inst_pc   [FETCH_WIDTH-1:0],
    input  logic [FETCH_WIDTH-1:0]  pd_inst_compressed,
    input  logic [15:0]             pd_inst_raw  [FETCH_WIDTH-1:0],
    input  logic [3:0]              pd_inst_count,  // BUG-009-DIB: predecode 指令计数 (用于 dib_can_accept)
    input  logic                    f2_valid,  // 上一周期 F2 数据有效
    input  logic                    fetch_active,  // ERR-114: fetch FSM 正在取指 (ST_FETCH/ST_STALL)

    // ── D 级输出 (→ RegFile 读端口) ───────────────────────────
    output logic [31:0]             d_rs1_data [ISSUE_WIDTH-1:0],
    output logic [31:0]             d_rs2_data [ISSUE_WIDTH-1:0],

    // ── RegFile 读端口 (D-009 仲裁: 3R 端口) ──────────────────
    output logic [4:0]              regfile_rs1_addr [ISSUE_WIDTH-1:0],
    output logic [4:0]              regfile_rs2_addr [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs2_data [ISSUE_WIDTH-1:0],

    // ── I 级输出 (→ Execute FU) ───────────────────────────────
    output lumi_pkg::inst_pkt_t     i_issue [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  i_issue_valid,
    output logic [3:0]              i_fu_id [ISSUE_WIDTH-1:0],

    // ── 旁路数据 (← E1/M/W) ──────────────────────────────────
    input  logic [ISSUE_WIDTH-1:0]  bypass_rs1_hit,
    input  logic [ISSUE_WIDTH-1:0]  bypass_rs2_hit,
    input  logic [31:0]             bypass_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             bypass_rs2_data [ISSUE_WIDTH-1:0],

    // ── FU 忙信号 (← FU Pool) ────────────────────────────────
    input  logic [9:0]              fu_busy,

    // ── 控制 ─────────────────────────────────────────────────
    output logic                    stall_out,
    output logic                    dib_not_full,  // DIB 有空间 (替代 all_issued)
    output logic                    dib_can_accept, // BUG-009-DIB: 当前 predecode 批次可放入 DIB (考虑 issue 排空)
    input  logic                    flush,
    input  logic                    div_busy,
    input  logic                    pipe_stall,  // ERR-114: 流水线不能接收新指令 (分支气泡/误预测气泡)

    // ── Bug#5: E1→M Load-Use 冒险检测输入 ────────────────
    // 当 E1→M 有未完成 load 时, 依赖其结果的指令不能发射
    input  logic [ISSUE_WIDTH-1:0]  e1m_load_pending,
    input  logic [4:0]              e1m_rd [ISSUE_WIDTH-1:0],

    // ── Bug#5b: E1 Load-Use 冒险检测输入 ──────────────────
    // 当 E1 有 load 时, 依赖其结果的指令不能同周期发射
    // (load 结果需经过 M→W 后才能被旁路)
    input  logic [ISSUE_WIDTH-1:0]  e1_load_pending,
    input  logic [4:0]              e1_load_rd [ISSUE_WIDTH-1:0],

    // ── ERR-115: E1 MUL-Use 冒险检测输入 ─────────────────
    // 当 E1 有 MUL 时, 依赖其结果的指令不能同周期发射
    // (MUL E1 旁路提供占位值, 需延迟 1 周期让 MUL 进入 M 级)
    input  logic [ISSUE_WIDTH-1:0]  e1_mul_pending,
    input  logic [4:0]              e1_mul_rd [ISSUE_WIDTH-1:0]
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // RV32 opcode 常量 (decode-issue.html §3.1)
    // ═══════════════════════════════════════════════════════════
    localparam logic [6:0] OP_LUI    = 7'b0110111;
    localparam logic [6:0] OP_AUIPC  = 7'b0010111;
    localparam logic [6:0] OP_JAL    = 7'b1101111;
    localparam logic [6:0] OP_JALR   = 7'b1100111;
    localparam logic [6:0] OP_BRANCH = 7'b1100011;
    localparam logic [6:0] OP_LOAD   = 7'b0000011;
    localparam logic [6:0] OP_STORE  = 7'b0100011;
    localparam logic [6:0] OP_IMM    = 7'b0010011;  // I-type ALU
    localparam logic [6:0] OP_REG    = 7'b0110011;  // R-type ALU/MUL/DIV
    localparam logic [6:0] OP_MISC   = 7'b1110011;  // SYSTEM: CSR/ECALL/EBREAK
    localparam logic [6:0] OP_FENCE  = 7'b0001111;  // FENCE (ERR-013)
    localparam logic [6:0] OP_AMO    = 7'b0101111;  // Atomic
    localparam logic [6:0] OP_FLOAD  = 7'b0000111;  // FP Load
    localparam logic [6:0] OP_FSTORE = 7'b0100111;  // FP Store
    localparam logic [6:0] OP_FP     = 7'b1010011;  // FP Compute
    localparam logic [6:0] OP_CUSTOM0 = 7'b0001011; // Zimop may-be-operations
    localparam logic [6:0] OP_ZICOND     = 7'b0110011; // Zicond CZERO.EQZ (within OP_REG)
    localparam logic [6:0] OP_ZICOND_IMM = 7'b0010011; // Zicond CZERO.NEZ (within OP_IMM)

    // ═══════════════════════════════════════════════════════════
    // 解码结构体
    // ═══════════════════════════════════════════════════════════
    typedef struct packed {
        logic        valid;
        logic [6:0]  opcode;
        logic [4:0]  rd;
        logic [2:0]  funct3;
        logic [4:0]  rs1;
        logic [4:0]  rs2;
        logic [6:0]  funct7;
        logic [31:0] imm;
        fu_type_e    fu_type;
        logic        has_rs1;
        logic        has_rs2;
        logic        has_rd;
    } decode_t;

    decode_t dec [FETCH_WIDTH-1:0];

    // ═══════════════════════════════════════════════════════════
    // DIB (Decoded Instruction Buffer) — 32-entry FIFO
    // 替换 f2r_pd_inst 单 batch 寄存器, 解耦 Fetch 和 Issue
    // ═══════════════════════════════════════════════════════════
    typedef struct packed {
        logic        valid;
        logic [31:0] inst;           // 展开后的 32-bit 指令
        logic [31:0] pc;             // 指令 PC
        logic        compressed;     // 压缩标志
        logic [15:0] inst_raw;       // 原始 16-bit (用于调试/trace)
    } dib_entry_t;

    localparam int DIB_DEPTH  = 32;
    localparam int DIB_PTR_W  = $clog2(DIB_DEPTH);  // 5 bits

    dib_entry_t dib [DIB_DEPTH-1:0];
    logic [DIB_PTR_W-1:0]   dib_wr_ptr, dib_rd_ptr;
    logic [DIB_PTR_W:0]     dib_count;  // 6 bits, 0~32

    logic dib_full, dib_empty;
    assign dib_full     = (dib_count == DIB_DEPTH[DIB_PTR_W:0]);
    assign dib_empty    = (dib_count == 0);
    // 保守 not_full: 预留一个完整 batch 空间, 防止部分写入丢失
    assign dib_not_full = (dib_count <= (DIB_DEPTH - FETCH_WIDTH));

    // ═══ ERR-114 FIX: DIB pending entry 管理 (combinational advance) ═══
    // 根因 (原始 advance-tracking 的 bug):
    //   pd_advance_r 是 dib_can_accept 的 1 周期延迟寄存器.
    //   当 DIB 满时 (dib_can_accept=0), predecode 输出未注册.
    //   当 DIB 有空间时 (dib_can_accept=1), PC 前进, 但 pd_advance_r
    //   仍为 0 (来自上一周期). 到下一周期 pd_advance_r=1 时, PC 已前进,
    //   predecode 输出对应新 PC → 旧 PC 的指令永久丢失.
    //
    // 修复方案 (combinational advance, 无 1 周期 bubble):
    //   1. dib_wr_offset 检查 pending + 新 predecode 空间 (全握手)
    //   2. pd_advance = dib_can_accept && !stall_out (组合逻辑, 无延迟)
    //   3. pd_inst_valid_r 在 pd_advance=1 时同周期注册 predecode 输出
    //      → 注册的是当前 PC 的 predecode (PC 在 posedge 后才前进)
    //   → DIB 写入旧 pending 和注册新数据在同一周期, 无 bubble

    // ── pd_inst_r: predecode 输出寄存器 ──
    logic [31:0]        pd_inst_r [FETCH_WIDTH-1:0];
    logic [FETCH_WIDTH-1:0] pd_inst_valid_r;
    logic [31:0]        pd_inst_pc_r [FETCH_WIDTH-1:0];
    logic [FETCH_WIDTH-1:0] pd_inst_compressed_r;
    logic [15:0]        pd_inst_raw_r [FETCH_WIDTH-1:0];

    // ── pd_pending: pd_inst_valid_r 中有效条目数 ──
    logic [DIB_PTR_W-1:0] pd_pending;
    always_comb begin
        pd_pending = '0;
        for (int i = 0; i < FETCH_WIDTH; i++)
            if (pd_inst_valid_r[i]) pd_pending = pd_pending + 1'b1;
    end

    // ── dib_count_after_issue: 预测 issue 后的 DIB 占用 ──
    logic [5:0] dib_count_after_issue;
    logic       dib_underflow;
    assign dib_underflow = (issue_count[5:0] > {1'b0, dib_count});
    assign dib_count_after_issue = dib_underflow ? 6'h0 : ({1'b0, dib_count} - issue_count[5:0]);

    // ── dib_wr_offset: ALL-OR-NOTHING + 全握手空间检查 ──
    // 空间检查包含 pd_inst_count: 确保写入 pending 时, dib_can_accept=1,
    //   fetch 会前进, 下周期 pd_advance_r=1, 注册新数据.
    logic [DIB_PTR_W-1:0] dib_wr_offset;
    always_comb begin
        dib_wr_offset = pd_pending;
        if ({1'b0, dib_count_after_issue} + {2'b0, dib_wr_offset} + {2'b0, pd_inst_count} > DIB_DEPTH[DIB_PTR_W+1:0])
            dib_wr_offset = '0;
    end

    // ── pd_written / pd_remaining ──
    logic [DIB_PTR_W-1:0] pd_written;
    logic [DIB_PTR_W-1:0] pd_remaining;
    assign pd_written   = dib_wr_offset;
    assign pd_remaining = (pd_pending > pd_written) ? (pd_pending - pd_written) : '0;

    // ── dib_can_accept: PC 可以前进的条件 ──
    assign dib_can_accept = (pd_remaining == '0) &&
                            ({1'b0, dib_count_after_issue} + {2'b0, pd_pending} + {2'b0, pd_inst_count} <= DIB_DEPTH[DIB_PTR_W+1:0]);

    // ── pd_advance: 组合逻辑, 同周期注册 predecode 输出 ──
    // 当 dib_can_accept=1 时, fetch 前进 PC. 在 posedge 时刻, pc_reg 还是旧值,
    // predecode 输出对应旧 PC. pd_advance=1 时注册此输出, 同时 DIB 写入旧 pending.
    // 下周期 PC 已前进, predecode 输出对应新 PC, 可再次注册.
    // 关键: 无 1 周期延迟, 避免 DIB 满转空时旧 PC 指令丢失.
    logic pd_advance;
    assign pd_advance = dib_can_accept && !stall_out && fetch_active;

    // ── pd_inst_valid_r 注册: advance + clear-after-write ──
    // 两种更新路径 (不互斥, pd_advance 优先):
    //   A. pd_advance=1: DIB 可接受 → 注册当前 predecode (覆盖旧数据)
    //   B. dib_wr_offset>0 && !pd_advance: pending 已写入, 无新数据 → CLEAR
    //      防止保留的 stale 数据被重复写入 DIB
    //   C. 其余: 保留 pd_inst_valid_r (pending 未写完, 或无新数据)
    // 关键: A 和 B 可以在同一周期发生 (pd_advance=1 && dib_wr_offset>0),
    //   此时旧数据写入 DIB, 同时注册新数据 → 无 1 周期 bubble
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            pd_inst_valid_r <= '0;
            pd_inst_compressed_r <= '0;
            for (int i = 0; i < FETCH_WIDTH; i++) begin
                pd_inst_r[i]            <= 32'h0;
                pd_inst_pc_r[i]         <= 32'h0;
                pd_inst_raw_r[i]        <= 16'h0;
            end
        end else if (flush) begin
            pd_inst_valid_r <= '0;
            pd_inst_compressed_r <= '0;
        end else begin
            // A: DIB 可接受 → 注册新数据 (优先)
            if (pd_advance) begin
                pd_inst_valid_r      <= pd_inst_valid;
                pd_inst_compressed_r <= pd_inst_compressed;
                for (int i = 0; i < FETCH_WIDTH; i++) begin
                    pd_inst_r[i]     <= pd_inst[i];
                    pd_inst_pc_r[i]  <= pd_inst_pc[i];
                    pd_inst_raw_r[i] <= pd_inst_raw[i];
                end
            end
            // B: pending 已写入但无新数据 → 清除 (防止重复写入)
            if (dib_wr_offset > 0 && !pd_advance) begin
                pd_inst_valid_r      <= '0;
                pd_inst_compressed_r <= '0;
            end
            // C: 其余情况 → 保留 (非阻塞赋值, 无更新)
        end
    end

    // ── DIB 写入/读取统一 always_ff ──
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            dib_wr_ptr <= '0;
            dib_rd_ptr <= '0;
            dib_count  <= '0;
            for (int i = 0; i < DIB_DEPTH; i++)
                dib[i] <= '{default: '0};
        end else if (flush) begin
            dib_wr_ptr <= '0;
            dib_rd_ptr <= '0;
            dib_count  <= '0;
        end else begin
            // ── 写入: pd_inst_r → DIB ──
            // dib_wr_offset 已检查 pending + 新 predecode 空间 (全握手).
            //   pd_advance_r 确保下周期注册新数据, 不会重复写入.
            //   不需要 f2_valid 门控 (会死锁).
            if (dib_wr_offset > 0) begin
                for (int i = 0; i < FETCH_WIDTH; i++) begin
                    if (pd_inst_valid_r[i] && (i < dib_wr_offset)) begin
                        dib[dib_wr_ptr + i[DIB_PTR_W-1:0]].valid      <= 1'b1;
                        dib[dib_wr_ptr + i[DIB_PTR_W-1:0]].inst       <= pd_inst_r[i];
                        dib[dib_wr_ptr + i[DIB_PTR_W-1:0]].pc         <= pd_inst_pc_r[i];
                        dib[dib_wr_ptr + i[DIB_PTR_W-1:0]].compressed <= pd_inst_compressed_r[i];
                        dib[dib_wr_ptr + i[DIB_PTR_W-1:0]].inst_raw   <= pd_inst_raw_r[i];
                    end
                end
                dib_wr_ptr <= dib_wr_ptr + dib_wr_offset;
            end

            // ── 读取: issue 消耗 ──
            if (issue_count > 0) begin
                dib_rd_ptr <= dib_rd_ptr + DIB_PTR_W'(issue_count);
            end

            // ── count 统一更新 ──
            // dib_wr_offset: 0 或 pd_pending (全握手空间检查)
            //   flush 时 dib_count 已重置
            dib_count <= dib_count + dib_wr_offset - issue_count;
        end
    end

    // ── DIB 读取 (组合逻辑, 从 DIB 头部读取 FETCH_WIDTH 条) ──
    // 包含 write-through bypass: DIB 写入和读取在同一周期时,
    // 直接转发写入数据, 消除 1 周期读延迟
    logic [31:0]        dib_read_inst [FETCH_WIDTH-1:0];
    logic [31:0]        dib_read_pc [FETCH_WIDTH-1:0];
    logic [FETCH_WIDTH-1:0] dib_read_compressed;
    logic [15:0]        dib_read_raw [FETCH_WIDTH-1:0];
    logic [FETCH_WIDTH-1:0] dib_read_valid;

    // bypass 变量 (模块级声明, Verilator 兼容)
    logic [DIB_PTR_W-1:0] dib_rd_addr;
    logic                 dib_bp_hit;
    int                   dib_bp_idx;

    always_comb begin
        for (int s = 0; s < FETCH_WIDTH; s++) begin
            dib_rd_addr = dib_rd_ptr + s[DIB_PTR_W-1:0];
            dib_bp_hit  = 1'b0;
            dib_bp_idx  = 0;

            // Write-through bypass: 暂时禁用 (ERR-114 调试)
            // bypass 在特定 DIB 状态下会转发错误数据, 导致 PC 回退
            // 禁用后指令从 DIB 寄存器读取 (1 周期延迟), 但功能正确
            // TODO: 修复 bypass 后重新启用
            // if (f2_valid && dib_not_full) begin
            //     for (int i = 0; i < FETCH_WIDTH; i++) begin
            //         if (!dib_bp_hit && pd_inst_valid_r[i] &&
            //             ((dib_wr_ptr + i[DIB_PTR_W-1:0]) == dib_rd_addr)) begin
            //             dib_bp_hit = 1'b1;
            //             dib_bp_idx = i;
            //         end
            //     end
            // end

            if (dib_bp_hit) begin
                // 转发: 直接使用本周期写入数据
                dib_read_inst[s]       = pd_inst_r[dib_bp_idx];
                dib_read_pc[s]         = pd_inst_pc_r[dib_bp_idx];
                dib_read_compressed[s] = pd_inst_compressed_r[dib_bp_idx];
                dib_read_raw[s]        = pd_inst_raw_r[dib_bp_idx];
                dib_read_valid[s]      = 1'b1;
            end else begin
                // 存储数据: 从 DIB 寄存器读取
                dib_read_inst[s]       = dib[dib_rd_addr].inst;
                dib_read_pc[s]         = dib[dib_rd_addr].pc;
                dib_read_compressed[s] = dib[dib_rd_addr].compressed;
                dib_read_raw[s]        = dib[dib_rd_addr].inst_raw;
                dib_read_valid[s]      = (s < dib_count) && dib[dib_rd_addr].valid;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // RV32C 压缩指令展开器 (decode-issue.html §3.1.1)
    // 将 16 位压缩指令转换为等价的 32 位指令
    // ═══════════════════════════════════════════════════════════
    function automatic logic [31:0] c_ext_expand(logic [15:0] ci);
        logic [15:0] inst;
        logic [4:0]  rd_rs2, rs1p, rs2p, rd_rs1;
        logic [31:0] imm;

        inst    = ci;
        // 压缩指令寄存器编码: rs1' = inst[9:7]+8, rs2' = inst[4:2]+8
        rs1p    = {2'b01, inst[9:7]};    // x8-x15
        rs2p    = {2'b01, inst[4:2]};    // x8-x15
        rd_rs2  = inst[11:7];            // full 5-bit rd/rs2
        rd_rs1  = inst[11:7];            // full 5-bit rd/rs1

        case (inst[1:0])
            // ── Quadrant 0 (C0): opcode = 00 ──
            2'b00: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.ADDI4SPN: addi rd', x2, nzuimm
                        // nzuimm = inst[5]*4 + inst[12:11]*8 + inst[10:7]*16 ... complex
                        imm = {22'h0, inst[10:7], inst[12:11], inst[5], inst[6], 2'b00};
                        return {imm[11:0], 5'd2, 3'b000, rs2p, 7'b0010011}; // ADDI
                    end
                    3'b010: begin
                        // C.LW: lw rd', offset(rs1')
                        imm = {25'h0, inst[5], inst[12:10], inst[6], 2'b00};
                        return {imm[11:0], rs1p, 3'b010, rs2p, 7'b0000011}; // LW
                    end
                    3'b110: begin
                        // C.SW: sw rs2', offset(rs1')
                        imm = {25'h0, inst[5], inst[12:10], inst[6], 2'b00};
                        return {imm[11:5], rs2p, rs1p, 3'b010, imm[4:0], 7'b0100011}; // SW
                    end
                    default: return 32'h0000_0000; // Reserved / illegal
                endcase
            end

            // ── Quadrant 1 (C1): opcode = 01 ──
            2'b01: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.NOP (rd=0) / C.ADDI: addi rd, rd, nzimm
                        imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                        return {imm[11:0], rd_rs1, 3'b000, rd_rs1, 7'b0010011}; // ADDI
                    end
                    3'b001: begin
                        // C.JAL: jal x1, offset (RV32 only)
                        imm = {{21{inst[12]}}, inst[12], inst[8], inst[10:9], inst[6],
                               inst[7], inst[2], inst[11], inst[5:3], 1'b0};
                        return {imm[20], imm[10:1], imm[11], imm[19:12], 5'd1, 7'b1101111}; // JAL x1
                    end
                    3'b010: begin
                        // C.LI: addi rd, x0, imm
                        imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                        return {imm[11:0], 5'd0, 3'b000, rd_rs1, 7'b0010011}; // ADDI rd, x0, imm
                    end
                    3'b011: begin
                        if (rd_rs1 == 5'd2) begin
                            // C.ADDI16SP: addi x2, x2, nzimm
                            imm = {{22{inst[12]}}, inst[12], inst[4:3], inst[5], inst[2], inst[6], 4'b0000};
                            return {imm[11:0], 5'd2, 3'b000, 5'd2, 7'b0010011}; // ADDI x2, x2, imm
                        end else begin
                            // C.LUI: lui rd, nzimm
                            imm = {{14{inst[12]}}, inst[12], inst[6:2], 12'h0};
                            return {imm[31:12], rd_rs1, 7'b0110111}; // LUI
                        end
                    end
                    3'b100: begin
                        case (inst[11:10])
                            2'b00: begin
                                // C.SRLI: srli rd', rd', shamt
                                return {7'b0000000, inst[6:2], rs1p, 3'b101, rs1p, 7'b0010011}; // SRLI
                            end
                            2'b01: begin
                                // C.SRAI: srai rd', rd', shamt
                                return {7'b0100000, inst[6:2], rs1p, 3'b101, rs1p, 7'b0010011}; // SRAI
                            end
                            2'b10: begin
                                // C.ANDI: andi rd', rd', imm
                                imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                                return {imm[11:0], rs1p, 3'b111, rs1p, 7'b0010011}; // ANDI
                            end
                            2'b11: begin
                                case ({inst[12], inst[6:5]})
                                    3'b000: // C.SUB
                                        return {7'b0100000, rs2p, rs1p, 3'b000, rs1p, 7'b0110011};
                                    3'b001: // C.XOR
                                        return {7'b0000000, rs2p, rs1p, 3'b100, rs1p, 7'b0110011};
                                    3'b010: // C.OR
                                        return {7'b0000000, rs2p, rs1p, 3'b110, rs1p, 7'b0110011};
                                    3'b011: // C.AND
                                        return {7'b0000000, rs2p, rs1p, 3'b111, rs1p, 7'b0110011};
                                    default: return 32'h0000_0000;
                                endcase
                            end
                        endcase
                    end
                    3'b101: begin
                        // C.J: jal x0, offset
                        imm = {{21{inst[12]}}, inst[12], inst[8], inst[10:9], inst[6],
                               inst[7], inst[2], inst[11], inst[5:3], 1'b0};
                        return {imm[20], imm[10:1], imm[11], imm[19:12], 5'd0, 7'b1101111}; // JAL x0
                    end
                    3'b110: begin
                        // C.BEQZ: beq rs1', x0, offset
                        imm = {{23{inst[12]}}, inst[12], inst[6:5], inst[2], inst[11:10], inst[4:3], 1'b0};
                        return {imm[12], imm[10:5], 5'd0, rs1p, 3'b000, imm[4:1], imm[11], 7'b1100011};
                    end
                    3'b111: begin
                        // C.BNEZ: bne rs1', x0, offset
                        imm = {{23{inst[12]}}, inst[12], inst[6:5], inst[2], inst[11:10], inst[4:3], 1'b0};
                        return {imm[12], imm[10:5], 5'd0, rs1p, 3'b001, imm[4:1], imm[11], 7'b1100011};
                    end
                    default: return 32'h0000_0000;
                endcase
            end

            // ── Quadrant 2 (C2): opcode = 10 ──
            2'b10: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.SLLI: slli rd, rd, shamt
                        return {7'b0000000, inst[6:2], rd_rs1, 3'b001, rd_rs1, 7'b0010011}; // SLLI
                    end
                    3'b010: begin
                        // C.LWSP: lw rd, offset(x2)
                        imm = {24'h0, inst[3:2], inst[12], inst[6:4], 2'b00};
                        return {imm[11:0], 5'd2, 3'b010, rd_rs1, 7'b0000011}; // LW rd, imm(x2)
                    end
                    3'b100: begin
                        if (inst[12] == 1'b0) begin
                            if (inst[6:2] == 5'd0) begin
                                // C.JR: jalr x0, rs1, 0
                                return {12'h0, rd_rs1, 3'b000, 5'd0, 7'b1100111}; // JALR x0, rs1, 0
                            end else begin
                                // C.MV: add rd, x0, rs2
                                return {7'b0000000, inst[6:2], 5'd0, 3'b000, rd_rs1, 7'b0110011}; // ADD
                            end
                        end else begin
                            if (inst[6:2] == 5'd0) begin
                                if (rd_rs1 == 5'd0)
                                    return 32'h0000_0073; // C.EBREAK → EBREAK
                                else
                                    // C.JALR: jalr x1, rs1, 0
                                    return {12'h0, rd_rs1, 3'b000, 5'd1, 7'b1100111}; // JALR x1, rs1
                            end else begin
                                // C.ADD: add rd, rd, rs2
                                return {7'b0000000, inst[6:2], rd_rs1, 3'b000, rd_rs1, 7'b0110011}; // ADD
                            end
                        end
                    end
                    3'b110: begin
                        // C.SWSP: sw rs2, offset(x2)
                        imm = {24'h0, inst[8:7], inst[12:9], 2'b00};
                        return {imm[11:5], inst[6:2], 5'd2, 3'b010, imm[4:0], 7'b0100011}; // SW rs2, imm(x2)
                    end
                    default: return 32'h0000_0000;
                endcase
            end

            default: return ci[15:0]; // Not compressed (32-bit), pass lower 16 bits
        endcase
        return 32'h0000_0000;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // D 级: 指令解码 + 立即数生成 (decode-issue.html §3.1)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            // RV32C: 压缩指令展开
            if (dib_read_valid[i] && dib_read_inst[i][1:0] != 2'b11) begin
                // 16-bit compressed → expand to 32-bit
                tmp_inst = c_ext_expand(dib_read_inst[i][15:0]);
            end else begin
                tmp_inst = dib_read_inst[i];
            end
            dec[i].valid   = dib_read_valid[i];
            dec[i].opcode  = tmp_inst[6:0];
            dec[i].rd      = tmp_inst[11:7];
            dec[i].funct3  = tmp_inst[14:12];
            dec[i].rs1     = tmp_inst[19:15];
            dec[i].rs2     = tmp_inst[24:20];
            dec[i].funct7  = tmp_inst[31:25];
            dec[i].imm     = 32'h0;
            dec[i].fu_type = FU_ALU;
            dec[i].has_rs1 = 1'b0;
            dec[i].has_rs2 = 1'b0;
            dec[i].has_rd  = 1'b1;

            case (tmp_inst[6:0])
                // ── R-type: ADD/SUB/SLL/SLT/XOR/SRL/SRA/OR/AND + MUL/DIV ──
                OP_REG: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm     = 32'h0;
                    // ERR-093: Check for Zicond CZERO.EQZ (funct7=0000111, funct3=011)
                    if (tmp_inst[31:25] == 7'b0000111 && tmp_inst[14:12] == 3'b011) begin
                        dec[i].fu_type = FU_ALU;
                        dec[i].valid = 1'b0;  // Not implemented, trigger illegal instruction
                    // M-extension: funct7 == 7'b0000001
                    end else if (tmp_inst[31:25] == 7'b0000001) begin
                        if (tmp_inst[14:12] < 3'b100)
                            dec[i].fu_type = FU_MUL;
                        else
                            dec[i].fu_type = FU_DIV;
                    end else begin
                        dec[i].fu_type = FU_ALU;
                    end
                end

                // ── I-type: ADDI/SLTI/XORI/ORI/ANDI/SLLI/SRLI/SRAI ──
                OP_IMM: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_ALU;
                    // ERR-093: Check for Zicond CZERO.NEZ (funct7=0000111, funct3=011)
                    if (tmp_inst[31:25] == 7'b0000111 && tmp_inst[14:12] == 3'b011) begin
                        dec[i].has_rs2 = 1'b1;  // rs2 field used for CZERO.NEZ
                        dec[i].valid = 1'b0;    // Not implemented, trigger illegal instruction
                    end
                end

                // ── LUI ──
                OP_LUI: begin
                    dec[i].imm = {tmp_inst[31:12], 12'h0};
                    dec[i].fu_type = FU_ALU;
                    dec[i].has_rs1 = 1'b0;
                end

                // ── AUIPC ──
                OP_AUIPC: begin
                    dec[i].imm = {tmp_inst[31:12], 12'h0};
                    dec[i].fu_type = FU_ALU;
                    dec[i].has_rs1 = 1'b0;
                end

                // ── JAL (J-type immediate) ──
                OP_JAL: begin
                    dec[i].imm = {{12{tmp_inst[31]}}, tmp_inst[19:12], tmp_inst[20], tmp_inst[30:21], 1'b0};
                    dec[i].fu_type = FU_BRANCH;
                end

                // ── JALR (I-type immediate) ──
                OP_JALR: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_BRANCH;
                end

                // ── Branch (B-type immediate) ──
                OP_BRANCH: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[7], tmp_inst[30:25], tmp_inst[11:8], 1'b0};
                    dec[i].fu_type = FU_BRANCH;
                    dec[i].has_rd  = 1'b0;
                end

                // ── Load (I-type) ──
                OP_LOAD: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_MEM;
                end

                // ── Store (S-type) ──
                OP_STORE: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:25], tmp_inst[11:7]};
                    dec[i].fu_type = FU_MEM;
                    dec[i].has_rd  = 1'b0;
                end

                // ── AMO ──
                OP_AMO: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].fu_type = FU_MEM;
                end

                // ── FP Load ── ERR-064: FPU disabled, trigger illegal ──
                OP_FLOAD: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_FP;
                    dec[i].valid = 1'b0;  // ERR-064: illegal (FPU not implemented)
                end

                // ── FP Store ── ERR-064: FPU disabled, trigger illegal ──
                OP_FSTORE: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:25], tmp_inst[11:7]};
                    dec[i].fu_type = FU_FP;
                    dec[i].has_rd  = 1'b0;
                    dec[i].valid = 1'b0;  // ERR-064: illegal (FPU not implemented)
                end

                // ── FP Compute ── ERR-064: FPU disabled, trigger illegal ──
                OP_FP: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].fu_type = FU_FP;
                    dec[i].valid = 1'b0;  // ERR-064: illegal (FPU not implemented)
                end

                // ── Zicbom/Zicbop/Zicboz: Cache Block Operations (OP_MISC funct3=010) ──
                // CBO.{CLEAN,FLUSH,INVAL} and CBO.ZERO and PREFETCH.{R,W,I}
                // Encoded as: opcode=MISC-MEM(0001111), funct3=010
                // Currently handled by OP_FENCE branch (same opcode).
                // When funct3=010 and funct12 matches CBO encodings,
                // we mark as illegal until cache management is implemented.

                // ── Zimop: May-Be-Operations (OP_CUSTOM0 = 0001011) ──
                OP_CUSTOM0: begin
                    dec[i].fu_type = FU_MISC;
                    dec[i].has_rs1 = 1'b0;
                    dec[i].has_rs2 = 1'b0;
                    dec[i].has_rd  = 1'b0;
                end

                // ── FENCE + Zicbom/Zicbop/Zicboz (MISC-MEM opcode) ──
                // ERR-060/061: 实现 CBO.CLEAN/FLUSH/INVAL/ZERO 和 PREFETCH 解码
                OP_FENCE: begin
                    dec[i].fu_type = FU_MISC;
                    dec[i].has_rs1 = 1'b0;
                    dec[i].has_rs2 = 1'b0;
                    dec[i].has_rd  = 1'b0;
                    // Zicbom/Zicbop/Zicboz: CBO ops (funct3=010)
                    // 当前无 cache 层级, CBO 作为 NOP 处理 (Profile Mandatory)
                    if (tmp_inst[14:12] == 3'b010) begin
                        dec[i].has_rs1 = 1'b1;  // CBO 使用 rs1 作为基地址
                        dec[i].has_rs2 = 1'b0;  // rs2 编码操作类型
                        // CBO.INVAL: rs2=00000, CBO.CLEAN: rs2=00001
                        // CBO.FLUSH: rs2=00010, CBO.ZERO: rs2=00010 (Zicboz)
                        // 所有 CBO 作为 NOP, 不触发异常
                    end
                    // Zicbop: PREFETCH hints (funct3=110)
                    // PREFETCH.R: rs2=00001, PREFETCH.W: rs2=00011, PREFETCH.I: rs2=00000
                    // Hint 指令, 作为 NOP 处理
                    if (tmp_inst[14:12] == 3'b110) begin
                        dec[i].has_rs1 = 1'b1;  // PREFETCH 使用 rs1 作为地址
                    end
                    // Zihintntl: NTL.P1/NTL.PALL/NTL.S1/NTL.ALL (funct3=100, funct7 patterns)
                    // NTL hints are NOP-equivalent, no special handling needed
                end

                // ── SYSTEM: CSR/ECALL/EBREAK ──
                OP_MISC: begin
                    dec[i].imm     = {20'h0, tmp_inst[31:20]};
                    dec[i].fu_type = FU_MISC;
                    dec[i].has_rs1 = (tmp_inst[14:12] != 3'b000); // CSR 读写有 rs1
                end

                default: begin
                    dec[i].valid = 1'b0; // 非法指令
                end
            endcase
        end
    end

    // ═══════════════════════════════════════════════════════════
    // RegFile 读端口地址输出 (D 级)
    // ═══════════════════════════════════════════════════════════
    // 将发射槽映射到 RegFile 读端口
    // 注: 由于 skip-stalled, 解码索引 != 发射槽索引

    logic [2:0] issue_sel [ISSUE_WIDTH-1:0];  // 每个发射槽选择的解码索引
    logic       issue_ready [ISSUE_WIDTH-1:0]; // 是否可发射
    logic [$clog2(FETCH_WIDTH):0] issue_count; // 实际发射数

    // 临时变量 (避免 automatic inside always_comb, Verilator 兼容)
    logic       tmp_already_selected;
    logic       tmp_fu_available;
    logic       tmp_batch_raw;

    decode_t    tmp_prev;
    logic [31:0] tmp_inst;
    decode_t    tmp_dec_d;

    // ═══════════════════════════════════════════════════════════
    // I 级: FU 分配 + 冒险检测 + skip-stalled (decode-issue.html §3.2)
    // ═══════════════════════════════════════════════════════════
    // skip-stalled: 如果第 i 条指令被阻塞 (FU busy 或 RAW),
    //   跳过它, 继续检查第 i+1 条是否可以发射

    // 冒险检测: RAW 依赖 (同一 decode 批次内的 WAW/WAR)
    logic [ISSUE_WIDTH-1:0] raw_stall;
    logic stop_issue;       // ERR-019: 程序序发射停止标志
    logic found_for_slot;   // ERR-019: 当前 slot 是否已找到指令

    always_comb begin
        issue_count = '0;
        i_issue_valid = '0;
        stall_out = 1'b0;
        raw_stall = '0;

        // 初始化所有发射槽
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            issue_sel[s]   = 3'h0;
            issue_ready[s] = 1'b0;
        end

        // ERR-019 修复: 程序序发射 — 如果队列中某条指令被阻塞 (FU busy 或 RAW),
        // 其后面所有指令都不允许发射, 保证程序序正确.
        stop_issue = 1'b0;

        // ERR-019: post_flush_block 时禁止发射 — flush 后等待正确路径批次
        // ERR-114: pipe_stall 时禁止发射 — 分支气泡/误预测气泡期间 E1 不捕获,
        //   若仍发射会消耗 DIB 条目但指令丢失
        if (!post_flush_block_r && !pipe_stall) begin

        // 程序序扫描: 从解码队列中按序选择可发射的指令
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            if (!stop_issue) begin
                found_for_slot = 1'b0;
                for (int qi = 0; qi < FETCH_WIDTH; qi++) begin
                    if (!found_for_slot && dec[qi].valid && issue_count < ISSUE_WIDTH[$clog2(FETCH_WIDTH):0]) begin
                        // 检查该解码槽是否已被选中
                        tmp_already_selected = 1'b0;
                        for (int p = 0; p < s; p++) begin
                            if (issue_sel[p] == qi[2:0] && issue_ready[p])
                                tmp_already_selected = 1'b1;
                        end

                        if (!tmp_already_selected) begin
                            // 检查 FU 可用性 (decode-issue.html §3.2)
                            tmp_fu_available = !fu_busy[dec[qi].fu_type];
                            if (dec[qi].fu_type == FU_DIV)
                                tmp_fu_available = tmp_fu_available && !div_busy;
                            // SA-CM-003 FIX: MUL single slot mutual exclusion
                            // Prevent two MUL instructions from being issued in same batch
                            if (dec[qi].fu_type == FU_MUL) begin
                                for (int p = 0; p < s; p++) begin
                                    if (issue_ready[p] && dec[issue_sel[p]].fu_type == FU_MUL)
                                        tmp_fu_available = 1'b0;
                                end
                            end
                            // ERR-114 FIX: MEM 指令只能使用 slot 0/1 (2 个 LSU 端口)
                            // slot 2 的 MEM 指令延后到下一周期 slot 0 发射
                            if (dec[qi].fu_type == FU_MEM && s >= 2)
                                tmp_fu_available = 1'b0;

                            // 检查批次内 RAW 冒险
                            tmp_batch_raw = 1'b0;
                            for (int p = 0; p < s; p++) begin
                                if (issue_ready[p]) begin
                                    tmp_prev = dec[issue_sel[p]];
                                    // 当前指令的 rs1/rs2 依赖前一条的 rd
                                    if (tmp_prev.has_rd && tmp_prev.rd != 5'h0) begin
                                        if ((dec[qi].has_rs1 && dec[qi].rs1 == tmp_prev.rd) ||
                                            (dec[qi].has_rs2 && dec[qi].rs2 == tmp_prev.rd)) begin
                                            tmp_batch_raw = 1'b1;
                                        end
                                    end
                                end
                            end

                            // Bug#5: 检查跨批次 Load-Use 冒险
                            // E1→M 有未完成 load 时, 依赖其 rd 的指令不能发射
                            // (load 结果在 M 级才能产生, 此时发射会导致依赖指令
                            //  进入 E1 读到旧寄存器值)
                            if (!tmp_batch_raw) begin
                                for (int m = 0; m < ISSUE_WIDTH; m++) begin
                                    if (e1m_load_pending[m] && e1m_rd[m] != 5'h0) begin
                                        if ((dec[qi].has_rs1 && dec[qi].rs1 == e1m_rd[m]) ||
                                            (dec[qi].has_rs2 && dec[qi].rs2 == e1m_rd[m])) begin
                                            tmp_batch_raw = 1'b1;
                                        end
                                    end
                                end
                            end

                            // Bug#5b: E1 Load-Use 冒险 — E1 有 load 时延迟发射
                            if (!tmp_batch_raw) begin
                                for (int m = 0; m < ISSUE_WIDTH; m++) begin
                                    if (e1_load_pending[m] && e1_load_rd[m] != 5'h0) begin
                                        if ((dec[qi].has_rs1 && dec[qi].rs1 == e1_load_rd[m]) ||
                                            (dec[qi].has_rs2 && dec[qi].rs2 == e1_load_rd[m])) begin
                                            tmp_batch_raw = 1'b1;
                                        end
                                    end
                                end
                            end

                            // ERR-115: E1 MUL-Use 冒险 — E1 有 MUL 时延迟发射
                            // MUL 在 E1 级计算尚未完成, 旁路提供占位值,
                            // 依赖指令必须等待 MUL 进入 M 级后再发射
                            if (!tmp_batch_raw) begin
                                for (int m = 0; m < ISSUE_WIDTH; m++) begin
                                    if (e1_mul_pending[m] && e1_mul_rd[m] != 5'h0) begin
                                        if ((dec[qi].has_rs1 && dec[qi].rs1 == e1_mul_rd[m]) ||
                                            (dec[qi].has_rs2 && dec[qi].rs2 == e1_mul_rd[m])) begin
                                            tmp_batch_raw = 1'b1;
                                        end
                                    end
                                end
                            end
                            
                            if (tmp_fu_available && !tmp_batch_raw && !issue_ready[s]) begin
                                issue_sel[s]   = qi[2:0];
                                issue_ready[s] = 1'b1;
                                issue_count    = issue_count + 1'b1;
                                found_for_slot = 1'b1;
                                // ERR-019: 分支指令后停止发射 (分支结果在 E1 才确定,
                                // 后续指令不能推测执行, 需等分支退休后再重定向)
                                if (dec[qi].fu_type == FU_BRANCH)
                                    stop_issue = 1'b1;
                            end else if (!tmp_fu_available || tmp_batch_raw) begin
                                // ERR-019: 指令被阻塞 → 停止所有后续发射
                                found_for_slot = 1'b1;
                                stop_issue     = 1'b1;
                            end
                        end
                    end
                end
            end
        end
        end // ERR-019: close if (!post_flush_block_r)

        // stall_out: DIB 有指令但无法发射 (FU busy 或 stop_issue 或 pipe_stall)
        if (!dib_empty && !post_flush_block_r) begin
            // DIB 有有效指令但 issue_count == 0, 说明被阻塞
            // ERR-114: pipe_stall 也需要 stall_out, 防止 fetch 继续前进
            if (dib_count > 0 && (issue_count == 0 || pipe_stall))
                stall_out = 1'b1;
        end

    end
    // ═══════════════════════════════════════════════════════════
    // RegFile 读端口地址 (D 级输出)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            if (issue_ready[s]) begin
                regfile_rs1_addr[s] = dec[issue_sel[s]].rs1;
                regfile_rs2_addr[s] = dec[issue_sel[s]].rs2;
            end else begin
                regfile_rs1_addr[s] = 5'h0;
                regfile_rs2_addr[s] = 5'h0;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // I 级输出: inst_pkt_t 组装 + 旁路 mux
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            i_issue[s].valid     = issue_ready[s] && !flush;
            i_issue_valid[s]     = issue_ready[s] && !flush;

            if (issue_ready[s]) begin
                tmp_dec_d = dec[issue_sel[s]];

                i_issue[s].pc       = dib_read_pc[issue_sel[s]];  // per-instruction PC from DIB
                // 指令已由 predecode 展开为 32-bit, 无需再次展开
                i_issue[s].inst = dib_read_inst[issue_sel[s]];
                // inst_raw 来自 predecode (原始 16-bit halfword)
                i_issue[s].inst_raw = dib_read_raw[issue_sel[s]];
                i_issue[s].is_compressed = dib_read_compressed[issue_sel[s]];
                i_issue[s].rd       = tmp_dec_d.has_rd ? tmp_dec_d.rd : 5'h0;
                i_issue[s].rs1      = tmp_dec_d.rs1;
                i_issue[s].rs2      = tmp_dec_d.rs2;
                i_issue[s].funct3   = tmp_dec_d.funct3;
                i_issue[s].funct7   = tmp_dec_d.funct7;
                i_issue[s].imm      = tmp_dec_d.imm;
                i_issue[s].fu_type  = tmp_dec_d.fu_type;
                i_issue[s].fu_id    = 4'h0;  // 简化: FU ID 由 FU pool 分配
                i_issue[s].privilege = PRIV_M; // 简化: 固定 M 模式
                i_issue[s].exc_valid = 1'b0;
                i_issue[s].exc_cause = 4'h0;

                // 检查非法指令
                if (tmp_dec_d.opcode == 7'b0 && !dib_read_valid[issue_sel[s]]) begin
                    i_issue[s].exc_valid = 1'b1;
                    i_issue[s].exc_cause = EXC_ILLEGAL_INST[3:0];
                end
                // ERR-060/061: CBO ops (OP_FENCE funct3=010) and PREFETCH (funct3=110)
                // now handled as NOP in decode stage, no longer illegal
                // ERR-093: Zicond (OP_ZICOND/OP_ZICOND_IMM) handled via valid=0 in decode
                // ERR-094: Zimop (OP_CUSTOM0) is NOP, not illegal
                // Note: 所有 decode 阶段非法指令检查已移至各 case 分支内

                // FU ID 分配 (简化: 根据 fu_type 固定映射)
                case (tmp_dec_d.fu_type)
                    FU_ALU:    i_fu_id[s] = 4'd0;
                    FU_MUL:    i_fu_id[s] = 4'd1;
                    FU_DIV:    i_fu_id[s] = 4'd2;
                    FU_MEM:    i_fu_id[s] = 4'd3;
                    FU_FP:     i_fu_id[s] = 4'd4;
                    FU_BRANCH: i_fu_id[s] = 4'd6;
                    FU_MISC:   i_fu_id[s] = 4'd7;
                    default:   i_fu_id[s] = 4'd0;
                endcase
            end else begin
                i_issue[s]      = '0;
                i_fu_id[s]      = 4'h0;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // 旁路 mux: RegFile 数据 vs 旁路数据
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            // rs1: 旁路优先
            if (bypass_rs1_hit[s])
                d_rs1_data[s] = bypass_rs1_data[s];
            else
                d_rs1_data[s] = regfile_rs1_data[s];

            // rs2: 旁路优先
            if (bypass_rs2_hit[s])
                d_rs2_data[s] = bypass_rs2_data[s];
            else
                d_rs2_data[s] = regfile_rs2_data[s];

            // LUI/AUIPC 不需要 rs1
            if (issue_ready[s] && !dec[issue_sel[s]].has_rs1)
                d_rs1_data[s] = 32'h0;

            // 无 rs2 的指令
            if (issue_ready[s] && !dec[issue_sel[s]].has_rs2)
                d_rs2_data[s] = 32'h0;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // FSM (简化: 组合流水线, 状态机仅用于 stall/flush 控制)
    // ═══════════════════════════════════════════════════════════
    typedef enum logic [1:0] {
        ST_IDLE,
        ST_DECODE,
        ST_STALL,
        ST_FLUSH
    } dec_state_e;

    dec_state_e state_reg, state_next;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_IDLE;
        else
            state_reg <= state_next;
    end

    always_comb begin
        state_next = state_reg;
        case (state_reg)
            ST_IDLE:   state_next = ST_DECODE;
            ST_DECODE: begin
                if (flush)
                    state_next = ST_FLUSH;
                else if (stall_out)
                    state_next = ST_STALL;
            end
            ST_STALL: begin
                if (flush)
                    state_next = ST_FLUSH;
                else if (!stall_out)
                    state_next = ST_DECODE;
            end
            ST_FLUSH:  state_next = ST_DECODE;
            default:   state_next = ST_IDLE;  // ERR-057: defensive default
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // post_flush_block: flush 后阻止发射, 直到 DIB 有正确路径数据
    // ═══════════════════════════════════════════════════════════
    logic post_flush_block_r;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            post_flush_block_r <= 1'b0;
        else if (flush)
            post_flush_block_r <= 1'b1;
        else if (dib_count > 0 && !flush)  // DIB 有正确路径数据
            post_flush_block_r <= 1'b0;
    end

    // ERR-114 诊断 trace 已移除 (Phase 5 清理)

endmodule
