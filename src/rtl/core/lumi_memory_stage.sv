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
    output logic                    sb_empty_out
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
                case (addr_offset[1])
                    1'b0: return 4'b0011;
                    1'b1: return 4'b1100;
                endcase
            end
            2'b10: return 4'b1111; // Word
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
                case (addr_offset[1])
                    1'b0: return {{16{raw_data[15]}}, raw_data[15:0]};
                    1'b1: return {{16{raw_data[31]}}, raw_data[31:16]};
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
                case (addr_offset[1])
                    1'b0: return {16'h0, raw_data[15:0]};
                    1'b1: return {16'h0, raw_data[31:16]};
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
                case (addr_offset[1])
                    1'b0: return {16'h0, wdata[15:0]};
                    1'b1: return {wdata[15:0], 16'h0};
                endcase
            end
            2'b10: return wdata; // SW
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
    always_comb begin
        for (int l = 0; l < 2; l++) begin
            lsu_addr[l]   = m1_mem_addr[l];
            lsu_we[l]     = m1_mem_we[l];
            lsu_wdata[l]  = m1_mem_wdata[l];
            lsu_funct3[l] = 3'b000; // 默认 Byte (安全默认: 永远对齐)
            lsu_valid[l]  = 1'b0;

            // 从 M 级对应 slot 获取 funct3
            if (m_valid[l] && m_inst[l].fu_type == FU_MEM) begin
                lsu_funct3[l] = m_inst[l].funct3;
                lsu_valid[l]  = 1'b1;
            end

            // 地址对齐检查
            lsu_misalign[l] = lsu_valid[l] && !check_alignment(lsu_addr[l][1:0], lsu_funct3[l]);

            // Byte enable 生成
            lsu_be[l] = gen_byte_enable(lsu_addr[l][1:0], lsu_funct3[l]);

            // Store 数据对齐
            lsu_aligned_data[l] = align_store_data(lsu_wdata[l], lsu_addr[l][1:0], lsu_funct3[l]);

            // Load 符号扩展
            lsu_load_data[l] = sign_extend_load(mem_rdata_in, lsu_addr[l][1:0], lsu_funct3[l]);
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
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            m_bypass_valid[i] = 1'b0;
            if (m_valid[i]) begin
                if (m_inst[i].fu_type == FU_MEM && !m_inst[i].inst[5]) begin
                    // Load: 仅在 SRAM 读完成时旁路有效
                    m_bypass_valid[i] = mem_ready_in;
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
            // Store Buffer
            sb_head       <= '0;
            sb_tail       <= '0;
            for (int i = 0; i < SB_DEPTH; i++)
                sb_mem[i] <= '0;
        end else begin
            state_reg <= state_next;

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
            if (!stall_port1) begin
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_pipe[i]       <= m_inst[i];
                m_pipe_valid[i] <= m_valid[i];
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
                                if (mem_ready_in) begin
                                    m_pipe_result[i] <= (i < 2) ? lsu_load_data[i] : lsu_load_data[0];
                                end
                                // 其他 cycle 保持 m_pipe_result 不变
                            end
                        end
                        default: begin
                            // 非 MEM 指令: 透传 E1 结果
                            m_pipe_result[i] <= m_result[i];
                        end
                    endcase

                    // 对齐异常检测 — 修复 ERR-021: 使用 slot i 对应的 lsu_misalign[i]
                    m_pipe_exception[i] <= 1'b0;
                    if (m_inst[i].fu_type == FU_MEM) begin
                        if (m_inst[i].inst[5] && lsu_misalign[i]) begin
                            m_pipe_exception[i] <= 1'b1;
                            m_pipe[i].exc_cause <= EXC_STORE_MISALIGN[3:0];
                        end else if (!m_inst[i].inst[5] && lsu_misalign[i]) begin
                            m_pipe_exception[i] <= 1'b1;
                            m_pipe[i].exc_cause <= EXC_LOAD_MISALIGN[3:0];
                        end
                    end
                end
            end
            end // if (!stall_port1)

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
            // ═══════════════════════════════════════════════════════════
            if (pending_port1_r) begin
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
