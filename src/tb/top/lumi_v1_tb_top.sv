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
  logic         m_axi_awvalid, m_axi_awready, m_axi_arvalid, m_axi_arready;
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
  // ERR-026 调试: 暴露 SRAM 写入跟踪
  wire [31:0] v1_we_count      = u_dut.sram_we_count;

  // 周期性打印 V1 SRAM 状态 (前 50 周期, 用于调试) — 已注释保留 (ERR-019 调试)
  // wire w_dec_stall = u_dut.gen_single_core.u_core.dec_stall;
  // wire w_f2_valid  = u_dut.gen_single_core.u_core.f2_valid;
  // wire [31:0] w_f2_pc = u_dut.gen_single_core.u_core.f2_pc;
  // initial begin
  //   wait(reset_n);
  //   for (int i = 0; i < 50; i++) begin
  //     @(posedge clk_core);
  //     if (commit_valid_all != 3'b0 || w_dec_stall || w_f2_valid)
  //     $display("[DBG] cyc=%0d commit=%b pc0=0x%08h f2v=%b f2pc=0x%08h stall=%b",
  //              i, commit_valid_all, commit_pc_0, w_f2_valid, w_f2_pc, w_dec_stall);
  //   end
  // end

  // ─── DBG: CoreMark 卡死诊断 (前 1000 周期) ──────────────────
  // 已注释保留 (ERR-025 诊断): 显示 dec_stall + dc_ready + 当前 PC, 用于诊断 sw stall
  // initial begin
  //   logic [31:0] last_pc0;
  //   int stall_count;
  //   wait (reset_n);
  //   last_pc0 = 32'h0;
  //   stall_count = 0;
  //   for (int i = 0; i < 5000; i++) begin
  //     @(posedge clk_core);
  //     if (commit_valid_all[0] && commit_pc_0 == 32'h24) begin
  //       $display("[STALL-DBG] cyc=%0d: sw zero 0x24 committed", i);
  //       stall_count = 0;
  //     end else if (commit_valid_all == 3'b0) begin
  //       stall_count++;
  //       if (stall_count == 1000 || stall_count == 5000 || stall_count == 10000 || stall_count == 50000 || stall_count == 100000) begin
  //         $display("[STALL-DBG] cyc=%0d: NO commit for %0d cycles, f2_pc=0x%08h dc_valid=%b dc_we=%b dc_ready=%b dc_addr=0x%08h",
  //                  i, stall_count, u_dut.gen_single_core.u_core.f2_pc,
  //                  v1_dc_valid, v1_dc_we, v1_dc_ready, v1_dc_addr);
  //       end
  //     end else begin
  //       stall_count = 0;
  //     end
  //   end
  // end

  // ─── DEBUG: 提交指令追踪 ────────────────────────────────
  initial begin
    wait(reset_n);
    for (int d = 0; d < 200; d++) begin
      @(posedge clk_core);
      if (|commit_valid_all) begin
        for (int s = 0; s < 3; s++) begin
          if (commit_valid_all[s]) begin
            $display("[CMT-DBG] cyc=%0d s=%0d pc=0x%08h inst=0x%08h raw=0x%04h comp=%b op=0x%02h",
                     d, s, commit_pc_packed[s], commit_inst_packed[s], commit_inst_raw_packed[s],
                     (commit_inst_raw_packed[s][1:0] != 2'b11), commit_inst_packed[s][6:0]);
          end
        end
      end
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
      // 调试: 验证加载
      $display("[V1-DEBUG] v1_sram[0]=0x%08h v1_sram[1]=0x%08h v1_sram[2]=0x%08h",
               u_dut.v1_sram[0], u_dut.v1_sram[1], u_dut.v1_sram[2]);
      $display("[V1-DEBUG] v1_sram[3]=0x%08h v1_sram[4]=0x%08h",
               u_dut.v1_sram[3], u_dut.v1_sram[4]);
      $display("[V1-DEBUG] v1_sram[0x4000]=0x%08h v1_sram[0x4001]=0x%08h",
               u_dut.v1_sram[16384], u_dut.v1_sram[16385]);
      $display("[V1-DEBUG] v1_sram[0x4002]=0x%08h v1_sram[0x4003]=0x%08h",
               u_dut.v1_sram[16386], u_dut.v1_sram[16387]);
      $display("[V1-DEBUG] v1_sram[6]=0x%08h v1_sram[7]=0x%08h v1_sram[8]=0x%08h v1_sram[9]=0x%08h",
               u_dut.v1_sram[6], u_dut.v1_sram[7], u_dut.v1_sram[8], u_dut.v1_sram[9]);
      $display("[V1-DEBUG] v1_sram[10]=0x%08h v1_sram[11]=0x%08h v1_sram[12]=0x%08h v1_sram[13]=0x%08h",
               u_dut.v1_sram[10], u_dut.v1_sram[11], u_dut.v1_sram[12], u_dut.v1_sram[13]);
      // ERR-RAS-DBG: 验证 0x3010-0x3020 区域 SRAM 内容
      $display("[V1-DEBUG] v1_sram[0xC04]=0x%08h v1_sram[0xC05]=0x%08h v1_sram[0xC06]=0x%08h v1_sram[0xC07]=0x%08h",
               u_dut.v1_sram[3076], u_dut.v1_sram[3077], u_dut.v1_sram[3078], u_dut.v1_sram[3079]);
    end else begin
      $display("[V1-DEBUG] No itcm_file plusarg");
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

  // ─── ERR-027 调试: 进度监控器 (每 2M 周期) ─────────────
  // SA-CM-AUDIT-002 FIX: 增加停滞检测 (STALL_TIMEOUT cycles 无 commit 则终止)
  wire [31:0] mon_total_retired = u_sb.total_retired;
  wire [31:0] mon_pc_0 = u_dut.gen_single_core.u_core.m_result_r[0];
  wire        mon_mem_busy = u_dut.gen_single_core.u_core.mem_busy;

  // SA-CM-AUDIT-002: stall detection signals
  int unsigned stall_timeout;    // stall detection window (cycles)
  int unsigned last_progress_cyc; // cycle count at last retired instruction
  bit          stall_detected;

  initial begin
    stall_timeout    = 2_000_000; // 2M cycles without commit = stall
    last_progress_cyc = 0;
    stall_detected   = 1'b0;
    wait(reset_n);
    forever begin
      #(CLK_PERIOD_CORE * 2_000_000);  // 每 2M 周期
      $display("[PROGRESS] cycle=%0d retired=%0d we_count=%0d mem_busy=%0b pc0=0x%08h",
               cycle_count, mon_total_retired, v1_we_count, mon_mem_busy, commit_pc_0);
      // ERR-043: 安全超时 (防止 Verilator wait() 未触发)
      if (cycle_count > 32'd4_000_000_000) begin
        $display("[PROGRESS] SAFETY TIMEOUT at %0d cycles", cycle_count);
        $finish;
      end
    end
  end

  // SA-CM-AUDIT-002: per-cycle stall detection monitor
  always_ff @(posedge clk_core or negedge reset_n) begin
    if (!reset_n) begin
      last_progress_cyc <= 0;
      stall_detected    <= 1'b0;
    end else begin
      // Any commit resets the stall timer
      if (|commit_valid_all)
        last_progress_cyc <= cycle_count;
      // If no commit for stall_timeout cycles, flag stall
      else if ((cycle_count - last_progress_cyc) > stall_timeout)
        stall_detected <= 1'b1;
    end
  end

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

    // ERR-025 验证: 实时 trace 监控 (同时 +dump_trace 即启用)
    if ($test$plusargs("dump_trace")) begin
      u_mon.enable_realtime_trace("tests/results/v1-realtime-trace.dat");
    end

    // 等待 scoreboard 检测结束 或 超时 或 停滞
    // ERR-043 修复: Verilator --timing 模式下 wait(level-sensitive) 调度不可靠,
    // 改用 edge-triggered 循环确保超时条件被及时评估
    // SA-CM-AUDIT-002: 增加 stall_detected 条件, 卡死时自动终止
    begin
      int unsigned max_cyc;
      max_cyc = 10_000_000; // 默认 10M 周期
      if ($value$plusargs("max_cycles=%d", max_cyc))
        $display("[V1] max_cycles = %0d", max_cyc);
      @(posedge clk_core);
      while (!(u_sb.test_done || cycle_count > max_cyc || stall_detected))
        @(posedge clk_core);
    end
    if (u_sb.test_done) begin
      #100;
      if (u_sb.exit_code == 0) begin
        pass_count++;
        $display("[V1] TEST PASS (exit_code=0, %0d cycles)", cycle_count);
      end else begin
        fail_count++;
        $display("[V1] TEST FAIL (exit_code=0x%08h)", u_sb.exit_code);
      end
    end else if (stall_detected) begin
      fail_count++;
      $display("[V1] TEST STALL (%0d cycles, no commit for 2M cycles, pc0=0x%08h)",
               cycle_count, commit_pc_0);
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
    if ($test$plusargs("dump_trace")) begin
      u_mon.disable_realtime_trace();  // 先关闭实时,避免双写
      u_mon.dump_trace("tests/results/v1-trace.dat");
    end

    // ─── V1 Benchmark Result Dump (0x3FFE0) ─────────────────────
    begin
      // 0x3FFE0 / 4 = 65528 = 0xFFF8
      logic [31:0] r_magic, r_bench_id, r_iters, r_ticks, r_metric, r_checks;
      r_magic    = u_dut.v1_sram[65528]; // 0x3FFE0
      r_bench_id = u_dut.v1_sram[65529]; // 0x3FFE4
      r_iters    = u_dut.v1_sram[65530]; // 0x3FFE8
      r_ticks    = u_dut.v1_sram[65531]; // 0x3FFEC
      r_metric   = u_dut.v1_sram[65532]; // 0x3FFF0
      r_checks   = u_dut.v1_sram[65533]; // 0x3FFF4
      $display("\n============================================");
      $display(" V1 Benchmark Results (0x3FFE0)");
      $display("============================================");
      $display(" magic      = 0x%08h %s", r_magic,
               (r_magic == 32'hDEADBEEF) ? "(VALID)" : "(INVALID - benchmark did not write results)");
      $display(" bench_id   = %0d %s", r_bench_id,
               (r_bench_id == 1) ? "(CoreMark)" : (r_bench_id == 2) ? "(Dhrystone)" : "(unknown)");
      $display(" iterations = %0d", r_iters);
      $display(" total_ticks= %0d", r_ticks);
      $display(" metric_x100= %0d", r_metric);
      $display(" checks     = %0d %s", r_checks, (r_checks == 0) ? "(PASS)" : "(FAIL)");
      $display("============================================");
      $display(" [ERR-026-DBG] SRAM write count: %0d", v1_we_count);
      $display(" [ERR-026-DBG] v1_sram[65528]=0x%08h (should be 0xDEADBEEF if written)",
               u_dut.v1_sram[65528]);
      $display(" [ERR-026-DBG] v1_sram[65529]=0x%08h (should be 1 for CoreMark)",
               u_dut.v1_sram[65529]);
      $display("============================================\n");
    end

    $finish;
  end

  // ─── 超时保护 ──────────────────────────────────────────────
  initial begin
    // ERR-026 修复: 8s→64s sim time, 800M cycles @ 50MHz = 16s, 64s 充分覆盖
    #64_000_000_000; // 64 seconds simulation time (3.2B cycles at 50MHz)
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
