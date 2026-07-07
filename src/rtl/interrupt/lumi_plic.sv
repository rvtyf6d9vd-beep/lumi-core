// =================================================================
// LUMI-DESIGN-PLIC | 需求: LUMI-PLIC-001~002 | 承接: design/clic-plic.html §3.2
// 模块: lumi_plic — PLIC 外部中断控制器 (ext_irq + priority + per-Hart 路由)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_plic #(
    parameter int NUM_SRC  = 32,
    parameter int NUM_HART = lumi_pkg::NUM_HARTS
) (
    input  logic clk_core, input  logic reset_n,
    input  logic [NUM_SRC-1:0]  ext_irq_in,
    input  logic [NUM_SRC*3-1:0] irq_priority,  // [2:0] per source, packed
    output logic [NUM_HART-1:0] meip,
    output logic [NUM_HART*5-1:0] irq_id,       // [4:0] per hart, packed
    input  logic [NUM_HART-1:0] irq_claim,
    // PLIC MMIO 接口 (AXI4-Lite)
    input  logic [11:0]         plic_addr,
    input  logic [31:0]         plic_wdata,
    output logic [31:0]         plic_rdata,
    input  logic                plic_we
);
    import lumi_pkg::*;
    typedef enum logic [1:0] { ST_IDLE, ST_PRIORITIZE, ST_PENDING, ST_CLAIM } plic_state_e;
    plic_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_IDLE; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; meip = '0; plic_rdata = 32'h0;
        case (state_reg)
            ST_IDLE:      state_next = ST_PRIORITIZE;
            ST_PRIORITIZE: ; // 骨架: TODO — 优先级仲裁
            ST_PENDING:    ; // 骨架: TODO — pending 位更新
            ST_CLAIM:      ; // 骨架: TODO — claim/complete
        endcase
    end
endmodule
