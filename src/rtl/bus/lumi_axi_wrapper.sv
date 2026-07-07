// =================================================================
// LUMI-DESIGN-AXI | 需求: LUMI-AXI-001~003 | 承接: design/pma-axi.html §3.2
// 模块: lumi_axi_wrapper — AXI4 主总线接口 + FFP 外设接口 + CDC
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_axi_wrapper #(
    parameter int AXI_ADDR_W = lumi_pkg::AXI_ADDR_WIDTH,
    parameter int AXI_DATA_W = lumi_pkg::AXI_DATA_WIDTH,
    parameter int AXI_ID_W   = lumi_pkg::AXI_ID_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    clk_bus,
    input  logic                    reset_n,

    // ── 内部 Master 请求接口 (← Cache/TCM/PMA) ───────────────
    input  logic                    ic_refill_req,
    output logic                    ic_refill_ack,
    input  logic                    dc_refill_req,
    output logic                    dc_refill_ack,
    input  logic                    nc_access_req,
    output logic                    nc_access_ack,
    input  logic                    trace_write_req,
    output logic                    trace_write_ack,

    // ── AXI4 主总线 Master 接口 (128bit data) ────────────────
    // Write Address Channel
    output logic [AXI_ID_W-1:0]    m_axi_awid,
    output logic [AXI_ADDR_W-1:0]  m_axi_awaddr,
    output logic [7:0]              m_axi_awlen,
    output logic [2:0]              m_axi_awsize,
    output logic [1:0]              m_axi_awburst,
    output logic                    m_axi_awvalid,
    input  logic                    m_axi_awready,
    // Write Data Channel
    output logic [AXI_DATA_W-1:0]  m_axi_wdata,
    output logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
    output logic                    m_axi_wlast,
    output logic                    m_axi_wvalid,
    input  logic                    m_axi_wready,
    // Write Response Channel
    input  logic [AXI_ID_W-1:0]    m_axi_bid,
    input  logic [1:0]              m_axi_bresp,
    input  logic                    m_axi_bvalid,
    output logic                    m_axi_bready,
    // Read Address Channel
    output logic [AXI_ID_W-1:0]    m_axi_arid,
    output logic [AXI_ADDR_W-1:0]  m_axi_araddr,
    output logic [7:0]              m_axi_arlen,
    output logic [2:0]              m_axi_arsize,
    output logic [1:0]              m_axi_arburst,
    output logic                    m_axi_arvalid,
    input  logic                    m_axi_arready,
    // Read Data Channel
    input  logic [AXI_ID_W-1:0]    m_axi_rid,
    input  logic [AXI_DATA_W-1:0]  m_axi_rdata,
    input  logic [1:0]              m_axi_rresp,
    input  logic                    m_axi_rlast,
    input  logic                    m_axi_rvalid,
    output logic                    m_axi_rready,

    // ── FFP AXI4 外设接口 (32bit data) ───────────────────────
    output logic [AXI_ADDR_W-1:0]  m_ffp_awaddr,
    output logic                    m_ffp_awvalid,
    input  logic                    m_ffp_awready,
    output logic [31:0]             m_ffp_wdata,
    output logic [3:0]              m_ffp_wstrb,
    output logic                    m_ffp_wvalid,
    input  logic                    m_ffp_wready,
    input  logic [1:0]              m_ffp_bresp,
    input  logic                    m_ffp_bvalid,
    output logic                    m_ffp_bready,
    output logic [AXI_ADDR_W-1:0]  m_ffp_araddr,
    output logic                    m_ffp_arvalid,
    input  logic                    m_ffp_arready,
    input  logic [31:0]             m_ffp_rdata,
    input  logic [1:0]              m_ffp_rresp,
    input  logic                    m_ffp_rvalid,
    output logic                    m_ffp_rready
);

    import lumi_pkg::*;

    // ─── CDC 握手信号 (clk_core ↔ clk_bus) ────────────────────
    logic                           req_sync_core;
    logic                           req_sync_bus;
    logic                           ack_sync_core;
    logic                           ack_sync_bus;

    // ─── 仲裁器信号 ───────────────────────────────────────────
    logic [3:0]                     arb_priority;
    logic                           arb_grant;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [3:0] {
        ST_IDLE,
        ST_IC_REFILL_AR,
        ST_IC_REFILL_R,
        ST_DC_REFILL_AR,
        ST_DC_REFILL_R,
        ST_DC_EVICT_AW,
        ST_DC_EVICT_W,
        ST_NC_ACCESS,
        ST_TRACE_WRITE,
        ST_FFP_ACCESS
    } axi_state_e;

    axi_state_e state_reg, state_next;

    // ─── 时序逻辑 (clk_core 域) ───────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next     = state_reg;
        ic_refill_ack  = 1'b0;
        dc_refill_ack  = 1'b0;
        nc_access_ack  = 1'b0;
        trace_write_ack = 1'b0;

        // AXI 输出默认
        m_axi_awvalid  = 1'b0;
        m_axi_awaddr   = '0;
        m_axi_awid     = '0;
        m_axi_awlen    = '0;
        m_axi_awsize   = '0;
        m_axi_awburst  = '0;
        m_axi_wvalid   = 1'b0;
        m_axi_wdata    = '0;
        m_axi_wstrb    = '0;
        m_axi_wlast    = 1'b0;
        m_axi_bready   = 1'b1;
        m_axi_arvalid  = 1'b0;
        m_axi_araddr   = '0;
        m_axi_arid     = '0;
        m_axi_arlen    = '0;
        m_axi_arsize   = '0;
        m_axi_arburst  = '0;
        m_axi_rready   = 1'b1;

        m_ffp_awvalid  = 1'b0;
        m_ffp_awaddr   = '0;
        m_ffp_wvalid   = 1'b0;
        m_ffp_wdata    = '0;
        m_ffp_wstrb    = '0;
        m_ffp_bready   = 1'b1;
        m_ffp_arvalid  = 1'b0;
        m_ffp_araddr   = '0;
        m_ffp_rready   = 1'b1;

        case (state_reg)
            ST_IDLE:         state_next = ST_IC_REFILL_AR;
            ST_IC_REFILL_AR: ; // 骨架: TODO — ICache refill AR 请求
            ST_IC_REFILL_R:  ; // 骨架: TODO — ICache refill R 数据
            ST_DC_REFILL_AR: ; // 骨架: TODO — DCache refill AR 请求
            ST_DC_REFILL_R:  ; // 骨架: TODO — DCache refill R 数据
            ST_DC_EVICT_AW:  ; // 骨架: TODO — DCache evict AW 请求
            ST_DC_EVICT_W:   ; // 骨架: TODO — DCache evict W 数据
            ST_NC_ACCESS:    ; // 骨架: TODO — Non-cacheable 访问
            ST_TRACE_WRITE:  ; // 骨架: TODO — Trace AXI 写出
            ST_FFP_ACCESS:   ; // 骨架: TODO — FFP 外设访问
        endcase
    end

endmodule
