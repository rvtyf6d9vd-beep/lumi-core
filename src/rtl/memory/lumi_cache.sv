// =================================================================
// LUMI-DESIGN-CACHE | 需求: LUMI-CACHE-001~005 | 承接: design/cache.html §3.1
// 模块: lumi_cache — L1 I-Cache + L1 D-Cache (32KB/8-way)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_cache #(
    parameter int ICACHE_SIZE = lumi_pkg::ICACHE_SIZE,
    parameter int ICACHE_WAYS = lumi_pkg::ICACHE_WAYS,
    parameter int ICACHE_LINE = lumi_pkg::ICACHE_LINE,
    parameter int DCACHE_SIZE = lumi_pkg::DCACHE_SIZE,
    parameter int DCACHE_WAYS = lumi_pkg::DCACHE_WAYS,
    parameter int DCACHE_LINE = lumi_pkg::DCACHE_LINE
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── I-Cache 取指接口 (F1→F2) ─────────────────────────────
    input  logic [31:0]             ic_addr,
    output logic [127:0]            ic_rdata,      // H-001: 统一 128bit (16B, fetch-bpred §3.2)
    output logic                    ic_hit,
    input  logic                    ic_valid,
    output logic                    ic_ready,
    input  logic                    ic_flush,

    // ── D-Cache 数据接口 (M 级) ──────────────────────────────
    input  logic [31:0]             dc_addr,
    input  logic [31:0]             dc_wdata,
    output logic [31:0]             dc_rdata,
    input  logic                    dc_we,
    input  logic [3:0]              dc_be,
    output logic                    dc_hit,
    input  logic                    dc_valid,
    output logic                    dc_ready,

    // ── AXI Refill 接口 ──────────────────────────────────────
    output logic [31:0]             refill_araddr,
    output logic                    refill_arvalid,
    input  logic                    refill_arready,
    input  logic [127:0]            refill_rdata,
    input  logic                    refill_rvalid,
    input  logic                    refill_rlast,
    output logic                    refill_rready,
    output logic [31:0]             evict_awaddr,
    output logic                    evict_awvalid,
    input  logic                    evict_awready,
    output logic [127:0]            evict_wdata,
    output logic                    evict_wvalid,
    output logic                    evict_wlast,
    input  logic                    evict_wready,

    // ── FENCE 控制 ───────────────────────────────────────────
    input  logic                    fence_req,
    input  logic                    fence_i_req,
    output logic                    fence_ack,

    // ── ECC 中断输出 (H-004: LUMI-MEM-006) ───────────────────
    output logic                    dc_ecc_ce_irq,   // 单比特可纠正错误
    output logic                    dc_ecc_ded_irq   // 双比特不可纠正错误
);

    import lumi_pkg::*;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [3:0] {
        ST_IDLE,
        ST_ICACHE_LOOKUP,
        ST_ICACHE_HIT,
        ST_ICACHE_REFILL,
        ST_DCACHE_LOOKUP,
        ST_DCACHE_HIT,
        ST_DCACHE_MISS,
        ST_DCACHE_REFILL,
        ST_DCACHE_EVICT,
        ST_FENCE,
        ST_FENCE_I
    } cache_state_e;

    cache_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next    = state_reg;
        ic_hit        = 1'b0;
        ic_ready      = 1'b0;
        ic_rdata      = 128'h0;
        dc_hit        = 1'b0;
        dc_ready      = 1'b0;
        dc_rdata      = 32'h0;
        fence_ack     = 1'b0;
        dc_ecc_ce_irq = 1'b0;
        dc_ecc_ded_irq = 1'b0;
        refill_arvalid = 1'b0;
        refill_araddr  = 32'h0;
        refill_rready  = 1'b0;
        evict_awvalid  = 1'b0;
        evict_awaddr   = 32'h0;
        evict_wvalid   = 1'b0;
        evict_wdata    = 128'h0;
        evict_wlast    = 1'b0;

        case (state_reg)
            ST_IDLE:           state_next = ST_ICACHE_LOOKUP;
            ST_ICACHE_LOOKUP:  ; // 骨架: TODO — Tag 比较
            ST_ICACHE_HIT:     ; // 骨架: TODO — 返回指令数据
            ST_ICACHE_REFILL:  ; // 骨架: TODO — AXI refill
            ST_DCACHE_LOOKUP:  ; // 骨架: TODO — Tag 比较
            ST_DCACHE_HIT:     ; // 骨架: TODO — 返回/写入数据
            ST_DCACHE_MISS:    ; // 骨架: TODO — 分配 victim
            ST_DCACHE_REFILL:  ; // 骨架: TODO — AXI refill
            ST_DCACHE_EVICT:   ; // 骨架: TODO — 脏行写回
            ST_FENCE:          ; // 骨架: TODO — RVWMO fence
            ST_FENCE_I:        ; // 骨架: TODO — FENCE.I invalidate
        endcase
    end

endmodule
