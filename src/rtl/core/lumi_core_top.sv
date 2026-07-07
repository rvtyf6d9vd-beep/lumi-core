// =================================================================
// LUMI-DESIGN-CORE | 需求: LUMI-CORE-001 | 承接: design/*.html (全部 core 文档)
// 模块: lumi_core_top — 8 级流水线级联顶层
// 阶段: M2-S1 RTL 骨架 (实例化子模块 + 级间连线)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_core_top #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH,
    parameter int HART_ID     = 0
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── ICache 接口 (← F1, F2) ───────────────────────────────
    output logic [31:0]             ic_addr,
    input  logic [127:0]            ic_data,
    input  logic                    ic_valid,
    output logic                    ic_req_valid,

    // ── D-Cache/TCM 接口 (← M 级) ────────────────────────────
    output logic [31:0]             dc_addr,
    output logic [31:0]             dc_wdata,
    input  logic [31:0]             dc_rdata,
    output logic                    dc_we,
    output logic [3:0]              dc_be,
    output logic                    dc_valid,
    input  logic                    dc_ready,
    input  logic                    dc_hit,

    // ── RegFile 接口 (D/I 级读, W 级写) ──────────────────────
    output logic [4:0]              rf_rs1_addr [ISSUE_WIDTH-1:0],
    output logic [4:0]              rf_rs2_addr [ISSUE_WIDTH-1:0],
    input  logic [31:0]             rf_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             rf_rs2_data [ISSUE_WIDTH-1:0],
    output logic [1:0]              rf_wr_en,
    output logic [4:0]              rf_wr_addr [1:0],
    output logic [31:0]             rf_wr_data [1:0],

    // ── 中断接口 ─────────────────────────────────────────────
    input  logic                    irq_request,

    // ── CSR 接口 ──────────────────────────────────────────────
    output logic [11:0]             csr_addr,
    input  logic [31:0]             csr_rdata,
    output logic [31:0]             csr_wdata,
    output logic                    csr_we,
    output logic [1:0]              csr_op,
    input  logic [31:0]             mstatus_out,
    input  logic [31:0]             mtvec_out,

    // ── Debug ─────────────────────────────────────────────────
    input  logic                    debug_halt,

    // ── 提交信号 (→ 锁步比较器 D-011) ─────────────────────────
    output logic [ISSUE_WIDTH-1:0]  commit_valid,
    output logic [31:0]             commit_pc [ISSUE_WIDTH-1:0],
    output logic [31:0]             commit_result [ISSUE_WIDTH-1:0]
);

    import lumi_pkg::*;

    // ─── 内部级间信号 ─────────────────────────────────────────
    // F1→F2
    logic [31:0]                    f1_pc;

    // F2→Decode
    localparam int FETCH_WIDTH = ISSUE_WIDTH * 2;
    logic [31:0]                    f2_insts [FETCH_WIDTH-1:0];
    logic [$clog2(ISSUE_WIDTH):0]   f2_count;
    logic                           f2_valid;

    // Decode→Issue
    inst_pkt_t                      dec_issue [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         dec_issue_valid;
    logic [3:0]                     dec_fu_id [ISSUE_WIDTH-1:0];
    logic [31:0]                    dec_rs1_data [ISSUE_WIDTH-1:0];
    logic [31:0]                    dec_rs2_data [ISSUE_WIDTH-1:0];

    // Bypass signals (arrays for issue stage)
    logic [31:0]                    bp_e1_data [ISSUE_WIDTH-1:0];
    logic [31:0]                    bp_m_data  [ISSUE_WIDTH-1:0];
    logic [31:0]                    bp_w_data  [ISSUE_WIDTH-1:0];

    // Issue→Execute (E1)
    logic [31:0]                    exe_rs1 [ISSUE_WIDTH-1:0];
    logic [31:0]                    exe_rs2 [ISSUE_WIDTH-1:0];

    // Execute→Memory (M)
    logic [31:0]                    exe_result [ISSUE_WIDTH-1:0];
    logic [4:0]                     exe_rd [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         exe_valid;

    // Memory stage inputs from execute (array [1:0])
    logic [31:0]                    exe_mem_addr  [1:0];
    logic                           exe_mem_we    [1:0];
    logic [31:0]                    exe_mem_wdata [1:0];

    // Memory→Writeback (W)
    inst_pkt_t                      mem_inst [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         mem_valid;
    logic [31:0]                    mem_result [ISSUE_WIDTH-1:0];
    logic [4:0]                     mem_rd [ISSUE_WIDTH-1:0];
    logic [31:0]                    mem_pc [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         mem_exception;

    // Branch feedback
    logic                           br_taken;
    logic [31:0]                    br_target;
    logic                           br_mispredict;

    // Stall/flush
    logic                           stall;

    // ─── 子模块实例化 (骨架) ──────────────────────────────────

    // Fetch (F1/F2)
    lumi_fetch #(
        .FETCH_WIDTH  (ISSUE_WIDTH * 2),
        .BTB_ENTRIES  (lumi_pkg::BTB_ENTRIES),
        .RAS_DEPTH    (lumi_pkg::RAS_DEPTH),
        .LTAGE_TABLES (lumi_pkg::LTAGE_TABLES)
    ) u_fetch (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .f1_pc_out             (f1_pc),
        .f2_icache_data        (ic_data),
        .f2_icache_valid       (ic_valid),
        .f2_instructions       (f2_insts),
        .f2_inst_count         (f2_count),
        .f2_valid              (f2_valid),
        .branch_redirect_pc    (br_target),
        .branch_redirect_valid (br_mispredict),
        .tage_update_pc        (32'h0),      // TODO: connect
        .tage_update_taken     (1'b0),
        .tage_update_valid     (1'b0),
        .debug_halt            (debug_halt)
    );

    // Decode + Issue (D/I)
    lumi_decode_issue #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_decode_issue (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .d_instructions        (f2_insts),
        .d_inst_valid          ('0),  // TODO: connect f2_count mask
        .d_rs1_data            (dec_rs1_data),
        .d_rs2_data            (dec_rs2_data),
        .regfile_rs1_addr      (rf_rs1_addr),
        .regfile_rs2_addr      (rf_rs2_addr),
        .regfile_rs1_data      (rf_rs1_data),
        .regfile_rs2_data      (rf_rs2_data),
        .i_issue               (dec_issue),
        .i_issue_valid         (dec_issue_valid),
        .i_fu_id               (dec_fu_id),
        .bypass_e1_data        (bp_e1_data),    // bypass array
        .bypass_m_data         (bp_m_data),
        .bypass_w_data         (bp_w_data),
        .bypass_fpu_data       (64'h0),
        .fu_busy               (10'h0),
        .stall_out             (stall),
        .flush                 (br_mispredict)
    );

    // Execute (E1/E2)
    lumi_execute #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_execute (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .e1_inst               (dec_issue),
        .e1_valid              (dec_issue_valid),
        .e1_rs1_data           (dec_rs1_data),
        .e1_rs2_data           (dec_rs2_data),
        .e1_result             (exe_result),
        .e1_rd                 (exe_rd),
        .e1_valid_out          (exe_valid),
        .e1_branch_taken       (br_taken),
        .e1_branch_target      (br_target),
        .e1_mispredict         (br_mispredict),
        .e1_mem_addr           (exe_mem_addr),   // array [1:0]
        .e1_mem_we             (exe_mem_we),
        .e1_mem_wdata          (exe_mem_wdata),
        .e2_mul_result         (),
        .e2_mul_result_hi      (),
        .e2_mul_valid          (),
        .e2_div_result         (),
        .e2_div_valid          (),
        .e2_div_busy           (),
        .e2_rd                 (),
        .e1_exception          (),
        .e1_exc_cause          ()
    );

    // Memory Stage (M)
    lumi_memory_stage #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_memory (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .m_inst                (dec_issue),    // TODO: pass through from execute
        .m_valid               (exe_valid),
        .m_result              (exe_result),
        .m_rd                  (exe_rd),
        .e1_mem_addr           (exe_mem_addr),
        .e1_mem_we             (exe_mem_we),
        .e1_mem_wdata          (exe_mem_wdata),
        .mem_addr_out          (dc_addr),
        .mem_wdata_out         (dc_wdata),
        .mem_rdata_in          (dc_rdata),
        .mem_we_out            (dc_we),
        .mem_be_out            (dc_be),
        .mem_valid_out         (dc_valid),
        .mem_ready_in          (dc_ready),
        .mem_hit_in            (dc_hit),
        .m_inst_out            (mem_inst),
        .m_valid_out           (mem_valid),
        .m_result_out          (mem_result),
        .m_rd_out              (mem_rd),
        .m_pc_out              (mem_pc),
        .m_exception_out       (mem_exception),
        .store_commit          (),
        .store_commit_ack      (1'b0)
    );

    // Writeback (W)
    lumi_writeback #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_writeback (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .w_inst                (mem_inst),
        .w_valid               (mem_valid),
        .w_result              (mem_result),
        .w_rd                  (mem_rd),
        .w_exception           (mem_exception),
        .w_pc                  (mem_pc),
        .regfile_wr_en         (rf_wr_en),
        .regfile_wr_addr       (rf_wr_addr),
        .regfile_wr_data       (rf_wr_data),
        .commit_valid          (commit_valid),
        .commit_pc             (commit_pc),
        .commit_result         (commit_result),
        .trap_request          (),
        .irq_request           (irq_request),
        .trap_pc             (),
        .csr_addr              (csr_addr),
        .csr_rdata             (csr_rdata),
        .csr_wdata             (csr_wdata),
        .csr_we                (csr_we),
        .csr_op                (csr_op),
        .mstatus_out           (mstatus_out),
        .mtvec_out             (mtvec_out)
    );

    // ICache 接口映射
    assign ic_addr      = f1_pc;
    assign ic_req_valid = 1'b1;  // TODO: 仅在取指有效时拉高

endmodule
