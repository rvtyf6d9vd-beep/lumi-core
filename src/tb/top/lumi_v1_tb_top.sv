// =================================================================
// LUMI-V1 | 验证顶层 — 集成 UVM-shim + Monitor + Coverage + Scoreboard
// 扩展自 lumi_tb_top, 新增 env 组件连接。
// 支持 +hex_file=<path> 加载程序, +sig_start/end 签名比较。
// =================================================================

`include "uvm_compat/uvm_shim_pkg.sv"

module lumi_v1_tb_top;

  import lumi_pkg::*;
  import lumi_tb_pkg::*;
  import uvm_shim::*;

  // ─── 时钟/复位 ─────────────────────────────────────────────
  parameter int CLK_PERIOD_CORE = 20;  // 50 MHz
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

  // ─── AXI4 信号 ─────────────────────────────────────────────
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

  // ─── JTAG / 中断 ───────────────────────────────────────────
  logic jtag_tck, jtag_tms, jtag_tdi, jtag_tdo, jtag_trst_n;
  logic [31:0] ext_irq;
  logic [15:0] local_irq;

  initial begin
    ext_irq   = 32'h0;
    local_irq = 16'h0;
    jtag_tck  = 1'b0;
    jtag_tms  = 1'b1;
    jtag_tdi  = 1'b0;
    jtag_trst_n = 1'b1;
  end

  // ─── DUT 实例化 ────────────────────────────────────────────
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

  // ─── AXI Memory BFM (256KiB) ───────────────────────────────
  axi_memory_bfm #(
    .MEM_SIZE      (256 * 1024),
    .ADDR_WIDTH    (32),
    .DATA_WIDTH    (128),
    .ID_WIDTH      (4),
    .READ_LATENCY  (2),   // V1: 降低延迟便于快速验证
    .WRITE_LATENCY (1)
  ) u_axi_mem (
    .clk       (clk_bus),
    .reset_n   (reset_n),
    .awid      (m_axi_awid),   .awaddr    (m_axi_awaddr),
    .awlen     (m_axi_awlen),  .awsize    (m_axi_awsize),
    .awburst   (m_axi_awburst), .awvalid   (m_axi_awvalid),
    .awready   (m_axi_awready),
    .wdata     (m_axi_wdata),  .wstrb     (m_axi_wstrb),
    .wlast     (m_axi_wlast),  .wvalid    (m_axi_wvalid),
    .wready    (m_axi_wready),
    .bid       (m_axi_bid),    .bresp     (m_axi_bresp),
    .bvalid    (m_axi_bvalid), .bready    (m_axi_bready),
    .arid      (m_axi_arid),   .araddr    (m_axi_araddr),
    .arlen     (m_axi_arlen),  .arsize    (m_axi_arsize),
    .arburst   (m_axi_arburst), .arvalid   (m_axi_arvalid),
    .arready   (m_axi_arready),
    .rid       (m_axi_rid),    .rdata     (m_axi_rdata),
    .rresp     (m_axi_rresp),  .rlast     (m_axi_rlast),
    .rvalid    (m_axi_rvalid), .rready    (m_axi_rready)
  );

  // ─── W 级 commit 信号层次引用 (多槽) ────────────────────────
  wire [2:0]       commit_valid_all = u_dut.commit_valid;
  wire [31:0]      commit_pc_0  = u_dut.gen_single_core.u_core.commit_pc[0];
  wire [31:0]      commit_pc_1  = u_dut.gen_single_core.u_core.commit_pc[1];
  wire [31:0]      commit_pc_2  = u_dut.gen_single_core.u_core.commit_pc[2];
  wire [2:0][31:0] commit_pc_packed = {commit_pc_2, commit_pc_1, commit_pc_0};

  wire [31:0]      commit_inst_0 = u_dut.gen_single_core.mon_inst[0];
  wire [31:0]      commit_inst_1 = u_dut.gen_single_core.mon_inst[1];
  wire [31:0]      commit_inst_2 = u_dut.gen_single_core.mon_inst[2];
  wire [2:0][31:0] commit_inst_packed = {commit_inst_2, commit_inst_1, commit_inst_0};

  wire [15:0]      commit_inst_raw_0 = u_dut.gen_single_core.mon_inst_raw[0];
  wire [15:0]      commit_inst_raw_1 = u_dut.gen_single_core.mon_inst_raw[1];
  wire [15:0]      commit_inst_raw_2 = u_dut.gen_single_core.mon_inst_raw[2];
  wire [2:0][15:0] commit_inst_raw_packed = {commit_inst_raw_2, commit_inst_raw_1, commit_inst_raw_0};

  wire [4:0]       commit_rd_0 = u_dut.gen_single_core.mon_rd[0];
  wire [4:0]       commit_rd_1 = u_dut.gen_single_core.mon_rd[1];
  wire [4:0]       commit_rd_2 = u_dut.gen_single_core.mon_rd[2];
  wire [2:0][4:0]  commit_rd_packed = {commit_rd_2, commit_rd_1, commit_rd_0};

  wire [31:0]      commit_rd_data_0 = u_dut.gen_single_core.mon_rd_data[0];
  wire [31:0]      commit_rd_data_1 = u_dut.gen_single_core.mon_rd_data[1];
  wire [31:0]      commit_rd_data_2 = u_dut.gen_single_core.mon_rd_data[2];
  wire [2:0][31:0] commit_rd_data_packed = {commit_rd_data_2, commit_rd_data_1, commit_rd_data_0};

  wire w_commit_trap = u_dut.gen_single_core.u_core.trap_request;
  wire w_commit_irq  = u_dut.gen_single_core.mon_irq;

  // ─── V1 Debug: 统一 SRAM 旁路监控 ────────────────────────
  wire        v1_ic_valid  = u_dut.ic_valid;
  wire [31:0] v1_ic_addr   = u_dut.ic_addr;
  wire        v1_dc_valid  = u_dut.dc_valid;
  wire        v1_dc_we     = u_dut.dc_we;
  wire        v1_dc_ready  = u_dut.dc_ready;
  wire [31:0] v1_dc_addr   = u_dut.dc_addr;

  // 周期性打印 V1 SRAM 状态 (前 50 周期, 用于调试)
  wire w_dec_stall = u_dut.gen_single_core.u_core.dec_stall;
  wire w_f2_valid  = u_dut.gen_single_core.u_core.f2_valid;
  wire [31:0] w_f2_pc = u_dut.gen_single_core.u_core.f2_pc;
  initial begin
    wait(reset_n);
    for (int i = 0; i < 50; i++) begin
      @(posedge clk_core);
      if (commit_valid_all != 3'b0 || w_dec_stall || w_f2_valid)
      $display("[DBG] cyc=%0d commit=%b pc0=0x%08h f2v=%b f2pc=0x%08h stall=%b",
               i, commit_valid_all, commit_pc_0, w_f2_valid, w_f2_pc, w_dec_stall);
    end
  end

  // ─── 指令监视器 (多槽) ─────────────────────────────────────
  lumi_inst_monitor #(
    .ISSUE_WIDTH (3)
  ) u_mon (
    .clk_core         (clk_core),
    .reset_n          (reset_n),
    .commit_valid     (commit_valid_all),
    .commit_pc        (commit_pc_packed),
    .commit_inst      (commit_inst_packed),
    .commit_rd        (commit_rd_packed),
    .commit_rd_data   (commit_rd_data_packed),
    .commit_trap      (w_commit_trap),
    .commit_irq       (w_commit_irq)
  );

  // ─── 覆盖率收集器 (多槽) ──────────────────────────────────
  lumi_coverage #(
    .ISSUE_WIDTH (3)
  ) u_cov (
    .clk_core         (clk_core),
    .reset_n          (reset_n),
    .commit_valid     (commit_valid_all),
    .commit_inst      (commit_inst_packed),
    .commit_inst_raw  (commit_inst_raw_packed)
  );

  // ─── Scoreboard (多槽) ────────────────────────────────────
  lumi_scoreboard #(
    .ISSUE_WIDTH (3)
  ) u_sb (
    .clk_core         (clk_core),
    .reset_n          (reset_n),
    .commit_valid     (commit_valid_all),
    .commit_pc        (commit_pc_packed),
    .commit_inst      (commit_inst_packed),
    .commit_rd        (commit_rd_packed),
    .commit_rd_data   (commit_rd_data_packed)
  );

  // ─── Hex 文件加载 (+hex_file=xxx.hex) ──────────────────────
  string hex_file;
  initial begin
    if ($value$plusargs("hex_file=%s", hex_file)) begin
      $display("[V1] Loading hex file: %s", hex_file);
      $readmemh(hex_file, u_axi_mem.mem);
    end
  end

  // ─── V1 SRAM 加载 (+itcm_file=xxx_32.hex, 32-bit 格式) ────────
  string itcm_file;
  initial begin
    if ($value$plusargs("itcm_file=%s", itcm_file)) begin
      $display("[V1] Loading V1 SRAM: %s", itcm_file);
      $readmemh(itcm_file, u_dut.v1_sram);
    end
  end

  // ─── 签名比较 (+sig_start=0x... +sig_end=0x... +sig_ref=xxx.ref) ─
  string sig_ref_file;
  int unsigned sig_start, sig_end;

  task automatic run_signature_compare();
    if ($value$plusargs("sig_ref=%s", sig_ref_file)) begin
      if ($value$plusargs("sig_start=%h", sig_start) &&
          $value$plusargs("sig_end=%h", sig_end)) begin
        $display("[V1] Signature compare: 0x%08h~0x%08h, ref=%s",
                 sig_start, sig_end, sig_ref_file);
        // 读取 Memory BFM 中的签名段并比较
        compare_mem_signature(sig_start, sig_end, sig_ref_file);
      end
    end
  endtask

  // ─── 签名比较辅助函数 ──────────────────────────────────────
  task automatic compare_mem_signature(
    input int unsigned start_addr,
    input int unsigned end_addr,
    input string       ref_file
  );
    int fd;
    int word_count;
    int match_cnt, mismatch_cnt;
    int unsigned addr;
    logic [31:0] actual_word, ref_word;

    fd = $fopen(ref_file, "r");
    if (fd == 0) begin
      $display("[V1] ERROR: Cannot open ref file: %s", ref_file);
      return;
    end

    word_count = 0;
    match_cnt = 0;
    mismatch_cnt = 0;

    for (addr = start_addr; addr < end_addr; addr += 4) begin
      // 从 BFM 内存读取 (128-bit 行, 取 32-bit word)
      actual_word = u_axi_mem.mem[addr >> 2];

      if ($fscanf(fd, "%h", ref_word) != 1) begin
        $display("[V1] WARN: Ref file shorter than expected at word %0d", word_count);
        break;
      end

      if (actual_word === ref_word) begin
        match_cnt++;
      end else begin
        mismatch_cnt++;
        if (mismatch_cnt <= 5)
          $display("[V1] MISMATCH @ 0x%08h: actual=0x%08h expected=0x%08h",
                   addr, actual_word, ref_word);
      end
      word_count++;
    end

    $fclose(fd);
    $display("[V1] Signature: %0d words, %0d match, %0d mismatch",
             word_count, match_cnt, mismatch_cnt);
    if (mismatch_cnt == 0) begin
      $display("[UVM_INFO] V1/SIG: PASS: %0d words match", match_cnt);
      uvm_shim::uvm_info_count++;
    end else begin
      $display("[UVM_ERROR] V1/SIG: FAIL: %0d mismatches", mismatch_cnt);
      uvm_shim::uvm_error_count++;
    end
  endtask

  // ─── 主测试流程 ────────────────────────────────────────────
  int unsigned pass_count;
  int unsigned fail_count;

  initial begin
    pass_count = 0;
    fail_count = 0;

    $display("============================================");
    $display(" Lumi-Core V1 Verification TB");
    $display(" UVM-shim + Monitor + Coverage + Scoreboard");
    $display("============================================\n");

    // 等待复位
    wait (reset_n);
    #100;

    // 等待 scoreboard 检测结束 或 超时 (Verilator: 不用 fork)
    wait (u_sb.test_done || cycle_count > 5_000_000);
    if (u_sb.test_done) begin
      #100;
      if (u_sb.exit_code == 0) begin
        pass_count++;
        $display("[V1] TEST PASS (exit_code=0, %0d cycles)", cycle_count);
      end else begin
        fail_count++;
        $display("[V1] TEST FAIL (exit_code=0x%08h)", u_sb.exit_code);
      end
    end else begin
      fail_count++;
      $display("[V1] TEST TIMEOUT (%0d cycles)", cycle_count);
    end

    // 签名比较 (如果提供了参数)
    run_signature_compare();

    // 报告汇总
    $display("\n============================================");
    u_mon.report_stats();
    u_cov.report_coverage();
    u_sb.report();
    uvm_shim::uvm_report_summary();
    $display("============================================");
    $display(" V1 Result: PASS=%0d FAIL=%0d", pass_count, fail_count);
    $display("============================================\n");

    // 导出覆盖率和跟踪
    if ($test$plusargs("dump_cov"))
      u_cov.dump_coverage("tests/results/v1-coverage.dat");
    if ($test$plusargs("dump_trace"))
      u_mon.dump_trace("tests/results/v1-trace.dat");

    $finish;
  end

  // ─── 超时保护 ──────────────────────────────────────────────
  initial begin
    #50_000_000; // 50ms
    $display("[TIMEOUT] Simulation timeout at %0t", $time);
    $finish;
  end

  // ─── VCD Dump ──────────────────────────────────────────────
  initial begin
    if ($test$plusargs("vcd")) begin
      $dumpfile("lumi_v1_tb.vcd");
      $dumpvars(0, lumi_v1_tb_top);
    end
  end

endmodule
