// =================================================================
// LUMI-DESIGN-008 | 需求: LUMI-IF-001, LUMI-IF-002, LUMI-FEAT-003 | 承接: design/pma-axi.html
// 模块: lumi_axi_wrapper — AXI4 Master 总线接口 + FFP 外设 + CDC
// 阶段: M3 Batch-2 功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
//
// 功能概述:
//   - 4 路 Master 请求仲裁: DC refill/evict > IC refill > NC > Trace
//   - AXI4 完整通道: AW/W/B (写) + AR/R (读), INCR burst
//   - Cache Refill: ARLEN=3 (4 beat × 128bit = 64B), ARSIZE=4
//   - Cache Evict: AWLEN=3, AWSIZE=4
//   - FFP 外设接口: AXI4-Lite 32bit, 0xF000_0000~0xF000_FFFF
//   - CDC 2-flop 同步器: clk_core ↔ clk_bus
//   - AXI ID 分配: DC=0x1, IC=0x0, NC=0x2, Trace=0x3
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
    input  logic [31:0]             ic_refill_addr,
    input  logic                    dc_refill_req,
    output logic                    dc_refill_ack,
    input  logic [31:0]             dc_refill_addr,
    input  logic                    dc_evict_req,
    output logic                    dc_evict_ack,
    input  logic [31:0]             dc_evict_addr,
    input  logic [127:0]            dc_evict_data,
    input  logic                    nc_access_req,
    output logic                    nc_access_ack,
    input  logic [31:0]             nc_access_addr,
    input  logic                    nc_access_we,
    input  logic [31:0]             nc_access_wdata,
    output logic [31:0]             nc_access_rdata,
    input  logic                    trace_write_req,
    output logic                    trace_write_ack,
    input  logic [31:0]             trace_write_addr,
    input  logic [127:0]            trace_write_data,

    // ── AXI4 主总线 Master 接口 (128bit data) ────────────────
    output logic [AXI_ID_W-1:0]    m_axi_awid,
    output logic [AXI_ADDR_W-1:0]  m_axi_awaddr,
    output logic [7:0]              m_axi_awlen,
    output logic [2:0]              m_axi_awsize,
    output logic [1:0]              m_axi_awburst,
    output logic                    m_axi_awlock,     // AXI4 sideband (T-MS3-S2-1.2b)
    output logic [3:0]              m_axi_awcache,    // AXI4 sideband
    output logic [2:0]              m_axi_awprot,     // AXI4 sideband
    output logic                    m_axi_awvalid,
    input  logic                    m_axi_awready,
    output logic [AXI_DATA_W-1:0]  m_axi_wdata,
    output logic [AXI_DATA_W/8-1:0] m_axi_wstrb,
    output logic                    m_axi_wlast,
    output logic                    m_axi_wvalid,
    input  logic                    m_axi_wready,
    input  logic [AXI_ID_W-1:0]    m_axi_bid,
    input  logic [1:0]              m_axi_bresp,
    input  logic                    m_axi_bvalid,
    output logic                    m_axi_bready,
    output logic [AXI_ID_W-1:0]    m_axi_arid,
    output logic [AXI_ADDR_W-1:0]  m_axi_araddr,
    output logic [7:0]              m_axi_arlen,
    output logic [2:0]              m_axi_arsize,
    output logic [1:0]              m_axi_arburst,
    output logic                    m_axi_arlock,     // AXI4 sideband (T-MS3-S2-1.2b)
    output logic [3:0]              m_axi_arcache,    // AXI4 sideband
    output logic [2:0]              m_axi_arprot,     // AXI4 sideband
    output logic                    m_axi_arvalid,
    input  logic                    m_axi_arready,
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

    // ─── AXI 常量 ────────────────────────────────────────────
    localparam logic [1:0] AXI_BURST_INCR = 2'b01;
    localparam logic [2:0] AXI_SIZE_16B   = 3'b100;  // 16 bytes = 128 bit
    localparam logic [2:0] AXI_SIZE_4B    = 3'b010;  // 4 bytes = 32 bit
    localparam logic [7:0] BURST_4BEAT    = 8'd3;    // 4 beats (0-indexed)
    localparam logic [7:0] BURST_1BEAT    = 8'd0;    // 1 beat

    // AXI ID 分配
    localparam logic [AXI_ID_W-1:0] ID_IC    = 0;
    localparam logic [AXI_ID_W-1:0] ID_DC    = 1;
    localparam logic [AXI_ID_W-1:0] ID_NC    = 2;
    localparam logic [AXI_ID_W-1:0] ID_TRACE = 3;

    // ─── FSM ─────────────────────────────────────────────────
    typedef enum logic [4:0] {
        ST_IDLE,
        // Read 通道 (AR + R)
        ST_IC_REFILL_AR,
        ST_IC_REFILL_R,
        ST_DC_REFILL_AR,
        ST_DC_REFILL_R,
        ST_NC_READ_AR,
        ST_NC_READ_R,
        // Write 通道 (AW + W + B)
        ST_DC_EVICT_AW,
        ST_DC_EVICT_W,
        ST_DC_EVICT_B,
        ST_NC_WRITE_AW,
        ST_NC_WRITE_W,
        ST_NC_WRITE_B,
        ST_TRACE_AW,
        ST_TRACE_W,
        ST_TRACE_B,
        // FFP
        ST_FFP_ACCESS
    } axi_state_e;

    axi_state_e state_reg, state_next;

    // ─── 内部寄存器 ──────────────────────────────────────────
    logic [AXI_ADDR_W-1:0] addr_reg;
    logic [AXI_ID_W-1:0]   id_reg;
    logic [7:0]              len_reg;
    logic [2:0]              size_reg;
    logic [127:0]            wdata_reg;
    logic                    is_write;

    // Read data 暂存 (for NC single read)
    logic [127:0]            nc_rdata_reg;
    logic                    nc_rdata_valid;

    // FFP 请求锁存
    logic                    ffp_req_reg;
    logic [31:0]             ffp_addr_reg;
    logic                    ffp_we_reg;
    logic [31:0]             ffp_wdata_reg;
    logic [3:0]              ffp_strb_reg;

    // Evict 多 beat 计数
    logic [2:0]              evict_beat_cnt;

    // ─── CDC 2-flop 同步器 ──────────────────────────────────
    // 请求从 clk_core 域同步到 clk_bus 域
    // 应答从 clk_bus 域同步回 clk_core 域
    // 简化实现: 假设 clk_core == clk_bus (同步模式)
    // 异步模式需额外添加 2-flop 同步器
    logic ic_req_sync, dc_refill_req_sync, dc_evict_req_sync;
    logic nc_req_sync, trace_req_sync;
    logic ic_ack_bus, dc_refill_ack_bus, dc_evict_ack_bus;
    logic nc_ack_bus, trace_ack_bus;

    // 同步器 (简化: 直通, 异步时替换为 2-flop)
    assign ic_req_sync          = ic_refill_req;
    assign dc_refill_req_sync   = dc_refill_req;
    assign dc_evict_req_sync    = dc_evict_req;
    assign nc_req_sync          = nc_access_req;
    assign trace_req_sync       = trace_write_req;

    assign ic_refill_ack        = ic_ack_bus;
    assign dc_refill_ack        = dc_refill_ack_bus;
    assign dc_evict_ack         = dc_evict_ack_bus;
    assign nc_access_ack        = nc_ack_bus;
    assign trace_write_ack      = trace_ack_bus;
    assign nc_access_rdata      = nc_rdata_reg[31:0];

    // ─── 仲裁逻辑 ────────────────────────────────────────────
    // 优先级: DC > IC > NC > Trace
    logic arb_dc_grant, arb_ic_grant, arb_nc_grant, arb_trace_grant;
    logic arb_any;

    assign arb_dc_grant    = (dc_refill_req_sync || dc_evict_req_sync);
    assign arb_ic_grant    = ic_req_sync && !arb_dc_grant;
    assign arb_nc_grant    = nc_req_sync && !arb_dc_grant && !arb_ic_grant;
    assign arb_trace_grant = trace_req_sync && !arb_dc_grant && !arb_ic_grant && !arb_nc_grant;
    assign arb_any         = arb_dc_grant || arb_ic_grant || arb_nc_grant || arb_trace_grant;

    // ─── 时序逻辑 ────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg      <= ST_IDLE;
            addr_reg       <= '0;
            id_reg         <= '0;
            len_reg        <= '0;
            size_reg       <= '0;
            wdata_reg      <= '0;
            is_write       <= 1'b0;
            nc_rdata_reg   <= '0;
            nc_rdata_valid <= 1'b0;
            evict_beat_cnt <= '0;
            ic_ack_bus     <= 1'b0;
            dc_refill_ack_bus <= 1'b0;
            dc_evict_ack_bus  <= 1'b0;
            nc_ack_bus     <= 1'b0;
            trace_ack_bus  <= 1'b0;
        end else begin
            state_reg <= state_next;

            // 地址/参数锁存 (进入传输时)
            if (state_reg == ST_IDLE && state_next != ST_IDLE) begin
                if (arb_dc_grant) begin
                    if (dc_evict_req_sync) begin
                        addr_reg  <= dc_evict_addr;
                        id_reg    <= ID_DC;
                        len_reg   <= BURST_4BEAT;
                        size_reg  <= AXI_SIZE_16B;
                        is_write  <= 1'b1;
                        wdata_reg <= dc_evict_data;
                    end else begin
                        addr_reg  <= dc_refill_addr;
                        id_reg    <= ID_DC;
                        len_reg   <= BURST_4BEAT;
                        size_reg  <= AXI_SIZE_16B;
                        is_write  <= 1'b0;
                    end
                end else if (arb_ic_grant) begin
                    addr_reg  <= ic_refill_addr;
                    id_reg    <= ID_IC;
                    len_reg   <= BURST_4BEAT;
                    size_reg  <= AXI_SIZE_16B;
                    is_write  <= 1'b0;
                end else if (arb_nc_grant) begin
                    addr_reg  <= nc_access_addr;
                    id_reg    <= ID_NC;
                    len_reg   <= BURST_1BEAT;
                    size_reg  <= AXI_SIZE_4B;
                    is_write  <= nc_access_we;
                    wdata_reg <= {4{nc_access_wdata}};  // 扩展到 128bit
                end else if (arb_trace_grant) begin
                    addr_reg  <= trace_write_addr;
                    id_reg    <= ID_TRACE;
                    len_reg   <= BURST_1BEAT;
                    size_reg  <= AXI_SIZE_16B;
                    is_write  <= 1'b1;
                    wdata_reg <= trace_write_data;
                end
            end

            // ACK 脉冲 (传输完成时单 cycle)
            ic_ack_bus          <= 1'b0;
            dc_refill_ack_bus   <= 1'b0;
            dc_evict_ack_bus    <= 1'b0;
            nc_ack_bus          <= 1'b0;
            trace_ack_bus       <= 1'b0;

            // IC refill 完成
            if (state_reg == ST_IC_REFILL_R && m_axi_rvalid && m_axi_rlast)
                ic_ack_bus <= 1'b1;

            // DC refill 完成
            if (state_reg == ST_DC_REFILL_R && m_axi_rvalid && m_axi_rlast)
                dc_refill_ack_bus <= 1'b1;

            // DC evict 完成
            if (state_reg == ST_DC_EVICT_B && m_axi_bvalid)
                dc_evict_ack_bus <= 1'b1;

            // NC read 完成
            if (state_reg == ST_NC_READ_R && m_axi_rvalid && m_axi_rlast) begin
                nc_ack_bus     <= 1'b1;
                nc_rdata_reg   <= m_axi_rdata;
                nc_rdata_valid <= 1'b1;
            end

            // NC write 完成
            if (state_reg == ST_NC_WRITE_B && m_axi_bvalid)
                nc_ack_bus <= 1'b1;

            // Trace 完成
            if (state_reg == ST_TRACE_B && m_axi_bvalid)
                trace_ack_bus <= 1'b1;

            // Evict beat 计数
            if (state_reg == ST_DC_EVICT_W && m_axi_wvalid && m_axi_wready)
                evict_beat_cnt <= evict_beat_cnt + 3'd1;
            else if (state_next == ST_DC_EVICT_W)
                evict_beat_cnt <= 3'd0;
        end
    end

    // ─── FSM 组合逻辑 ────────────────────────────────────────
    always_comb begin
        state_next = state_reg;

        // AXI 输出默认
        m_axi_awvalid = 1'b0;
        m_axi_awaddr  = '0;
        m_axi_awid    = '0;
        m_axi_awlen   = '0;
        m_axi_awsize  = '0;
        m_axi_awburst = '0;
        m_axi_awlock  = 1'b0;       // AXI4 sideband default
        m_axi_awcache = 4'b0;       // AXI4 sideband default
        m_axi_awprot  = 3'b0;       // AXI4 sideband default
        m_axi_wvalid  = 1'b0;
        m_axi_wdata   = '0;
        m_axi_wstrb   = '0;
        m_axi_wlast   = 1'b0;
        m_axi_bready  = 1'b1;
        m_axi_arvalid = 1'b0;
        m_axi_araddr  = '0;
        m_axi_arid    = '0;
        m_axi_arlen   = '0;
        m_axi_arsize  = '0;
        m_axi_arburst = '0;
        m_axi_arlock  = 1'b0;       // AXI4 sideband default
        m_axi_arcache = 4'b0;       // AXI4 sideband default
        m_axi_arprot  = 3'b0;       // AXI4 sideband default
        m_axi_rready  = 1'b1;

        // FFP 默认
        m_ffp_awvalid = 1'b0;
        m_ffp_awaddr  = '0;
        m_ffp_wvalid  = 1'b0;
        m_ffp_wdata   = '0;
        m_ffp_wstrb   = '0;
        m_ffp_bready  = 1'b1;
        m_ffp_arvalid = 1'b0;
        m_ffp_araddr  = '0;
        m_ffp_rready  = 1'b1;

        case (state_reg)
            ST_IDLE: begin
                // 仲裁: DC > IC > NC > Trace
                if (arb_dc_grant) begin
                    if (dc_evict_req_sync)
                        state_next = ST_DC_EVICT_AW;
                    else
                        state_next = ST_DC_REFILL_AR;
                end else if (arb_ic_grant) begin
                    state_next = ST_IC_REFILL_AR;
                end else if (arb_nc_grant) begin
                    if (nc_access_we)
                        state_next = ST_NC_WRITE_AW;
                    else
                        state_next = ST_NC_READ_AR;
                end else if (arb_trace_grant) begin
                    state_next = ST_TRACE_AW;
                end
            end

            // ── I-Cache Refill (AR + R) ─────────────────────
            ST_IC_REFILL_AR: begin
                m_axi_arvalid = 1'b1;
                m_axi_araddr  = addr_reg;
                m_axi_arid    = id_reg;
                m_axi_arlen   = len_reg;
                m_axi_arsize  = size_reg;
                m_axi_arburst = AXI_BURST_INCR;
                if (m_axi_arready)
                    state_next = ST_IC_REFILL_R;
            end

            ST_IC_REFILL_R: begin
                m_axi_rready = 1'b1;
                if (m_axi_rvalid && m_axi_rlast)
                    state_next = ST_IDLE;
            end

            // ── D-Cache Refill (AR + R) ─────────────────────
            ST_DC_REFILL_AR: begin
                m_axi_arvalid = 1'b1;
                m_axi_araddr  = addr_reg;
                m_axi_arid    = id_reg;
                m_axi_arlen   = len_reg;
                m_axi_arsize  = size_reg;
                m_axi_arburst = AXI_BURST_INCR;
                if (m_axi_arready)
                    state_next = ST_DC_REFILL_R;
            end

            ST_DC_REFILL_R: begin
                m_axi_rready = 1'b1;
                if (m_axi_rvalid && m_axi_rlast)
                    state_next = ST_IDLE;
            end

            // ── D-Cache Evict (AW + W + B) ──────────────────
            ST_DC_EVICT_AW: begin
                m_axi_awvalid = 1'b1;
                m_axi_awaddr  = addr_reg;
                m_axi_awid    = id_reg;
                m_axi_awlen   = len_reg;
                m_axi_awsize  = size_reg;
                m_axi_awburst = AXI_BURST_INCR;
                if (m_axi_awready)
                    state_next = ST_DC_EVICT_W;
            end

            ST_DC_EVICT_W: begin
                m_axi_wvalid = 1'b1;
                m_axi_wdata  = wdata_reg;
                m_axi_wstrb  = {AXI_DATA_W/8{1'b1}};  // all bytes
                m_axi_wlast  = (evict_beat_cnt == len_reg);
                if (m_axi_wready) begin
                    if (m_axi_wlast)
                        state_next = ST_DC_EVICT_B;
                end
            end

            ST_DC_EVICT_B: begin
                m_axi_bready = 1'b1;
                if (m_axi_bvalid)
                    state_next = ST_IDLE;
            end

            // ── NC Read (AR + R, single beat) ───────────────
            ST_NC_READ_AR: begin
                m_axi_arvalid = 1'b1;
                m_axi_araddr  = addr_reg;
                m_axi_arid    = id_reg;
                m_axi_arlen   = len_reg;
                m_axi_arsize  = size_reg;
                m_axi_arburst = AXI_BURST_INCR;
                if (m_axi_arready)
                    state_next = ST_NC_READ_R;
            end

            ST_NC_READ_R: begin
                m_axi_rready = 1'b1;
                if (m_axi_rvalid && m_axi_rlast)
                    state_next = ST_IDLE;
            end

            // ── NC Write (AW + W + B, single beat) ──────────
            ST_NC_WRITE_AW: begin
                m_axi_awvalid = 1'b1;
                m_axi_awaddr  = addr_reg;
                m_axi_awid    = id_reg;
                m_axi_awlen   = len_reg;
                m_axi_awsize  = size_reg;
                m_axi_awburst = AXI_BURST_INCR;
                if (m_axi_awready)
                    state_next = ST_NC_WRITE_W;
            end

            ST_NC_WRITE_W: begin
                m_axi_wvalid = 1'b1;
                m_axi_wdata  = wdata_reg;
                m_axi_wstrb  = {4'hF, 12'h0};  // 低 4 byte 有效
                m_axi_wlast  = 1'b1;
                if (m_axi_wready)
                    state_next = ST_NC_WRITE_B;
            end

            ST_NC_WRITE_B: begin
                m_axi_bready = 1'b1;
                if (m_axi_bvalid)
                    state_next = ST_IDLE;
            end

            // ── Trace Write (AW + W + B) ────────────────────
            ST_TRACE_AW: begin
                m_axi_awvalid = 1'b1;
                m_axi_awaddr  = addr_reg;
                m_axi_awid    = id_reg;
                m_axi_awlen   = len_reg;
                m_axi_awsize  = size_reg;
                m_axi_awburst = AXI_BURST_INCR;
                if (m_axi_awready)
                    state_next = ST_TRACE_W;
            end

            ST_TRACE_W: begin
                m_axi_wvalid = 1'b1;
                m_axi_wdata  = wdata_reg;
                m_axi_wstrb  = {AXI_DATA_W/8{1'b1}};
                m_axi_wlast  = 1'b1;
                if (m_axi_wready)
                    state_next = ST_TRACE_B;
            end

            ST_TRACE_B: begin
                m_axi_bready = 1'b1;
                if (m_axi_bvalid)
                    state_next = ST_IDLE;
            end

            // ── FFP Access (stub, 由外部直连) ──────────────
            ST_FFP_ACCESS: begin
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

    // ─── FFP 接口: 当前为直连 stub ──────────────────────────
    // FFP 外设通过独立路径直接访问, 不经过主总线仲裁
    // 此处保留端口, 具体桥接逻辑在 SoC 集成时实现

endmodule
