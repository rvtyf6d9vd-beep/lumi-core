// =================================================================
// LUMI-DESIGN-FETCH | 需求: LUMI-FETCH-001~004 | 承接: design/fetch-bpred.html §3.1~3.3
// 模块: lumi_fetch — F1/F2 级取指与分支预测
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_fetch #(
    parameter int FETCH_WIDTH  = lumi_pkg::FETCH_WIDTH,
    parameter int BTB_ENTRIES  = lumi_pkg::BTB_ENTRIES,
    parameter int RAS_DEPTH    = lumi_pkg::RAS_DEPTH,
    parameter int LTAGE_TABLES = lumi_pkg::LTAGE_TABLES
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── F1 级输出 (→ ICache) ──────────────────────────────────
    output logic [31:0]             f1_pc_out,

    // ── F2 级输入 (← ICache) ──────────────────────────────────
    input  logic [127:0]            f2_icache_data,      // 16 bytes (fetch-bpred.html §3.2)
    input  logic                    f2_icache_valid,

    // ── F2 级输出 (→ Decode) ──────────────────────────────────
    output logic [31:0]             f2_instructions [FETCH_WIDTH-1:0],
    output logic [$clog2(FETCH_WIDTH):0] f2_inst_count,
    output logic                    f2_valid,

    // ── 分支反馈 (← Execute E1) ───────────────────────────────
    input  logic [31:0]             branch_redirect_pc,     // fetch-bpred.html §3.1
    input  logic                    branch_redirect_valid,   // 误预测纠正
    input  logic [31:0]             tage_update_pc,          // LTAGE 更新 (fetch-bpred.html §3.3)
    input  logic                    tage_update_taken,
    input  logic                    tage_update_valid,

    // ── Debug ─────────────────────────────────────────────────
    input  logic                    debug_halt
);

    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    logic [31:0]                    pc_reg, pc_next;
    logic                           f1_btb_hit;
    logic [31:0]                    f1_btb_target;
    logic                           f1_pred_taken;
    logic [31:0]                    f1_pred_target;

    // ─── F1/F2 级流水线寄存器 ─────────────────────────────────
    logic [31:0]                    f1_pc_r;
    logic [127:0]                   f2_data_r;
    logic                           f2_valid_r;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_FETCH,
        ST_STALL,
        ST_FLUSH,
        ST_HALT
    } fetch_state_e;

    fetch_state_e state_reg, state_next;

    // ─── 时序逻辑 (异步复位) ──────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
            pc_reg    <= 32'h0000_0000;
            f1_pc_r   <= 32'h0;
            f2_valid_r <= 1'b0;
        end else begin
            state_reg <= state_next;
            pc_reg    <= pc_next;
            f1_pc_r   <= f1_pc_out;
            f2_valid_r <= f2_valid;
        end
    end

    // ─── 组合逻辑 (FSM + 数据通路骨架) ───────────────────────
    always_comb begin
        state_next = state_reg;
        pc_next    = pc_reg;
        f1_pc_out  = pc_reg;
        f2_valid   = 1'b0;

        case (state_reg)
            ST_IDLE:  state_next = ST_FETCH;
            ST_FETCH: ; // 骨架: TODO — PC gen + BTB lookup + LTAGE predict
            ST_STALL: ; // 骨架: TODO — 等待 ICache
            ST_FLUSH: ; // 骨架: TODO — 误预测 flush
            ST_HALT:  ; // 骨架: TODO — debug halt
        endcase

        // 分支反馈覆盖
        if (branch_redirect_valid) begin
            pc_next = branch_redirect_pc;
        end
    end

endmodule
