// =================================================================
// LUMI-DESIGN-MEM | 需求: LUMI-MEM-001~003 | 承接: design/execute-alu.html §4.1, design/writeback-csr.html §3.1
// 模块: lumi_memory_stage — M 级内存访问 (E2→M→W)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: Load/Store/AMO 地址对齐 + byte enable + 符号扩展 + Store Buffer
// 2x LSU: 每 cycle 最多 2 个内存操作
// Store Buffer: 写操作缓冲, commit 后提交到 Cache/TCM

module lumi_memory_stage #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH,
    // ERR-027/028 修复: BYPASS_SB=1 时 store 直写 SRAM, 不经过 Store Buffer
    // 规避 SB 无 load forwarding (ERR-027) 和 SB 满静默丢弃 (ERR-028)
    parameter bit BYPASS_SB   = 1'b0
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── M 级输入 (← Execute E1/E2) ────────────────────────────
    input  lumi_pkg::inst_pkt_t     m_inst [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  m_valid,
    input  logic [31:0]             m_result [ISSUE_WIDTH-1:0],
    input  logic [4:0]              m_rd [ISSUE_WIDTH-1:0],

    // ── LSU 接口 (← Execute E1) ───────────────────────────────
    input  logic [31:0]             e1_mem_addr [1:0],
    input  logic                    e1_mem_we   [1:0],
    input  logic [31:0]             e1_mem_wdata[1:0],

    // ── TCM/Cache 接口 (→ 存储子系统) ─────────────────────────
    output logic [31:0]             mem_addr_out,
    output logic [31:0]             mem_wdata_out,
    input  logic [31:0]             mem_rdata_in,
    output logic                    mem_we_out,
    output logic [3:0]              mem_be_out,
    output logic                    mem_valid_out,
    input  logic                    mem_ready_in,
    input  logic                    mem_hit_in,

    // ── M 级输出 (→ Writeback W) ──────────────────────────────
    output lumi_pkg::inst_pkt_t     m_inst_out [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  m_valid_out,
    output logic [31:0]             m_result_out [ISSUE_WIDTH-1:0],
    output logic [4:0]              m_rd_out [ISSUE_WIDTH-1:0],
    output logic [31:0]             m_pc_out [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  m_exception_out,

    // ── ERR-030 修复: Memory stall 输出 (→ decode fu_busy) ────
    output logic                    mem_busy,

    // ── SA-10 修复: M 级旁路 valid 信号 (→ core_top bypass) ─────
    // 旁路 valid 与 result 必须同步: load 旁路仅在 mem_ready_in=1 时有效
    // (多周期 load 期间 m_result_out 还是旧值, 需要屏蔽旁路匹配)
    output logic [ISSUE_WIDTH-1:0]  m_bypass_valid,

    // ── Store Buffer 确认 ─────────────────────────────────────
    output logic                    store_commit,
    input  logic                    store_commit_ack,

    // ERR-055: Store buffer empty signal for FENCE
    output logic                    sb_empty_out,

    // ── Trap flush: trap_request 时刷新 M→W 寄存器, 防止异常指令重复提交 ──
    input  logic                    trap_flush
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // 地址对齐检查与 byte enable 生成
    // ═══════════════════════════════════════════════════════════
    function automatic logic [3:0] gen_byte_enable(
        input logic [1:0] addr_offset,   // addr[1:0]
        input logic [2:0] funct3          // size: 000=B, 001=H, 010=W
    );
        case (funct3[1:0])
            2'b00: begin // Byte
                case (addr_offset)
                    2'b00: return 4'b0001;
                    2'b01: return 4'b0010;
                    2'b10: return 4'b0100;
                    2'b11: return 4'b1000;
                endcase
            end
            2'b01: begin // Halfword
                case (addr_offset)
                    2'b00: return 4'b0011;  // bytes[1:0]
                    2'b01: return 4'b0110;  // bytes[2:1]
                    2'b10: return 4'b1100;  // bytes[3:2]
                    2'b11: return 4'b1000;  // byte[3] only (cross-word)
                endcase
            end
            2'b10: begin // Word
                case (addr_offset)
                    2'b00: return 4'b1111;  // bytes[3:0]
                    2'b01: return 4'b1110;  // bytes[3:1] (cross-word low)
                    2'b10: return 4'b1100;  // bytes[3:2] (cross-word low)
                    2'b11: return 4'b1000;  // byte[3]   (cross-word low)
                endcase
            end
            default: return 4'b1111;
        endcase
        return 4'b0000;
    endfunction

    function automatic logic check_alignment(
        input logic [1:0] addr_offset,
        input logic [2:0] funct3
    );
        case (funct3[1:0])
            2'b00: return 1'b1;              // Byte: 任何对齐均可
            2'b01: return !addr_offset[0];    // Halfword: bit[0]==0
            2'b10: return (addr_offset == 2'b00); // Word: 4字节对齐
            default: return 1'b0;
        endcase
    endfunction

    // BUG-009: 仅检测真正跨 word 边界的访问
    function automatic logic needs_cross_word_split(
        input logic [1:0] addr_offset,
        input logic [2:0] funct3
    );
        case (funct3[1:0])
            2'b00: return 1'b0;                          // Byte: never crosses
            2'b01: return (addr_offset == 2'b11);        // SH: only offset=3 crosses
            2'b10: return (addr_offset != 2'b00);        // SW: any non-zero crosses
            default: return 1'b0;
        endcase
    endfunction

    // ═══════════════════════════════════════════════════════════
    // Load 符号扩展
    // ═══════════════════════════════════════════════════════════
    function automatic logic [31:0] sign_extend_load(
        input logic [31:0] raw_data,
        input logic [1:0]  addr_offset,
        input logic [2:0]  funct3
    );
        case (funct3)
            3'b000: begin // LB: 符号扩展 byte
                case (addr_offset)
                    2'b00: return {{24{raw_data[7]}},  raw_data[7:0]};
                    2'b01: return {{24{raw_data[15]}}, raw_data[15:8]};
                    2'b10: return {{24{raw_data[23]}}, raw_data[23:16]};
                    2'b11: return {{24{raw_data[31]}}, raw_data[31:24]};
                endcase
            end
            3'b001: begin // LH: 符号扩展 halfword
                case (addr_offset)
                    2'b00: return {{16{raw_data[15]}}, raw_data[15:0]};    // bytes[1:0]
                    2'b01: return {{16{raw_data[23]}}, raw_data[23:8]};    // bytes[2:1]
                    2'b10: return {{16{raw_data[31]}}, raw_data[31:16]};   // bytes[3:2]
                    2'b11: return {{16{raw_data[31]}}, raw_data[31:16]};   // cross-word, merge 处理
                endcase
            end
            3'b010: return raw_data;          // LW
            3'b100: begin // LBU: 零扩展 byte
                case (addr_offset)
                    2'b00: return {24'h0, raw_data[7:0]};
                    2'b01: return {24'h0, raw_data[15:8]};
                    2'b10: return {24'h0, raw_data[23:16]};
                    2'b11: return {24'h0, raw_data[31:24]};
                endcase
            end
            3'b101: begin // LHU: 零扩展 halfword
                case (addr_offset)
                    2'b00: return {16'h0, raw_data[15:0]};
                    2'b01: return {16'h0, raw_data[23:8]};
                    2'b10: return {16'h0, raw_data[31:16]};
                    2'b11: return {16'h0, raw_data[31:16]};   // cross-word, merge 处理
                endcase
            end
            default: return raw_data;
        endcase
        return raw_data;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // Store 数据对齐
    // ═══════════════════════════════════════════════════════════
    function automatic logic [31:0] align_store_data(
        input logic [31:0] wdata,
        input logic [1:0]  addr_offset,
        input logic [2:0]  funct3
    );
        case (funct3[1:0])
            2'b00: begin // SB
                case (addr_offset)
                    2'b00: return {24'h0, wdata[7:0]};
                    2'b01: return {16'h0, wdata[7:0], 8'h0};
                    2'b10: return {8'h0, wdata[7:0], 16'h0};
                    2'b11: return {wdata[7:0], 24'h0};
                endcase
            end
            2'b01: begin // SH
                case (addr_offset)
                    2'b00: return {16'h0, wdata[15:0]};
                    2'b01: return {8'h0, wdata[15:8], wdata[7:0], 8'h0};  // bytes[2:1]
                    2'b10: return {wdata[15:0], 16'h0};                    // bytes[3:2]
                    2'b11: return {wdata[7:0], 24'h0};                     // byte[3] only (cross-word)
                endcase
            end
            2'b10: begin // SW
                case (addr_offset)
                    2'b00: return wdata;
                    2'b01: return {wdata[23:0],  8'h0}; // bytes[3:1] in low word
                    2'b10: return {wdata[15:0], 16'h0}; // bytes[3:2] in low word
                    2'b11: return {wdata[7:0],  24'h0}; // byte[3]   in low word
                endcase
            end
            default: return wdata;
        endcase
        return wdata;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // Store Buffer (FIFO, 8 条目)
    // ═══════════════════════════════════════════════════════════
    localparam int SB_DEPTH = 8;
    typedef struct packed {
        logic        valid;
        logic [31:0] addr;
        logic [31:0] data;
        logic [3:0]  be;
    } sb_entry_t;

    sb_entry_t sb_mem [SB_DEPTH-1:0];
    logic [$clog2(SB_DEPTH)-1:0] sb_head, sb_tail;
    logic sb_full, sb_empty;

    assign sb_empty = (sb_head == sb_tail);
    assign sb_full  = ((sb_tail + 1'b1) == sb_head) ||
                      (sb_tail == SB_DEPTH[$clog2(SB_DEPTH)-1:0] - 1 && sb_head == '0);

    // ═══════════════════════════════════════════════════════════
    // LSU 仲裁: 选择当前 cycle 的 LSU 操作
    // ═══════════════════════════════════════════════════════════
    logic [31:0] lsu_addr  [1:0];
    logic        lsu_we    [1:0];
    logic [31:0] lsu_wdata [1:0];
    logic [2:0]  lsu_funct3 [1:0];
    logic        lsu_valid  [1:0];
    logic        lsu_misalign [1:0];
    logic [3:0]  lsu_be    [1:0];
    logic [31:0] lsu_aligned_data [1:0];
    logic [31:0] lsu_load_data [1:0];

    // ═══════════════════════════════════════════════════════════
    // E1→M1 流水线寄存器: 同步 e1_mem_* 与 m_inst (ERR-024 修复)
    // 原 bug: e1_mem_addr 是 E1 阶段组合输出, m_inst 是 E1→M 延迟一拍
    // 导致 M 阶段 lsu_addr 与 m_inst 不同步 (e1_mem_addr 是新 E1 阶段值)
    // 修复: 在 memory stage 内寄存一拍 e1_mem_*, 使其与 m_inst 对齐
    // ═══════════════════════════════════════════════════════════
    logic [31:0] m1_mem_addr [1:0];
    logic        m1_mem_we   [1:0];
    logic [31:0] m1_mem_wdata[1:0];
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            for (int l = 0; l < 2; l++) begin
                m1_mem_addr[l]  <= 32'h0;
                m1_mem_we[l]    <= 1'b0;
                m1_mem_wdata[l] <= 32'h0;
            end
        end else begin
            // SA-9 修复: mem_busy 时保持 m1_mem_* 寄存器
            // 与 core_top E1→M 寄存器 stall 保护一致
            // 避免地址与 m_inst 不同步导致虚假 misalign 异常
            if (!mem_busy) begin
                for (int l = 0; l < 2; l++) begin
                    m1_mem_addr[l]  <= e1_mem_addr[l];
                    m1_mem_we[l]    <= e1_mem_we[l];
                    m1_mem_wdata[l] <= e1_mem_wdata[l];
                end
            end
        end
    end

    // 从 M 级指令中提取 LSU 信息
    // 修复 ERR-021: 每个 LSU 端口 l 映射到对应的 M-slot l
    // 修复 ERR-024: 使用 m1_mem_* (寄存一拍) 而非 e1_mem_*
    // BUG-007: 未对齐访问时覆盖地址/BE/数据，拆分为两次对齐访问
    always_comb begin
        for (int l = 0; l < 2; l++) begin
            lsu_addr[l]   = m1_mem_addr[l];
            lsu_we[l]     = m1_mem_we[l];
            lsu_wdata[l]  = m1_mem_wdata[l];
            lsu_funct3[l] = 3'b000; // 默认 Byte (安全默认: 永远对齐)
            lsu_valid[l]  = 1'b0;

            // 从 M 级对应 slot 获取 funct3
            // ERR-114 FIX: ma_skip_r 时禁止 lsu_valid — 防止未对齐拆分完成后
            //   SH 仍留在 M 级被当作普通 store 重复写入 SRAM
            if (m_valid[l] && m_inst[l].fu_type == FU_MEM && !ma_skip_r) begin
                lsu_funct3[l] = m_inst[l].funct3;
                lsu_valid[l]  = 1'b1;
            end

            // 地址对齐检查 (基于原始地址，用于异常检测)
            lsu_misalign[l] = lsu_valid[l] && !ma_skip_r && needs_cross_word_split(lsu_addr[l][1:0], lsu_funct3[l]);

            // Byte enable 生成 (基于原始地址)
            lsu_be[l] = gen_byte_enable(lsu_addr[l][1:0], lsu_funct3[l]);
            // Store 数据对齐 (基于原始地址)
            lsu_aligned_data[l] = align_store_data(lsu_wdata[l], lsu_addr[l][1:0], lsu_funct3[l]);

            // Load 符号扩展
            lsu_load_data[l] = sign_extend_load(mem_rdata_in, lsu_addr[l][1:0], lsu_funct3[l]);
        end

        // ── BUG-007/BUG-009: 未对齐访问拆分覆盖 ──────────────────────
        // Cycle 1 (ma_active_r=0, lsu_misalign 检测到):
        //   覆盖为低部分对齐访问 (addr & ~3)
        // Cycle 2 (ma_active_r=1):
        //   覆盖为高部分对齐访问 ((addr & ~3) + 4)
        // BUG-009: cycle 2 使用专用寄存器 ma_c2_*, 与 m1_mem_* 解耦
        if (ma_active_r) begin
            // Cycle 2: 高部分，完全使用 ma_c2_* 寄存器
            lsu_addr[ma_slot_r]   = ma_c2_addr_r;
            lsu_funct3[ma_slot_r] = ma_funct3_r;
            lsu_we[ma_slot_r]     = ma_c2_we_r;
            lsu_wdata[ma_slot_r]  = ma_wdata_r;
            lsu_valid[ma_slot_r]  = 1'b1;
            lsu_be[ma_slot_r]     = ma_c2_be_r;
            lsu_aligned_data[ma_slot_r] = ma_c2_data_r;
        end else if (lsu_misalign[0] || lsu_misalign[1]) begin
            // Cycle 1: 低部分 (addr & ~3)
            // 使用已修复的 gen_byte_enable / align_store_data (基于原始 offset)
            automatic int ma_slot = lsu_misalign[0] ? 0 : 1;
            lsu_addr[ma_slot]   = {m1_mem_addr[ma_slot][31:2], 2'b00};
            lsu_be[ma_slot]     = gen_byte_enable(m1_mem_addr[ma_slot][1:0], lsu_funct3[ma_slot]);
            lsu_aligned_data[ma_slot] = align_store_data(lsu_wdata[ma_slot], m1_mem_addr[ma_slot][1:0], lsu_funct3[ma_slot]);
        end
    end

    // ═══════════════════════════════════════════════════════════
    // BUG-007 修复: 未对齐访问透明处理寄存器
    // 检测到未对齐 load/store 时，拆分为两次对齐访问
    // mem_busy 保持 m1_mem_* 不变，cycle 2 自然复用原始地址
    // ═══════════════════════════════════════════════════════════
    logic        ma_active_r;     // 未对齐拆分进行中
    logic [1:0]  ma_slot_r;       // 未对齐访问所在 slot
    logic        ma_is_load_r;    // 1=load, 0=store
    logic [2:0]  ma_funct3_r;     // 保存 funct3
    logic [31:0] ma_wdata_r;      // 保存原始写数据
    logic [31:0] ma_load_lo_r;    // load 低部分数据 (cycle 1 捕获)
    // BUG-009: cycle 2 专用寄存器 (与 m1_mem_* 解耦)
    logic [31:0] ma_c2_addr_r;    // cycle 2 对齐地址
    logic [3:0]  ma_c2_be_r;      // cycle 2 byte enable
    logic [31:0] ma_c2_data_r;    // cycle 2 对齐数据
    logic        ma_c2_we_r;      // cycle 2 write enable
    logic        ma_skip_r;       // MA 完成后跳过一周期检测 (防重检测)

    // ═══════════════════════════════════════════════════════════
    // Bug#5 修复: Store-to-Load 同周期组合转发
    // ═══════════════════════════════════════════════════════════
    // V1 SRAM: 同步写 (always_ff) + 组合读 (dc_rdata = v1_sram[addr])
    // 当 store 和 load 在同一 cycle 处理时:
    //   - store 的 SRAM 写入在 NEXT clock edge 才生效
    //   - load 的 SRAM 组合读返回的是 OLD 值 (store 之前的值)
    // 修复: 组合转发 — 如果同一 cycle 有 store 到相同 word 地址,
    //        将 store 数据直接转发给 load (覆盖 SRAM 读出的旧值)
    logic [31:0] fwd_load_data [1:0];
    always_comb begin
        for (int l = 0; l < 2; l++) begin
            automatic logic [31:0] merged;
            merged = mem_rdata_in; // 默认: SRAM 读出值

            // 检查 port 0 是否有 store 到相同 word 地址
            if (lsu_valid[0] && lsu_we[0] &&
                (lsu_addr[0][31:2] == lsu_addr[l][31:2])) begin
                // 按 byte-enable 转发: store 写入的字节用 store data,
                // 其余字节保持 SRAM 读出值 (对 byte/halfword load 安全)
                for (int b = 0; b < 4; b++) begin
                    if (lsu_be[0][b])
                        merged[b*8 +: 8] = lsu_aligned_data[0][b*8 +: 8];
                end
            end

            // 检查 port 1 是否有 store 到相同 word 地址 (罕见: 双 store)
            if (lsu_valid[1] && lsu_we[1] &&
                (lsu_addr[1][31:2] == lsu_addr[l][31:2])) begin
                for (int b = 0; b < 4; b++) begin
                    if (lsu_be[1][b])
                        merged[b*8 +: 8] = lsu_aligned_data[1][b*8 +: 8];
                end
            end

            // 对合并后的数据做符号扩展 (与 lsu_load_data 相同逻辑)
            fwd_load_data[l] = sign_extend_load(merged, lsu_addr[l][1:0], lsu_funct3[l]);
        end
    end

    // ═══════════════════════════════════════════════════════════
    // SA-10 修复: M 级旁路 valid 信号
    // ═══════════════════════════════════════════════════════════
    // 原 bug (core_top.sv:315): 旁路 .m_valid (m_valid_r) 总是 1 when load in M
    //                            但 .m_result (m_result_out) 是上一条指令结果
    // 多周期 load 期间旁路返回旧数据 → load 依赖指令读到错误值
    // 修复: load 旁路仅在 mem_ready_in=1 时有效 (SRAM 读完成)
    //      store 永远不写 rd, 但加 m_bypass_valid=0 作为防御
    //      非 MEM 指令直接使用 m_valid (如 ALU/MUL/DIV, 1 cycle latency)
    // FIX: stall_port1=1 时 port 1 load 尚未读取, m_pipe_result 是旧值,
    //      旁路无效. 否则依赖指令 (如 beq) 读到旧值导致误预测.
    //      pending_port1_r=1 时 port 1 正在读取, 但 m_pipe_result 尚未更新,
    //      旁路也无效 (结果在下一周期 posedge 才写入 m_pipe_result).
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            m_bypass_valid[i] = 1'b0;
            // BUG-007: 未对齐拆分期间屏蔽旁路 (结果还未就绪)
            if (ma_active_r || (lsu_misalign[0] || lsu_misalign[1])) begin
                m_bypass_valid[i] = 1'b0;
            end else if (m_valid[i]) begin
                if (m_inst[i].fu_type == FU_MEM && !m_inst[i].inst[5]) begin
                    // Load: 仅在 SRAM 读完成且无端口串行化延迟时旁路有效
                    m_bypass_valid[i] = mem_ready_in && !stall_port1 && !pending_port1_r;
                end else if (m_inst[i].fu_type == FU_MEM && m_inst[i].inst[5]) begin
                    // Store: 不需要旁路 (store 不写 rd)
                    m_bypass_valid[i] = 1'b0;
                end else begin
                    // ALU/MUL/DIV/BRANCH: 1 cycle latency, 旁路总是有效
                    m_bypass_valid[i] = 1'b1;
                end
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // FSM: 内存操作状态机
    // ═══════════════════════════════════════════════════════════
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_LOAD,
        ST_STORE,
        ST_WAIT_READY,
        ST_COMMIT
    } mem_state_e;

    mem_state_e state_reg, state_next;
    logic [1:0] lsu_sel;  // 当前处理的 LSU 端口

    // ── ERR-029 修复: 双 LSU 端口串行化跟踪 ──
    // 当同 cycle 两条 MEM 指令时, port 0 先处理, port 1 延后 1 cycle
    logic pending_port1_r;  // port 1 等待处理
    logic port0_done_r;     // 当前批次 port 0 已完成

    // ── 流水线寄存器 ──
    inst_pkt_t              m_pipe [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_pipe_valid;
    logic [31:0]            m_pipe_result [ISSUE_WIDTH-1:0];
    logic [4:0]             m_pipe_rd [ISSUE_WIDTH-1:0];
    logic [31:0]            m_pipe_pc [ISSUE_WIDTH-1:0];
    logic [31:0]            m_pipe_inst [ISSUE_WIDTH-1:0]; // 显式捕获指令字
    logic [ISSUE_WIDTH-1:0] m_pipe_exception;

    // ── FSM 周期计数器 (供 future debug 使用) ──
    int unsigned fsm_dbg_cycle;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            fsm_dbg_cycle <= 0;
        else
            fsm_dbg_cycle <= fsm_dbg_cycle + 1;
    end

    // ── 时序逻辑 ──
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg     <= ST_IDLE;
            m_pipe_valid  <= '0;
            lsu_sel       <= 2'h0;
            pending_port1_r <= 1'b0;
            port0_done_r  <= 1'b0;
            // BUG-007: 未对齐拆分寄存器复位
            ma_active_r   <= 1'b0;
            ma_slot_r     <= 2'b00;
            ma_is_load_r  <= 1'b0;
            ma_funct3_r   <= 3'b000;
            ma_wdata_r    <= 32'h0;
            ma_load_lo_r  <= 32'h0;
            // BUG-009: cycle 2 寄存器复位
            ma_c2_addr_r  <= 32'h0;
            ma_c2_be_r    <= 4'b0000;
            ma_c2_data_r  <= 32'h0;
            ma_c2_we_r    <= 1'b0;
            ma_skip_r     <= 1'b0;
            // Store Buffer
            sb_head       <= '0;
            sb_tail       <= '0;
            for (int i = 0; i < SB_DEPTH; i++)
                sb_mem[i] <= '0;
        end else begin
            state_reg <= state_next;

            // ── BUG-007/BUG-009: 未对齐拆分寄存器更新 ──
            if (ma_active_r) begin
                // Cycle 2 完成 → 清除
                if (mem_ready_in) begin
                    ma_active_r <= 1'b0;
                    ma_skip_r   <= 1'b1;     // 设置跳过标志，防止同一指令重检测
                end
            end else begin
                ma_skip_r <= 1'b0;           // 清除跳过标志
                if (!stall_port1) begin
                    // 检测新的跨 word 未对齐访问
                    if (lsu_misalign[0] || lsu_misalign[1]) begin
                        automatic int det_slot = lsu_misalign[0] ? 0 : 1;
                        ma_active_r  <= 1'b1;
                        ma_slot_r    <= det_slot[1:0];
                        ma_is_load_r <= !m_inst[det_slot].inst[5];
                        ma_funct3_r  <= lsu_funct3[det_slot];
                        ma_wdata_r   <= lsu_wdata[det_slot];

                        // BUG-009: cycle 2 专用寄存器在 cycle 1 即保存好
                        ma_c2_addr_r <= {m1_mem_addr[det_slot][31:2], 2'b00} + 32'd4;
                        ma_c2_we_r   <= m_inst[det_slot].inst[5];

                        // BUG-009: cycle 2 高 word 只接收溢出的字节，必须显式计算
                        case (lsu_funct3[det_slot][1:0])
                            2'b01: begin // SH (only offset=3 reaches here)
                                ma_c2_be_r   <= 4'b0001;
                                ma_c2_data_r <= {24'h0, lsu_wdata[det_slot][15:8]};
                            end
                            2'b10: begin // SW
                                case (m1_mem_addr[det_slot][1:0])
                                    2'b01: begin // bytes[3:1] in low, byte[0] in high
                                        ma_c2_be_r   <= 4'b0001;
                                        ma_c2_data_r <= {24'h0, lsu_wdata[det_slot][31:24]};
                                    end
                                    2'b10: begin // bytes[3:2] in low, bytes[1:0] in high
                                        ma_c2_be_r   <= 4'b0011;
                                        ma_c2_data_r <= {16'h0, lsu_wdata[det_slot][31:16]};
                                    end
                                    2'b11: begin // byte[3] in low, bytes[2:0] in high
                                        ma_c2_be_r   <= 4'b0111;
                                        ma_c2_data_r <= {8'h0, lsu_wdata[det_slot][31:8]};
                                    end
                                    default: begin
                                        ma_c2_be_r   <= 4'b0000;
                                        ma_c2_data_r <= 32'h0;
                                    end
                                endcase
                            end
                            default: begin
                                ma_c2_be_r   <= 4'b0000;
                                ma_c2_data_r <= 32'h0;
                            end
                        endcase

                        // Load: 捕获 cycle 1 低部分数据
                        if (!m_inst[det_slot].inst[5] && mem_ready_in)
                            ma_load_lo_r <= mem_rdata_in;
                    end
                end
            end

            // ERR-029 修复: 双 LSU 端口跟踪寄存器更新
            // FIX(stall-port1-deadlock): pending_port1_r 需独立于 stall_port1,
            // 否则 stall_port1=1 (同一 combo cycle 设置) 会阻止 pending_port1_r 更新,
            // 导致 termianl deadlock: port0 被反复重执行, port1 永远不处理.
            // ── pending_port1_r / port0_done_r: 独立于 stall_port1 ──
            if (pending_port1_r) begin
                // port 1 刚处理完 → 清除所有跟踪
                pending_port1_r <= 1'b0;
                port0_done_r    <= 1'b0;
            end else begin
                // 无 pending: 检查是否需要设置
                if (lsu_valid[0] && lsu_valid[1]) begin
                    pending_port1_r <= 1'b1;
                    port0_done_r    <= 1'b1;
                end else begin
                    pending_port1_r <= 1'b0;
                    if (batch_done) port0_done_r <= 1'b0;
                end
            end

            // 流水线寄存器: 保持 stall_port1 门控
            // (ERR-029: 避免 ST_WAIT_READY 期间误更新)
            // 流水线寄存器: M 级输入 → 管道
            // SA-6 修复: stall_port1 时保持寄存器 (防止 port 0 被重复捕获)
            // ERR-114 FIX: m_pipe_valid 门控 — 仅在 batch_done && !ma_skip_r 时提交
            //   防止未对齐拆分期间指令被重复提交 (SH 提交 3 次导致后续 lui 丢失)
            // Trap flush: trap_request 时清除 M→W valid, 防止异常指令重复提交
            if (trap_flush) begin
                m_pipe_valid <= '0;
            end else if (!stall_port1) begin
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_pipe[i]       <= m_inst[i];
                // ERR-114: batch_done=0 → 内存操作进行中, 不提交
                //          ma_skip_r=1 → 拆分完成后额外 1 周期 SH 仍在 M, 不重复提交
                if (batch_done && !ma_skip_r)
                    m_pipe_valid[i] <= m_valid[i];
                else
                    m_pipe_valid[i] <= 1'b0;
                m_pipe_rd[i]    <= m_rd[i];
                m_pipe_pc[i]    <= m_inst[i].pc;
                m_pipe_inst[i]  <= m_inst[i].inst; // 显式捕获指令字

                if (m_valid[i]) begin
                    case (m_inst[i].fu_type)
                        FU_MEM: begin
                            if (m_inst[i].inst[5]) begin
                                // Store: 结果无关紧要
                                m_pipe_result[i] <= 32'h0;
                            end else begin
                                // Load: SA-10 修复 (v3 修正) — 仅在 mem_ready_in=1 时捕获
                                // 原因: load 等待 SRAM 期间 mem_rdata_in 可能是
                                //   不相关数据 (ICache 预取/另一端口 Load), 不可捕获
                                // mem_ready_in=1 表示当前 cycle mem_rdata_in 属于本 load
                                // (双保险: m_bypass_valid 同步旁路 valid, 此处同步结果捕获)
                                // Bug#5: 使用 fwd_load_data (含 store→load 转发)
                                // 替代 lsu_load_data (仅 SRAM 读出, 同周期 store 未生效)
                                // BUG-007: 未对齐拆分期间不捕获 cycle 1 结果
                                if (mem_ready_in && !ma_active_r && !(lsu_misalign[0] || lsu_misalign[1])) begin
                                    m_pipe_result[i] <= (i < 2) ? fwd_load_data[i] : fwd_load_data[0];
                                end
                                // BUG-007: 未对齐 load cycle 2 — 合并高低部分
                                if (mem_ready_in && ma_active_r && ma_is_load_r && (i == ma_slot_r)) begin
                                    automatic logic [31:0] ma_combined;
                                    ma_combined = {mem_rdata_in, ma_load_lo_r};
                                    // 根据 funct3 和原始地址偏移提取正确数据
                                    case (ma_funct3_r)
                                        3'b001: begin // LH: 合并后提取 halfword (符号扩展)
                                            case (m1_mem_addr[ma_slot_r][1:0])
                                                2'b01: m_pipe_result[i] <= {{16{ma_combined[23]}}, ma_combined[23:8]};
                                                2'b10: m_pipe_result[i] <= {{16{ma_combined[31]}}, ma_combined[31:16]};
                                                2'b11: m_pipe_result[i] <= {{16{mem_rdata_in[7]}},  mem_rdata_in[7:0], ma_load_lo_r[31:24]};
                                                default: m_pipe_result[i] <= {{16{ma_combined[15]}}, ma_combined[15:0]};
                                            endcase
                                        end
                                        3'b101: begin // LHU: 合并后提取 halfword (零扩展)
                                            case (m1_mem_addr[ma_slot_r][1:0])
                                                2'b01: m_pipe_result[i] <= {16'h0, ma_combined[23:8]};
                                                2'b10: m_pipe_result[i] <= {16'h0, ma_combined[31:16]};
                                                2'b11: m_pipe_result[i] <= {16'h0, mem_rdata_in[7:0], ma_load_lo_r[31:24]};
                                                default: m_pipe_result[i] <= {16'h0, ma_combined[15:0]};
                                            endcase
                                        end
                                        3'b010: begin // LW: 合并后提取 word
                                            case (m1_mem_addr[ma_slot_r][1:0])
                                                2'b01: m_pipe_result[i] <= {mem_rdata_in[7:0],  ma_load_lo_r[31:8]};
                                                2'b10: m_pipe_result[i] <= {mem_rdata_in[15:0], ma_load_lo_r[31:16]};
                                                2'b11: m_pipe_result[i] <= {mem_rdata_in[23:0], ma_load_lo_r[31:24]};
                                                default: m_pipe_result[i] <= ma_combined;
                                            endcase
                                        end
                                        default: m_pipe_result[i] <= ma_combined; // LB/LBU (should not reach here)
                                    endcase
                                end
                                // 其他 cycle 保持 m_pipe_result 不变
                            end
                        end
                        default: begin
                            // 非 MEM 指令: 透传 E1 结果
                            m_pipe_result[i] <= m_result[i];
                        end
                    endcase

                    // 传播 E1 级异常 (EBREAK/ECALL) 到 W 级, 触发 trap 重定向到 mtvec
                    // BUG-007: 未对齐异常不再触发, 改为拆分访问 (见 ma_active_r 逻辑)
                    // E1 异常 (EBREAK/ECALL) 由 execute 设置, 通过 inst_pkt.exc_valid 传播
                    m_pipe_exception[i] <= m_inst[i].exc_valid;
                end
            end
            end // if (!stall_port1)
            else begin
                // stall_port1=1: clear m_pipe_valid to prevent W stage re-commit.
                // When dual-LSU port 0 completes but port 1 needs 1 more cycle,
                // stall_port1 freezes the M→W register. Without clearing valid,
                // the W stage re-commits the same instructions (duplicate commit).
                m_pipe_valid <= '0;
            end

            // Store Buffer 入队
            // ERR-027/028 修复: BYPASS_SB=1 时跳过 SB, store 直写 SRAM
            for (int l = 0; l < 2; l++) begin
                if (!BYPASS_SB && lsu_valid[l] && lsu_we[l] && !sb_full) begin
                    sb_mem[sb_tail].valid <= 1'b1;
                    sb_mem[sb_tail].addr  <= lsu_addr[l];
                    sb_mem[sb_tail].data  <= lsu_aligned_data[l];
                    sb_mem[sb_tail].be    <= lsu_be[l];
                    if (sb_tail == SB_DEPTH[$clog2(SB_DEPTH)-1:0] - 1)
                        sb_tail <= '0;
                    else
                        sb_tail <= sb_tail + 1'b1;
                end
            end

            // Store Buffer 出队 (commit)
            if (state_reg == ST_COMMIT && store_commit_ack && !sb_empty) begin
                sb_mem[sb_head].valid <= 1'b0;
                if (sb_head == SB_DEPTH[$clog2(SB_DEPTH)-1:0] - 1)
                    sb_head <= '0;
                else
                    sb_head <= sb_head + 1'b1;
            end
        end
    end

    // ── 组合逻辑 ──
    // ERR-029 修复: 双端口串行化控制信号
    logic stall_port1;
    logic batch_done;

    always_comb begin
        state_next    = state_reg;
        mem_addr_out  = 32'h0;
        mem_wdata_out = 32'h0;
        mem_we_out    = 1'b0;
        mem_be_out    = 4'hF;
        mem_valid_out = 1'b0;
        store_commit  = 1'b0;
        mem_busy      = 1'b0;  // ERR-030 修复: 默认不忙
        stall_port1   = 1'b0;
        batch_done    = 1'b0;
        // SA-4 修复: 使用 m_pipe_valid (流水线寄存器, 与 m_result_out 一致)
        m_valid_out   = m_pipe_valid;

        if (BYPASS_SB) begin
            // ═══════════════════════════════════════════════════════════
            // ERR-027/028/029/032 修复: BYPASS_SB=1 直写模式
            // Store 直写 SRAM, Load 直读 SRAM
            // ERR-029 修复: 双 LSU 端口串行化 (优先端口 0, 端口 1 延后)
            // BUG-007 修复: 未对齐访问拆分 (优先级最高)
            // ═══════════════════════════════════════════════════════════

            // ── BUG-007: 未对齐访问拆分 (最高优先级) ──
            // Cycle 1: lsu_misalign 检测到，发低部分，mem_busy=1
            // Cycle 2: ma_active_r=1，发高部分，mem_busy 直到 mem_ready_in
            if (ma_active_r) begin
                // Cycle 2: 高部分，使用 ma_c2_* 寄存器
                mem_addr_out  = ma_c2_addr_r;
                mem_wdata_out = lsu_aligned_data[ma_slot_r];
                mem_we_out    = lsu_we[ma_slot_r];
                mem_be_out    = lsu_be[ma_slot_r];
                mem_valid_out = 1'b1;
                // BUG-009 FIX: MA cycle 2 必须阻塞流水线，防止下一条指令进入 M 级
                // V1 SRAM 单端口组合读：cycle 2 占用 SRAM 地址总线，若下条指令进入 M 级会读到错误地址
                mem_busy      = 1'b1;
                if (mem_ready_in) begin
                    state_next = ST_IDLE;
                    batch_done = 1'b1;
                end
            end else if (lsu_misalign[0] || lsu_misalign[1]) begin
                // Cycle 1: 低部分 (addr & ~3)
                automatic int ma_slot = lsu_misalign[0] ? 0 : 1;
                mem_addr_out  = {m1_mem_addr[ma_slot][31:2], 2'b00};
                mem_wdata_out = lsu_aligned_data[ma_slot];
                mem_we_out    = lsu_we[ma_slot];
                mem_be_out    = lsu_be[ma_slot];
                mem_valid_out = 1'b1;
                mem_busy      = 1'b1;  // 强制 pipeline stall, 保持 m1_mem_*
                // V1 SRAM 同步写: mem_ready_in=1 表示 SRAM 接受请求
                // cycle 1 的写会在下个 clock edge 生效, cycle 2 发高部分
            end else if (pending_port1_r) begin
                // ── 处理延迟的 LSU Port 1 操作 ──
                mem_addr_out  = lsu_addr[1];
                mem_wdata_out = lsu_aligned_data[1];
                mem_we_out    = lsu_we[1];
                mem_be_out    = lsu_be[1];
                mem_valid_out = 1'b1;
                if (!mem_ready_in) begin
                    state_next = ST_WAIT_READY;
                    mem_busy   = 1'b1;
                end else begin
                    state_next = ST_IDLE;
                    batch_done = 1'b1;  // 两端口均已完成
                end
            end else if (port0_done_r) begin
                // ── Port 0 已完成, 等待 port 1 (shouldn't normally reach here) ──
                state_next = ST_IDLE;
                batch_done = lsu_valid[1];
            end else if (lsu_valid[0] && lsu_we[0]) begin
                // ── Store Port 0: 直写 SRAM ──
                mem_addr_out  = lsu_addr[0];
                mem_wdata_out = lsu_aligned_data[0];
                mem_we_out    = 1'b1;
                mem_be_out    = lsu_be[0];
                mem_valid_out = 1'b1;
                if (!mem_ready_in) begin
                    state_next = ST_WAIT_READY;
                    mem_busy   = 1'b1;
                end else begin
                    state_next = ST_IDLE;
                    if (lsu_valid[1]) begin
                        stall_port1 = 1'b1;
                        mem_busy   = 1'b1;  // stall decode 1 cycle
                    end else begin
                        batch_done = 1'b1;
                    end
                end
            end else if (lsu_valid[0] && !lsu_we[0]) begin
                // ── Load Port 0: 直读 SRAM ──
                mem_addr_out  = lsu_addr[0];
                mem_valid_out = 1'b1;
                mem_we_out    = 1'b0;
                mem_be_out    = lsu_be[0];
                if (!mem_ready_in) begin
                    state_next = ST_WAIT_READY;
                    mem_busy   = 1'b1;
                end else begin
                    state_next = ST_IDLE;
                    if (lsu_valid[1]) begin
                        stall_port1 = 1'b1;
                        mem_busy   = 1'b1;
                    end else begin
                        batch_done = 1'b1;
                    end
                end
            end else if (lsu_valid[1]) begin
                // ── 仅 Port 1 有效 (Port 0 无 MEM) ──
                mem_addr_out  = lsu_addr[1];
                mem_wdata_out = lsu_aligned_data[1];
                mem_we_out    = lsu_we[1];
                mem_be_out    = lsu_be[1];
                mem_valid_out = 1'b1;
                if (!mem_ready_in) begin
                    state_next = ST_WAIT_READY;
                    mem_busy   = 1'b1;
                end else begin
                    state_next = ST_IDLE;
                    batch_done = 1'b1;
                end
            end else begin
                state_next = ST_IDLE;
                batch_done = 1'b1;  // 无 LSU 操作
            end

            // ST_WAIT_READY: 等待 SRAM 响应
            if (state_reg == ST_WAIT_READY) begin
                mem_addr_out  = pending_port1_r ? lsu_addr[1] : lsu_addr[0];
                mem_wdata_out = pending_port1_r ? lsu_aligned_data[1] : lsu_aligned_data[0];
                mem_we_out    = pending_port1_r ? lsu_we[1] : lsu_we[0];
                mem_be_out    = pending_port1_r ? lsu_be[1] : lsu_be[0];
                mem_valid_out = 1'b1;
                mem_busy      = !mem_ready_in;
                if (mem_ready_in) begin
                    state_next = ST_IDLE;
                    batch_done = 1'b1;
                end
            end
        end else begin
            // ═══════════════════════════════════════════════════════════
            // 原始 FSM: 使用 Store Buffer (BYPASS_SB=0)
            // ═══════════════════════════════════════════════════════════

        case (state_reg)
            ST_IDLE: begin
                state_next = ST_LOAD;
            end

            ST_LOAD: begin
                // 发送 Load 请求到 Cache/TCM
                if (lsu_valid[0] && !lsu_we[0]) begin
                    mem_addr_out  = lsu_addr[0];
                    mem_valid_out = 1'b1;
                    mem_we_out    = 1'b0;
                    mem_be_out    = lsu_be[0];
                    if (!mem_ready_in)
                        state_next = ST_WAIT_READY;
                    else
                        state_next = ST_COMMIT;
                end else begin
                    state_next = ST_STORE;
                end
            end

            ST_STORE: begin
                // 发送 Store 请求 (如果 Store Buffer 为空则直接写)
                if (lsu_valid[0] && lsu_we[0] && !sb_empty) begin
                    // Store Buffer 有积压, 等待 commit
                    state_next = ST_COMMIT;
                end else if (lsu_valid[0] && lsu_we[0]) begin
                    mem_addr_out  = lsu_addr[0];
                    mem_wdata_out = lsu_aligned_data[0];
                    mem_we_out    = 1'b1;
                    mem_be_out    = lsu_be[0];
                    mem_valid_out = 1'b1;
                    if (!mem_ready_in)
                        state_next = ST_WAIT_READY;
                    else
                        state_next = ST_COMMIT;
                end else begin
                    state_next = ST_COMMIT;
                end
            end

            ST_WAIT_READY: begin
                // 等待 Cache/TCM 响应
                mem_addr_out  = lsu_addr[lsu_sel];
                mem_wdata_out = lsu_aligned_data[lsu_sel];
                mem_we_out    = lsu_we[lsu_sel];
                mem_be_out    = lsu_be[lsu_sel];
                mem_valid_out = 1'b1;
                if (mem_ready_in)
                    state_next = ST_COMMIT;
            end

            ST_COMMIT: begin
                // Store Buffer commit
                if (!sb_empty) begin
                    store_commit = 1'b1;
                    mem_addr_out  = sb_mem[sb_head].addr;
                    mem_wdata_out = sb_mem[sb_head].data;
                    mem_we_out    = 1'b1;
                    mem_be_out    = sb_mem[sb_head].be;
                    mem_valid_out = 1'b1;
                end
                state_next = ST_IDLE;
            end
        endcase
        end // else (BYPASS_SB=0)
    end

    // ═══════════════════════════════════════════════════════════
    // M 级输出赋值
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            m_inst_out[i]      = m_pipe[i];
            m_inst_out[i].inst = m_pipe_inst[i]; // 使用显式捕获的指令字
            m_result_out[i]    = m_pipe_result[i];
            m_rd_out[i]        = m_pipe_rd[i];
            m_pc_out[i]        = m_pipe_pc[i];
            m_exception_out[i] = m_pipe_exception[i];
        end
    end

    // ERR-055: Expose store buffer empty status for FENCE
    assign sb_empty_out = sb_empty;

endmodule
