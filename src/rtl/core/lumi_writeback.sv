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
    output logic [4:0]              mon_rd   [ISSUE_WIDTH-1:0],
    output logic [31:0]             mon_rd_data [ISSUE_WIDTH-1:0],
    output logic                    mon_irq        // IRQ accepted
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

    logic [ISSUE_WIDTH-1:0] wr_select;  // 被选中写回的指令

    always_comb begin
        regfile_wr_en    = 2'b00;
        regfile_wr_addr[0] = 5'h0;
        regfile_wr_addr[1] = 5'h0;
        regfile_wr_data[0] = 32'h0;
        regfile_wr_data[1] = 32'h0;
        wr_select = '0;

        // ── W 端口 0: 槽 0 ──
        if (w_valid[0] && w_rd[0] != 5'h0 && !w_exception[0]) begin
            regfile_wr_en[0]    = 1'b1;
            regfile_wr_addr[0]  = w_rd[0];
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
            regfile_wr_data[1]  = w_result[1];
            wr_select[1]        = 1'b1;
        end

        // ── 槽 2: 延迟到下周期 (如果端口都忙) ──
        // 简化: 槽 2 使用端口 0 (如果槽 0 无效)
        if (!w_valid[0] && w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2]) begin
            regfile_wr_en[0]    = 1'b1;
            regfile_wr_addr[0]  = w_rd[2];
            regfile_wr_data[0]  = w_result[2];
            wr_select[2]        = 1'b1;
        end
        // 或者槽 2 使用端口 1 (如果槽 1 无效且无 E2)
        if (!w_valid[1] && !e2_mul_valid && !e2_div_valid &&
            w_valid[2] && w_rd[2] != 5'h0 && !w_exception[2] && !wr_select[2]) begin
            regfile_wr_en[1]    = 1'b1;
            regfile_wr_addr[1]  = w_rd[2];
            regfile_wr_data[1]  = w_result[2];
            wr_select[2]        = 1'b1;
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
        if (!trap_taken && irq_request) begin
            trap_taken   = 1'b1;
            trap_request = 1'b1;
            trap_cause   = 4'd11; // M external interrupt (简化)
            trap_pc_comb = mtvec_out;
        end
    end

    assign trap_pc = trap_pc_comb;

    // CSR 写使能: CSR 操作或 trap
    assign csr_we = csr_active || trap_taken;

    // ═══════════════════════════════════════════════════════════
    // 提交信号 (→ 锁步比较器 D-011)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        commit_valid = '0;
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            commit_pc[i]     = w_pc[i];
            commit_result[i] = w_result[i];
            if (w_valid[i] && !trap_taken) begin
                commit_valid[i] = 1'b1;
            end
        end
    end

    // ── V1 验证探针赋值 (all slots) ─────────────────────────
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            mon_inst[s]    = w_inst[s].inst;
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
