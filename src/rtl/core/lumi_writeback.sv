// =================================================================
// LUMI-DESIGN-WB | 需求: LUMI-WB-001~004 | 承接: design/writeback-csr.html §3.1~3.2
// 模块: lumi_writeback — W 级写回与提交
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_writeback #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── W 级输入 (← M 级) ─────────────────────────────────────
    input  lumi_pkg::inst_pkt_t     w_inst [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  w_valid,
    input  logic [31:0]             w_result [ISSUE_WIDTH-1:0],
    input  logic [4:0]              w_rd [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  w_exception,
    input  logic [31:0]             w_pc [ISSUE_WIDTH-1:0],

    // ── RegFile 写端口 (2W 端口) ──────────────────────────────
    output logic [1:0]              regfile_wr_en,
    output logic [4:0]              regfile_wr_addr [1:0],
    output logic [31:0]             regfile_wr_data [1:0],

    // ── 提交信号 (→ 锁步比较器 D-011) ─────────────────────────
    output logic [ISSUE_WIDTH-1:0]  commit_valid,
    output logic [31:0]             commit_pc [ISSUE_WIDTH-1:0],
    output logic [31:0]             commit_result [ISSUE_WIDTH-1:0],

    // ── Trap/中断 ─────────────────────────────────────────────
    output logic                    trap_request,
    input  logic                    irq_request,
    output logic [31:0]             trap_pc,

    // ── CSR 接口 ──────────────────────────────────────────────
    output logic [11:0]             csr_addr,
    input  logic [31:0]             csr_rdata,
    output logic [31:0]             csr_wdata,
    output logic                    csr_we,
    output logic [1:0]              csr_op,
    input  logic [31:0]             mstatus_out,
    input  logic [31:0]             mtvec_out
);

    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    logic [ISSUE_WIDTH-1:0]         commit_ready;
    logic                           trap_pending;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_COMMIT,
        ST_TRAP,
        ST_IRQ,
        ST_HALT
    } wb_state_e;

    wb_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg     <= ST_IDLE;
            trap_pending  <= 1'b0;
        end else begin
            state_reg     <= state_next;
            trap_pending  <= trap_request & ~irq_request;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next   = state_reg;
        regfile_wr_en = 2'b00;
        trap_request = 1'b0;
        trap_pc     = mtvec_out;
        csr_we       = 1'b0;
        csr_op       = 2'b00;
        commit_valid = '0;

        case (state_reg)
            ST_IDLE:   state_next = ST_COMMIT;
            ST_COMMIT: ; // 骨架: TODO — 指令提交 + RegFile 写回 (2W 端口)
            ST_TRAP:   ; // 骨架: TODO — 异常处理 (CSR 更新 + PC=mtvec)
            ST_IRQ:    ; // 骨架: TODO — 中断处理 (commit 当前指令后 trap)
            ST_HALT:   ; // 骨架: TODO — 系统 halt
        endcase
    end

endmodule
