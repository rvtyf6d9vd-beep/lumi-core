// =================================================================
// LUMI-DESIGN-TB | 需求: LUMI-TB-001 | 承接: design/*.html
// 模块: lumi_soc_tb_stub — SoC Testbench 骨架 (Clock + Reset + AXI BFM)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_soc_tb_stub;

    import lumi_pkg::*;

    // ─── 时钟/复位生成 ────────────────────────────────────────
    parameter int CLK_PERIOD_CORE = 20;  // 50 MHz
    parameter int CLK_PERIOD_BUS  = 10;  // 100 MHz
    parameter int RST_DURATION    = 100;

    logic clk_core, clk_bus, reset_n;

    initial begin
        clk_core = 1'b0;
        forever #(CLK_PERIOD_CORE/2) clk_core = ~clk_core;
    end

    initial begin
        clk_bus = 1'b0;
        forever #(CLK_PERIOD_BUS/2) clk_bus = ~clk_bus;
    end

    initial begin
        reset_n = 1'b0;
        #RST_DURATION;
        reset_n = 1'b1;
    end

    // ─── AXI4 信号 ────────────────────────────────────────────
    logic [3:0]   m_axi_awid, m_axi_arid;
    logic [31:0]  m_axi_awaddr, m_axi_araddr;
    logic [7:0]   m_axi_awlen, m_axi_arlen;
    logic [2:0]   m_axi_awsize, m_axi_arsize;
    logic [1:0]   m_axi_awburst, m_axi_arburst;
    logic         m_axi_awvalid, m_axi_awready;
    logic [127:0] m_axi_wdata;
    logic [15:0]  m_axi_wstrb;
    logic         m_axi_wlast, m_axi_wvalid, m_axi_wready;
    logic [3:0]   m_axi_bid, m_axi_rid;
    logic [1:0]   m_axi_bresp, m_axi_rresp;
    logic         m_axi_bvalid, m_axi_bready;
    logic [127:0] m_axi_rdata;
    logic         m_axi_rlast, m_axi_rvalid, m_axi_rready;

    // ─── JTAG ─────────────────────────────────────────────────
    logic jtag_tck, jtag_tms, jtag_tdi, jtag_tdo, jtag_trst_n;

    // ─── 中断 ─────────────────────────────────────────────────
    logic [31:0] ext_irq;
    logic [15:0] local_irq;

    // ─── DUT 实例化 ───────────────────────────────────────────
    lumi_soc_top #(
        .NUM_HARTS   (1),
        .ISSUE_WIDTH (3)
    ) u_dut (
        .clk_core        (clk_core),
        .clk_bus         (clk_bus),
        .reset_n         (reset_n),
        .m_axi_awid      (m_axi_awid),
        .m_axi_awaddr    (m_axi_awaddr),
        .m_axi_awlen     (m_axi_awlen),
        .m_axi_awsize    (m_axi_awsize),
        .m_axi_awburst   (m_axi_awburst),
        .m_axi_awvalid   (m_axi_awvalid),
        .m_axi_awready   (m_axi_awready),
        .m_axi_wdata     (m_axi_wdata),
        .m_axi_wstrb     (m_axi_wstrb),
        .m_axi_wlast     (m_axi_wlast),
        .m_axi_wvalid    (m_axi_wvalid),
        .m_axi_wready    (m_axi_wready),
        .m_axi_bid       (m_axi_bid),
        .m_axi_bresp     (m_axi_bresp),
        .m_axi_bvalid    (m_axi_bvalid),
        .m_axi_bready    (m_axi_bready),
        .m_axi_arid      (m_axi_arid),
        .m_axi_araddr    (m_axi_araddr),
        .m_axi_arlen     (m_axi_arlen),
        .m_axi_arsize    (m_axi_arsize),
        .m_axi_arburst   (m_axi_arburst),
        .m_axi_arvalid   (m_axi_arvalid),
        .m_axi_arready   (m_axi_arready),
        .m_axi_rid       (m_axi_rid),
        .m_axi_rdata     (m_axi_rdata),
        .m_axi_rresp     (m_axi_rresp),
        .m_axi_rlast     (m_axi_rlast),
        .m_axi_rvalid    (m_axi_rvalid),
        .m_axi_rready    (m_axi_rready),
        .jtag_tck        (jtag_tck),
        .jtag_tms        (jtag_tms),
        .jtag_tdi        (jtag_tdi),
        .jtag_tdo        (jtag_tdo),
        .jtag_trst_n     (jtag_trst_n),
        .ext_irq         (ext_irq),
        .local_irq       (local_irq),
        .debug_halt      (1'b0)
    );

    // ─── AXI Memory Model BFM 桩 ──────────────────────────────
    // 骨架: TODO — 实现 SimpleMemory BFM (响应 AR/R + AW/W/B)
    assign m_axi_arready = 1'b1;
    assign m_axi_rdata   = 128'h0;
    assign m_axi_rresp   = 2'b00;
    assign m_axi_rlast   = 1'b1;
    assign m_axi_rvalid  = m_axi_arvalid;
    assign m_axi_awready = 1'b1;
    assign m_axi_wready  = 1'b1;
    assign m_axi_bresp   = 2'b00;
    assign m_axi_bvalid  = m_axi_wvalid & m_axi_wlast;
    assign m_axi_bid     = 4'h0;
    assign m_axi_rid     = 4'h0;

    // ─── 默认值 ───────────────────────────────────────────────
    initial begin
        ext_irq    = 32'h0;
        local_irq  = 16'h0;
        jtag_tck   = 1'b0;
        jtag_tms   = 1'b0;
        jtag_tdi   = 1'b0;
        jtag_trst_n = 1'b1;
        m_axi_bready = 1'b1;
        m_axi_rready = 1'b1;
    end

    // ─── 仿真控制 ─────────────────────────────────────────────
    initial begin
        #1000000;  // 1ms 仿真
        $display("Simulation complete at %0t", $time);
        $finish;
    end

endmodule
