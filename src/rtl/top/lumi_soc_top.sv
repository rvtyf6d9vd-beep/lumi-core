// =================================================================
// LUMI-DESIGN-TOP | 需求: LUMI-TOP-001 | 承接: design/*.html (全部模块)
// 模块: lumi_soc_top — SoC 顶层集成 (D-018 参数化 generate)
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_soc_top #(
    parameter int NUM_HARTS   = lumi_pkg::NUM_HARTS,
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    clk_bus,
    input  logic                    reset_n,

    // ── AXI4 Master 接口 (128bit data) ────────────────────────
    output logic [3:0]              m_axi_awid,
    output logic [31:0]             m_axi_awaddr,
    output logic [7:0]              m_axi_awlen,
    output logic [2:0]              m_axi_awsize,
    output logic [1:0]              m_axi_awburst,
    output logic                    m_axi_awvalid,
    input  logic                    m_axi_awready,
    output logic [127:0]            m_axi_wdata,
    output logic [15:0]             m_axi_wstrb,
    output logic                    m_axi_wlast,
    output logic                    m_axi_wvalid,
    input  logic                    m_axi_wready,
    input  logic [3:0]              m_axi_bid,
    input  logic [1:0]              m_axi_bresp,
    input  logic                    m_axi_bvalid,
    output logic                    m_axi_bready,
    output logic [3:0]              m_axi_arid,
    output logic [31:0]             m_axi_araddr,
    output logic [7:0]              m_axi_arlen,
    output logic [2:0]              m_axi_arsize,
    output logic [1:0]              m_axi_arburst,
    output logic                    m_axi_arvalid,
    input  logic                    m_axi_arready,
    input  logic [3:0]              m_axi_rid,
    input  logic [127:0]            m_axi_rdata,
    input  logic [1:0]              m_axi_rresp,
    input  logic                    m_axi_rlast,
    input  logic                    m_axi_rvalid,
    output logic                    m_axi_rready,

    // ── JTAG 接口 ─────────────────────────────────────────────
    input  logic                    jtag_tck,
    input  logic                    jtag_tms,
    input  logic                    jtag_tdi,
    output logic                    jtag_tdo,
    input  logic                    jtag_trst_n,

    // ── 外部中断 ──────────────────────────────────────────────
    input  logic [31:0]             ext_irq,
    input  logic [lumi_pkg::CLIC_INT_INPUTS-1:0] local_irq,

    // ── Debug ─────────────────────────────────────────────────
    input  logic                    debug_halt
);

    import lumi_pkg::*;

    // ─── 内部连线 ─────────────────────────────────────────────
    // ICache ↔ AXI
    logic [31:0]                    ic_addr;
    logic [127:0]                   ic_data;
    logic                           ic_valid;
    logic                           ic_req_valid;

    // DCache ↔ AXI
    logic [31:0]                    dc_addr, dc_wdata;
    logic [31:0]                    dc_rdata;
    logic                           dc_we;
    logic [3:0]                     dc_be;
    logic                           dc_valid, dc_ready, dc_hit;

    // RegFile
    logic [4:0]                     rf_rs1_addr [ISSUE_WIDTH-1:0];
    logic [4:0]                     rf_rs2_addr [ISSUE_WIDTH-1:0];
    logic [31:0]                    rf_rs1_data [ISSUE_WIDTH-1:0];
    logic [31:0]                    rf_rs2_data [ISSUE_WIDTH-1:0];
    logic [1:0]                     rf_wr_en;
    logic [4:0]                     rf_wr_addr [1:0];
    logic [31:0]                    rf_wr_data [1:0];

    // CSR
    logic [11:0]                    csr_addr;
    logic [31:0]                    csr_rdata, csr_wdata;
    logic                           csr_we;
    logic [1:0]                     csr_op;
    logic [31:0]                    mstatus_out, mtvec_out;

    // Commit
    logic [ISSUE_WIDTH-1:0]         commit_valid;
    logic [31:0]                    commit_pc [ISSUE_WIDTH-1:0];
    logic [31:0]                    commit_result [ISSUE_WIDTH-1:0];

    // Interrupt
    logic                           irq_request;

    // ─── Core Top 实例化 (单核模式, D-018 generate 切换多核) ─
    generate
        if (NUM_HARTS == 1) begin : gen_single_core
            lumi_core_top #(
                .ISSUE_WIDTH (ISSUE_WIDTH),
                .HART_ID     (0)
            ) u_core (
                .clk_core        (clk_core),
                .reset_n         (reset_n),
                .ic_addr         (ic_addr),
                .ic_data         (ic_data),
                .ic_valid        (ic_valid),
                .ic_req_valid    (ic_req_valid),
                .dc_addr         (dc_addr),
                .dc_wdata        (dc_wdata),
                .dc_rdata        (dc_rdata),
                .dc_we           (dc_we),
                .dc_be           (dc_be),
                .dc_valid        (dc_valid),
                .dc_ready        (dc_ready),
                .dc_hit          (dc_hit),
                .irq_request     (irq_request),
                .irq_id          (clic_irq_id),
                .irq_level       (clic_irq_level_out),
                .csr_addr        (csr_addr),
                .csr_rdata       (csr_rdata),
                .csr_wdata       (csr_wdata),
                .csr_we          (csr_we),
                .csr_op          (csr_op),
                .mstatus_out     (mstatus_out),
                .mtvec_out       (mtvec_out),
                .debug_halt      (debug_halt),
                .commit_valid    (commit_valid),
                .commit_pc       (commit_pc),
                .commit_result   (commit_result)
            );
        end else begin : gen_multi_core
            // 骨架: TODO — 实例化 lumi_multicore_top
        end
    endgenerate

    // ─── RegFile 实例化 ───────────────────────────────────────
    lumi_regfile #(
        .ISSUE_WIDTH (ISSUE_WIDTH),
        .VLEN        (VLEN)
    ) u_regfile (
        .clk_core        (clk_core),
        .reset_n         (reset_n),
        .irf_rs1_addr    (rf_rs1_addr),
        .irf_rs2_addr    (rf_rs2_addr),
        .irf_rs1_data    (rf_rs1_data),
        .irf_rs2_data    (rf_rs2_data),
        .irf_wr_en       (rf_wr_en),
        .irf_wr_addr     (rf_wr_addr),
        .irf_wr_data     (rf_wr_data),
        .frf_rs1_addr    (5'h0), .frf_rs2_addr    (5'h0),
        .frf_rs1_data    (), .frf_rs2_data    (),
        .frf_wr_en       (1'b0), .frf_wr_addr     (5'h0), .frf_wr_data     (64'h0),
        .vrf_rs1_addr    (5'h0), .vrf_rs2_addr    (5'h0),
        .vrf_rs1_data    (), .vrf_rs2_data    (),
        .vrf_wr_en       (1'b0), .vrf_wr_addr     (5'h0), .vrf_wr_data     ('0),
        .ecc_ce_irq      (),
        .ecc_ded_irq     ()
    );

    // ─── Cache 实例化 ─────────────────────────────────────────
    lumi_cache u_cache (
        .clk_core        (clk_core),
        .reset_n         (reset_n),
        .ic_addr         (ic_addr),
        .ic_rdata        (),      // TODO: connect ic_data
        .ic_hit          (ic_valid),
        .ic_valid        (ic_req_valid),
        .ic_ready        (),
        .ic_flush        (1'b0),
        .dc_addr         (dc_addr),
        .dc_wdata        (dc_wdata),
        .dc_rdata        (dc_rdata),
        .dc_we           (dc_we),
        .dc_be           (dc_be),
        .dc_hit          (dc_hit),
        .dc_valid        (dc_valid),
        .dc_ready        (dc_ready),
        .refill_araddr   (),
        .refill_arvalid  (),
        .refill_arready  (1'b0),
        .refill_rdata    (128'h0),
        .refill_rvalid   (1'b0),
        .refill_rlast    (1'b0),
        .refill_rready   (),
        .evict_awaddr    (),
        .evict_awvalid   (),
        .evict_awready   (1'b0),
        .evict_wdata     (),
        .evict_wvalid    (),
        .evict_wlast     (),
        .evict_wready    (1'b0),
        .fence_req       (1'b0),
        .fence_i_req     (1'b0),
        .fence_ack       ()
    );

    // ─── PMA Checker 实例化 ───────────────────────────────────
    lumi_pma_checker u_pma (
        .clk_core        (clk_core),
        .reset_n         (reset_n),
        .pma_addr        (dc_addr),
        .pma_access_type (3'b000),
        .pma_privilege   (2'b11),
        .pma_result      (),
        .pma_attrs       (),
        .pmp_check_req   (),
        .pmp_check_addr  (),
        .pmp_check_type  (),
        .pmp_result      (2'b00),
        .route_tcm       (),
        .route_cache     (),
        .route_mmio      ()
    );

    // ─── AXI Wrapper 实例化 ───────────────────────────────────
    lumi_axi_wrapper u_axi (
        .clk_core        (clk_core),
        .clk_bus         (clk_bus),
        .reset_n         (reset_n),
        .ic_refill_req   (1'b0),  .ic_refill_ack   (),
        .dc_refill_req   (1'b0),  .dc_refill_ack   (),
        .nc_access_req   (1'b0),  .nc_access_ack   (),
        .trace_write_req (1'b0),  .trace_write_ack (),
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
        .m_ffp_awaddr    (),  .m_ffp_awvalid   (),  .m_ffp_awready   (1'b0),
        .m_ffp_wdata     (),  .m_ffp_wstrb     (),  .m_ffp_wvalid    (),  .m_ffp_wready    (1'b0),
        .m_ffp_bresp     (2'b00), .m_ffp_bvalid (1'b0), .m_ffp_bready (),
        .m_ffp_araddr    (),  .m_ffp_arvalid   (),  .m_ffp_arready   (1'b0),
        .m_ffp_rdata     (32'h0), .m_ffp_rresp (2'b00), .m_ffp_rvalid (1'b0), .m_ffp_rready ()
    );

    // ─── CSR Unit 实例化 ──────────────────────────────────────
    lumi_csr_unit u_csr (
        .clk_core         (clk_core),
        .reset_n          (reset_n),
        .csr_addr         (csr_addr),
        .csr_rdata        (csr_rdata),
        .csr_wdata        (csr_wdata),
        .csr_we           (csr_we),
        .csr_op           (csr_op),
        .mstatus_out      (mstatus_out),
        .mtvec_out        (mtvec_out),
        .mepc_out         (),
        .mcause_out       (),
        .medeleg_out      (),
        .mideleg_out      (),
        .priv_mode_out    (),
        // Trap 接口 (骨架: 未连接)
        .trap_enter       (1'b0),
        .trap_is_irq      (1'b0),
        .trap_pc_in     (32'h0),
        .trap_cause_in    (32'h0),
        .trap_tval_in     (32'h0),
        .trap_priv_in     (2'b11),
        .mret_exec        (1'b0),
        .sret_exec        (1'b0),
        .nmi_enter        (1'b0),
        .mnret_exec       (1'b0),
        .nmi_pc_in        (32'h0),
        // CLIC CSR 代理 (骨架: 未连接)
        .clic_csr_addr    (),
        .clic_csr_wdata   (),
        .clic_csr_rdata   (32'h0),
        .clic_csr_we      (),
        // HPM
        .hpm_inst_retired (|commit_valid),
        .hpm_branch       (1'b0),
        .hpm_branch_mispred (1'b0),
        .hpm_icache_miss  (1'b0),
        .hpm_dcache_miss  (1'b0),
        .hpm_tlb_miss     (1'b0),
        .hpm_interrupt    (1'b0),
        .hpm_count        (),
        .mie_meip         (),
        .mie_msip         (),
        .mie_mtip         (),
        .mie_r_out        (),
        .mip_r_out        ()
    );

    // ─── CLIC 中断控制器实例化 (骨架连接) ────────────────────
    logic        clic_meip, clic_irq_valid, clic_irq_preempt;
    logic [7:0]  clic_irq_id, clic_irq_level_out;
    logic [11:0] clic_csr_addr;
    logic [31:0] clic_csr_wdata, clic_csr_rdata;
    logic        clic_csr_we;

    lumi_clic u_clic (
        .clk_core         (clk_core),
        .reset_n          (reset_n),
        .irq_local        (16'h0),
        .irq_level_packed (128'h0),
        .meip_in          (1'b0),
        .seip_in          (1'b0),
        .msip_in          (1'b0),
        .mtip_in          (1'b0),
        .mie_gate         (mstatus_out[3]),
        .meip             (clic_meip),
        .irq_id           (clic_irq_id),
        .irq_level_out    (clic_irq_level_out),
        .irq_valid        (clic_irq_valid),
        .irq_preempt      (clic_irq_preempt),
        .irq_ack          (1'b0),
        .clic_csr_addr    (clic_csr_addr),
        .clic_csr_wdata   (clic_csr_wdata),
        .clic_csr_rdata   (clic_csr_rdata),
        .clic_csr_we      (clic_csr_we)
    );

    // ─── PLIC 外部中断控制器实例化 (骨架连接) ────────────────
    logic [0:0] plic_meip;
    logic [4:0] plic_irq_id;

    lumi_plic u_plic (
        .clk_core    (clk_core),
        .reset_n     (reset_n),
        .ext_irq_in  (32'h0),
        .meip        (plic_meip),
        .irq_id      (plic_irq_id),
        .irq_claim   (1'b0),
        .plic_addr   (12'h0),
        .plic_wdata  (32'h0),
        .plic_rdata  (),
        .plic_we     (1'b0)
    );

    // ─── 异常处理模块实例化 (骨架连接) ────────────────────────
    logic        exc_trap_take, exc_trap_is_irq, exc_trap_enter;
    logic [31:0] exc_trap_pc, exc_trap_cause, exc_trap_epc, exc_trap_tval;
    logic        exc_mret, exc_sret, exc_nmi_enter, exc_mnret;
    logic        exc_delegated, exc_flush, exc_irq_ack;

    lumi_exception u_exc (
        .clk_core      (clk_core),
        .reset_n       (reset_n),
        .exc_fetch     (2'b00),
        .exc_decode    (4'b0000),
        .exc_exec      (3'b000),
        .exc_addr      (32'h0),
        .exc_insn      (32'h0),
        .exc_pc        (32'h0),
        .nmi_signal    (1'b0),
        .irq_request   (clic_irq_valid),
        .irq_id        (clic_irq_id),
        .irq_ack       (exc_irq_ack),
        .mtvec_in      (mstatus_out ? mtvec_out : mtvec_out),
        .mstatus_in    (mstatus_out),
        .medeleg_in    (32'h0),
        .mideleg_in    (32'h0),
        .priv_mode_in  (2'b11),
        .mnepc_in      (32'h0),
        .mncause_in    (32'h0),
        .mnstatus_in   (32'h0),
        .stvec_in      (32'h0),
        .is_mret       (1'b0),
        .is_sret       (1'b0),
        .is_mnret      (1'b0),
        .commit_valid  (|commit_valid),
        .trap_take     (exc_trap_take),
        .trap_pc     (exc_trap_pc),
        .trap_cause    (exc_trap_cause),
        .trap_epc      (exc_trap_epc),
        .trap_tval     (exc_trap_tval),
        .trap_is_irq   (exc_trap_is_irq),
        .trap_enter    (exc_trap_enter),
        .mret_exec     (exc_mret),
        .sret_exec     (exc_sret),
        .nmi_enter_out (exc_nmi_enter),
        .mnret_exec_out(exc_mnret),
        .delegated     (exc_delegated),
        .flush_pipe    (exc_flush)
    );

    assign irq_request = clic_irq_valid;  // CLIC → Core 中断请求

    // ─── Power Management 实例化 ──────────────────────────────
    lumi_power_mgmt u_power (
        .clk_core    (clk_core),
        .reset_n     (reset_n),
        .wfi_req     (1'b0),
        .wrs_req     (1'b0),
        .core_active (|commit_valid),
        .icg_en      (),
        .core_sleep  (),
        .hart_sleep  (),
        .sys_reset_n (reset_n),
        .debug_reset_n (jtag_trst_n),
        .core_reset_n (),
        .bus_reset_n  (),
        .vcc_on       (1'b1),
        .vcc_ret_on   (1'b1),
        .power_state  ()
    );

    // ─── DFT Controller 实例化 ────────────────────────────────
    lumi_dft_ctrl u_dft (
        .clk_core    (clk_core),
        .reset_n     (reset_n),
        .scan_enable (1'b0),
        .scan_in     (1'b0),
        .scan_out    (),
        .scan_mode   (),
        .mbist_enable (1'b0),
        .mbist_start  (),
        .mbist_done   (),
        .mbist_fail   (),
        .mbist_error_count (),
        .tck          (jtag_tck),
        .tms          (jtag_tms),
        .tdi          (jtag_tdi),
        .tdo          (jtag_tdo),
        .jtag_select  (),
        .tamper_detect (1'b0),
        .secure_lock   ()
    );

endmodule
