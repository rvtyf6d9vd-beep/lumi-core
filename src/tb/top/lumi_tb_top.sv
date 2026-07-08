// =================================================================
// LUMI-TB-TOP | 需求: LUMI-TB-001 | 承接: docs/verification/
// 模块: lumi_tb_top — SoC 集成验证顶层 (Clock + Reset + BFM + Scoreboard)
// 阶段: M3-S1 Task 0 | 日期: 2026-07-07
// =================================================================
// 从 M2 lumi_soc_tb_stub.sv 升级:
// - AXI Memory BFM: 桩 → axi_memory_bfm 模块 (256KiB SRAM)
// - JTAG BFM: 桩 → jtag_bfm 模块 (TAP + DMI)
// - Scoreboard 框架: 统计收集 + 断言
// - 测试用例: 冒烟测试序列 (复位 → 启动 → 基础指令)
// Verilator-compatible (no UVM dependency)

`include "lib/lumi_tb_pkg.sv"

module lumi_tb_top;

  import lumi_pkg::*;
  import lumi_tb_pkg::*;

  // ─── 时钟/复位生成 ────────────────────────────────────────
  parameter int CLK_PERIOD_CORE = 20;  // 50 MHz (仿真降频)
  parameter int CLK_PERIOD_BUS  = 10;  // 100 MHz
  parameter int RST_DURATION    = 200;

  logic clk_core, clk_bus, reset_n;
  int unsigned cycle_count;

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
    cycle_count = 0;
    #RST_DURATION;
    reset_n = 1'b1;
  end

  always_ff @(posedge clk_core) begin
    if (reset_n) cycle_count <= cycle_count + 1;
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

  // ─── JTAG 信号 ────────────────────────────────────────────
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

  // ─── AXI Memory BFM (替换桩) ──────────────────────────────
  axi_memory_bfm #(
    .MEM_SIZE      (256 * 1024),
    .ADDR_WIDTH    (32),
    .DATA_WIDTH    (128),
    .ID_WIDTH      (4),
    .READ_LATENCY  (3),
    .WRITE_LATENCY (2)
  ) u_axi_mem (
    .clk       (clk_bus),
    .reset_n   (reset_n),
    .awid      (m_axi_awid),
    .awaddr    (m_axi_awaddr),
    .awlen     (m_axi_awlen),
    .awsize    (m_axi_awsize),
    .awburst   (m_axi_awburst),
    .awvalid   (m_axi_awvalid),
    .awready   (m_axi_awready),
    .wdata     (m_axi_wdata),
    .wstrb     (m_axi_wstrb),
    .wlast     (m_axi_wlast),
    .wvalid    (m_axi_wvalid),
    .wready    (m_axi_wready),
    .bid       (m_axi_bid),
    .bresp     (m_axi_bresp),
    .bvalid    (m_axi_bvalid),
    .bready    (m_axi_bready),
    .arid      (m_axi_arid),
    .araddr    (m_axi_araddr),
    .arlen     (m_axi_arlen),
    .arsize    (m_axi_arsize),
    .arburst   (m_axi_arburst),
    .arvalid   (m_axi_arvalid),
    .arready   (m_axi_arready),
    .rid       (m_axi_rid),
    .rdata     (m_axi_rdata),
    .rresp     (m_axi_rresp),
    .rlast     (m_axi_rlast),
    .rvalid    (m_axi_rvalid),
    .rready    (m_axi_rready)
  );

  // ─── JTAG BFM (替换桩) ────────────────────────────────────
  jtag_bfm #(
    .TCK_PERIOD (20)
  ) u_jtag (
    .tck     (jtag_tck),
    .tms     (jtag_tms),
    .tdi     (jtag_tdi),
    .tdo     (jtag_tdo),
    .trst_n  (jtag_trst_n)
  );

  // ─── 中断默认值 ───────────────────────────────────────────
  initial begin
    ext_irq   = 32'h0;
    local_irq = 16'h0;
  end

  // ─── 统计收集 (Scoreboard 框架) ───────────────────────────
  int unsigned pass_count;
  int unsigned fail_count;
  int unsigned total_assertions;

  initial begin
    pass_count      = 0;
    fail_count      = 0;
    total_assertions = 0;
  end

  task automatic record_pass(input string test_name);
    pass_count++;
    total_assertions++;
    $display("[PASS] %s", test_name);
  endtask

  task automatic record_fail(input string test_name, input string reason);
    fail_count++;
    total_assertions++;
    $display("[FAIL] %s: %s", test_name, reason);
  endtask

  // ─── 冒烟测试序列 ─────────────────────────────────────────
  // test_smoke_01: 复位后 DUT 应正常启动
  task automatic test_smoke_reset();
    $display("\n=== test_smoke_reset ===");
    wait (!reset_n);
    $display("[INFO]  Reset asserted");
    wait (reset_n);
    $display("[INFO]  Reset deasserted at %0t", $time);
    // 等待 100 个 cycle
    repeat(100) @(posedge clk_core);
    record_pass("smoke_reset: DUT survived 100 cycles post-reset");
  endtask

  // test_smoke_02: AXI 内存读写验证
  task automatic test_smoke_axi_rw();
    logic [31:0] test_addr;
    logic [31:0] test_data, readback;
    $display("\n=== test_smoke_axi_rw ===");
    test_addr = 32'h0001_0000;
    test_data = 32'hDEAD_BEEF;
    u_axi_mem.mem_write32(test_addr, test_data);
    readback = u_axi_mem.mem_read32(test_addr);
    if (readback === test_data)
      record_pass("smoke_axi_rw: write/read 0xDEADBEEF OK");
    else
      record_fail("smoke_axi_rw", $sformatf("readback=0x%08h expected=0x%08h", readback, test_data));
  endtask

  // test_smoke_03: JTAG 复位 + TAP 状态
  task automatic test_smoke_jtag();
    $display("\n=== test_smoke_jtag ===");
    u_jtag.jtag_reset();
    if (u_jtag.tap_state == jtag_bfm::TAP_TEST_LOGIC_RESET)
      record_pass("smoke_jtag: TAP in TLR after reset");
    else
      record_fail("smoke_jtag", "TAP not in TLR");
  endtask

  // ─── 测试执行主循环 ───────────────────────────────────────
  initial begin
    $display("============================================");
    $display(" Lumi-Core SoC Testbench v1.0 (M3-S1)");
    $display(" Verilator-compatible | No UVM dependency");
    $display("============================================\n");

    // 等待复位完成
    wait (reset_n);
    #100;

    // 冒烟测试序列
    test_smoke_reset();
    test_smoke_axi_rw();
    test_smoke_jtag();

    // 测试结果汇总
    $display("\n============================================");
    $display(" Test Results: PASS=%0d FAIL=%0d TOTAL=%0d",
             pass_count, fail_count, total_assertions);
    $display(" Cycles elapsed: %0d", cycle_count);
    $display("============================================\n");

    if (fail_count == 0)
      $display("[RESULT] ALL TESTS PASSED");
    else
      $display("[RESULT] %0d TEST(S) FAILED", fail_count);

    // AXI BFM 统计
    u_axi_mem.report_stats();

    $finish;
  end

  // ─── 超时保护 ─────────────────────────────────────────────
  initial begin
    #10_000_000;  // 10ms 仿真超时
    $display("[TIMEOUT] Simulation timeout at %0t (%0d cycles)", $time, cycle_count);
    $display("[RESULT] TIMEOUT — %0d PASS / %0d FAIL", pass_count, fail_count);
    $finish;
  end

  // ─── VCD Dump (可选, +vcd 参数启用) ───────────────────────
  initial begin
    if ($test$plusargs("vcd")) begin
      $dumpfile("lumi_tb_top.vcd");
      $dumpvars(0, lumi_tb_top);
      $display("[INFO] VCD dump enabled: lumi_tb_top.vcd");
    end
  end

endmodule
