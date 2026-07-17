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
    // ERR-019: F2 预测状态 (用于正确的误预测检测)
    input  logic                    e1_pred_taken,
    // ERR-055: Store buffer empty for FENCE drain
    input  logic                    e1_sb_empty,
    input  logic [31:0]             e1_pred_target,

    // ── E1 级输出 (→ M 级 + 旁路) ────────────────────────────
    output logic [31:0]             e1_result [ISSUE_WIDTH-1:0],
    output logic [4:0]              e1_rd [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  e1_valid_out,

    // ── E1 分支反馈 (→ Fetch F1) ──────────────────────────────
    output logic                    e1_branch_taken,
    output logic [31:0]             e1_branch_target,
    output logic [31:0]             e1_branch_pc,      // ERR-019: 分支指令 PC (BTB 更新用)
    output logic                    e1_mispredict,
    // ERR-019: 分支类型 (BTB 写入时区分 JAL/JALR/条件分支)
    output logic                    e1_br_is_jal,
    output logic                    e1_br_is_jalr,
    // ERR-044: call/ret 区分 (BTB 写入时设置 is_call/is_ret, 驱动 RAS)
    output logic                    e1_br_is_call,
    output logic                    e1_br_is_ret,
    // ERR-RAS: 分支指令压缩标志 (execute-level RAS 区分 PC+2/PC+4)
    output logic                    e1_br_is_compressed,

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

    // ERR-055: FENCE opcode
    localparam logic [6:0] OP_FENCE_OPCODE = 7'b0001111;

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
    bit          already_redirected; // ERR-020: 多槽误预测优先级标志

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
    logic        div_quot_negate;   // SA-CM-002: sign for quotient = dividend_sign XOR divisor_sign
    logic        div_remain_negate; // SA-CM-002: sign for remainder = dividend_sign

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
            div_quot_negate  <= 1'b0;
            div_remain_negate <= 1'b0;
        end else begin
            div_state_reg <= div_state_next;
            div_valid_r   <= 1'b0;

            case (div_state_reg)
                DIV_IDLE: begin
                    // 检测 DIV 指令
                    for (int i = 0; i < ISSUE_WIDTH; i++) begin
                        if (e1_valid[i] && e1_inst[i].fu_type == FU_DIV) begin
                            div_rd_reg <= e1_inst[i].rd;
                            div_busy_r <= 1'b1;
                            div_signed <= (e1_inst[i].funct3 == MUL_DIV || e1_inst[i].funct3 == MUL_REM);
                            div_is_rem <= (e1_inst[i].funct3 == MUL_REM || e1_inst[i].funct3 == MUL_REMU);

                            // SA-CM-010: 除零快速路径
                            if (e1_rs2_data[i] == 32'h0) begin
                                // 除零: 捕获原始操作数 (非绝对值), 跳过符号修正
                                div_dividend     <= e1_rs1_data[i];  // 原始被除数, 供 REM/REMU 返回
                                div_divisor      <= e1_rs2_data[i];  // 0, 供 DIV_DONE 检测
                                div_quot_negate   <= 1'b0;
                                div_remain_negate <= 1'b0;
                            end else begin
                                // 正常路径: 有符号取绝对值
                                if (e1_inst[i].funct3 == MUL_DIV || e1_inst[i].funct3 == MUL_REM) begin
                                    div_dividend <= e1_rs1_data[i][31] ? -e1_rs1_data[i] : e1_rs1_data[i];
                                    div_divisor  <= e1_rs2_data[i][31] ? -e1_rs2_data[i] : e1_rs2_data[i];
                                    // SA-CM-002 FIX: save original signs for result sign correction
                                    div_quot_negate   <= e1_rs1_data[i][31] ^ e1_rs2_data[i][31];
                                    div_remain_negate <= e1_rs1_data[i][31];
                                end else begin
                                    div_dividend <= e1_rs1_data[i];
                                    div_divisor  <= e1_rs2_data[i];
                                    div_quot_negate   <= 1'b0;
                                    div_remain_negate <= 1'b0;
                                end
                            end

                            // SA-CM-009: div_state transition handled by always_comb (div_state_next)
                            break;
                        end
                    end
                end

                DIV_INIT: begin
                    div_quotient  <= 32'h0;
                    div_remainder <= 32'h0;
                    div_cnt       <= 6'd32;
                    // SA-CM-009: div_state transition handled by always_comb (div_state_next)
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
                    end
                    // SA-CM-009: div_state transition handled by always_comb:
                    // - div_cnt > 1: stay in DIV_RUNNING
                    // - div_cnt == 1: transition to DIV_DONE (last bit processed)
                    // Note: always_comb uses (div_cnt <= 6'd1), always_ff uses (div_cnt > 6'd0)
                    // Both equivalent: when div_cnt==1, always_comb triggers transition,
                    // always_ff processes last bit then decrements to 0
                end

                DIV_DONE: begin
                    // SA-CM-002 FIX: use saved original signs instead of abs-value bit[31]
                    if (div_is_rem)
                        div_result_r <= (div_signed && div_remain_negate) ? -div_remainder : div_remainder;
                    else
                        div_result_r <= (div_signed && div_quot_negate) ? -div_quotient : div_quotient;
                    // SA-CM-010: 除零覆盖 — RISC-V 规范定义:
                    // DIV/DIVU 除零 = -1/0xFFFFFFFF, REM/REMU 除零 = 被除数
                    if (div_divisor == 32'h0)
                        div_result_r <= div_is_rem ? div_dividend : 32'hFFFFFFFF;
                    div_valid_r   <= 1'b1;
                    div_busy_r    <= 1'b0;
                    // SA-CM-009: div_state transition handled by always_comb (div_state_next)
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
                        // SA-CM-010: 除零快速路径 — 跳过 INIT/RUNNING, 直接 DONE
                        if (e1_rs2_data[i] == 32'h0)
                            div_state_next = DIV_DONE;
                        else
                            div_state_next = DIV_INIT;
                        break;
                    end
                end
            end
            DIV_INIT:    div_state_next = DIV_RUNNING;
            DIV_RUNNING: div_state_next = (div_cnt <= 6'd1) ? DIV_DONE : DIV_RUNNING;
            DIV_DONE:    div_state_next = DIV_IDLE;
            DIV_STALL:   div_state_next = DIV_IDLE;
            default:     div_state_next = DIV_IDLE;  // ERR-057: safe recovery
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // E1 级: 每发射槽运算 (组合逻辑)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        e1_branch_taken  = 1'b0;
        e1_branch_target = 32'h0;
        e1_branch_pc     = 32'h0;   // ERR-019
        e1_mispredict    = 1'b0;
        e1_br_is_jal     = 1'b0;   // ERR-019
        e1_br_is_jalr    = 1'b0;   // ERR-019
        e1_br_is_call    = 1'b0;   // ERR-044
        e1_br_is_ret     = 1'b0;   // ERR-044
        e1_br_is_compressed = 1'b0; // ERR-RAS
        e2_div_busy      = div_busy_r;

        // ERR-020: 多槽误预测优先级 — 最早 slot (最低 i) 优先
        already_redirected = 1'b0;

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
                    // Phase B: 增加 Zba/Zbb B-extension 运算路径
                    FU_ALU: begin
                        // ERR-023: AUIPC/LUI 特殊处理
                        // AUIPC: rd = PC + (imm[31:12] << 12)
                        // LUI:   rd = (imm[31:12] << 12)
                        // 原 bug: ALU default 路径只计算 rs1+rs2, 但 auipc/lui 需要特殊计算
                        if (e1_inst[i].inst[6:0] == 7'b0010111) begin
                            // ERR-023: AUIPC
                            e1_result[i] = e1_inst[i].pc + {e1_inst[i].inst[31:12], 12'h000};
                            // $display("[AUIPC-DBG] ...) -- debug print removed
                        end else if (e1_inst[i].inst[6:0] == 7'b0110111) begin
                            // ERR-023: LUI
                            e1_result[i] = {e1_inst[i].inst[31:12], 12'h000};
                        end else if (e1_inst[i].inst[6:0] == 7'b0010011) begin
                            // ERR-024: OPIMM 显式实现 (避免 alu_compute 的 funct7_5 误用)
                            // OPIMM 的 inst[31:25] 实际是 imm 的高 7 位, 不能用作 funct7.
                            // SRAI 通过 inst[30]=1 区分 (而 SRLI inst[30]=0).
                            case (e1_inst[i].funct3)
                                FN_ADD: begin
                                    e1_result[i] = e1_rs1_data[i] + e1_inst[i].imm;        // ADDI
                                    // $display("[ADDI-DBG] ...) -- debug print removed
                                end
                                FN_SLT:  e1_result[i] = {31'h0, $signed(e1_rs1_data[i]) < $signed(e1_inst[i].imm)};  // SLTI
                                FN_SLTU: e1_result[i] = {31'h0, e1_rs1_data[i] < e1_inst[i].imm};  // SLTIU
                                FN_XOR:  e1_result[i] = e1_rs1_data[i] ^ e1_inst[i].imm;        // XORI
                                FN_OR:   e1_result[i] = e1_rs1_data[i] | e1_inst[i].imm;        // ORI
                                FN_AND:  e1_result[i] = e1_rs1_data[i] & e1_inst[i].imm;        // ANDI
                                FN_SLL:  e1_result[i] = e1_rs1_data[i] << e1_inst[i].imm[4:0]; // SLLI
                                FN_SRL:  e1_result[i] = e1_inst[i].inst[30] ? $unsigned($signed(e1_rs1_data[i]) >>> e1_inst[i].imm[4:0]) : (e1_rs1_data[i] >> e1_inst[i].imm[4:0]);  // SRLI/SRAI
                                default: e1_result[i] = 32'h0;  // 未实现
                            endcase
                        end
                        // ERR-024: OPIMM/AUIPC/LUI 已在上方赋值, 跳过 funct7 case 避免被覆盖
                        if (e1_inst[i].inst[6:0] != 7'b0010011 &&
                            e1_inst[i].inst[6:0] != 7'b0010111 &&
                            e1_inst[i].inst[6:0] != 7'b0110111) begin
                        case (e1_inst[i].funct7)
                            // ── Zba: Shift-and-Add ──────────────────────
                            7'b0010000: begin
                                case (e1_inst[i].funct3)
                                    3'b010:  e1_result[i] = (e1_rs1_data[i] << 1) + e1_rs2_data[i]; // SH1ADD
                                    3'b100:  e1_result[i] = (e1_rs1_data[i] << 2) + e1_rs2_data[i]; // SH2ADD
                                    3'b110:  e1_result[i] = (e1_rs1_data[i] << 3) + e1_rs2_data[i]; // SH3ADD
                                    default: e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                endcase
                            end
                            // ── Zbb: Bit-logic (ANDN/ORN/XNOR) ──────────
                            7'b0100000: begin
                                case (e1_inst[i].funct3)
                                    3'b111:  e1_result[i] = e1_rs1_data[i] & ~e1_rs2_data[i]; // ANDN
                                    3'b110:  e1_result[i] = e1_rs1_data[i] | ~e1_rs2_data[i]; // ORN
                                    3'b100:  e1_result[i] = ~(e1_rs1_data[i] ^ e1_rs2_data[i]); // XNOR
                                    default: e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                endcase
                            end
                            // ── Zbb: MIN/MAX + CLZ/CTZ/CPOP + ROL/ROR + REV8 ──
                            7'b0000101: begin
                                case (e1_inst[i].funct3)
                                    3'b100:  e1_result[i] = ($signed(e1_rs1_data[i]) < $signed(e1_rs2_data[i])) ? e1_rs1_data[i] : e1_rs2_data[i]; // MIN
                                    3'b101:  e1_result[i] = (e1_rs1_data[i] < e1_rs2_data[i]) ? e1_rs1_data[i] : e1_rs2_data[i]; // MINU
                                    3'b110:  e1_result[i] = ($signed(e1_rs1_data[i]) > $signed(e1_rs2_data[i])) ? e1_rs1_data[i] : e1_rs2_data[i]; // MAX
                                    3'b111:  e1_result[i] = (e1_rs1_data[i] > e1_rs2_data[i]) ? e1_rs1_data[i] : e1_rs2_data[i]; // MAXU
                                    default: e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                endcase
                            end
                            7'b0110000: begin
                                // R-type: ROL/ROR + CLZ/CTZ/CPOP (R-type rs2 encodes)
                                // I-type: RORI (funct3=101, imm[5:0]=shamt)
                                if (e1_inst[i].inst[6:0] == 7'b0010011) begin
                                    // I-type B-ext: CLZ/CTZ/CPOP/RORI
                                    case (e1_inst[i].funct3)
                                        3'b001: begin
                                            // CLZ/CTZ/CPOP determined by rs2 field (bits [24:20])
                                            case (e1_inst[i].rs2)
                                                5'b00000: begin // CLZ
                                                    logic [31:0] clz_val;
                                                    clz_val = e1_rs1_data[i];
                                                    if (clz_val == 32'h0) e1_result[i] = 32'd32;
                                                    else begin
                                                        e1_result[i] = 32'd0;
                                                        for (int b = 31; b >= 0; b--) begin
                                                            if (clz_val[b] && e1_result[i] == 32'd0)
                                                                e1_result[i] = 32'd31 - b[4:0];
                                                        end
                                                    end
                                                end
                                                5'b00001: begin // CTZ
                                                    logic [31:0] ctz_val;
                                                    ctz_val = e1_rs1_data[i];
                                                    if (ctz_val == 32'h0) e1_result[i] = 32'd32;
                                                    else begin
                                                        e1_result[i] = 32'd0;
                                                        for (int b = 0; b < 32; b++) begin
                                                            if (ctz_val[b] && e1_result[i] == 32'd0)
                                                                e1_result[i] = b[4:0];
                                                        end
                                                    end
                                                end
                                                5'b00010: begin // CPOP
                                                    e1_result[i] = 32'd0;
                                                    for (int b = 0; b < 32; b++)
                                                        e1_result[i] = e1_result[i] + {31'h0, e1_rs1_data[i][b]};
                                                end
                                                default: e1_result[i] = 32'h0;
                                            endcase
                                        end
                                        3'b101: begin // RORI
                                            logic [4:0] rori_shamt;
                                            rori_shamt = e1_inst[i].rs2; // imm[4:0] = shamt for I-type
                                            e1_result[i] = (e1_rs1_data[i] >> rori_shamt) | (e1_rs1_data[i] << (32'd32 - {27'h0, rori_shamt}));
                                        end
                                        default: e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                    endcase
                                end else begin
                                    // R-type: ROL/ROR + CLZ/CTZ/CPOP
                                    case (e1_inst[i].funct3)
                                        3'b001: begin
                                            // CLZ/CTZ/CPOP (R-type: rs2 field selects)
                                            case (e1_inst[i].rs2)
                                                5'b00000: begin // CLZ
                                                    logic [31:0] clz_val;
                                                    clz_val = e1_rs1_data[i];
                                                    if (clz_val == 32'h0) e1_result[i] = 32'd32;
                                                    else begin
                                                        e1_result[i] = 32'd0;
                                                        for (int b = 31; b >= 0; b--) begin
                                                            if (clz_val[b] && e1_result[i] == 32'd0)
                                                                e1_result[i] = 32'd31 - b[4:0];
                                                        end
                                                    end
                                                end
                                                5'b00001: begin // CTZ
                                                    logic [31:0] ctz_val;
                                                    ctz_val = e1_rs1_data[i];
                                                    if (ctz_val == 32'h0) e1_result[i] = 32'd32;
                                                    else begin
                                                        e1_result[i] = 32'd0;
                                                        for (int b = 0; b < 32; b++) begin
                                                            if (ctz_val[b] && e1_result[i] == 32'd0)
                                                                e1_result[i] = b[4:0];
                                                        end
                                                    end
                                                end
                                                5'b00010: begin // CPOP
                                                    e1_result[i] = 32'd0;
                                                    for (int b = 0; b < 32; b++)
                                                        e1_result[i] = e1_result[i] + {31'h0, e1_rs1_data[i][b]};
                                                end
                                                default: begin // ROL (rs2[0]=1)
                                                    logic [4:0] rol_shamt;
                                                    rol_shamt = e1_rs2_data[i][4:0];
                                                    e1_result[i] = (e1_rs1_data[i] << rol_shamt) | (e1_rs1_data[i] >> (32'd32 - {27'h0, rol_shamt}));
                                                end
                                            endcase
                                        end
                                        3'b101: begin // ROR (R-type: shamt = rs2[4:0])
                                            logic [4:0] ror_shamt;
                                            ror_shamt = e1_rs2_data[i][4:0];
                                            e1_result[i] = (e1_rs1_data[i] >> ror_shamt) | (e1_rs1_data[i] << (32'd32 - {27'h0, ror_shamt}));
                                        end
                                        default: e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                    endcase
                                end
                            end
                            // ── Zbb: REV8 ───────────────────────────────
                            7'b0110100: begin
                                if (e1_inst[i].funct3 == 3'b101) begin // REV8
                                    e1_result[i] = {e1_rs1_data[i][7:0],   e1_rs1_data[i][15:8],
                                                    e1_rs1_data[i][23:16], e1_rs1_data[i][31:24]};
                                end else begin
                                    e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                end
                            end
                            // ── Zbb: ORC.B ──────────────────────────────
                            7'b0010100: begin
                                if (e1_inst[i].funct3 == 3'b101) begin // ORC.B
                                    e1_result[i] = {
                                        (|e1_rs1_data[i][31:24]) ? 8'hFF : 8'h00,
                                        (|e1_rs1_data[i][23:16]) ? 8'hFF : 8'h00,
                                        (|e1_rs1_data[i][15:8])  ? 8'hFF : 8'h00,
                                        (|e1_rs1_data[i][7:0])   ? 8'hFF : 8'h00
                                    };
                                end else begin
                                    e1_result[i] = alu_compute(e1_inst[i].funct3, e1_inst[i].funct7[5], e1_rs1_data[i], e1_rs2_data[i]);
                                end
                            end
                            // ── Standard RV32I ALU ──────────────────────
                            default: begin
                                e1_result[i] = alu_compute(
                                    e1_inst[i].funct3,
                                    e1_inst[i].funct7[5],
                                    e1_rs1_data[i],
                                    e1_rs2_data[i]
                                );
                            end
                        endcase
                    end
                    // ERR-024: 关闭 OPIMM/AUIPC/LUI 跳过 funct7 case 的 if 块
                    end

                    // ── BRANCH: 条件分支判定 (execute-alu.html §3.2) ──
                    FU_BRANCH: begin
                        is_branch[i] = 1'b1;

                        // JAL: opcode=1101111 (无条件跳转)
                        // 修复: 压缩指令 (C.JAL/C.J) 返回地址 = PC+2, 标准指令 = PC+4
                        if (e1_inst[i].inst[6:0] == 7'b1101111) begin
                            branch_taken[i]  = 1'b1;
                            branch_target[i] = e1_inst[i].pc + e1_inst[i].imm;
                            e1_result[i]     = e1_inst[i].pc + (e1_inst[i].is_compressed ? 32'd2 : 32'd4);
                        end
                        // JALR: opcode=1100111 (间接跳转)
                        // 修复: 压缩指令 (C.JR/C.JALR/C.RET) 返回地址 = PC+2
                        else if (e1_inst[i].inst[6:0] == 7'b1100111) begin
                            branch_taken[i]  = 1'b1;
                            branch_target[i] = (e1_rs1_data[i] + e1_inst[i].imm) & ~32'h1;
                            e1_result[i]     = e1_inst[i].pc + (e1_inst[i].is_compressed ? 32'd2 : 32'd4);
                        end
                        // 条件分支: opcode=1100011
                        else begin
                            branch_taken[i] = branch_evaluate(
                                e1_inst[i].funct3,
                                e1_rs1_data[i],
                                e1_rs2_data[i]
                            );
                            branch_target[i] = e1_inst[i].pc + e1_inst[i].imm;
                            if (branch_taken[i])
                                e1_result[i] = branch_target[i]; // 占位

                        end

                        // 误预测检测: ERR-019 修复 — 比较预测与实际
                        // 原 bug: 无条件认为所有 taken 分支都是误预测, 导致
                        // BTB 已正确预测的 JAL/BGEU 仍然触发 flush, 无限循环.
                        if (branch_taken[i]) begin
                            if (!e1_pred_taken) begin
                                // 预测 not-taken (BTB 冷启动), 实际 taken → 误预测
                                e1_mispredict = 1'b1;
                            end else if (branch_target[i] != e1_pred_target) begin
                                // 预测 taken 但目标不同 → 误预测
                                e1_mispredict = 1'b1;
                            end
                            // else: 预测 taken + 实际 taken + 目标相同 → 正确预测
                        end else begin
                            if (e1_pred_taken) begin
                                // 预测 taken, 实际 not-taken → 误预测
                                e1_mispredict = 1'b1;
                            end
                        end

                        // debug print removed: [DIAG-BR]

                        // ERR-019 修复: 始终更新分支反馈, 不受 mispredict 门控
                        // 原代码: if (!e1_mispredict) — 导致 taken 分支的 target 不传递,
                        // flush 重定向到 PC=0x0 (初始值), 程序崩溃.
                        // ERR-020 修复: 仅最早误预测 slot 设置 redirect
                        // ERR-044: call/ret 检测 (BTB 写入时设置 is_call/is_ret)
                        // call = JAL/JALR with rd in {x1, x5}
                        // ret  = JALR with rs1 in {x1, x5} and rd == x0
                        if (is_branch[i] && branch_taken[i]) begin
                            e1_br_is_call = (e1_inst[i].inst[6:0] == 7'b1101111 || e1_inst[i].inst[6:0] == 7'b1100111)
                                            && (e1_inst[i].inst[11:7] == 5'd1 || e1_inst[i].inst[11:7] == 5'd5);
                            e1_br_is_ret  = (e1_inst[i].inst[6:0] == 7'b1100111)
                                            && (e1_inst[i].inst[19:15] == 5'd1 || e1_inst[i].inst[19:15] == 5'd5)
                                            && (e1_inst[i].inst[11:7] == 5'd0);
                            e1_br_is_compressed = e1_inst[i].is_compressed;
                        end

                        if (e1_mispredict && !already_redirected) begin
                            already_redirected = 1'b1;
                            e1_branch_taken  = branch_taken[i];
                            e1_branch_target = branch_target[i];
                            e1_branch_pc     = e1_inst[i].pc;
                            e1_br_is_jal  = (e1_inst[i].inst[6:0] == 7'b1101111);
                            e1_br_is_jalr = (e1_inst[i].inst[6:0] == 7'b1100111);
                            // DIAG: misprediction redirect -- debug print removed
                        end else if (!e1_mispredict && !already_redirected) begin
                            // 非误预测但仍需更新分支反馈 (BTB 学习)
                            e1_branch_taken  = branch_taken[i];
                            e1_branch_target = branch_target[i];
                            e1_branch_pc     = e1_inst[i].pc;
                            e1_br_is_jal  = (e1_inst[i].inst[6:0] == 7'b1101111);
                            e1_br_is_jalr = (e1_inst[i].inst[6:0] == 7'b1100111);
                        end
                    end

                    // ── MUL: 1-cycle (execute-alu.html §3.1) ──
                    FU_MUL: begin
                        // E2 输出结果, 但 valid 信号正常传播到 M 级
                        // E1 结果占位 (实际结果由 E2→M 旁路替换)
                        e1_result[i] = 32'h0;
                        e1_valid_out[i] = e1_valid[i]; // valid 正常传播
                    end

                    // ── DIV: 多 cycle, 阻塞 (execute-alu.html §3.2) ──
                    FU_DIV: begin
                        if (div_busy_r) begin
                            e1_valid_out[i] = 1'b0; // DIV 忙, 需要 stall
                        end else begin
                            // DIV 完成, valid 正常传播
                            e1_result[i] = div_result_r;
                            e1_valid_out[i] = e1_valid[i];
                        end
                    end

                    // ── MEM: LSU 地址计算 ──
                    FU_MEM: begin
                        e1_result[i] = e1_rs1_data[i] + e1_inst[i].imm; // 有效地址
                    end

                    // ── MISC: CSR, ECALL, EBREAK, FENCE 等 ──
                    FU_MISC: begin
                        e1_result[i] = e1_rs1_data[i]; // pass-through
                        // ECALL: opcode=SYSTEM(1110011), funct12=0, funct3=0
                        if (e1_inst[i].inst[6:0] == 7'b1110011 &&
                            e1_inst[i].inst[31:20] == 12'h000 &&
                            e1_inst[i].funct3 == 3'b000) begin
                            e1_exception[i] = 1'b1;
                            e1_exc_cause[i] = EXC_ECALL_M[3:0];
                        end
                        // EBREAK: opcode=SYSTEM(1110011), funct12=1, funct3=0
                        if (e1_inst[i].inst[6:0] == 7'b1110011 &&
                            e1_inst[i].inst[31:20] == 12'h001 &&
                            e1_inst[i].funct3 == 3'b000) begin
                            e1_exception[i] = 1'b1;
                            e1_exc_cause[i] = EXC_BREAKPOINT[3:0];
                        end
                        // FENCE (opcode=0001111): drain store buffer
                        // ERR-055: FENCE waits until store buffer is empty
                        if (e1_inst[i].inst[6:0] == OP_FENCE_OPCODE && !e1_sb_empty) begin
                            // Store buffer not empty: stall this instruction
                            e1_valid_out[i] = 1'b0;  // Prevent commit until SB drained
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
        // SA-CM-006: 使用 lsu0_occupied 标志替代地址 0 判断
        // 原代码用 e1_mem_addr[0]==0 判断端口空闲，但地址 0x0 是有效 SRAM 地址
        logic lsu0_occupied;
        lsu0_occupied = 1'b0;
        e1_mem_addr[0]  = 32'h0;
        e1_mem_we[0]    = 1'b0;
        e1_mem_wdata[0] = 32'h0;
        e1_mem_addr[1]  = 32'h0;
        e1_mem_we[1]    = 1'b0;
        e1_mem_wdata[1] = 32'h0;

        // 从发射槽中分配 MEM 类型指令到 LSU 端口
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (e1_valid[i] && e1_inst[i].fu_type == FU_MEM) begin
                if (!lsu0_occupied) begin
                    // LSU 端口 0: 第一个 MEM 指令
                    e1_mem_addr[0]  = e1_rs1_data[i] + e1_inst[i].imm;
                    e1_mem_we[0]    = e1_inst[i].inst[5]; // STORE bit (opcode[5])
                    e1_mem_wdata[0] = e1_rs2_data[i];
                    lsu0_occupied   = 1'b1;
                end else begin
                    // LSU 端口 1: 第二个 MEM 指令
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
