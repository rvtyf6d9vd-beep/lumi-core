// =================================================================
// LUMI-DESIGN-MEM | 需求: LUMI-MEM-001~003 | 承接: design/execute-alu.html §4.1, design/writeback-csr.html §3.1
// 模块: lumi_memory_stage — M 级内存访问 (E2→M→W)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// 注: GLM-F1 修正 — 补齐 M 级模块
// =================================================================

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

    // ─── 内部信号 ─────────────────────────────────────────────
    logic [31:0]                    load_data [1:0];
    logic                           mem_busy;
    logic                           store_pending;

    // ─── 流水线寄存器 ─────────────────────────────────────────
    inst_pkt_t                      m_reg [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         m_valid_reg;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_LOAD,
        ST_STORE,
        ST_WAIT_READY,
        ST_COMMIT
    } mem_state_e;

    mem_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg     <= ST_IDLE;
            m_valid_reg   <= '0;
            store_pending <= 1'b0;
        end else begin
            state_reg     <= state_next;
            m_valid_reg   <= m_valid_out;
            store_pending <= store_commit & ~store_commit_ack;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next    = state_reg;
        mem_addr_out  = 32'h0;
        mem_wdata_out = 32'h0;
        mem_we_out    = 1'b0;
        mem_be_out    = 4'hF;
        mem_valid_out = 1'b0;
        store_commit  = 1'b0;
        m_valid_out   = m_valid_reg;

        case (state_reg)
            ST_IDLE:       state_next = ST_LOAD;
            ST_LOAD:       ; // 骨架: TODO — D-Cache/TCM Load
            ST_STORE:      ; // 骨架: TODO — D-Cache/TCM Store
            ST_WAIT_READY: ; // 骨架: TODO — 等待 mem_ready
            ST_COMMIT:     ; // 骨架: TODO — Store Buffer commit
        endcase
    end

endmodule
