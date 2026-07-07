// =================================================================
// LUMI-DESIGN-TCM | 需求: LUMI-TCM-001~004 | 承接: design/tcm.html §3.1~3.2
// 模块: lumi_tcm — Tightly-Coupled Memory (ITCM + DTCM0 + DTCM1)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_tcm #(
    parameter int ITCM_SIZE  = lumi_pkg::ITCM_SIZE,
    parameter int DTCM_SIZE  = lumi_pkg::DTCM_SIZE,
    parameter int ECC_EN     = lumi_pkg::TCM_ECC_EN
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── 核心侧接口 Port A (M 级访问) ─────────────────────────
    input  logic [31:0]             core_addr,
    input  logic [31:0]             core_wdata,
    output logic [31:0]             core_rdata,
    input  logic                    core_we,
    input  logic [3:0]              core_be,
    input  logic                    core_valid,
    output logic                    core_ready,
    output logic                    core_hit,

    // ── DMA 侧接口 Port B (AXI4 Slave) ───────────────────────
    input  logic [31:0]             dma_awaddr,
    input  logic                    dma_awvalid,
    output logic                    dma_awready,
    input  logic [31:0]             dma_wdata,
    input  logic                    dma_wvalid,
    output logic                    dma_wready,
    input  logic [31:0]             dma_araddr,
    input  logic                    dma_arvalid,
    output logic                    dma_arready,
    output logic [31:0]             dma_rdata,
    output logic                    dma_rvalid,
    input  logic                    dma_rready,
    output logic [1:0]              dma_bresp,
    output logic                    dma_bvalid,
    input  logic                    dma_bready,

    // ── ECC 状态 ──────────────────────────────────────────────
    output logic                    ecc_ce_irq,
    output logic                    ecc_ded_irq,
    output logic [31:0]             ecc_ce_count
);

    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    logic                           itcm_hit;
    logic                           dtcm0_hit;
    logic                           dtcm1_hit;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_ITCM_ACCESS,
        ST_DTCM_ACCESS,
        ST_DMA_ARBITRATE,
        ST_ECC_CHECK
    } tcm_state_e;

    tcm_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg    <= ST_IDLE;
            ecc_ce_count <= 32'h0;
        end else begin
            state_reg    <= state_next;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next  = state_reg;
        core_ready  = 1'b0;
        core_hit    = 1'b0;
        core_rdata  = 32'h0;
        ecc_ce_irq  = 1'b0;
        ecc_ded_irq = 1'b0;

        case (state_reg)
            ST_IDLE:          state_next = ST_ITCM_ACCESS;
            ST_ITCM_ACCESS:   ; // 骨架: TODO — ITCM 访问 (取指/读)
            ST_DTCM_ACCESS:   ; // 骨架: TODO — DTCM0/DTCM1 访问 (R/W)
            ST_DMA_ARBITRATE: ; // 骨架: TODO — DMA Port B 仲裁
            ST_ECC_CHECK:     ; // 骨架: TODO — ECC 解码检查
        endcase
    end

endmodule
