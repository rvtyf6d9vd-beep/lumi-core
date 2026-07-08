// =================================================================
// LUMI-DESIGN-EXE | 需求: LUMI-EXE-001~006 | 承接: design/execute-alu.html §3.1~3.2
// 模块: lumi_execute — E1/E2 级执行 (ALU/MUL/DIV/Branch/LSU)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: E1 级 1-cycle ALU + E2 级 MUL(1-cycle) + DIV(FSM) + Branch 判定 + LSU 地址
// 3 发射宽度: 每个 cycle 最多 3 条指令并行执行 (ALU slot 0/1/2)
// 分支反馈: 条件分支在 E1 级解析, 误预测信号 → Fetch flush

module lumi_execute #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH  // 3
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── E1 级输入 (← I 级发射) ────────────────────────────────
    input  lumi_pkg::inst_pkt_t     e1_inst [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  e1_valid,
    input  logic [31:0]             e1_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             e1_rs2_data [ISSUE_WIDTH-1:0],

    // ── E1 级输出 (→ M 级 + 旁路) ────────────────────────────
    output logic [31:0]             e1_result [ISSUE_WIDTH-1:0],
    output logic [4:0]              e1_rd [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  e1_valid_out,

    // ── E1 分支反馈 (→ Fetch F1) ──────────────────────────────
    output logic                    e1_branch_taken,
    output logic [31:0]             e1_branch_target,
    output logic                    e1_mispredict,

    // ── E1 LSU 地址 (→ Memory 级) ─────────────────────────────
    output logic [31:0]             e1_mem_addr [1:0],        // 2x LSU
    output logic                    e1_mem_we   [1:0],
    output logic [31:0]             e1_mem_wdata[1:0],

    // ── E2 级输出 (→ M 级) ───────────────────────────────────
    output logic [31:0]             e2_mul_result,
    output logic [31:0]             e2_mul_result_hi,
    output logic                    e2_mul_valid,
    output logic [31:0]             e2_div_result,
    output logic                    e2_div_valid,
    output logic                    e2_div_busy,
    output logic [4:0]              e2_rd,

    // ── 异常 (→ Writeback) ────────────────────────────────────
    output logic [ISSUE_WIDTH-1:0]  e1_exception,
    output logic [3:0]              e1_exc_cause [ISSUE_WIDTH-1:0]
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // RV32 funct3 / funct7 常量
    // ═══════════════════════════════════════════════════════════
    // ALU funct3
    localparam logic [2:0] FN_ADD  = 3'b000;
    localparam logic [2:0] FN_SLL  = 3'b001;
    localparam logic [2:0] FN_SLT  = 3'b010;
    localparam logic [2:0] FN_SLTU = 3'b011;
    localparam logic [2:0] FN_XOR  = 3'b100;
    localparam logic [2:0] FN_SRL  = 3'b101;  // funct7[5] = SRA
    localparam logic [2:0] FN_OR   = 3'b110;
    localparam logic [2:0] FN_AND  = 3'b111;
    localparam logic [2:0] FN_SUB  = 3'b000;  // funct7[5] = 1

    // Branch funct3
    localparam logic [2:0] BR_BEQ  = 3'b000;
    localparam logic [2:0] BR_BNE  = 3'b001;
    localparam logic [2:0] BR_BLT  = 3'b100;
    localparam logic [2:0] BR_BGE  = 3'b101;
    localparam logic [2:0] BR_BLTU = 3'b110;
    localparam logic [2:0] BR_BGEU = 3'b111;

    // MUL funct3
    localparam logic [2:0] MUL_MUL    = 3'b000;
    localparam logic [2:0] MUL_MULH   = 3'b001;
    localparam logic [2:0] MUL_MULHSU = 3'b010;
    localparam logic [2:0] MUL_MULHU  = 3'b011;
    localparam logic [2:0] MUL_DIV    = 3'b100;
    localparam logic [2:0] MUL_DIVU   = 3'b101;
    localparam logic [2:0] MUL_REM    = 3'b110;
    localparam logic [2:0] MUL_REMU   = 3'b111;

    // LOAD/STORE funct3
    localparam logic [2:0] LS_B  = 3'b000;
    localparam logic [2:0] LS_H  = 3'b001;
    localparam logic [2:0] LS_W  = 3'b010;
    localparam logic [2:0] LS_BU = 3'b100;
    localparam logic [2:0] LS_HU = 3'b101;

    // ═══════════════════════════════════════════════════════════
    // ALU 组合逻辑 (E1 级, 1-cycle, execute-alu.html §3.1)
    // ═══════════════════════════════════════════════════════════
    logic [31:0] alu_result [ISSUE_WIDTH-1:0];
    logic [31:0] alu_op1, alu_op2;
    logic [4:0]  alu_shamt;

    function automatic logic [31:0] alu_compute(
        input logic [2:0]  funct3,
        input logic        funct7_5,   // funct7[5]: ADD/SUB, SRL/SRA 区分
        input logic [31:0] op1,
        input logic [31:0] op2
    );
        logic [31:0] res;
        logic [4:0]  shamt;
        shamt = op2[4:0];
        case (funct3)
            FN_ADD:  res = funct7_5 ? (op1 - op2) : (op1 + op2);
            FN_SLL:  res = op1 << shamt;
            FN_SLT:  res = {31'h0, $signed(op1) < $signed(op2)};
            FN_SLTU: res = {31'h0, op1 < op2};
            FN_XOR:  res = op1 ^ op2;
            FN_SRL:  res = funct7_5 ? $unsigned($signed(op1) >>> shamt) : (op1 >> shamt);
            FN_OR:   res = op1 | op2;
            FN_AND:  res = op1 & op2;
            default: res = 32'h0;
        endcase
        return res;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // 分支判定 (E1 级, execute-alu.html §3.2)
    // ═══════════════════════════════════════════════════════════
    logic        branch_taken [ISSUE_WIDTH-1:0];
    logic [31:0] branch_target [ISSUE_WIDTH-1:0];
    logic        is_branch [ISSUE_WIDTH-1:0];

    function automatic logic branch_evaluate(
        input logic [2:0]  funct3,
        input logic [31:0] rs1,
        input logic [31:0] rs2
    );
        case (funct3)
            BR_BEQ:  return (rs1 == rs2);
            BR_BNE:  return (rs1 != rs2);
            BR_BLT:  return ($signed(rs1) < $signed(rs2));
            BR_BGE:  return ($signed(rs1) >= $signed(rs2));
            BR_BLTU: return (rs1 < rs2);
            BR_BGEU: return (rs1 >= rs2);
            default: return 1'b0;
        endcase
    endfunction

    // ═══════════════════════════════════════════════════════════
    // MUL: 1-cycle 乘法 (execute-alu.html §3.1)
    // ═══════════════════════════════════════════════════════════
    logic [63:0] mul_full;
    logic [31:0] mul_lo_comb;
    logic [31:0] mul_hi_comb;
    logic        mul_active;
    logic [2:0]  mul_funct3;
    logic [4:0]  mul_rd_comb;

    // 找到 MUL 指令槽
    always_comb begin
        mul_active = 1'b0;
        mul_funct3 = MUL_MUL;
        mul_rd_comb = 5'h0;
        mul_lo_comb = 32'h0;
        mul_hi_comb = 32'h0;
        mul_full    = 64'h0;

        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (e1_valid[i] && e1_inst[i].fu_type == FU_MUL) begin
                mul_active = 1'b1;
                mul_funct3 = e1_inst[i].funct3;
                mul_rd_comb = e1_inst[i].rd;

                // 根据 funct3 选择有符号/无符号乘法
                case (e1_inst[i].funct3)
                    MUL_MUL: begin
                        mul_full = $signed({{32{e1_rs1_data[i][31]}}, e1_rs1_data[i]}) *
                                   $signed({{32{e1_rs2_data[i][31]}}, e1_rs2_data[i]});
                    end
                    MUL_MULH: begin
                        mul_full = $unsigned($signed({{32{e1_rs1_data[i][31]}}, e1_rs1_data[i]}) *
                                             $signed({{32{e1_rs2_data[i][31]}}, e1_rs2_data[i]}));
                    end
                    MUL_MULHSU: begin
                        mul_full = $unsigned($signed({{32{e1_rs1_data[i][31]}}, e1_rs1_data[i]}) *
                                             {32'h0, e1_rs2_data[i]});
                    end
                    MUL_MULHU: begin
                        mul_full = {32'h0, e1_rs1_data[i]} * {32'h0, e1_rs2_data[i]};
                    end
                    default: mul_full = 64'h0;
                endcase

                mul_lo_comb = mul_full[31:0];
                mul_hi_comb = mul_full[63:32];
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // DIV: 多 cycle FSM (execute-alu.html §3.2)
    // ═══════════════════════════════════════════════════════════
    typedef enum logic [2:0] {
        DIV_IDLE,
        DIV_INIT,
        DIV_RUNNING,
        DIV_DONE,
        DIV_STALL
    } div_state_e;

    div_state_e div_state_reg, div_state_next;
    logic [31:0] div_dividend, div_divisor;
    logic [31:0] div_quotient, div_remainder;
    logic [5:0]  div_cnt;                                 // 32 步计数 + 余量
    logic        div_signed;                                // 有符号除法
    logic        div_is_rem;                                // 结果是余数
    logic [4:0]  div_rd_reg;
    logic [31:0] div_result_r;
    logic        div_valid_r;
    logic        div_busy_r;

    // DIV FSM 时序逻辑
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            div_state_reg  <= DIV_IDLE;
            div_dividend   <= 32'h0;
            div_divisor    <= 32'h0;
            div_quotient   <= 32'h0;
            div_remainder  <= 32'h0;
            div_cnt        <= 6'h0;
            div_signed     <= 1'b0;
            div_is_rem     <= 1'b0;
            div_rd_reg     <= 5'h0;
            div_result_r   <= 32'h0;
            div_valid_r    <= 1'b0;
            div_busy_r     <= 1'b0;
        end else begin
            div_state_reg <= div_state_next;
            div_valid_r   <= 1'b0;

            case (div_state_reg)
                DIV_IDLE: begin
                    // 检测 DIV 指令
                    for (int i = 0; i < ISSUE_WIDTH; i++) begin
                        if (e1_valid[i] && e1_inst[i].fu_type == FU_DIV) begin
                            div_signed <= e1_inst[i].funct3[0] ^  // DIVU/REMU 无符号
                                          (e1_inst[i].funct3 == MUL_DIV || e1_inst[i].funct3 == MUL_REM);
                            div_is_rem <= (e1_inst[i].funct3 == MUL_REM || e1_inst[i].funct3 == MUL_REMU);
                            div_rd_reg <= e1_inst[i].rd;
                            div_busy_r <= 1'b1;

                            // 有符号: 取绝对值
                            if (e1_inst[i].funct3 == MUL_DIV || e1_inst[i].funct3 == MUL_REM) begin
                                div_dividend <= e1_rs1_data[i][31] ? -e1_rs1_data[i] : e1_rs1_data[i];
                                div_divisor  <= e1_rs2_data[i][31] ? -e1_rs2_data[i] : e1_rs2_data[i];
                            end else begin
                                div_dividend <= e1_rs1_data[i];
                                div_divisor  <= e1_rs2_data[i];
                            end

                            div_state_reg <= DIV_INIT;
                            break;
                        end
                    end
                end

                DIV_INIT: begin
                    div_quotient  <= 32'h0;
                    div_remainder <= 32'h0;
                    div_cnt       <= 6'd32;
                    div_state_reg <= DIV_RUNNING;
                end

                DIV_RUNNING: begin
                    if (div_cnt > 6'd0) begin
                        // 恢复除法: 每 cycle 1 bit
                        logic [32:0] sub_result;
                        sub_result = {div_remainder[30:0], div_dividend[div_cnt-1]} - {1'b0, div_divisor};
                        if (!sub_result[32]) begin
                            // 够减
                            div_remainder <= sub_result[31:0];
                            div_quotient  <= {div_quotient[30:0], 1'b1};
                        end else begin
                            div_remainder <= {div_remainder[30:0], div_dividend[div_cnt-1]};
                            div_quotient  <= {div_quotient[30:0], 1'b0};
                        end
                        div_cnt <= div_cnt - 1'b1;
                    end else begin
                        div_state_reg <= DIV_DONE;
                    end
                end

                DIV_DONE: begin
                    // 恢复符号
                    if (div_signed && (div_dividend[31] ^ div_divisor[31])) begin
                        div_result_r <= div_is_rem ? -div_remainder : -div_quotient;
                    end else begin
                        div_result_r <= div_is_rem ? div_remainder : div_quotient;
                    end
                    div_valid_r   <= 1'b1;
                    div_busy_r    <= 1'b0;
                    div_state_reg <= DIV_IDLE;
                end

                DIV_STALL: ;
            endcase
        end
    end

    // DIV FSM 组合逻辑
    always_comb begin
        div_state_next = div_state_reg;
        case (div_state_reg)
            DIV_IDLE: begin
                for (int i = 0; i < ISSUE_WIDTH; i++) begin
                    if (e1_valid[i] && e1_inst[i].fu_type == FU_DIV) begin
                        div_state_next = DIV_INIT;
                        break;
                    end
                end
            end
            DIV_INIT:    div_state_next = DIV_RUNNING;
            DIV_RUNNING: div_state_next = (div_cnt <= 6'd1) ? DIV_DONE : DIV_RUNNING;
            DIV_DONE:    div_state_next = DIV_IDLE;
            DIV_STALL:   div_state_next = DIV_IDLE;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // E1 级: 每发射槽运算 (组合逻辑)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        e1_branch_taken  = 1'b0;
        e1_branch_target = 32'h0;
        e1_mispredict    = 1'b0;
        e2_div_busy      = div_busy_r;

        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            e1_result[i]    = 32'h0;
            e1_rd[i]        = e1_inst[i].rd;
            e1_valid_out[i] = e1_valid[i];
            e1_exception[i] = 1'b0;
            e1_exc_cause[i] = 4'h0;
            branch_taken[i] = 1'b0;
            branch_target[i] = 32'h0;
            is_branch[i]    = 1'b0;

            if (e1_valid[i]) begin
                case (e1_inst[i].fu_type)
                    // ── ALU: 1-cycle (execute-alu.html §3.1) ──
                    FU_ALU: begin
                        e1_result[i] = alu_compute(
                            e1_inst[i].funct3,
                            e1_inst[i].funct7[5],
                            e1_rs1_data[i],
                            e1_rs2_data[i]
                        );
                    end

                    // ── BRANCH: 条件分支判定 (execute-alu.html §3.2) ──
                    FU_BRANCH: begin
                        branch_taken[i] = branch_evaluate(
                            e1_inst[i].funct3,
                            e1_rs1_data[i],
                            e1_rs2_data[i]
                        );
                        is_branch[i] = 1'b1;

                        // JAL: 无条件跳转, target = PC + imm
                        if (e1_inst[i].funct7[6]) begin
                            // 编码: funct7[6]=1 表示 JAL
                            branch_taken[i]  = 1'b1;
                            branch_target[i] = e1_inst[i].pc + e1_inst[i].imm;
                            e1_result[i]     = e1_inst[i].pc + 32'd4; // rd = PC+4
                        end
                        // JALR: target = (rs1 + imm) & ~1
                        else if (e1_inst[i].funct7[5]) begin
                            branch_taken[i]  = 1'b1;
                            branch_target[i] = (e1_rs1_data[i] + e1_inst[i].imm) & ~32'h1;
                            e1_result[i]     = e1_inst[i].pc + 32'd4;
                        end
                        // 条件分支
                        else begin
                            branch_target[i] = e1_inst[i].pc + e1_inst[i].imm;
                            if (branch_taken[i])
                                e1_result[i] = branch_target[i]; // 不需要, 但占位
                        end

                        // 误预测检测: 比较预测与实际
                        // 注: 预测信息需要从 fetch 传递下来, 此处简化为直接反馈
                        if (e1_branch_taken != branch_taken[i] ||
                            (branch_taken[i] && e1_branch_target != branch_target[i])) begin
                            e1_mispredict = 1'b1;
                        end

                        // 全局分支反馈 (只取第一个分支结果)
                        if (!e1_mispredict) begin
                            e1_branch_taken  = branch_taken[i];
                            e1_branch_target = branch_target[i];
                        end
                    end

                    // ── MUL: 1-cycle (execute-alu.html §3.1) ──
                    FU_MUL: begin
                        // 结果在 E2 级输出, E1 级不输出
                        e1_valid_out[i] = 1'b0;  // MUL 不经过 E1 旁路
                    end

                    // ── DIV: 多 cycle, 阻塞 (execute-alu.html §3.2) ──
                    FU_DIV: begin
                        e1_valid_out[i] = 1'b0;  // DIV 不经过 E1 旁路
                        if (div_busy_r) begin
                            e1_valid_out[i] = 1'b0; // DIV 忙, 需要 stall
                        end
                    end

                    // ── MEM: LSU 地址计算 ──
                    FU_MEM: begin
                        e1_result[i] = e1_rs1_data[i] + e1_inst[i].imm; // 有效地址
                    end

                    // ── MISC: CSR, ECALL, EBREAK 等 ──
                    FU_MISC: begin
                        e1_result[i] = e1_rs1_data[i]; // pass-through
                        // ECALL
                        if (e1_inst[i].inst[31:20] == 12'h000 && e1_inst[i].funct3 == 3'b000) begin
                            e1_exception[i] = 1'b1;
                            e1_exc_cause[i] = EXC_ECALL_M[3:0]; // 简化
                        end
                        // EBREAK
                        if (e1_inst[i].inst[31:20] == 12'h001 && e1_inst[i].funct3 == 3'b000) begin
                            e1_exception[i] = 1'b1;
                            e1_exc_cause[i] = EXC_BREAKPOINT[3:0];
                        end
                    end

                    default: begin
                        e1_result[i] = 32'h0;
                    end
                endcase
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // LSU 地址输出 (2x LSU, 组合逻辑)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        e1_mem_addr[0]  = 32'h0;
        e1_mem_we[0]    = 1'b0;
        e1_mem_wdata[0] = 32'h0;
        e1_mem_addr[1]  = 32'h0;
        e1_mem_we[1]    = 1'b0;
        e1_mem_wdata[1] = 32'h0;

        // 从发射槽中分配 MEM 类型指令到 LSU 端口
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (e1_valid[i] && e1_inst[i].fu_type == FU_MEM) begin
                // LSU 0: 优先使用第一个 MEM 槽
                if (e1_mem_addr[0] == 32'h0) begin
                    e1_mem_addr[0]  = e1_rs1_data[i] + e1_inst[i].imm;
                    e1_mem_we[0]    = e1_inst[i].inst[5]; // STORE bit (opcode[5])
                    e1_mem_wdata[0] = e1_rs2_data[i];
                end else begin
                    e1_mem_addr[1]  = e1_rs1_data[i] + e1_inst[i].imm;
                    e1_mem_we[1]    = e1_inst[i].inst[5];
                    e1_mem_wdata[1] = e1_rs2_data[i];
                end
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // E2 级输出 (MUL/DIV 寄存器)
    // ═══════════════════════════════════════════════════════════
    // MUL 寄存器 (1-cycle 延迟)
    logic [31:0] e2_mul_result_r;
    logic [31:0] e2_mul_hi_r;
    logic        e2_mul_valid_r;
    logic [4:0]  e2_mul_rd_r;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            e2_mul_result_r  <= 32'h0;
            e2_mul_hi_r      <= 32'h0;
            e2_mul_valid_r   <= 1'b0;
            e2_mul_rd_r      <= 5'h0;
        end else begin
            if (mul_active) begin
                case (mul_funct3)
                    MUL_MUL: begin
                        e2_mul_result_r <= mul_lo_comb;
                        e2_mul_hi_r     <= 32'h0;
                    end
                    MUL_MULH, MUL_MULHSU, MUL_MULHU: begin
                        e2_mul_result_r <= mul_hi_comb;
                        e2_mul_hi_r     <= mul_hi_comb;
                    end
                    default: begin
                        e2_mul_result_r <= mul_lo_comb;
                        e2_mul_hi_r     <= mul_hi_comb;
                    end
                endcase
                e2_mul_valid_r <= 1'b1;
                e2_mul_rd_r    <= mul_rd_comb;
            end else begin
                e2_mul_valid_r <= 1'b0;
            end
        end
    end

    assign e2_mul_result    = e2_mul_result_r;
    assign e2_mul_result_hi = e2_mul_hi_r;
    assign e2_mul_valid     = e2_mul_valid_r;
    assign e2_div_result    = div_result_r;
    assign e2_div_valid     = div_valid_r;
    assign e2_rd            = e2_mul_valid_r ? e2_mul_rd_r : div_rd_reg;

endmodule
