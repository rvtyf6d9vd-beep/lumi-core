// =================================================================
// LUMI-DESIGN-EXE | 需求: LUMI-EXE-001~006 | 承接: design/execute-alu.html §3.1~3.2
// 模块: lumi_execute — E1/E2 级执行 (ALU/MUL/DIV/Branch/LSU)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_execute #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── E1 级输入 (← I 级发射) ────────────────────────────────
    input  lumi_pkg::inst_pkt_t     e1_inst [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  e1_valid,
    input  logic [31:0]             e1_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             e1_rs2_data [ISSUE_WIDTH-1:0],

    // ── E1 级输出 (→ M 级 + 旁路) ────────────────────────────
    output logic [31:0]             e1_result [ISSUE_WIDTH-1:0],
    output logic [4:0]              e1_rd [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  e1_valid_out,

    // ── E1 分支反馈 (→ Fetch F1) ──────────────────────────────
    output logic                    e1_branch_taken,
    output logic [31:0]             e1_branch_target,
    output logic                    e1_mispredict,

    // ── E1 LSU 地址 (→ Memory 级) ─────────────────────────────
    output logic [31:0]             e1_mem_addr [1:0],        // 2x LSU
    output logic                    e1_mem_we   [1:0],
    output logic [31:0]             e1_mem_wdata[1:0],

    // ── E2 级输出 (→ M 级) ───────────────────────────────────
    output logic [31:0]             e2_mul_result,
    output logic [31:0]             e2_mul_result_hi,
    output logic                    e2_mul_valid,
    output logic [31:0]             e2_div_result,
    output logic                    e2_div_valid,
    output logic                    e2_div_busy,
    output logic [4:0]              e2_rd,

    // ── 异常 (→ Writeback) ────────────────────────────────────
    output logic [ISSUE_WIDTH-1:0]  e1_exception,
    output logic [3:0]              e1_exc_cause [ISSUE_WIDTH-1:0]
);

    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    logic [31:0]                    alu_result [ISSUE_WIDTH-1:0];
    logic [31:0]                    mul_result_r;
    logic [31:0]                    mul_result_hi_r;
    logic                           mul_valid_r;
    logic [31:0]                    div_result_r;
    logic                           div_valid_r;
    logic                           div_busy_r;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [1:0] {
        ST_IDLE,
        ST_EXECUTE,
        ST_STALL
    } exe_state_e;

    exe_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg      <= ST_IDLE;
            mul_result_r   <= 32'h0;
            mul_result_hi_r <= 32'h0;
            mul_valid_r    <= 1'b0;
            div_result_r   <= 32'h0;
            div_valid_r    <= 1'b0;
            div_busy_r     <= 1'b0;
        end else begin
            state_reg      <= state_next;
            mul_result_r   <= e2_mul_result;
            mul_result_hi_r <= e2_mul_result_hi;
            mul_valid_r    <= e2_mul_valid;
            div_result_r   <= e2_div_result;
            div_valid_r    <= e2_div_valid;
            div_busy_r     <= e2_div_busy;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next      = state_reg;
        e1_branch_taken = 1'b0;
        e1_branch_target = 32'h0;
        e1_mispredict   = 1'b0;
        e2_div_busy     = div_busy_r;

        case (state_reg)
            ST_IDLE:    state_next = ST_EXECUTE;
            ST_EXECUTE: ; // 骨架: TODO — ALU/MUL/DIV/Branch/LSU 运算
            ST_STALL:   ; // 骨架: TODO — DIV busy stall
        endcase
    end

endmodule
