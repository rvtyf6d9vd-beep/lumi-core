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
  wire [31:0] v1_dc_wdata      = u_dut.dc_wdata;
  wire [3:0]  v1_dc_be         = u_dut.dc_be;

  // ─── SRAM Write Trace: 记录所有 SRAM 写入 ──────────────────
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (v1_dc_valid && v1_dc_we) begin
        // Log stores to diagnostic area + results area + list area
        if (v1_dc_addr >= 32'h3FF00 && v1_dc_addr < 32'h40000)
          $display("[DIAG-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b ready=%0b",
                   cycle_count, v1_dc_addr, v1_dc_wdata, v1_dc_be, v1_dc_ready);
        if (v1_dc_addr[17:2] >= 65528 && v1_dc_addr[17:2] <= 65533)
          $display("[SRAM-WR] *** BENCHMARK RESULT AREA WRITE! ***");
        // Log ALL stores to results+list area (0x7AB0-0x8300) — covers memblock ptrs + list data
        if (v1_dc_addr >= 32'h7AB0 && v1_dc_addr < 32'h8300)
          $display("[LIST-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b ready=%0b",
                   cycle_count, v1_dc_addr, v1_dc_wdata, v1_dc_be, v1_dc_ready);
        // CODE-SECTION WRITE DETECTOR: any store to code region (0x0000-0x73B7) is suspicious
        if (v1_dc_addr < 32'h73B8)
          $display("[CODE-WR] cyc=%0d addr=0x%08h data=0x%08h be=%04b",
                   cycle_count, v1_dc_addr, v1_dc_wdata, v1_dc_be);
      end
    end
  end

  // ─── SRAM Read Trace: 记录所有 SRAM 读 (load) ──────────────
  wire [31:0] v1_dc_rdata = u_dut.dc_rdata;
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (v1_dc_valid && !v1_dc_we) begin
        if (cycle_count < 1000)
          $display("[SRAM-RD] cyc=%0d addr=0x%08h idx=%0d rdata=0x%08h",
                   cycle_count, v1_dc_addr, v1_dc_addr[17:2], v1_dc_rdata);
      end

    end
  end

  // ─── Trap Diagnostic: 记录所有 trap 事件 ──────────────────
  wire w_trap_req  = u_dut.gen_single_core.u_core.trap_request;
  wire [31:0] w_trap_pc = u_dut.gen_single_core.u_core.trap_pc;
  wire [31:0] w_csr_mcause = u_dut.gen_single_core.u_core.u_writeback.trap_cause;
  wire [31:0] w_csr_mepc   = u_dut.u_csr.mepc_r;
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (w_trap_req) begin
        $display("[TRAP] cyc=%0d trap_pc=0x%08h cause=%0d mepc=0x%08h",
                 cycle_count, w_trap_pc, w_csr_mcause, w_csr_mepc);
      end
    end
  end

  // ─── ERR-130 Debug: removed (fixed in a23d197) ──
  // ─── ERR-131 Debug: removed (fixed in 56b25a4) ──

  // ─── ERR-131L: 追踪 pointer store 0x4DB8 是否被执行 + 首次 mispredict ──
  initial begin
    logic ptr_store_seen;
    logic first_mispred_logged;
    wait(reset_n);
    ptr_store_seen = 0;
    first_mispred_logged = 0;
    forever begin
      @(posedge clk_core);
      // 检查 pointer store commit
      if (!ptr_store_seen && commit_valid_all[0] && commit_pc_packed[0] == 32'h4DB8) begin
        ptr_store_seen = 1;
        $display("[PTR-STORE] cyc=%0d pc=0x4DB8 COMMITTED (pointer store executed)", cycle_count);
      end
      // 检查首次 mispredict (after BSS clear ~120K)
      if (!first_mispred_logged && cycle_count > 152253 && cycle_count < 152540 &&
          u_dut.gen_single_core.u_core.e1_mispredict) begin
        first_mispred_logged = 1;
        $display("[FIRST-MISP] cyc=%0d br_pc=0x%08h br_taken=%0b pred_taken=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.e1_br_pc,
                 u_dut.gen_single_core.u_core.e1_br_taken,
                 u_dut.gen_single_core.u_core.e1_pred_taken_r);
      end
      // 追踪 pc_reg=0x2C 时的 F1 预测 (BSS clear JAL)
      if (cycle_count > 119980 && cycle_count < 120010 &&
          u_dut.gen_single_core.u_core.u_fetch.pc_reg == 32'h2C) begin
        $display("[F1-JAL] cyc=%0d pc_reg=0x%08h f1_pred_taken=%0b f2_icache_word3=0x%08h btb_hit=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.u_fetch.pc_reg,
                 u_dut.gen_single_core.u_core.u_fetch.f1_pred_taken_comb,
                 u_dut.gen_single_core.u_core.u_fetch.f2_icache_data[127:96],
                 u_dut.gen_single_core.u_core.u_fetch.btb_hit);
      end
      // 追踪 bgeu 0x20 在 E1 的评估
      if (cycle_count > 119995 && cycle_count < 120010 &&
          u_dut.gen_single_core.u_core.e1_br_pc == 32'h20) begin
        $display("[E1-BGEU] cyc=%0d br_pc=0x%08h br_taken=%0b mispredict=%0b e1_has_branch=%0b e1_pred_taken_r=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.e1_br_pc,
                 u_dut.gen_single_core.u_core.e1_br_taken,
                 u_dut.gen_single_core.u_core.e1_mispredict,
                 u_dut.gen_single_core.u_core.e1_has_branch,
                 u_dut.gen_single_core.u_core.e1_pred_taken_r);
      end
      // ERR-131L: 追踪 pd_pred_taken_r 在 DIB 写入时的值
      if (cycle_count >= 119996 && cycle_count <= 120002) begin
        $display("[PRED-DBG] cyc=%0d pd_pred_taken=%0b pd_pred_taken_r=%0b f2_pd_pred_taken=%0b pd_advance=%0b dib_wr_offset=%0d",
                 cycle_count,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_pred_taken,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_pred_taken_r,
                 u_dut.gen_single_core.u_core.f2_pd_pred_taken,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_advance,
                 u_dut.gen_single_core.u_core.u_decode_issue.dib_wr_offset);
      end
      // ERR-131L: 追踪 F1 预测机制 (btb_hit, grp_found, f1_pred_taken_comb)
      if (cycle_count >= 119998 && cycle_count <= 120000 &&
          u_dut.gen_single_core.u_core.u_fetch.pc_reg == 32'h20) begin
        $display("[F1-PRED] cyc=%0d pc=0x20 btb_hit=%0b grp_found=%0b f1_pred_taken=%0b f1_btb_hit=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.u_fetch.btb_hit,
                 u_dut.gen_single_core.u_core.u_fetch.grp_found,
                 u_dut.gen_single_core.u_core.u_fetch.f1_pred_taken_comb,
                 u_dut.gen_single_core.u_core.u_fetch.f1_btb_hit_comb);
      end
      // ERR-131L: 追踪 JAL 0x2C issue 时的 pred_taken
      if (cycle_count > 119990 && cycle_count < 120015 &&
          u_dut.gen_single_core.u_core.u_decode_issue.i_issue[0].pc == 32'h2C &&
          u_dut.gen_single_core.u_core.u_decode_issue.i_issue_valid[0]) begin
        $display("[JAL-ISSUE] cyc=%0d pc=0x2C i_pred_taken=%0b dib_bp_hit=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.u_decode_issue.i_pred_taken,
                 u_dut.gen_single_core.u_core.u_decode_issue.dib_bp_hit);
      end
      // ERR-131L: 追踪 bgeu 误预测时的 e1_valid_r
      if (cycle_count >= 152250 && cycle_count <= 152260) begin
        $display("[E1-VALID] cyc=%0d e1_valid=%0b e1_br_taken=%0b e1_mispredict=%0b e1_br_pc=0x%08h i_valid=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.e1_valid_r,
                 u_dut.gen_single_core.u_core.e1_br_taken,
                 u_dut.gen_single_core.u_core.e1_mispredict,
                 u_dut.gen_single_core.u_core.e1_br_pc,
                 u_dut.gen_single_core.u_core.i_valid);
      end
      // ERR-131L: 追踪 bgeu 误预测时的 e1_valid_r 和 I→E1 clear
      if (cycle_count >= 152250 && cycle_count <= 152260) begin
        $display("[E1-VALID] cyc=%0d e1_valid=%0b e1_br_taken=%0b e1_mispredict=%0b e1_br_pc=0x%08h i_valid=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.e1_valid_r,
                 u_dut.gen_single_core.u_core.e1_br_taken,
                 u_dut.gen_single_core.u_core.e1_mispredict,
                 u_dut.gen_single_core.u_core.e1_br_pc,
                 u_dut.gen_single_core.u_core.i_valid);
      end
      // 打印 cycle 119998-120006 的 pc_reg
      if (cycle_count >= 119998 && cycle_count <= 120006) begin
        $display("[PC-TRACE] cyc=%0d pc_reg=0x%08h",
                 cycle_count, u_dut.gen_single_core.u_core.u_fetch.pc_reg);
      end
      // 如果到了 CODE-WR cycle 还没看到 pointer store
      if (!ptr_store_seen && cycle_count == 152540) begin
        $display("[PTR-STORE] cyc=152540 pointer store 0x4DB8 NEVER COMMITTED!");
      end
    end
  end

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

  // ─── DEBUG: 提交指令追踪 + 无效 PC 检测 ──────────────────────
  // SA-CM-011: extend to detect first invalid PC transition
  initial begin
    logic first_invalid_reported;
    int  last_valid_pc;
    wait(reset_n);
    first_invalid_reported = 0;
    last_valid_pc = 0;
    forever begin
      @(posedge clk_core);
      if (|commit_valid_all) begin
        // Print commit trace only when +dump_trace is active
        if ($test$plusargs("dump_trace")) begin
          for (int s = 0; s < 3; s++) begin
            if (commit_valid_all[s]) begin
              $display("[CMT-DBG] cyc=%0d s=%0d pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h",
                       cycle_count, s, commit_pc_packed[s], commit_inst_packed[s],
                       commit_rd_packed[s], commit_rd_data_packed[s], commit_inst_packed[s][6:0]);
            end
          end
        end
        // ERR-131 residual: cycle-gated trace for code section corruption diagnosis
        if (cycle_count >= 170671 && cycle_count <= 170681) begin
          for (int s = 0; s < 3; s++) begin
            if (commit_valid_all[s]) begin
              $display("[DIAG-170K] cyc=%0d s=%0d pc=0x%08h inst=0x%08h rd=x%0d rdata=0x%08h op=0x%02h",
                       cycle_count, s, commit_pc_packed[s], commit_inst_packed[s],
                       commit_rd_packed[s], commit_rd_data_packed[s], commit_inst_packed[s][6:0]);
            end
          end
        end
        // SA-CM-011: detect first transition to invalid PC
        if (!first_invalid_reported && commit_valid_all[0]) begin
          if (commit_pc_packed[0] > 32'h0008_0000) begin
            first_invalid_reported = 1;
            $display("[INVALID-PC] cyc=%0d: PC jumped to 0x%08h (last valid: 0x%08h)",
                     cycle_count, commit_pc_packed[0], last_valid_pc);
            // Print last 10 PCs from scoreboard
            $display("[INVALID-PC] Last 10 PCs from scoreboard:");
            for (int i = 0; i < 10; i++)
              $display("  [%0d] pc=0x%08h", i, u_sb.last_10_pc[i]);
          end
          if (commit_pc_packed[0] <= 32'h0008_0000)
            last_valid_pc = commit_pc_packed[0];
        end
      end
    end
  end

  // ── Phase 3: Fetch Stage Debugging ───────────────────────────────
  // ERR-131 residual: every-cycle flush/DIB trace
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (cycle_count >= 152550 && cycle_count <= 152570) begin
        $display("[DIAG-FL] cyc=%0d mispred=%0b dib_cnt=%0d pd_valid=%06b pd_pc0=0x%08h wait_fresh=%0b pd_adv=%0b issue_cnt=%0d pipe_stall=%0b e1_br=%0b mem_busy=%0b",
                 cycle_count,
                 u_dut.gen_single_core.u_core.e1_mispredict,
                 u_dut.gen_single_core.u_core.u_decode_issue.dib_count,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_inst_valid_r,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_inst_pc_r[0],
                 u_dut.gen_single_core.u_core.u_decode_issue.wait_for_fresh_r,
                 u_dut.gen_single_core.u_core.u_decode_issue.pd_advance,
                 u_dut.gen_single_core.u_core.u_decode_issue.issue_count,
                 u_dut.gen_single_core.u_core.u_decode_issue.pipe_stall,
                 u_dut.gen_single_core.u_core.e1_has_branch,
                 u_dut.gen_single_core.u_core.mem_busy);
      end
    end
  end

  // Task 3.3: PC alignment monitoring
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (cycle_count < 1000 || cycle_count > 169000) begin
        // Check F2 PC alignment
        logic [31:0] f2_pc = u_dut.gen_single_core.u_core.f2_pc;
        if (f2_pc[0] != 1'b0) begin
          $error("[FETCH-PC] cyc=%0d: F2 PC not 2-byte aligned: 0x%08h", cycle_count, f2_pc);
        end
        // Check commit PC alignment
        for (int s = 0; s < 3; s++) begin
          if (u_dut.gen_single_core.u_core.commit_valid[s]) begin
            logic [31:0] pc = u_dut.gen_single_core.u_core.commit_pc[s];
            if (pc[0] != 1'b0) begin
              $error("[FETCH-PC] cyc=%0d: Commit PC %0d not 2-byte aligned: 0x%08h", cycle_count, s, pc);
            end
          end
        end
      end
    end
  end

  // Task 3.4: Predecode boundary integrity tracing
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (cycle_count < 1000 || cycle_count > 169000) begin
        logic [4:0] pd_bytes_consumed = u_dut.gen_single_core.u_core.pd_bytes_consumed;
        logic [3:0] pd_inst_count = u_dut.gen_single_core.u_core.pd_inst_count;
        logic [15:0] pd_carry_hw = u_dut.gen_single_core.u_core.pd_carry_hw_out;
        logic pd_carry_valid = u_dut.gen_single_core.u_core.pd_carry_valid_out;
        
        // Print predecode info for debugging
        if (pd_bytes_consumed != 5'h0) begin
          $display("[PREDEC-DBG] cyc=%0d bytes_consumed=%0d inst_count=%0d carry_hw=0x%04h carry_valid=%0b",
                   cycle_count, pd_bytes_consumed, pd_inst_count, pd_carry_hw, pd_carry_valid);
        end
      end
    end
  end

  // Task 3.5: Branch prediction target tracing
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (cycle_count < 1000 || cycle_count > 169000) begin
        logic [31:0] f2_pred_target = u_dut.gen_single_core.u_core.f2_pred_target;
        logic f2_pred_taken = u_dut.gen_single_core.u_core.f2_pred_taken;
        
        // Print branch prediction info
        if (f2_pred_taken) begin
          $display("[BRANCH-DBG] cyc=%0d pred_taken=%0b pred_target=0x%08h",
                   cycle_count, f2_pred_taken, f2_pred_target);
        end
      end
    end
  end

  // ── Bug#5 Debug: 追踪 load 写寄存器 + beq 操作数 ──
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      // 追踪 W 级写寄存器 (前 30 周期)
      if (cycle_count < 30) begin
        for (int w = 0; w < 2; w++) begin
          if (u_dut.gen_single_core.u_core.rf_wr_en[w] &&
              u_dut.gen_single_core.u_core.rf_wr_addr[w] != 5'h0) begin
            $display("[RF-WR] cyc=%0d port=%0d rd=x%0d data=0x%08h",
                     cycle_count, w,
                     u_dut.gen_single_core.u_core.rf_wr_addr[w],
                     u_dut.gen_single_core.u_core.rf_wr_data[w]);
          end
        end
        // 追踪 commit 的 branch 指令
        for (int s = 0; s < 3; s++) begin
          if (commit_valid_all[s] && commit_pc_packed[s] == 32'h30) begin
            $display("[BEQ-CMT] cyc=%0d pc=0x%08h inst=0x%08h",
                     cycle_count, commit_pc_packed[s], commit_inst_packed[s]);
          end
        end
      end
    end
  end

  // ── BUG-009 Debug: 未对齐拆分事件 trace ──
  wire        w_ma_active   = u_dut.gen_single_core.u_core.u_memory.ma_active_r;
  wire [1:0]  w_ma_slot     = u_dut.gen_single_core.u_core.u_memory.ma_slot_r;
  wire        w_ma_is_load  = u_dut.gen_single_core.u_core.u_memory.ma_is_load_r;
  wire [2:0]  w_ma_funct3   = u_dut.gen_single_core.u_core.u_memory.ma_funct3_r;
  wire [31:0] w_ma_wdata    = u_dut.gen_single_core.u_core.u_memory.ma_wdata_r;
  wire [31:0] w_ma_load_lo  = u_dut.gen_single_core.u_core.u_memory.ma_load_lo_r;
  wire [31:0] w_ma_orig_addr = u_dut.gen_single_core.u_core.u_memory.m1_mem_addr[w_ma_slot];
  wire [31:0] w_ma_ovr_addr  = u_dut.gen_single_core.u_core.u_memory.lsu_addr[w_ma_slot];
  wire [3:0]  w_ma_be        = u_dut.gen_single_core.u_core.u_memory.lsu_be[w_ma_slot];
  wire [31:0] w_ma_aligned   = u_dut.gen_single_core.u_core.u_memory.lsu_aligned_data[w_ma_slot];
  wire [31:0] w_ma_rdata     = u_dut.gen_single_core.u_core.u_memory.mem_rdata_in;

  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (w_ma_active && cycle_count < 500000) begin
        $display("[MA-SPLIT] cyc=%0d slot=%0d load=%0b funct3=%03b orig_addr=0x%08h ovr_addr=0x%08h be=%04b wdata=0x%08h aligned=0x%08h rdata=0x%08h lo_r=0x%08h",
                 cycle_count, w_ma_slot, w_ma_is_load, w_ma_funct3,
                 w_ma_orig_addr, w_ma_ovr_addr, w_ma_be, w_ma_wdata,
                 w_ma_aligned, w_ma_rdata, w_ma_load_lo);
      end
    end
  end

  // ── Phase 2: 6级流水线 PC 对齐 trace (PC=0x28-0x3c) ──
  initial begin
    wait(reset_n);
    forever begin
      @(posedge clk_core);
      if (cycle_count < 30) begin
        // E1 级 (all slots)
        for (int s = 0; s < 3; s++) begin
          if (u_dut.gen_single_core.u_core.e1_valid_r[s])
            $display("[E1] cyc=%0d s=%0d pc=0x%04h fu=%0d rd=%0d v=%0b mem_busy=%0b",
                     cycle_count, s,
                     u_dut.gen_single_core.u_core.e1_inst_r[s].pc,
                     u_dut.gen_single_core.u_core.e1_inst_r[s].fu_type,
                     u_dut.gen_single_core.u_core.e1_inst_r[s].rd,
                     u_dut.gen_single_core.u_core.e1_valid_r[s],
                     u_dut.gen_single_core.u_core.mem_busy);
        end
        // M 级
        for (int s = 0; s < 3; s++) begin
          if (u_dut.gen_single_core.u_core.m_valid_r[s])
            $display("[M ] cyc=%0d s=%0d pc=0x%04h fu=%0d rd=%0d result=0x%08h mem_busy=%0b",
                     cycle_count, s,
                     u_dut.gen_single_core.u_core.m_inst_r[s].pc,
                     u_dut.gen_single_core.u_core.m_inst_r[s].fu_type,
                     u_dut.gen_single_core.u_core.m_inst_r[s].rd,
                     u_dut.gen_single_core.u_core.m_result_r[s],
                     u_dut.gen_single_core.u_core.mem_busy);
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
    .commit_rd_data   (commit_rd_data_packed),
    .v1_dc_valid      (v1_dc_valid),
    .v1_dc_we         (v1_dc_we),
    .v1_dc_addr       (v1_dc_addr),
    .v1_dc_wdata      (v1_dc_wdata)
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
    stall_timeout    = 10_000_000; // 10M cycles without commit = stall
    last_progress_cyc = 0;
    stall_detected   = 1'b0;
    wait(reset_n);
    forever begin
      #(CLK_PERIOD_CORE * 2_000_000);  // 每 2M 周期
      $display("[PROGRESS] cycle=%0d retired=%0d we_count=%0d mem_busy=%0b pc0=0x%08h",
               cycle_count, mon_total_retired, v1_we_count, mon_mem_busy, commit_pc_0);
      // SA-CM-011: tohost 检测 — 检查 0x3FFE0 magic 值
      // 0x3FFE0 / 4 = 65528
      if (u_dut.v1_sram[65528] == 32'hDEADBEEF) begin
        $display("[PROGRESS] tohost: magic=0xDEADBEEF detected at 0x3FFE0");
        $display("[PROGRESS] bench_id=%0d iters=%0d ticks=%0d metric=%0d checks=%0d",
                 u_dut.v1_sram[65529], u_dut.v1_sram[65530], u_dut.v1_sram[65531],
                 u_dut.v1_sram[65532], u_dut.v1_sram[65533]);
      end
      if (u_dut.v1_sram[65528] == 32'hDEAD0001) begin
        $display("[PROGRESS] TRAP detected: magic=0xDEAD0001 mcause=0x%08h mepc=0x%08h",
                 u_dut.v1_sram[65529], u_dut.v1_sram[65530]);
      end
      // SA-CM-011: 无效 PC 检测 — PC 超出程序范围时报警
      if (commit_pc_0 > 32'h0010_0000 && commit_pc_0 < 32'hFFF0_0000) begin
        $display("[PROGRESS] WARNING: PC in suspicious range 0x%08h", commit_pc_0);
      end
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
      // 0x3FFE0 / 4 = 65528
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

  // ERR-131L: 检查 seed4_volatile (0x7A98) 初始值
  initial begin
    wait(reset_n);
    #1;
    $display("[SEED-CHK] sram[0x7A98/4=%0d] = 0x%08h (expect 0x00000032=50)",
             32'h7A98 >> 2, u_dut.v1_sram[32'h7A98 >> 2]);
    $display("[SEED-CHK] sram[0x7A9C/4=%0d] = 0x%08h (expect 0x00000066)",
             32'h7A9C >> 2, u_dut.v1_sram[32'h7A9C >> 2]);
  end

endmodule
