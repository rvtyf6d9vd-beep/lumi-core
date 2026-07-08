// =================================================================
// LUMI-DESIGN-MEM | 需求: LUMI-MEM-001~003 | 承接: design/execute-alu.html §4.1, design/writeback-csr.html §3.1
// 模块: lumi_memory_stage — M 级内存访问 (E2→M→W)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: Load/Store/AMO 地址对齐 + byte enable + 符号扩展 + Store Buffer
// 2x LSU: 每 cycle 最多 2 个内存操作
// Store Buffer: 写操作缓冲, commit 后提交到 Cache/TCM

module lumi_memory_stage #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
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

    // ── Store Buffer 确认 ─────────────────────────────────────
    output logic                    store_commit,
    input  logic                    store_commit_ack
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

    // 从 M 级指令中提取 LSU 信息
    always_comb begin
        for (int l = 0; l < 2; l++) begin
            lsu_addr[l]   = e1_mem_addr[l];
            lsu_we[l]     = e1_mem_we[l];
            lsu_wdata[l]  = e1_mem_wdata[l];
            lsu_funct3[l] = 3'b010; // 默认 Word
            lsu_valid[l]  = 1'b0;

            // 从 M 级指令中找 MEM 类型, 获取 funct3
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                if (m_valid[i] && m_inst[i].fu_type == FU_MEM) begin
                    lsu_funct3[l] = m_inst[i].funct3;
                    lsu_valid[l]  = 1'b1;
                end
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

    // ── 流水线寄存器 ──
    inst_pkt_t              m_pipe [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_pipe_valid;
    logic [31:0]            m_pipe_result [ISSUE_WIDTH-1:0];
    logic [4:0]             m_pipe_rd [ISSUE_WIDTH-1:0];
    logic [31:0]            m_pipe_pc [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_pipe_exception;

    // ── 时序逻辑 ──
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg     <= ST_IDLE;
            m_pipe_valid  <= '0;
            lsu_sel       <= 2'h0;
            // Store Buffer
            sb_head       <= '0;
            sb_tail       <= '0;
            for (int i = 0; i < SB_DEPTH; i++)
                sb_mem[i] <= '0;
        end else begin
            state_reg <= state_next;

            // 流水线寄存器: M 级输入 → 管道
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_pipe[i]       <= m_inst[i];
                m_pipe_valid[i] <= m_valid[i];
                m_pipe_rd[i]    <= m_rd[i];
                m_pipe_pc[i]    <= m_inst[i].pc;

                if (m_valid[i]) begin
                    case (m_inst[i].fu_type)
                        FU_MEM: begin
                            if (m_inst[i].inst[5]) begin
                                // Store: 结果无关紧要, 写 Store Buffer
                                m_pipe_result[i] <= 32'h0;
                            end else begin
                                // Load: 使用符号扩展后的数据
                                m_pipe_result[i] <= lsu_load_data[0]; // 简化: LSU 0
                            end
                        end
                        default: begin
                            // 非 MEM 指令: 透传 E1 结果
                            m_pipe_result[i] <= m_result[i];
                        end
                    endcase

                    // 对齐异常检测
                    m_pipe_exception[i] <= 1'b0;
                    if (m_inst[i].fu_type == FU_MEM) begin
                        if (m_inst[i].inst[5] && lsu_misalign[0]) begin
                            m_pipe_exception[i] <= 1'b1;
                            m_pipe[i].exc_cause <= EXC_STORE_MISALIGN[3:0];
                        end else if (!m_inst[i].inst[5] && lsu_misalign[0]) begin
                            m_pipe_exception[i] <= 1'b1;
                            m_pipe[i].exc_cause <= EXC_LOAD_MISALIGN[3:0];
                        end
                    end
                end
            end

            // Store Buffer 入队
            for (int l = 0; l < 2; l++) begin
                if (lsu_valid[l] && lsu_we[l] && !sb_full) begin
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
    always_comb begin
        state_next    = state_reg;
        mem_addr_out  = 32'h0;
        mem_wdata_out = 32'h0;
        mem_we_out    = 1'b0;
        mem_be_out    = 4'hF;
        mem_valid_out = 1'b0;
        store_commit  = 1'b0;
        m_valid_out   = m_pipe_valid;

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
    end

    // ═══════════════════════════════════════════════════════════
    // M 级输出赋值
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            m_inst_out[i]      = m_pipe[i];
            m_result_out[i]    = m_pipe_result[i];
            m_rd_out[i]        = m_pipe_rd[i];
            m_pc_out[i]        = m_pipe_pc[i];
            m_exception_out[i] = m_pipe_exception[i];
        end
    end

endmodule
