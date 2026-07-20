// =================================================================
// LUMI-DESIGN-WB | 需求: LUMI-WB-001~004 | 承接: design/writeback-csr.html §3.1~3.2
// 模块: lumi_writeback — W 级写回与提交
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: RegFile 写回仲裁 (2W 端口) + CSR 操作 + Trap/中断处理 + HPM
// 2W 端口仲裁: 3 个发射槽中选择最多 2 条写回指令
// CSR: CSRRW/CSRRS/CSRRC (writeback-csr.html §3.1)
// Trap: 异常 → mepc/mtval/mcause/mstatus → PC=mtvec
// HPM: 硬件事件计数器 (writeback-csr.html §3.2)

module lumi_writeback #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── W 级输入 (← M 级) ─────────────────────────────────────
    input  lumi_pkg::inst_pkt_t     w_inst [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  w_valid,
    input  logic [31:0]             w_result [ISSUE_WIDTH-1:0],
    input  logic [4:0]              w_rd [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  w_exception,
    input  logic [31:0]             w_pc [ISSUE_WIDTH-1:0],

    // ── RegFile 写端口 (2W 端口) ──────────────────────────────
    output logic [1:0]              regfile_wr_en,
    output logic [4:0]              regfile_wr_addr [1:0],
    output logic [31:0]             regfile_wr_data [1:0],

    // ── 提交信号 (→ 锁步比较器 D-011) ─────────────────────────
    output logic [ISSUE_WIDTH-1:0]  commit_valid,
    output logic [31:0]             commit_pc [ISSUE_WIDTH-1:0],
    output logic [31:0]             commit_result [ISSUE_WIDTH-1:0],

    // ── Trap/中断 ─────────────────────────────────────────────
    output logic                    trap_request,
    input  logic                    irq_request,
    output logic [31:0]             trap_pc,

    // ── CSR 接口 ──────────────────────────────────────────────
    output logic [11:0]             csr_addr,
    input  logic [31:0]             csr_rdata,
    output logic [31:0]             csr_wdata,
    output logic                    csr_we,
    output logic [1:0]              csr_op,
    input  logic [31:0]             mstatus_out,
    input  logic [31:0]             mtvec_out,

    // ── E2 级输入 (MUL/DIV 写回) ─────────────────────────────
    input  logic [31:0]             e2_mul_result,
    input  logic                    e2_mul_valid,
    input  logic [31:0]             e2_div_result,
    input  logic                    e2_div_valid,
    input  logic [4:0]              e2_rd,

    // ── HPM 事件输出 ─────────────────────────────────────────
    output logic                    hpm_inst_retired,
    output logic                    hpm_branch,
    output logic                    hpm_branch_miss,
    output logic                    hpm_load,
    output logic                    hpm_store,
    output logic                    hpm_exception,

    // ── V1 验证探针 (Verification Probe, all slots) ───────────
    output logic [31:0]             mon_inst [ISSUE_WIDTH-1:0],
    output logic [15:0]             mon_inst_raw [ISSUE_WIDTH-1:0],
    output logic [4:0]              mon_rd   [ISSUE_WIDTH-1:0],
    output logic [31:0]             mon_rd_data [ISSUE_WIDTH-1:0],
    output logic                    mon_irq,       // IRQ accepted

    // ── BUG-009-FIX: Pending write bypass (for lumi_bypass W-level) ──
    // When slot 2/slot 1 write is deferred (both ports occupied),
    // the result must still be visible to the bypass network
    output logic                    pending_bypass_valid,
    output logic [4:0]              pending_bypass_rd,
    output logic [31:0]             pending_bypass_data,

    // BUG-009-FIX2: 2nd pending bypass (slot2_pending2, entry 1)
    output logic                    pending_bypass2_valid,
    output logic [4:0]              pending_bypass2_rd,
    output logic [31:0]             pending_bypass2_data,

    // BUG-009-FIX2: Stall issue when 2+ pending writes exceed bypass capacity
    output logic                    pending_bypass_stall
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // CSR 操作编码 (writeback-csr.html §3.1)
    // ═══════════════════════════════════════════════════════════
    localparam logic [1:0] CSR_OP_NONE = 2'b00;
    localparam logic [1:0] CSR_OP_RW   = 2'b01;  // CSRRW/CSRRWI
    localparam logic [1:0] CSR_OP_RS   = 2'b10;  // CSRRS/CSRRSI
    localparam logic [1:0] CSR_OP_RC   = 2'b11;  // CSRRC/CSRRCI

    // SYSTEM funct3 编码
    localparam logic [2:0] FN_ECALL  = 3'b000;
    localparam logic [2:0] FN_CSRRW  = 3'b001;
    localparam logic [2:0] FN_CSRRS  = 3'b010;
    localparam logic [2:0] FN_CSRRC  = 3'b011;
    localparam logic [2:0] FN_CSRRWI = 3'b101;
    localparam logic [2:0] FN_CSRRSI = 3'b110;
    localparam logic [2:0] FN_CSRRCI = 3'b111;

    // ═══════════════════════════════════════════════════════════
    // RegFile 写回仲裁 (2W 端口, 3 发射槽 → 2 写端口)
    // ═══════════════════════════════════════════════════════════
    // 仲裁策略: 槽 0 → W 端口 0, 槽 1 → W 端口 1, 槽 2 → 下周期
    // E2 级 (MUL/DIV): 独立路径, 抢占 W 端口 1
    // SA-5 修复: 槽 2 被丢时延迟到下周期, 避免 3-slot 全有效场景下数据丢失

    logic [ISSUE_WIDTH-1:0] wr_select;  // 被选中写回的指令

    // ── SA-5: Slot 2 延迟寄存的输出数据 (下周期尝试写回) ──
    logic                    slot2_pending;       // slot 2 有待写回数据
    logic [4:0]              slot2_rd_r;          // slot 2 的目标寄存器
    logic [31:0]             slot2_data_r;        // slot 2 的数据
    logic [31:0]             slot2_pc_r;          // slot 2 的 PC (用于 commit 跟踪)
    logic [31:0]             slot2_inst_r;        // slot 2 的指令字 (用于 commit 跟踪)
    logic                    slot2_is_csr_r;      // slot 2 是否 CSR 指令
    logic [31:0]             slot2_csr_rdata_r;   // slot 2 的 CSR 读取值
    logic                    slot2_pending_written; // BUG-009-FIX: slot2_pending 本周期是否成功写入

    // BUG-009-FIX2: 2nd entry for slot2_pending overflow
    logic                    slot2_pending2;
    logic [4:0]              slot2_rd_r2;
    logic [31:0]             slot2_data_r2;
    logic [31:0]             slot2_pc_r2;
    logic [31:0]             slot2_inst_r2;
    logic                    slot2_is_csr_r2;
    logic [31:0]             slot2_csr_rdata_r2;
    logic                    slot2_pending2_written;

    // ── SA-CM-LD-001: Slot 1 延迟寄存器 (E2 抢占时保存) ──
    logic                    slot1_pending;       // slot 1 被 E2 抢占, 有待写回
    logic [4:0]              slot1_rd_r;          // slot 1 的目标寄存器
    logic [31:0]             slot1_data_r;        // slot 1 的数据
    logic [31:0]             slot1_pc_r;          // slot 1 的 PC
    logic [31:0]             slot1_inst_r;        // slot 1 的指令字
    logic                    slot1_is_csr_r;      // slot 1 是否 CSR 指令
    logic [31:0]             slot1_csr_rdata_r;   // slot 1 的 CSR 读取值
    logic                    slot1_pending_written; // BUG-009-FIX: slot1_pending 本周期是否成功写入

    // ── SA-CM-LD-001: 检测 slot 1 是否被 E2 抢占 ──
    logic slot1_preempted;
    always_comb begin
        slot1_preempted = (e2_mul_valid || e2_div_valid) &&
                          w_valid[1] && w_rd[1] != 5'h0 && !w_exception[1];
    end

    // ── SA-5: 检测槽 2 是否需要延迟 ──
    // ERR-114 FIX: 使用 wr_select[2] 而非 w_valid[0]&&w_valid[1]
    // 原 bug: 当 slot 0/1 为 NOP (w_valid=1, rd=0) 时, 端口实际空闲,
    //         但 w_valid[0]&&w_valid[1] 为 true → slot 2 被错误延迟
    logic slot2_need_stall;
    always_comb begin
        slot2_need_stall = 1'b0;
        if (w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] && !wr_select[2]) begin
            slot2_need_stall = 1'b1;
        end
    end

    always_comb begin
        regfile_wr_en    = 2'b00;
        regfile_wr_addr[0] = 5'h0;
        regfile_wr_addr[1] = 5'h0;
        regfile_wr_data[0] = 32'h0;
        regfile_wr_data[1] = 32'h0;
        wr_select = '0;
        slot2_pending_written = 1'b0;  // BUG-009-FIX
        slot1_pending_written = 1'b0;  // BUG-009-FIX
        slot2_pending2_written = 1'b0; // BUG-009-FIX2

        // ── W 端口 0: 槽 0 ──
        if (w_valid[0] && w_rd[0] != 5'h0 && !w_exception[0]) begin
            regfile_wr_en[0]    = 1'b1;
            regfile_wr_addr[0]  = w_rd[0];
            // ERR-017 修复: CSR 指令写旧 CSR 值到 rd, 非 rs1 pass-through
            if (w_inst[0].fu_type == FU_MISC && w_inst[0].funct3 != FN_ECALL)
                regfile_wr_data[0]  = csr_rdata;
            else
                regfile_wr_data[0]  = w_result[0];
            wr_select[0]        = 1'b1;
        end

        // ── W 端口 1: 槽 1 (或 E2 MUL/DIV) ──
        if (e2_mul_valid || e2_div_valid) begin
            // E2 级优先 (MUL/DIV 独立写回)
            regfile_wr_en[1]    = 1'b1;
            regfile_wr_addr[1]  = e2_rd;
            regfile_wr_data[1]  = e2_mul_valid ? e2_mul_result : e2_div_result;
        end else if (w_valid[1] && w_rd[1] != 5'h0 && !w_exception[1]) begin
            regfile_wr_en[1]    = 1'b1;
            regfile_wr_addr[1]  = w_rd[1];
            // ERR-017 修复: CSR 指令写旧 CSR 值到 rd, 非 rs1 pass-through
            if (w_inst[1].fu_type == FU_MISC && w_inst[1].funct3 != FN_ECALL)
                regfile_wr_data[1]  = csr_rdata;
            else
                regfile_wr_data[1]  = w_result[1];
            wr_select[1]        = 1'b1;
        end

        // ── BUG-009-FIX2: 延迟写回优先于新写回 (防止 buffer 溢出) ──
        // SA-CM-LD-001: Slot 1 延迟数据写回 (E2 抢占后)
        if (slot1_pending && !e2_mul_valid && !e2_div_valid) begin
            if (!regfile_wr_en[1]) begin
                regfile_wr_en[1]    = 1'b1;
                regfile_wr_addr[1]  = slot1_rd_r;
                regfile_wr_data[1]  = slot1_is_csr_r ? slot1_csr_rdata_r : slot1_data_r;
                slot1_pending_written = 1'b1;
            end else if (!regfile_wr_en[0]) begin
                regfile_wr_en[0]    = 1'b1;
                regfile_wr_addr[0]  = slot1_rd_r;
                regfile_wr_data[0]  = slot1_is_csr_r ? slot1_csr_rdata_r : slot1_data_r;
                slot1_pending_written = 1'b1;
            end
        end

        // SA-5: Slot 2 延迟数据写回 (entry 0, 最老)
        if (slot2_pending && !e2_mul_valid && !e2_div_valid) begin
            if (!regfile_wr_en[0]) begin
                regfile_wr_en[0]    = 1'b1;
                regfile_wr_addr[0]  = slot2_rd_r;
                regfile_wr_data[0]  = slot2_is_csr_r ? slot2_csr_rdata_r : slot2_data_r;
                slot2_pending_written = 1'b1;
            end else if (!regfile_wr_en[1]) begin
                regfile_wr_en[1]    = 1'b1;
                regfile_wr_addr[1]  = slot2_rd_r;
                regfile_wr_data[1]  = slot2_is_csr_r ? slot2_csr_rdata_r : slot2_data_r;
                slot2_pending_written = 1'b1;
            end
        end

        // BUG-009-FIX2: Slot 2 延迟数据写回 (entry 1, 较新)
        if (slot2_pending2 && !e2_mul_valid && !e2_div_valid) begin
            if (!regfile_wr_en[0]) begin
                regfile_wr_en[0]    = 1'b1;
                regfile_wr_addr[0]  = slot2_rd_r2;
                regfile_wr_data[0]  = slot2_is_csr_r2 ? slot2_csr_rdata_r2 : slot2_data_r2;
                slot2_pending2_written = 1'b1;
            end else if (!regfile_wr_en[1]) begin
                regfile_wr_en[1]    = 1'b1;
                regfile_wr_addr[1]  = slot2_rd_r2;
                regfile_wr_data[1]  = slot2_is_csr_r2 ? slot2_csr_rdata_r2 : slot2_data_r2;
                slot2_pending2_written = 1'b1;
            end
        end

        // ── 槽 2: 使用空闲端口 (在延迟写回之后) ──
        if (!regfile_wr_en[0] && w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2]) begin
            regfile_wr_en[0]    = 1'b1;
            regfile_wr_addr[0]  = w_rd[2];
            if (w_inst[2].fu_type == FU_MISC && w_inst[2].funct3 != FN_ECALL)
                regfile_wr_data[0]  = csr_rdata;
            else
                regfile_wr_data[0]  = w_result[2];
            wr_select[2]        = 1'b1;
        end
        if (!regfile_wr_en[1] && !e2_mul_valid && !e2_div_valid &&
            w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] && !wr_select[2]) begin
            regfile_wr_en[1]    = 1'b1;
            regfile_wr_addr[1]  = w_rd[2];
            if (w_inst[2].fu_type == FU_MISC && w_inst[2].funct3 != FN_ECALL)
                regfile_wr_data[1]  = csr_rdata;
            else
                regfile_wr_data[1]  = w_result[2];
            wr_select[2]        = 1'b1;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // BUG-009-FIX: Pending write bypass
    // 当 slot 2/slot 1 写回被延迟 (两端口被占用), 其结果仍需对 bypass 可见
    // 优先级: 本周期被延迟的 slot 2 > 本周期被抢占的 slot 1
    //         > 上周期 slot2_pending entry0 > slot2_pending entry1 > slot1_pending
    //
    // BUG-009-FIX2: bypass 网络仅有 1 个 pending 端口 (bp_w_valid[2]).
    // 当 2+ 个延迟写回同时需要 bypass 转发时, 拉高 pending_bypass_stall
    // 阻止 issue 级发射新指令, 等待延迟写回完成.
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        automatic int unsigned pending_cnt;
        pending_cnt = 0;
        // 本周期新产生的延迟写回
        if (w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] && !wr_select[2])
            pending_cnt = pending_cnt + 1;
        if (slot1_preempted)
            pending_cnt = pending_cnt + 1;
        // 上周期延迟, 本周期仍未写入
        if (slot2_pending && !slot2_pending_written)
            pending_cnt = pending_cnt + 1;
        if (slot2_pending2 && !slot2_pending2_written)
            pending_cnt = pending_cnt + 1;
        if (slot1_pending && !slot1_pending_written)
            pending_cnt = pending_cnt + 1;

        pending_bypass_stall = (pending_cnt > 1);
    end

    always_comb begin
        pending_bypass_valid = 1'b0;
        pending_bypass_rd    = 5'h0;
        pending_bypass_data  = 32'h0;

        // Priority 1: 本周期 slot 2 有效但无法写入 (wr_select[2]=0)
        if (w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] && !wr_select[2]) begin
            pending_bypass_valid = 1'b1;
            pending_bypass_rd    = w_rd[2];
            if (w_inst[2].fu_type == FU_MISC && w_inst[2].funct3 != FN_ECALL)
                pending_bypass_data = csr_rdata;
            else
                pending_bypass_data = w_result[2];
        end
        // Priority 2: 本周期 slot 1 被 E2 抢占
        else if (slot1_preempted) begin
            pending_bypass_valid = 1'b1;
            pending_bypass_rd    = w_rd[1];
            if (w_inst[1].fu_type == FU_MISC && w_inst[1].funct3 != FN_ECALL)
                pending_bypass_data = csr_rdata;
            else
                pending_bypass_data = w_result[1];
        end
        // Priority 3: 上周期 slot2_pending (entry 0), 本周期仍未写入
        else if (slot2_pending && !slot2_pending_written) begin
            pending_bypass_valid = 1'b1;
            pending_bypass_rd    = slot2_rd_r;
            pending_bypass_data  = slot2_is_csr_r ? slot2_csr_rdata_r : slot2_data_r;
        end
        // Priority 4: 上周期 slot1_pending, 本周期仍未写入
        // (slot2_pending2 由 pending_bypass2 独立提供)
        else if (slot1_pending && !slot1_pending_written) begin
            pending_bypass_valid = 1'b1;
            pending_bypass_rd    = slot1_rd_r;
            pending_bypass_data  = slot1_is_csr_r ? slot1_csr_rdata_r : slot1_data_r;
        end
    end

    // BUG-009-FIX2: 2nd pending bypass — slot2_pending2 (entry 1)
    // 独立端口, 解决 bypass 网络只有 1 个 pending 端口时
    // slot2_pending2 数据无法被转发的问题
    always_comb begin
        pending_bypass2_valid = slot2_pending2 && !slot2_pending2_written;
        pending_bypass2_rd    = slot2_rd_r2;
        pending_bypass2_data  = slot2_is_csr_r2 ? slot2_csr_rdata_r2 : slot2_data_r2;
    end

    // ── BUG-009-FIX2: Post-drain state (combinational) ──
    // 计算 drain + shift 后的 buffer 状态, 用于 always_ff 决定新数据入队位置
    logic                    pd_e0_valid;
    logic [4:0]              pd_e0_rd;
    logic [31:0]             pd_e0_data;
    logic [31:0]             pd_e0_pc;
    logic [31:0]             pd_e0_inst;
    logic                    pd_e0_is_csr;
    logic [31:0]             pd_e0_csr_rdata;
    logic                    pd_e1_valid;

    always_comb begin
        if (slot2_pending && !slot2_pending_written) begin
            // Entry 0 存活 (未写入), 数据不变
            pd_e0_valid     = 1'b1;
            pd_e0_rd        = slot2_rd_r;
            pd_e0_data      = slot2_data_r;
            pd_e0_pc        = slot2_pc_r;
            pd_e0_inst      = slot2_inst_r;
            pd_e0_is_csr    = slot2_is_csr_r;
            pd_e0_csr_rdata = slot2_csr_rdata_r;
            // Entry 1 也存活 (如果未写入), 数据不变
            pd_e1_valid     = slot2_pending2 && !slot2_pending2_written;
        end else begin
            // Entry 0 已写入或为空: entry 1 上移到 entry 0 (如果存活)
            if (slot2_pending2 && !slot2_pending2_written) begin
                pd_e0_valid     = 1'b1;
                pd_e0_rd        = slot2_rd_r2;
                pd_e0_data      = slot2_data_r2;
                pd_e0_pc        = slot2_pc_r2;
                pd_e0_inst      = slot2_inst_r2;
                pd_e0_is_csr    = slot2_is_csr_r2;
                pd_e0_csr_rdata = slot2_csr_rdata_r2;
            end else begin
                pd_e0_valid     = 1'b0;
                pd_e0_rd        = 5'h0;
                pd_e0_data      = 32'h0;
                pd_e0_pc        = 32'h0;
                pd_e0_inst      = 32'h0;
                pd_e0_is_csr    = 1'b0;
                pd_e0_csr_rdata = 32'h0;
            end
            // Entry 1 清空 (上移或已写入)
            pd_e1_valid     = 1'b0;
        end
    end

    // ── SA-5: 寄存被stall的slot 2数据 (下周期写回) ──
    // BUG-009-FIX2: 2-entry buffer 防止数据丢失
    // 使用 post-drain 组合状态决定新数据入队位置, 避免 shift-up 被覆盖
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            slot2_pending      <= 1'b0;
            slot2_rd_r         <= 5'h0;
            slot2_data_r       <= 32'h0;
            slot2_pc_r         <= 32'h0;
            slot2_inst_r       <= 32'h0;
            slot2_is_csr_r     <= 1'b0;
            slot2_csr_rdata_r  <= 32'h0;
            slot2_pending2     <= 1'b0;
            slot2_rd_r2        <= 5'h0;
            slot2_data_r2      <= 32'h0;
            slot2_pc_r2        <= 32'h0;
            slot2_inst_r2      <= 32'h0;
            slot2_is_csr_r2    <= 1'b0;
            slot2_csr_rdata_r2 <= 32'h0;
        end else begin
            // Step 1: 锁存 post-drain 状态
            slot2_pending      <= pd_e0_valid;
            slot2_rd_r         <= pd_e0_rd;
            slot2_data_r       <= pd_e0_data;
            slot2_pc_r         <= pd_e0_pc;
            slot2_inst_r       <= pd_e0_inst;
            slot2_is_csr_r     <= pd_e0_is_csr;
            slot2_csr_rdata_r  <= pd_e0_csr_rdata;

            slot2_pending2     <= pd_e1_valid;
            // Entry 1 数据寄存器: 存活时不需更新 (保持原值)

            // Step 2: 新延迟写回入队 (lowest free entry)
            if (slot2_need_stall) begin
                if (!pd_e0_valid) begin
                    // Entry 0 空闲, 保存到 entry 0
                    slot2_pending      <= 1'b1;
                    slot2_rd_r         <= w_rd[2];
                    slot2_data_r       <= w_result[2];
                    slot2_pc_r         <= w_pc[2];
                    slot2_inst_r       <= w_inst[2].inst;
                    slot2_is_csr_r     <= (w_inst[2].fu_type == FU_MISC && w_inst[2].funct3 != FN_ECALL);
                    slot2_csr_rdata_r  <= csr_rdata;
                end else if (!pd_e1_valid) begin
                    // Entry 0 满, entry 1 空闲, 保存到 entry 1
                    slot2_pending2     <= 1'b1;
                    slot2_rd_r2        <= w_rd[2];
                    slot2_data_r2      <= w_result[2];
                    slot2_pc_r2        <= w_pc[2];
                    slot2_inst_r2      <= w_inst[2].inst;
                    slot2_is_csr_r2    <= (w_inst[2].fu_type == FU_MISC && w_inst[2].funct3 != FN_ECALL);
                    slot2_csr_rdata_r2 <= csr_rdata;
                end
                // else: 两个 entry 都满, pending_bypass_stall 应已阻止此情况
                //       如果仍发生, 写入被丢弃 (与修复前行为一致)
            end
        end
    end

    // ── SA-CM-LD-001: 寄存被 E2 抢占的 slot 1 数据 ──
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            slot1_pending     <= 1'b0;
            slot1_rd_r        <= 5'h0;
            slot1_data_r      <= 32'h0;
            slot1_pc_r        <= 32'h0;
            slot1_inst_r      <= 32'h0;
            slot1_is_csr_r    <= 1'b0;
            slot1_csr_rdata_r <= 32'h0;
        end else if (slot1_preempted) begin
            // 本周期 slot 1 被 E2 抢占, 保存数据
            slot1_pending     <= 1'b1;
            slot1_rd_r        <= w_rd[1];
            slot1_data_r      <= w_result[1];
            slot1_pc_r        <= w_pc[1];
            slot1_inst_r      <= w_inst[1].inst;
            slot1_is_csr_r    <= (w_inst[1].fu_type == FU_MISC && w_inst[1].funct3 != FN_ECALL);
            slot1_csr_rdata_r <= csr_rdata;
        end else if (slot1_pending && !slot1_pending_written) begin
            // BUG-009-FIX: slot1_pending 仍未写入 (两端口被占用), 保持等待
            slot1_pending     <= 1'b1;
        end else begin
            // 本周期成功写回 slot 1 (或无需写回), 清除pending
            // 但仅在 slot1 未被新的 preempt 覆盖时清除
            if (!slot1_preempted)
                slot1_pending <= 1'b0;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // CSR 操作 (writeback-csr.html §3.1)
    // ═══════════════════════════════════════════════════════════
    logic        csr_active;
    logic [11:0] csr_addr_comb;
    logic [31:0] csr_wdata_comb;
    logic [1:0]  csr_op_comb;

    always_comb begin
        csr_active    = 1'b0;
        csr_addr_comb = 12'h0;
        csr_wdata_comb = 32'h0;
        csr_op_comb   = CSR_OP_NONE;

        // 查找 CSR 指令 (SYSTEM opcode = 7'b1110011, funct3 != 000)
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (w_valid[i] && w_inst[i].fu_type == FU_MISC &&
                w_inst[i].funct3 != FN_ECALL && !w_exception[i]) begin
                csr_active    = 1'b1;
                csr_addr_comb = w_inst[i].imm[11:0];
                csr_op_comb   = w_inst[i].funct3[1:0]; // 01=RW, 10=RS, 11=RC

                case (w_inst[i].funct3)
                    FN_CSRRW, FN_CSRRS, FN_CSRRC: begin
                        // 寄存器源: rs1 值 = w_result (已通过旁路获取)
                        csr_wdata_comb = w_result[i];
                    end
                    FN_CSRRWI, FN_CSRRSI, FN_CSRRCI: begin
                        // 立即数源: uimm = rs1 field = inst[19:15]
                        csr_wdata_comb = {27'h0, w_inst[i].rs1};
                    end
                    default: csr_wdata_comb = 32'h0;
                endcase
            end
        end
    end

    assign csr_addr  = csr_addr_comb;
    assign csr_wdata = csr_wdata_comb;
    assign csr_op    = csr_op_comb;

    // ═══════════════════════════════════════════════════════════
    // Trap/异常处理 (writeback-csr.html §3.1)
    // ═══════════════════════════════════════════════════════════
    logic        trap_taken;
    logic [31:0] trap_pc_comb;
    logic [3:0]  trap_cause;
    logic [31:0] trap_tval;

    always_comb begin
        trap_taken   = 1'b0;
        trap_pc_comb = mtvec_out;
        trap_cause   = 4'h0;
        trap_tval    = 32'h0;
        trap_request = 1'b0;

        // 检查异常 (优先级: 异常 > 中断)
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (w_valid[i] && w_exception[i]) begin
                trap_taken   = 1'b1;
                trap_request = 1'b1;
                trap_cause   = w_inst[i].exc_cause;
                trap_tval    = w_inst[i].pc; // 简化: tval = PC
                trap_pc_comb = mtvec_out;
                break; // 只处理第一个异常
            end
        end

        // 中断检查 (如果没有异常)
        // FIX: 仅在 MIE (mstatus[3]) 使能时接受中断, 避免 trap handler 执行期间被中断打断
        if (!trap_taken && irq_request && mstatus_out[3]) begin
            trap_taken   = 1'b1;
            trap_request = 1'b1;
            trap_cause   = 4'd11; // M external interrupt (简化)
            trap_pc_comb = mtvec_out;
        end
    end

    assign trap_pc = trap_pc_comb;

    // CSR 写使能: CSR 操作或 trap
    assign csr_we = csr_active || trap_taken;

    // ERR-129: 同 batch 异常后指令抑制
    logic exception_seen;

    // ═══════════════════════════════════════════════════════════
    // 提交信号 (→ 锁步比较器 D-011)
    // ═══════════════════════════════════════════════════════════
    // ERR-129 FIX: 异常指令后的同 batch 指令不得提交
    // 当 batch 中有 exception 时, 异常指令本身可以提交 (scoreboard 需要),
    // 但后续 slot 的指令必须被抑制, 因为 trap handler 接管后这些指令不应执行.
    always_comb begin
        commit_valid = '0;
        exception_seen = 1'b0;
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            commit_pc[i]     = w_pc[i];
            commit_result[i] = w_result[i];
            if (w_valid[i] && !exception_seen) begin
                commit_valid[i] = 1'b1;
                if (w_exception[i])
                    exception_seen = 1'b1;  // 后续 slot 不再提交
            end
        end
    end

    // ── V1 验证探针赋值 (all slots) ─────────────────────────
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            mon_inst[s]     = w_inst[s].inst;
            mon_inst_raw[s] = w_inst[s].inst_raw;
            mon_rd[s]      = w_rd[s];
            mon_rd_data[s] = w_result[s];
        end
    end
    // mon_irq: IRQ 被接受 (trap_taken 且非异常)
    assign mon_irq       = trap_taken && !trap_cause[3] && irq_request;

    // ═══════════════════════════════════════════════════════════
    // FSM (简化: W 级主要是组合逻辑, FSM 用于 trap 处理)
    // ═══════════════════════════════════════════════════════════
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_COMMIT,
        ST_TRAP,
        ST_IRQ,
        ST_HALT
    } wb_state_e;

    wb_state_e state_reg, state_next;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_IDLE;
        else
            state_reg <= state_next;
    end

    always_comb begin
        state_next = state_reg;
        case (state_reg)
            ST_IDLE: begin
                if (trap_taken)
                    state_next = (irq_request && !trap_cause[3]) ? ST_IRQ : ST_TRAP;
                else
                    state_next = ST_COMMIT;
            end
            ST_COMMIT: state_next = ST_IDLE;
            ST_TRAP:   state_next = ST_IDLE;  // trap 处理后立即恢复
            ST_IRQ:    state_next = ST_IDLE;
            ST_HALT:   state_next = ST_IDLE;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // HPM 事件计数器 (writeback-csr.html §3.2)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        hpm_inst_retired = 1'b0;
        hpm_branch       = 1'b0;
        hpm_branch_miss  = 1'b0;
        hpm_load         = 1'b0;
        hpm_store        = 1'b0;
        hpm_exception    = 1'b0;

        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (w_valid[i] && !trap_taken) begin
                hpm_inst_retired = 1'b1;

                // 分支事件
                if (w_inst[i].fu_type == FU_BRANCH) begin
                    hpm_branch = 1'b1;
                    if (w_inst[i].exc_valid) // 简化: 用 exc_valid 标记误预测
                        hpm_branch_miss = 1'b1;
                end

                // Load/Store 事件
                if (w_inst[i].fu_type == FU_MEM) begin
                    if (w_inst[i].inst[5])
                        hpm_store = 1'b1;
                    else
                        hpm_load = 1'b1;
                end
            end

            // 异常事件
            if (w_valid[i] && w_exception[i])
                hpm_exception = 1'b1;
        end
    end

endmodule
