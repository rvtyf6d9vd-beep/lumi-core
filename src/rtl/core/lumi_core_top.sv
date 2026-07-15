// =================================================================
// LUMI-DESIGN-CORE | 需求: LUMI-CORE-001 | 承接: design/*.html (全部 core 文档)
// 模块: lumi_core_top — 8 级流水线级联顶层 (F1→F2→D→I→E1→E2→M→W)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 子模块: fetch → decode_issue → bypass → execute → memory_stage → writeback
//         + regfile (IRF/FRF/VRF)
// 8 级流水线: F1(PC gen) → F2(ICache) → D(Decode) → I(Issue) → E1(ALU/Branch)
//             → E2(MUL/DIV) → M(Load/Store) → W(Writeback)

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

    // ── 中断接口 (H-003 修复: 补充 irq_id + irq_level) ──────
    input  logic                    irq_request,
    input  logic [7:0]              irq_id,
    input  logic [7:0]              irq_level,

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

    // ── NMI ───────────────────────────────────────────────────
    input  logic                    nmi_signal,   // 外部 NMI 信号 (H-003 mapping: exception-handling.html)

    // ── 提交信号 (→ 锁步比较器 D-011) ─────────────────────────
    output logic [ISSUE_WIDTH-1:0]  commit_valid,
    output logic [31:0]             commit_pc [ISSUE_WIDTH-1:0],
    output logic [31:0]             commit_result [ISSUE_WIDTH-1:0],

    // ── HPM 事件输出 ─────────────────────────────────────────
    output logic                    hpm_inst_retired,
    output logic                    hpm_branch,
    output logic                    hpm_branch_miss,
    output logic                    hpm_load,
    output logic                    hpm_store,
    output logic                    hpm_exception,

    // ── 异常信号输出 (ERR-095: SoC exception module connection) ──
    output logic [1:0]              core_exc_fetch,
    output logic [3:0]              core_exc_decode,
    output logic [2:0]              core_exc_exec,
    output logic [31:0]             core_exc_addr,
    output logic [31:0]             core_exc_insn,
    output logic [31:0]             core_exc_pc,

    // ── V1 验证探针 (Verification Probe, all slots) ───────────────
    output logic [31:0]             mon_inst [ISSUE_WIDTH-1:0],
    output logic [15:0]             mon_inst_raw [ISSUE_WIDTH-1:0],
    output logic [4:0]              mon_rd   [ISSUE_WIDTH-1:0],
    output logic [31:0]             mon_rd_data [ISSUE_WIDTH-1:0],
    output logic                    mon_irq
);

    import lumi_pkg::*;

    localparam int FETCH_WIDTH = ISSUE_WIDTH * 2;  // 6

    // ═══════════════════════════════════════════════════════════
    // 级间信号声明
    // ═══════════════════════════════════════════════════════════

    // ── F1 级 ──
    logic [31:0]   f1_pc;
    logic          f1_pred_taken;
    logic [31:0]   f1_pred_target;

    // ── F2 级 ──
    logic [31:0]   f2_insts [FETCH_WIDTH-1:0];
    logic [$clog2(FETCH_WIDTH):0] f2_count;
    logic          f2_valid;
    logic [31:0]   f2_pc;
    logic          f2_pred_taken;
    logic [31:0]   f2_pred_target;

    // F2 valid mask 生成
    logic [FETCH_WIDTH-1:0] f2_inst_valid_mask;

    // ── ERR-042: Predecode 信号 ──
    logic [31:0]   pd_inst [FETCH_WIDTH-1:0];
    logic [31:0]   pd_inst_pc [FETCH_WIDTH-1:0];
    logic [FETCH_WIDTH-1:0] pd_inst_valid;
    logic [FETCH_WIDTH-1:0] pd_inst_compressed;
    logic [15:0]   pd_inst_raw [FETCH_WIDTH-1:0];
    logic [3:0]    pd_inst_count;
    logic [4:0]    pd_bytes_consumed;
    logic [15:0]   pd_carry_hw_out;
    logic          pd_carry_valid_out;

    // ── ERR-044: Execute call/ret 信号 ──
    logic          e1_br_is_call;
    logic          e1_br_is_ret;
    // ── ERR-RAS: Execute 分支压缩标志 ──
    logic          e1_br_is_compressed;

    // ── D/I 级 ──
    inst_pkt_t     i_inst [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] i_valid;
    logic [3:0]    i_fu_id [ISSUE_WIDTH-1:0];
    logic [31:0]   i_rs1_data [ISSUE_WIDTH-1:0];
    logic [31:0]   i_rs2_data [ISSUE_WIDTH-1:0];
    logic [4:0]    rf_rs1_addr [ISSUE_WIDTH-1:0];
    logic [4:0]    rf_rs2_addr [ISSUE_WIDTH-1:0];
    logic [31:0]   rf_rs1_data_r [ISSUE_WIDTH-1:0];
    logic [31:0]   rf_rs2_data_r [ISSUE_WIDTH-1:0];

    // ── Bypass ──
    logic [ISSUE_WIDTH-1:0] bp_rs1_hit;
    logic [ISSUE_WIDTH-1:0] bp_rs2_hit;
    logic [31:0]   bp_rs1_data [ISSUE_WIDTH-1:0];
    logic [31:0]   bp_rs2_data [ISSUE_WIDTH-1:0];

    // ── E1 级输入流水线寄存器 (I→E1) ──
    inst_pkt_t     e1_inst_r [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] e1_valid_r;
    logic [31:0]   e1_rs1_data_r [ISSUE_WIDTH-1:0];
    logic [31:0]   e1_rs2_data_r [ISSUE_WIDTH-1:0];
    // ERR-019: 预测状态 (I→E1 流水线寄存器)
    logic          e1_pred_taken_r;
    logic [31:0]   e1_pred_target_r;

    // ── E1 级 ──
    logic [31:0]   e1_result [ISSUE_WIDTH-1:0];
    logic [4:0]    e1_rd [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] e1_valid;
    logic          e1_br_taken;
    logic [31:0]   e1_br_target;
    logic [31:0]   e1_br_pc;  // ERR-019: 分支指令 PC (BTB 更新)
    logic          e1_mispredict;
    // ERR-019: 分支类型
    logic          e1_br_is_jal;
    logic          e1_br_is_jalr;
    logic [31:0]   e1_mem_addr [1:0];
    logic          e1_mem_we [1:0];
    logic [31:0]   e1_mem_wdata [1:0];
    logic [ISSUE_WIDTH-1:0] e1_exception;
    logic [3:0]    e1_exc_cause [ISSUE_WIDTH-1:0];

    // ── M 级输入流水线寄存器 (E1→M) ──
    inst_pkt_t     m_inst_r [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_valid_r;
    logic [31:0]   m_result_r [ISSUE_WIDTH-1:0];
    logic [4:0]    m_rd_r [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_exception_r;

    // ── SA-10 修复: M 级旁路 valid (从 memory_stage 输出) ──
    logic [ISSUE_WIDTH-1:0] m_bypass_valid;

    // ── E2 级 ──
    logic [31:0]   e2_mul_result;
    logic [31:0]   e2_mul_result_hi;
    logic          e2_mul_valid;
    logic [31:0]   e2_div_result;
    logic          e2_div_valid;
    logic          e2_div_busy;
    logic [4:0]    e2_rd;

    // ── M 级 ──
    inst_pkt_t     m_inst_out [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_valid_out;
    logic [31:0]   m_result_out [ISSUE_WIDTH-1:0];
    logic [4:0]    m_rd_out [ISSUE_WIDTH-1:0];
    logic [31:0]   m_pc_out [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] m_exception_out;

    // ── W 级 ──
    logic [1:0]    rf_wr_en;
    logic [4:0]    rf_wr_addr [1:0];
    logic [31:0]   rf_wr_data [1:0];
    logic          trap_request;
    logic [31:0]   trap_pc;

    // ── Stall/Flush ──
    logic          dec_stall;
        logic          all_issued;  // ERR-019

    // ── ERR-030 修复: Memory busy 信号 ──
    logic          mem_busy;

    // ── ERR-055: Store buffer empty for FENCE ──
    logic          sb_empty;

    // ── ERR-030 修复: fu_busy 组合信号 (bit[3]=FU_MEM, bit[1]=div) ──
    logic [9:0]    fu_busy_combined;
    always_comb begin
        fu_busy_combined = 10'h0;
        fu_busy_combined[3] = mem_busy;     // FU_MEM = 4'd3
    end

    // ═══════════════════════════════════════════════════════════
    // F2 valid mask 生成 — 已由 ERR-042 predecode 替代 (见下方)
    // ═══════════════════════════════════════════════════════════

    // ═══════════════════════════════════════════════════════════
    // Fetch (F1/F2)
    // ═══════════════════════════════════════════════════════════
    lumi_fetch #(
        .FETCH_WIDTH  (FETCH_WIDTH),
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
        .f2_pc_out             (f2_pc),
        .f2_pred_taken         (f2_pred_taken),
        .f2_pred_target        (f2_pred_target),
        .branch_redirect_pc    (e1_br_target),
        .branch_redirect_valid (e1_mispredict),
        .trap_redirect_pc      (trap_pc),
        .trap_redirect_valid   (trap_request),
        .tage_update_pc        (e1_br_pc),      // ERR-019: 使用分支 PC (非 target) 更新 BTB
        .tage_update_taken     (e1_br_taken),
        .tage_update_valid     (e1_br_taken),
        // ERR-019: 分支类型 (BTB 写入区分 JAL/JALR/条件分支)
        .br_update_is_jal      (e1_br_is_jal),
        .br_update_is_jalr     (e1_br_is_jalr),
        // ERR-044: call/ret 区分
        .br_update_is_call     (e1_br_is_call),
        .br_update_is_ret      (e1_br_is_ret),
        .br_update_is_compressed (e1_br_is_compressed),
        // ERR-042: predecode 反馈
        .predecode_bytes_consumed (pd_bytes_consumed),
        .predecode_inst_count     (pd_inst_count),
        .predecode_carry_hw_out   (pd_carry_hw_out),
        .predecode_carry_valid_out(pd_carry_valid_out),
        // ERR-042: predecode 输出
        .f2_raw_data_out       (f2_pd_raw_data),
        .f2_base_pc_out        (f2_pd_base_pc),
        .f2_start_offset_out   (f2_pd_start_offset),
        .f2_pred_taken_out     (f2_pd_pred_taken),
        .f2_carry_hw_out       (f2_pd_carry_hw),
        .f2_carry_valid_out    (f2_pd_carry_valid),
        .pred_branch_slot      (f2_pd_pred_branch_slot),  // ERR-BTB
        .dec_stall             (dec_stall),
        .dec_all_issued        (all_issued),  // ERR-019
        .debug_halt            (debug_halt)
    );

    // ICache 接口
    assign ic_addr      = f1_pc;
    assign ic_req_valid = 1'b1;

    // ERR-042: Predecode 输入信号 (从 fetch 输出)
    logic [127:0] f2_pd_raw_data;
    logic [31:0]  f2_pd_base_pc;
    logic [3:0]   f2_pd_start_offset;
    logic         f2_pd_pred_taken;
    logic [15:0]  f2_pd_carry_hw;
    logic         f2_pd_carry_valid;
    logic [3:0]   f2_pd_pred_branch_slot;  // ERR-BTB

    // ═══════════════════════════════════════════════════════════
    // Predecode (ERR-042: 指令边界扫描器)
    // ═══════════════════════════════════════════════════════════
    lumi_predecode #(
        .FETCH_WIDTH (FETCH_WIDTH)
    ) u_predecode (
        .raw_data           (f2_pd_raw_data),
        .base_pc            (f2_pd_base_pc),
        .start_offset       (f2_pd_start_offset),
        .carry_hw           (f2_pd_carry_hw),
        .carry_valid        (f2_pd_carry_valid),
        .pred_taken         (f2_pd_pred_taken),
        .pred_branch_slot   (f2_pd_pred_branch_slot),  // ERR-BTB
        .inst               (pd_inst),
        .inst_pc            (pd_inst_pc),
        .inst_valid         (pd_inst_valid),
        .inst_compressed    (pd_inst_compressed),
        .inst_raw           (pd_inst_raw),
        .inst_count         (pd_inst_count),
        .bytes_consumed     (pd_bytes_consumed),
        .carry_hw_out       (pd_carry_hw_out),
        .carry_valid_out    (pd_carry_valid_out)
    );

    // ERR-042: valid mask 使用 predecode 输出
    always_comb begin
        f2_inst_valid_mask = '0;
        if (f2_valid) begin
            for (int i = 0; i < FETCH_WIDTH; i++) begin
                if (pd_inst_valid[i])
                    f2_inst_valid_mask[i] = 1'b1;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // Decode + Issue (D/I)
    // ═══════════════════════════════════════════════════════════
    lumi_decode_issue #(
        .ISSUE_WIDTH (ISSUE_WIDTH),
        .FETCH_WIDTH (FETCH_WIDTH)
    ) u_decode_issue (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .d_instructions        (pd_inst),          // ERR-042: predecode 展开后的指令
        .d_inst_valid          (f2_inst_valid_mask),
        .d_pc                  (f2_pc),
        .d_valid               (f2_valid),
        // ERR-042: per-instruction PC + 压缩标志
        .d_inst_pc             (pd_inst_pc),
        .d_inst_compressed     (pd_inst_compressed),
        .d_inst_raw            (pd_inst_raw),
        .d_rs1_data            (i_rs1_data),
        .d_rs2_data            (i_rs2_data),
        .regfile_rs1_addr      (rf_rs1_addr),
        .regfile_rs2_addr      (rf_rs2_addr),
        .regfile_rs1_data      (rf_rs1_data_r),
        .regfile_rs2_data      (rf_rs2_data_r),
        .i_issue               (i_inst),
        .i_issue_valid         (i_valid),
        .i_fu_id               (i_fu_id),
        .bypass_rs1_hit        (bp_rs1_hit),
        .bypass_rs2_hit        (bp_rs2_hit),
        .bypass_rs1_data       (bp_rs1_data),
        .bypass_rs2_data       (bp_rs2_data),
        .fu_busy               (fu_busy_combined), // ERR-030 修复: 连接 mem_busy (bit[3])
        .stall_out             (dec_stall),
        .all_issued            (all_issued),  // ERR-019
        .flush                 (e1_mispredict || trap_request),
        .div_busy              (e2_div_busy)
    );

    // ═══════════════════════════════════════════════════════════
    // Bypass Network
    // ── W 级旁路适配 (2W → ISSUE_WIDTH) ──
    logic [31:0] bp_w_result [ISSUE_WIDTH-1:0];
    logic [4:0]  bp_w_rd [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] bp_w_valid;

    // T-MS3-S3-BF.1.5: M 级旁路源适配
    // E2 MUL/DIV 结果在 E1→M 寄存器 (m_result_r) 后即可用；若使用 memory_stage
    // 再打一拍后的 m_result_out，依赖指令会读到旧值。Load 结果仍由 memory_stage
    // 延迟生成，因此 Load 继续使用 m_result_out + m_bypass_valid。
    logic [31:0] bp_m_result [ISSUE_WIDTH-1:0];
    logic [4:0]  bp_m_rd [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0] bp_m_valid;

    always_comb begin
        // 默认清零
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            bp_w_result[i] = 32'h0;
            bp_w_rd[i]     = 5'h0;
            bp_w_valid[i]  = 1'b0;
        end
        // 端口 0
        bp_w_result[0] = rf_wr_data[0];
        bp_w_rd[0]     = rf_wr_addr[0];
        bp_w_valid[0]  = rf_wr_en[0];
        // 端口 1
        bp_w_result[1] = rf_wr_data[1];
        bp_w_rd[1]     = rf_wr_addr[1];
        bp_w_valid[1]  = rf_wr_en[1];
    end

    // T-MS3-S3-BF.1.5: M 级旁路源 MUX
    // 对 ALU/MUL/DIV/BRANCH/MISC 使用 E1→M 寄存器输出 (m_result_r)，使 E2
    // MUL/DIV 结果产生后下一拍即可被旁路到 E1；Load 仍使用 memory_stage
    // 输出 (m_result_out) 并在 mem_ready_in=1 时才置 valid。
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            bp_m_result[i] = m_result_r[i];
            bp_m_rd[i]     = m_rd_r[i];
            bp_m_valid[i]  = 1'b0;
            if (m_valid_r[i]) begin
                if (m_inst_r[i].fu_type == FU_MEM && !m_inst_r[i].inst[5]) begin
                    // Load: 等待 memory_stage 完成，使用延迟后的结果
                    bp_m_result[i] = m_result_out[i];
                    bp_m_valid[i]  = m_bypass_valid[i];
                end else if (m_inst_r[i].fu_type == FU_MEM && m_inst_r[i].inst[5]) begin
                    // Store 不写 rd，不提供旁路
                    bp_m_valid[i] = 1'b0;
                end else begin
                    // ALU/MUL/DIV/BRANCH/MISC: 使用 E1→M 寄存器输出
                    bp_m_result[i] = m_result_r[i];
                    bp_m_valid[i]  = m_valid_r[i];
                end
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // Bypass Network
    // ═══════════════════════════════════════════════════════════
    lumi_bypass #(
        .ISSUE_WIDTH        (ISSUE_WIDTH),
        .BYPASS_PIPE_STAGES (1)
    ) u_bypass (
        .clk_core            (clk_core),
        .reset_n             (reset_n),
        // E1 级旁路源
        .e1_result           (e1_result),
        .e1_rd               (e1_rd),
        .e1_valid            (e1_valid),
        // M 级旁路源
        // T-MS3-S3-BF.1.5: 使用 E1→M 寄存器输出作为 ALU/MUL/DIV/BRANCH 旁路源，
        //   确保 E2 MUL/DIV 结果对齐 1-cycle 延迟；Load 仍使用 memory_stage 输出。
        .m_result            (bp_m_result),
        .m_rd                (bp_m_rd),
        .m_valid             (bp_m_valid),
        // W 级旁路源 (从 2W 扩展)
        .w_result            (bp_w_result),
        .w_rd                (bp_w_rd),
        .w_valid             (bp_w_valid),
        // FPU 旁路
        .fpu_result          (64'h0),      // TODO: 连接 FPU
        .fpu_rd              (5'h0),
        .fpu_valid           (1'b0),
        // 查询
        .query_rs1           (rf_rs1_addr),
        .query_rs2           (rf_rs2_addr),
        // 输出
        .bypass_rs1_data     (bp_rs1_data),
        .bypass_rs2_data     (bp_rs2_data),
        .bypass_rs1_hit      (bp_rs1_hit),
        .bypass_rs2_hit      (bp_rs2_hit)
    );

    // ═══════════════════════════════════════════════════════════
    // I→E1 流水线寄存器 (正确对齐: D/I 组合输出 → E1 级寄存器)
    // ═══════════════════════════════════════════════════════════
    // ERR-019: 分支气泡检测 — 当 E1 有分支指令时, 暂停 I→E1 捕获
    // ═══════════════════════════════════════════════════════════
    logic e1_has_branch;
    always_comb begin
        e1_has_branch = 1'b0;
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (e1_valid_r[i] && e1_inst_r[i].fu_type == FU_BRANCH)
                e1_has_branch = 1'b1;
        end
    end

    // ERR-022: 误预测后扩展气泡 — 当误预测分支写 rd!=0 (如 JAL ra),
    // 需要额外 1 周期让 W-level bypass 有正确值.
    // 没有这个, 紧随的依赖指令 (如 RET 读 ra) 读到旧值.
    logic post_mispredict_bubble;
    logic post_mispredict_bubble_r;
    logic mispredict_branch_has_rd;

    always_comb begin
        mispredict_branch_has_rd = 1'b0;
        if (e1_mispredict) begin
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                if (e1_valid_r[i] && e1_inst_r[i].fu_type == FU_BRANCH && e1_rd[i] != 5'h0)
                    mispredict_branch_has_rd = 1'b1;
            end
        end
    end

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            post_mispredict_bubble_r <= 1'b0;
        else if (e1_mispredict && mispredict_branch_has_rd)
            post_mispredict_bubble_r <= 1'b1;   // 设置: 需要额外 1 周期
        else
            post_mispredict_bubble_r <= 1'b0;   // 自动清除
    end

    assign post_mispredict_bubble = post_mispredict_bubble_r;

    // ═══════════════════════════════════════════════════════════
    // I→E1 流水线寄存器
    // ═══════════════════════════════════════════════════════════
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            e1_valid_r <= '0;
            e1_pred_taken_r  <= 1'b0;
            e1_pred_target_r <= 32'h0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                e1_inst_r[i]    <= '0;
                e1_rs1_data_r[i] <= 32'h0;
                e1_rs2_data_r[i] <= 32'h0;
            end
        end else if (e1_mispredict || trap_request) begin
            // ERR-019: flush 时清除 E1 输入, 杀死与分支同批次发射的推测指令
            e1_valid_r <= '0;
            e1_pred_taken_r  <= 1'b0;
            e1_pred_target_r <= 32'h0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                e1_inst_r[i]    <= '0;
                e1_rs1_data_r[i] <= 32'h0;
                e1_rs2_data_r[i] <= 32'h0;
            end
        end else if (e1_has_branch || post_mispredict_bubble) begin
            // ERR-019: 分支气泡 — E1 有分支指令时, 不捕获 D/I 数据
            // ERR-022: 误预测后扩展气泡 — 额外 1 周期让 W bypass 有正确 ra 值
            // 分支需要 1 周期在 E1 求值, 期间不允许推测指令进入 E1
            e1_valid_r <= '0;
        end else begin
            e1_valid_r <= i_valid;
            // ERR-019: 捕获预测状态 (来自 F2)
            e1_pred_taken_r  <= f2_pred_taken;
            e1_pred_target_r <= f2_pred_target;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                e1_inst_r[i]    <= i_inst[i];
                e1_rs1_data_r[i] <= i_rs1_data[i];
                e1_rs2_data_r[i] <= i_rs2_data[i];
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // Execute (E1/E2) — 输入来自 E1 级流水线寄存器
    // ═══════════════════════════════════════════════════════════
    lumi_execute #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_execute (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .e1_inst               (e1_inst_r),       // 来自 E1 输入寄存器
        .e1_valid              (e1_valid_r),
        .e1_rs1_data           (e1_rs1_data_r),
        .e1_rs2_data           (e1_rs2_data_r),
        .e1_pred_taken         (e1_pred_taken_r),     // ERR-019: F2 预测状态
        .e1_sb_empty           (sb_empty),              // ERR-055: Store buffer empty for FENCE
        .e1_pred_target        (e1_pred_target_r),    // ERR-019: F2 预测目标
        .e1_result             (e1_result),
        .e1_rd                 (e1_rd),
        .e1_valid_out          (e1_valid),
        .e1_branch_taken       (e1_br_taken),
        .e1_branch_target      (e1_br_target),
        .e1_branch_pc          (e1_br_pc),   // ERR-019
        .e1_mispredict         (e1_mispredict),
        .e1_br_is_jal          (e1_br_is_jal),    // ERR-019
        .e1_br_is_jalr         (e1_br_is_jalr),   // ERR-019
        .e1_br_is_call         (e1_br_is_call),    // ERR-044
        .e1_br_is_ret          (e1_br_is_ret),     // ERR-044
        .e1_br_is_compressed   (e1_br_is_compressed), // ERR-RAS
        .e1_mem_addr           (e1_mem_addr),
        .e1_mem_we             (e1_mem_we),
        .e1_mem_wdata          (e1_mem_wdata),
        .e2_mul_result         (e2_mul_result),
        .e2_mul_result_hi      (e2_mul_result_hi),
        .e2_mul_valid          (e2_mul_valid),
        .e2_div_result         (e2_div_result),
        .e2_div_valid          (e2_div_valid),
        .e2_div_busy           (e2_div_busy),
        .e2_rd                 (e2_rd),
        .e1_exception          (e1_exception),
        .e1_exc_cause          (e1_exc_cause)
    );

    // ═══════════════════════════════════════════════════════════
    // E1→M 流水线寄存器 (正确对齐: E1 组合输出 → M 级寄存器)
    // E2 MUL/DIV 结果旁路: 替换 M 级的 result
    // ═══════════════════════════════════════════════════════════
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            m_valid_r <= '0;
            m_exception_r <= '0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_inst_r[i]    <= '0;
                m_result_r[i]  <= 32'h0;
                m_rd_r[i]      <= 5'h0;
            end
        end else if (trap_request) begin
            // ERR-020: trap 时 flush M 级 (异常指令不提交)
            m_valid_r <= '0;
            m_exception_r <= '0;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_inst_r[i]    <= '0;
                m_result_r[i]  <= 32'h0;
                m_rd_r[i]      <= 5'h0;
            end
        end else if (e1_mispredict) begin
            // ERR-020 修复 (核心): 误预测时, M 级必须捕获分支指令本身!
            // 分支指令 (如 JAL) 需要继续流经 M→W 以完成寄存器写入 (如 ra).
            // 同时杀死分支之后的推测指令 (它们是基于错误预测获取的).
            m_valid_r <= '0;
            m_exception_r <= e1_exception;
            for (int i = 0; i < ISSUE_WIDTH; i++) begin
                m_inst_r[i]    <= e1_inst_r[i];
                m_rd_r[i]      <= e1_rd[i];
                m_result_r[i]  <= e1_result[i];
                // ERR-022 修复: 无条件保留误预测分支 — 移除 !m_valid_r[0] 检查.
                // 原 bug: m_valid_r[0] 读旧值, 当 M-slot0 有指令时 JAL 被丢弃, ra 写入丢失.
                if (e1_valid[i] && e1_inst_r[i].fu_type == FU_BRANCH) begin
                    m_valid_r[i] <= 1'b1;
                end
            end
        end else begin
            // SA-6 修复: mem_busy 时保持 E1→M 寄存器
            // 防止双 MEM 串行化期间 E1→M 重复捕获旧批次
            if (!mem_busy) begin
                m_valid_r     <= e1_valid;
                m_exception_r <= e1_exception;
                for (int i = 0; i < ISSUE_WIDTH; i++) begin
                    m_inst_r[i]    <= e1_inst_r[i];
                    m_rd_r[i]      <= e1_rd[i];
                    // E2 MUL/DIV 结果旁路: 如果 E2 有结果, 替换 E1 result
                    if (e1_inst_r[i].fu_type == FU_MUL && e1_valid[i]) begin
                        m_result_r[i] <= e2_mul_valid ? e2_mul_result : e1_result[i];
                    end else if (e1_inst_r[i].fu_type == FU_DIV && e1_valid[i]) begin
                        m_result_r[i] <= e2_div_valid ? e2_div_result : e1_result[i];
                    end else begin
                        m_result_r[i] <= e1_result[i];
                    end
                end
            end
        end
    end



    // ═══════════════════════════════════════════════════════════
    // Memory Stage (M) — 输入来自 E1→M 流水线寄存器
    // ═══════════════════════════════════════════════════════════
    lumi_memory_stage #(
        .ISSUE_WIDTH (ISSUE_WIDTH),
        .BYPASS_SB   (1'b1)       // ERR-027/028 修复: store 直写 SRAM
    ) u_memory (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .m_inst                (m_inst_r),        // 来自 E1→M 寄存器 (正确对齐)
        .m_valid               (m_valid_r),       // 来自 E1→M 寄存器
        .m_result              (m_result_r),      // 来自 E1→M 寄存器
        .m_rd                  (m_rd_r),          // 来自 E1→M 寄存器
        .e1_mem_addr           (e1_mem_addr),
        .e1_mem_we             (e1_mem_we),
        .e1_mem_wdata          (e1_mem_wdata),
        .mem_addr_out          (dc_addr),
        .mem_wdata_out         (dc_wdata),
        .mem_rdata_in          (dc_rdata),
        .mem_we_out            (dc_we),
        .mem_be_out            (dc_be),
        .mem_valid_out         (dc_valid),
        .mem_ready_in          (dc_ready),
        .mem_hit_in            (dc_hit),
        .m_inst_out            (m_inst_out),
        .m_valid_out           (m_valid_out),
        .m_result_out          (m_result_out),
        .m_rd_out              (m_rd_out),
        .m_pc_out              (m_pc_out),
        .m_exception_out       (m_exception_out),
        .mem_busy              (mem_busy),        // ERR-030 修复: → fu_busy bit[3]
        .m_bypass_valid        (m_bypass_valid),  // SA-10: 旁路 valid (与 m_result 同步)
        .store_commit          (),
        // ERR-026 修复: V1 SRAM 同步写, 无需等待 ack, 立即清空 SB entry
        // 否则 SB 永远满, 后续 store 全部走 ST_COMMIT 路径写最早入队 entry,
        // 导致 mini-test 的 sw 0x3FFE0 永远不生效 (写入地址固定为 SB head)
        .store_commit_ack      (1'b1),
        .sb_empty_out          (sb_empty)              // ERR-055: FENCE drain
    );

    // ═══════════════════════════════════════════════════════════
    // Writeback (W)
    // ═══════════════════════════════════════════════════════════
    lumi_writeback #(
        .ISSUE_WIDTH (ISSUE_WIDTH)
    ) u_writeback (
        .clk_core              (clk_core),
        .reset_n               (reset_n),
        .w_inst                (m_inst_out),
        .w_valid               (m_valid_out),
        .w_result              (m_result_out),
        .w_rd                  (m_rd_out),
        .w_exception           (m_exception_out),
        .w_pc                  (m_pc_out),
        .regfile_wr_en         (rf_wr_en),
        .regfile_wr_addr       (rf_wr_addr),
        .regfile_wr_data       (rf_wr_data),
        .commit_valid          (commit_valid),
        .commit_pc             (commit_pc),
        .commit_result         (commit_result),
        .trap_request          (trap_request),
        .irq_request           (irq_request),
        .trap_pc              (trap_pc),
        .csr_addr              (csr_addr),
        .csr_rdata             (csr_rdata),
        .csr_wdata             (csr_wdata),
        .csr_we                (csr_we),
        .csr_op                (csr_op),
        .mstatus_out           (mstatus_out),
        .mtvec_out             (mtvec_out),
        .e2_mul_result         (e2_mul_result),
        .e2_mul_valid          (e2_mul_valid),
        .e2_div_result         (e2_div_result),
        .e2_div_valid          (e2_div_valid),
        .e2_rd                 (e2_rd),
        .hpm_inst_retired      (hpm_inst_retired),
        .hpm_branch            (hpm_branch),
        .hpm_branch_miss       (hpm_branch_miss),
        .hpm_load            (hpm_load),
        .hpm_store           (hpm_store),
        .hpm_exception       (hpm_exception),
        // V1 验证探针
        .mon_inst            (mon_inst),
        .mon_inst_raw        (mon_inst_raw),
        .mon_rd              (mon_rd),
        .mon_rd_data         (mon_rd_data),
        .mon_irq             (mon_irq)
    );

    // ═══════════════════════════════════════════════════════════
    // Register File (IRF/FRF/VRF)
    // ═══════════════════════════════════════════════════════════
    logic rf_ecc_ce, rf_ecc_ded;

    lumi_regfile #(
        .ISSUE_WIDTH (ISSUE_WIDTH),
        .VLEN        (lumi_pkg::VLEN),
        .ECC_EN      (lumi_pkg::TCM_ECC_EN)
    ) u_regfile (
        .clk_core        (clk_core),
        .reset_n         (reset_n),
        // IRF 读端口
        .irf_rs1_addr    (rf_rs1_addr),
        .irf_rs2_addr    (rf_rs2_addr),
        .irf_rs1_data    (rf_rs1_data_r),
        .irf_rs2_data    (rf_rs2_data_r),
        // IRF 写端口
        .irf_wr_en       (rf_wr_en),
        .irf_wr_addr     (rf_wr_addr),
        .irf_wr_data     (rf_wr_data),
        // FRF (FPU, 暂未连接)
        .frf_rs1_addr    (5'h0),
        .frf_rs2_addr    (5'h0),
        .frf_rs1_data    (),
        .frf_rs2_data    (),
        .frf_wr_en       (1'b0),
        .frf_wr_addr     (5'h0),
        .frf_wr_data     (64'h0),
        // VRF (Vector, 暂未连接)
        .vrf_rs1_addr    (5'h0),
        .vrf_rs2_addr    (5'h0),
        .vrf_rs1_data    (),
        .vrf_rs2_data    (),
        .vrf_wr_en       (1'b0),
        .vrf_wr_addr     (5'h0),
        .vrf_wr_data     ({lumi_pkg::VLEN{1'b0}}),
        // ECC
        .ecc_ce_irq      (rf_ecc_ce),
        .ecc_ded_irq     (rf_ecc_ded)
    );

    // ═══════════════════════════════════════════════════════════
    // 异常信号输出连接 (ERR-095: SoC exception module connection)
    // ═══════════════════════════════════════════════════════════
    // 简化: 当前异常信号来自 E1 级和 M 级
    // TODO: 从流水线各级收集完整的异常信息
    assign core_exc_fetch  = 2'b00;           // F 级异常 (暂未实现)
    assign core_exc_decode = 4'b0000;         // D 级异常 (暂未实现)
    assign core_exc_exec   = {|e1_exception, |m_exception_r, 1'b0};  // E/M 级异常
    assign core_exc_addr   = 32'h0;           // 异常地址 (TODO: 从 CSR 获取)
    assign core_exc_insn   = 32'h0;           // 异常指令 (TODO: 从流水线获取)
    assign core_exc_pc     = 32'h0;           // 异常 PC (TODO: 从流水线获取)

    // ── 调试: 误预测检测 (已移除 ERR-022 debug) ────────────────

    // ── ERR-022 debug: W 级写 x1 (ra) 跟踪 (已修复, 移除) ──

endmodule
