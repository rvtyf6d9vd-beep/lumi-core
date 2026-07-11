// =================================================================
// LUMI-DESIGN-DEC | 需求: LUMI-DEC-001~005 | 承接: design/decode-issue.html §3.1~3.2
// 模块: lumi_decode_issue — D/I 级解码与发射
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: RV32 指令解码 + 立即数生成 + FU 分类 + 冒险检测 + skip-stalled 发射
// D 级: 解码 FETCH_WIDTH(6) 条指令, 提取字段
// I 级: 选择 ISSUE_WIDTH(3) 条就绪指令, 分配 FU, 旁路 mux
// skip-stalled: 被阻塞的指令跳过, 后续独立指令继续发射 (decode-issue.html §3.2)

module lumi_decode_issue #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH,
    parameter int FETCH_WIDTH = lumi_pkg::FETCH_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── D 级输入 (← F2, FETCH_WIDTH wide) ─────────────────────
    input  logic [31:0]             d_instructions [FETCH_WIDTH-1:0],
    input  logic [FETCH_WIDTH-1:0]  d_inst_valid,
    input  logic [31:0]             d_pc,
    input  logic                    d_valid,

    // ── D 级输出 (→ RegFile 读端口) ───────────────────────────
    output logic [31:0]             d_rs1_data [ISSUE_WIDTH-1:0],
    output logic [31:0]             d_rs2_data [ISSUE_WIDTH-1:0],

    // ── RegFile 读端口 (D-009 仲裁: 3R 端口) ──────────────────
    output logic [4:0]              regfile_rs1_addr [ISSUE_WIDTH-1:0],
    output logic [4:0]              regfile_rs2_addr [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs2_data [ISSUE_WIDTH-1:0],

    // ── I 级输出 (→ Execute FU) ───────────────────────────────
    output lumi_pkg::inst_pkt_t     i_issue [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  i_issue_valid,
    output logic [3:0]              i_fu_id [ISSUE_WIDTH-1:0],

    // ── 旁路数据 (← E1/M/W) ──────────────────────────────────
    input  logic [ISSUE_WIDTH-1:0]  bypass_rs1_hit,
    input  logic [ISSUE_WIDTH-1:0]  bypass_rs2_hit,
    input  logic [31:0]             bypass_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             bypass_rs2_data [ISSUE_WIDTH-1:0],

    // ── FU 忙信号 (← FU Pool) ────────────────────────────────
    input  logic [9:0]              fu_busy,

    // ── 控制 ─────────────────────────────────────────────────
    output logic                    stall_out,
    input  logic                    flush,
    input  logic                    div_busy
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // RV32 opcode 常量 (decode-issue.html §3.1)
    // ═══════════════════════════════════════════════════════════
    localparam logic [6:0] OP_LUI    = 7'b0110111;
    localparam logic [6:0] OP_AUIPC  = 7'b0010111;
    localparam logic [6:0] OP_JAL    = 7'b1101111;
    localparam logic [6:0] OP_JALR   = 7'b1100111;
    localparam logic [6:0] OP_BRANCH = 7'b1100011;
    localparam logic [6:0] OP_LOAD   = 7'b0000011;
    localparam logic [6:0] OP_STORE  = 7'b0100011;
    localparam logic [6:0] OP_IMM    = 7'b0010011;  // I-type ALU
    localparam logic [6:0] OP_REG    = 7'b0110011;  // R-type ALU/MUL/DIV
    localparam logic [6:0] OP_MISC   = 7'b1110011;  // SYSTEM: CSR/ECALL/EBREAK
    localparam logic [6:0] OP_FENCE  = 7'b0001111;  // FENCE (ERR-013)
    localparam logic [6:0] OP_AMO    = 7'b0101111;  // Atomic
    localparam logic [6:0] OP_FLOAD  = 7'b0000111;  // FP Load
    localparam logic [6:0] OP_FSTORE = 7'b0100111;  // FP Store
    localparam logic [6:0] OP_FP     = 7'b1010011;  // FP Compute

    // ═══════════════════════════════════════════════════════════
    // 解码结构体
    // ═══════════════════════════════════════════════════════════
    typedef struct packed {
        logic        valid;
        logic [6:0]  opcode;
        logic [4:0]  rd;
        logic [2:0]  funct3;
        logic [4:0]  rs1;
        logic [4:0]  rs2;
        logic [6:0]  funct7;
        logic [31:0] imm;
        fu_type_e    fu_type;
        logic        has_rs1;
        logic        has_rs2;
        logic        has_rd;
    } decode_t;

    decode_t dec [FETCH_WIDTH-1:0];

    // ═══════════════════════════════════════════════════════════
    // RV32C 压缩指令展开器 (decode-issue.html §3.1.1)
    // 将 16 位压缩指令转换为等价的 32 位指令
    // ═══════════════════════════════════════════════════════════
    function automatic logic [31:0] c_ext_expand(logic [15:0] ci);
        logic [15:0] inst;
        logic [4:0]  rd_rs2, rs1p, rs2p, rd_rs1;
        logic [31:0] imm;

        inst    = ci;
        // 压缩指令寄存器编码: rs1' = inst[9:7]+8, rs2' = inst[4:2]+8
        rs1p    = {2'b01, inst[9:7]};    // x8-x15
        rs2p    = {2'b01, inst[4:2]};    // x8-x15
        rd_rs2  = inst[11:7];            // full 5-bit rd/rs2
        rd_rs1  = inst[11:7];            // full 5-bit rd/rs1

        case (inst[1:0])
            // ── Quadrant 0 (C0): opcode = 00 ──
            2'b00: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.ADDI4SPN: addi rd', x2, nzuimm
                        // nzuimm = inst[5]*4 + inst[12:11]*8 + inst[10:7]*16 ... complex
                        imm = {22'h0, inst[10:7], inst[12:11], inst[5], inst[6], 2'b00};
                        return {imm[11:0], 5'd2, 3'b000, rs2p, 7'b0010011}; // ADDI
                    end
                    3'b010: begin
                        // C.LW: lw rd', offset(rs1')
                        imm = {25'h0, inst[5], inst[12:10], inst[6], 2'b00};
                        return {imm[11:0], rs1p, 3'b010, rs2p, 7'b0000011}; // LW
                    end
                    3'b110: begin
                        // C.SW: sw rs2', offset(rs1')
                        imm = {25'h0, inst[5], inst[12:10], inst[6], 2'b00};
                        return {imm[11:5], rs2p, rs1p, 3'b010, imm[4:0], 7'b0100011}; // SW
                    end
                    default: return 32'h0000_0000; // Reserved / illegal
                endcase
            end

            // ── Quadrant 1 (C1): opcode = 01 ──
            2'b01: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.NOP (rd=0) / C.ADDI: addi rd, rd, nzimm
                        imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                        return {imm[11:0], rd_rs1, 3'b000, rd_rs1, 7'b0010011}; // ADDI
                    end
                    3'b001: begin
                        // C.JAL: jal x1, offset (RV32 only)
                        imm = {{21{inst[12]}}, inst[12], inst[8], inst[10:9], inst[6],
                               inst[7], inst[2], inst[11], inst[5:3], 1'b0};
                        return {imm[20], imm[10:1], imm[11], imm[19:12], 5'd1, 7'b1101111}; // JAL x1
                    end
                    3'b010: begin
                        // C.LI: addi rd, x0, imm
                        imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                        return {imm[11:0], 5'd0, 3'b000, rd_rs1, 7'b0010011}; // ADDI rd, x0, imm
                    end
                    3'b011: begin
                        if (rd_rs1 == 5'd2) begin
                            // C.ADDI16SP: addi x2, x2, nzimm
                            imm = {{22{inst[12]}}, inst[12], inst[4:3], inst[5], inst[2], inst[6], 4'b0000};
                            return {imm[11:0], 5'd2, 3'b000, 5'd2, 7'b0010011}; // ADDI x2, x2, imm
                        end else begin
                            // C.LUI: lui rd, nzimm
                            imm = {{14{inst[12]}}, inst[12], inst[6:2], 12'h0};
                            return {imm[31:12], rd_rs1, 7'b0110111}; // LUI
                        end
                    end
                    3'b100: begin
                        case (inst[11:10])
                            2'b00: begin
                                // C.SRLI: srli rd', rd', shamt
                                return {7'b0000000, inst[6:2], rs1p, 3'b101, rs1p, 7'b0010011}; // SRLI
                            end
                            2'b01: begin
                                // C.SRAI: srai rd', rd', shamt
                                return {7'b0100000, inst[6:2], rs1p, 3'b101, rs1p, 7'b0010011}; // SRAI
                            end
                            2'b10: begin
                                // C.ANDI: andi rd', rd', imm
                                imm = {{26{inst[12]}}, inst[12], inst[6:2]};
                                return {imm[11:0], rs1p, 3'b111, rs1p, 7'b0010011}; // ANDI
                            end
                            2'b11: begin
                                case ({inst[12], inst[6:5]})
                                    3'b000: // C.SUB
                                        return {7'b0100000, rs2p, rs1p, 3'b000, rs1p, 7'b0110011};
                                    3'b001: // C.XOR
                                        return {7'b0000000, rs2p, rs1p, 3'b100, rs1p, 7'b0110011};
                                    3'b010: // C.OR
                                        return {7'b0000000, rs2p, rs1p, 3'b110, rs1p, 7'b0110011};
                                    3'b011: // C.AND
                                        return {7'b0000000, rs2p, rs1p, 3'b111, rs1p, 7'b0110011};
                                    default: return 32'h0000_0000;
                                endcase
                            end
                        endcase
                    end
                    3'b101: begin
                        // C.J: jal x0, offset
                        imm = {{21{inst[12]}}, inst[12], inst[8], inst[10:9], inst[6],
                               inst[7], inst[2], inst[11], inst[5:3], 1'b0};
                        return {imm[20], imm[10:1], imm[11], imm[19:12], 5'd0, 7'b1101111}; // JAL x0
                    end
                    3'b110: begin
                        // C.BEQZ: beq rs1', x0, offset
                        imm = {{23{inst[12]}}, inst[12], inst[6:5], inst[2], inst[11:10], inst[4:3], 1'b0};
                        return {imm[12], imm[10:5], 5'd0, rs1p, 3'b000, imm[4:1], imm[11], 7'b1100011};
                    end
                    3'b111: begin
                        // C.BNEZ: bne rs1', x0, offset
                        imm = {{23{inst[12]}}, inst[12], inst[6:5], inst[2], inst[11:10], inst[4:3], 1'b0};
                        return {imm[12], imm[10:5], 5'd0, rs1p, 3'b001, imm[4:1], imm[11], 7'b1100011};
                    end
                    default: return 32'h0000_0000;
                endcase
            end

            // ── Quadrant 2 (C2): opcode = 10 ──
            2'b10: begin
                case (inst[15:13])
                    3'b000: begin
                        // C.SLLI: slli rd, rd, shamt
                        return {7'b0000000, inst[6:2], rd_rs1, 3'b001, rd_rs1, 7'b0010011}; // SLLI
                    end
                    3'b010: begin
                        // C.LWSP: lw rd, offset(x2)
                        imm = {24'h0, inst[3:2], inst[12], inst[6:4], 2'b00};
                        return {imm[11:0], 5'd2, 3'b010, rd_rs1, 7'b0000011}; // LW rd, imm(x2)
                    end
                    3'b100: begin
                        if (inst[12] == 1'b0) begin
                            if (inst[6:2] == 5'd0) begin
                                // C.JR: jalr x0, rs1, 0
                                return {12'h0, rd_rs1, 3'b000, 5'd0, 7'b1100111}; // JALR x0, rs1, 0
                            end else begin
                                // C.MV: add rd, x0, rs2
                                return {7'b0000000, inst[6:2], 5'd0, 3'b000, rd_rs1, 7'b0110011}; // ADD
                            end
                        end else begin
                            if (inst[6:2] == 5'd0) begin
                                if (rd_rs1 == 5'd0)
                                    return 32'h0000_0073; // C.EBREAK → EBREAK
                                else
                                    // C.JALR: jalr x1, rs1, 0
                                    return {12'h0, rd_rs1, 3'b000, 5'd1, 7'b1100111}; // JALR x1, rs1
                            end else begin
                                // C.ADD: add rd, rd, rs2
                                return {7'b0000000, inst[6:2], rd_rs1, 3'b000, rd_rs1, 7'b0110011}; // ADD
                            end
                        end
                    end
                    3'b110: begin
                        // C.SWSP: sw rs2, offset(x2)
                        imm = {24'h0, inst[8:7], inst[12:9], 2'b00};
                        return {imm[11:5], inst[6:2], 5'd2, 3'b010, imm[4:0], 7'b0100011}; // SW rs2, imm(x2)
                    end
                    default: return 32'h0000_0000;
                endcase
            end

            default: return ci[15:0]; // Not compressed (32-bit), pass lower 16 bits
        endcase
        return 32'h0000_0000;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // D 级: 指令解码 + 立即数生成 (decode-issue.html §3.1)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            // RV32C: 压缩指令展开
            if (d_inst_valid[i] && d_instructions[i][1:0] != 2'b11) begin
                // 16-bit compressed → expand to 32-bit
                tmp_inst = c_ext_expand(d_instructions[i][15:0]);
            end else begin
                tmp_inst = d_instructions[i];
            end
            dec[i].valid   = d_inst_valid[i] && d_valid;
            dec[i].opcode  = tmp_inst[6:0];
            dec[i].rd      = tmp_inst[11:7];
            dec[i].funct3  = tmp_inst[14:12];
            dec[i].rs1     = tmp_inst[19:15];
            dec[i].rs2     = tmp_inst[24:20];
            dec[i].funct7  = tmp_inst[31:25];
            dec[i].imm     = 32'h0;
            dec[i].fu_type = FU_ALU;
            dec[i].has_rs1 = 1'b0;
            dec[i].has_rs2 = 1'b0;
            dec[i].has_rd  = 1'b1;

            case (tmp_inst[6:0])
                // ── R-type: ADD/SUB/SLL/SLT/XOR/SRL/SRA/OR/AND + MUL/DIV ──
                OP_REG: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm     = 32'h0;
                    // M-extension: funct7 == 7'b0000001
                    if (tmp_inst[31:25] == 7'b0000001) begin
                        if (tmp_inst[14:12] < 3'b100)
                            dec[i].fu_type = FU_MUL;
                        else
                            dec[i].fu_type = FU_DIV;
                    end else begin
                        dec[i].fu_type = FU_ALU;
                    end
                end

                // ── I-type: ADDI/SLTI/XORI/ORI/ANDI/SLLI/SRLI/SRAI ──
                OP_IMM: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_ALU;
                end

                // ── LUI ──
                OP_LUI: begin
                    dec[i].imm = {tmp_inst[31:12], 12'h0};
                    dec[i].fu_type = FU_ALU;
                    dec[i].has_rs1 = 1'b0;
                end

                // ── AUIPC ──
                OP_AUIPC: begin
                    dec[i].imm = {tmp_inst[31:12], 12'h0};
                    dec[i].fu_type = FU_ALU;
                    dec[i].has_rs1 = 1'b0;
                end

                // ── JAL (J-type immediate) ──
                OP_JAL: begin
                    dec[i].imm = {{12{tmp_inst[31]}}, tmp_inst[19:12], tmp_inst[20], tmp_inst[30:21], 1'b0};
                    dec[i].fu_type = FU_BRANCH;
                end

                // ── JALR (I-type immediate) ──
                OP_JALR: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_BRANCH;
                end

                // ── Branch (B-type immediate) ──
                OP_BRANCH: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[7], tmp_inst[30:25], tmp_inst[11:8], 1'b0};
                    dec[i].fu_type = FU_BRANCH;
                    dec[i].has_rd  = 1'b0;
                end

                // ── Load (I-type) ──
                OP_LOAD: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_MEM;
                end

                // ── Store (S-type) ──
                OP_STORE: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:25], tmp_inst[11:7]};
                    dec[i].fu_type = FU_MEM;
                    dec[i].has_rd  = 1'b0;
                end

                // ── AMO ──
                OP_AMO: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].fu_type = FU_MEM;
                end

                // ── FP Load ──
                OP_FLOAD: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:20]};
                    dec[i].fu_type = FU_FP;
                end

                // ── FP Store ──
                OP_FSTORE: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].imm = {{20{tmp_inst[31]}}, tmp_inst[31:25], tmp_inst[11:7]};
                    dec[i].fu_type = FU_FP;
                    dec[i].has_rd  = 1'b0;
                end

                // ── FP Compute ──
                OP_FP: begin
                    dec[i].has_rs1 = 1'b1;
                    dec[i].has_rs2 = 1'b1;
                    dec[i].fu_type = FU_FP;
                end

                // ── FENCE: NOP-like (ERR-013 修复) ──
                OP_FENCE: begin
                    dec[i].fu_type = FU_MISC;
                    dec[i].has_rs1 = 1'b0;
                    dec[i].has_rs2 = 1'b0;
                    dec[i].has_rd  = 1'b0;  // FENCE 不写寄存器 (避免 false RAW)
                end

                // ── SYSTEM: CSR/ECALL/EBREAK ──
                OP_MISC: begin
                    dec[i].imm     = {20'h0, tmp_inst[31:20]};
                    dec[i].fu_type = FU_MISC;
                    dec[i].has_rs1 = (tmp_inst[14:12] != 3'b000); // CSR 读写有 rs1
                end

                default: begin
                    dec[i].valid = 1'b0; // 非法指令
                end
            endcase
        end
    end

    // ═══════════════════════════════════════════════════════════
    // RegFile 读端口地址输出 (D 级)
    // ═══════════════════════════════════════════════════════════
    // 将发射槽映射到 RegFile 读端口
    // 注: 由于 skip-stalled, 解码索引 != 发射槽索引

    logic [2:0] issue_sel [ISSUE_WIDTH-1:0];  // 每个发射槽选择的解码索引
    logic       issue_ready [ISSUE_WIDTH-1:0]; // 是否可发射
    logic [$clog2(FETCH_WIDTH):0] issue_count; // 实际发射数

    // ── issued_mask: 跟踪已发射指令 (ERR-014 修复) ────
    logic [FETCH_WIDTH-1:0] issued_mask_r, issued_mask_next;
    logic [31:0] batch_pc_r, batch_pc_next;

    // 临时变量 (避免 automatic inside always_comb, Verilator 兼容)
    logic       tmp_already_selected;
    logic       tmp_fu_available;
    logic       tmp_batch_raw;
    logic       tmp_selected;

    decode_t    tmp_prev;
    logic [31:0] tmp_inst;
    decode_t    tmp_dec_d;

    // ═══════════════════════════════════════════════════════════
    // I 级: FU 分配 + 冒险检测 + skip-stalled (decode-issue.html §3.2)
    // ═══════════════════════════════════════════════════════════
    // skip-stalled: 如果第 i 条指令被阻塞 (FU busy 或 RAW),
    //   跳过它, 继续检查第 i+1 条是否可以发射

    // 冒险检测: RAW 依赖 (同一 decode 批次内的 WAW/WAR)
    logic [ISSUE_WIDTH-1:0] raw_stall;

    always_comb begin
        issue_count = '0;
        i_issue_valid = '0;
        stall_out = 1'b0;
        raw_stall = '0;

        // 初始化所有发射槽
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            issue_sel[s]   = 3'h0;
            issue_ready[s] = 1'b0;
        end

        // skip-stalled 扫描: 从解码队列中选择可发射的指令
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            for (int qi = 0; qi < FETCH_WIDTH; qi++) begin
                if (dec[qi].valid && !issued_mask_r[qi] && issue_count < ISSUE_WIDTH[$clog2(FETCH_WIDTH):0]) begin
                    // 检查该解码槽是否已被选中
                    tmp_already_selected = 1'b0;
                    for (int p = 0; p < s; p++) begin
                        if (issue_sel[p] == qi[2:0] && issue_ready[p])
                            tmp_already_selected = 1'b1;
                    end

                    if (!tmp_already_selected) begin
                        // 检查 FU 可用性 (decode-issue.html §3.2)
                        tmp_fu_available = !fu_busy[dec[qi].fu_type];
                        if (dec[qi].fu_type == FU_DIV)
                            tmp_fu_available = tmp_fu_available && !div_busy;

                        // 检查批次内 RAW 冒险
                        tmp_batch_raw = 1'b0;
                        for (int p = 0; p < s; p++) begin
                            if (issue_ready[p]) begin
                                tmp_prev = dec[issue_sel[p]];
                                // 当前指令的 rs1/rs2 依赖前一条的 rd
                                if (tmp_prev.has_rd && tmp_prev.rd != 5'h0) begin
                                    if ((dec[qi].has_rs1 && dec[qi].rs1 == tmp_prev.rd) ||
                                        (dec[qi].has_rs2 && dec[qi].rs2 == tmp_prev.rd)) begin
                                        tmp_batch_raw = 1'b1;
                                    end
                                end
                            end
                        end

                        if (tmp_fu_available && !tmp_batch_raw && !issue_ready[s]) begin
                            issue_sel[s]   = qi[2:0];
                            issue_ready[s] = 1'b1;
                            issue_count    = issue_count + 1'b1;
                        end
                        // skip-stalled: 如果不可发射, 继续检查下一条
                    end
                end
            end
        end

        // 如果队列中有有效指令但无法全部发射, stall
        if (d_valid) begin
            for (int qi = 0; qi < FETCH_WIDTH; qi++) begin
                if (dec[qi].valid && !issued_mask_r[qi]) begin
                    tmp_selected = 1'b0;
                    for (int s = 0; s < ISSUE_WIDTH; s++) begin
                        if (issue_ready[s] && issue_sel[s] == qi[2:0])
                            tmp_selected = 1'b1;
                    end
                    if (!tmp_selected) stall_out = 1'b1;
                end
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // RegFile 读端口地址 (D 级输出)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            if (issue_ready[s]) begin
                regfile_rs1_addr[s] = dec[issue_sel[s]].rs1;
                regfile_rs2_addr[s] = dec[issue_sel[s]].rs2;
            end else begin
                regfile_rs1_addr[s] = 5'h0;
                regfile_rs2_addr[s] = 5'h0;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // I 级输出: inst_pkt_t 组装 + 旁路 mux
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            i_issue[s].valid     = issue_ready[s] && !flush;
            i_issue_valid[s]     = issue_ready[s] && !flush;

            if (issue_ready[s]) begin
                tmp_dec_d = dec[issue_sel[s]];

                i_issue[s].pc       = d_pc + 32'd4 * {29'h0, issue_sel[s]};
                // ERR-018 修复: 压缩指令使用展开后的 32-bit 等效指令
                // 原代码: i_issue[s].inst = d_instructions[issue_sel[s]];
                if (d_instructions[issue_sel[s]][1:0] != 2'b11)
                    i_issue[s].inst = c_ext_expand(d_instructions[issue_sel[s]][15:0]);
                else
                    i_issue[s].inst = d_instructions[issue_sel[s]];
                i_issue[s].rd       = tmp_dec_d.has_rd ? tmp_dec_d.rd : 5'h0;
                i_issue[s].rs1      = tmp_dec_d.rs1;
                i_issue[s].rs2      = tmp_dec_d.rs2;
                i_issue[s].funct3   = tmp_dec_d.funct3;
                i_issue[s].funct7   = tmp_dec_d.funct7;
                i_issue[s].imm      = tmp_dec_d.imm;
                i_issue[s].fu_type  = tmp_dec_d.fu_type;
                i_issue[s].fu_id    = 4'h0;  // 简化: FU ID 由 FU pool 分配
                i_issue[s].privilege = PRIV_M; // 简化: 固定 M 模式
                i_issue[s].exc_valid = 1'b0;
                i_issue[s].exc_cause = 4'h0;

                // 检查非法指令
                if (tmp_dec_d.opcode == 7'b0 && !d_inst_valid[issue_sel[s]]) begin
                    i_issue[s].exc_valid = 1'b1;
                    i_issue[s].exc_cause = EXC_ILLEGAL_INST[3:0];
                end

                // FU ID 分配 (简化: 根据 fu_type 固定映射)
                case (tmp_dec_d.fu_type)
                    FU_ALU:    i_fu_id[s] = 4'd0;
                    FU_MUL:    i_fu_id[s] = 4'd1;
                    FU_DIV:    i_fu_id[s] = 4'd2;
                    FU_MEM:    i_fu_id[s] = 4'd3;
                    FU_FP:     i_fu_id[s] = 4'd4;
                    FU_BRANCH: i_fu_id[s] = 4'd6;
                    FU_MISC:   i_fu_id[s] = 4'd7;
                    default:   i_fu_id[s] = 4'd0;
                endcase
            end else begin
                i_issue[s]      = '0;
                i_fu_id[s]      = 4'h0;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // 旁路 mux: RegFile 数据 vs 旁路数据
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int s = 0; s < ISSUE_WIDTH; s++) begin
            // rs1: 旁路优先
            if (bypass_rs1_hit[s])
                d_rs1_data[s] = bypass_rs1_data[s];
            else
                d_rs1_data[s] = regfile_rs1_data[s];

            // rs2: 旁路优先
            if (bypass_rs2_hit[s])
                d_rs2_data[s] = bypass_rs2_data[s];
            else
                d_rs2_data[s] = regfile_rs2_data[s];

            // LUI/AUIPC 不需要 rs1
            if (issue_ready[s] && !dec[issue_sel[s]].has_rs1)
                d_rs1_data[s] = 32'h0;

            // 无 rs2 的指令
            if (issue_ready[s] && !dec[issue_sel[s]].has_rs2)
                d_rs2_data[s] = 32'h0;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // FSM (简化: 组合流水线, 状态机仅用于 stall/flush 控制)
    // ═══════════════════════════════════════════════════════════
    typedef enum logic [1:0] {
        ST_IDLE,
        ST_DECODE,
        ST_STALL,
        ST_FLUSH
    } dec_state_e;

    dec_state_e state_reg, state_next;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_IDLE;
        else
            state_reg <= state_next;
    end

    always_comb begin
        state_next = state_reg;
        case (state_reg)
            ST_IDLE:   state_next = ST_DECODE;
            ST_DECODE: begin
                if (flush)
                    state_next = ST_FLUSH;
                else if (stall_out)
                    state_next = ST_STALL;
            end
            ST_STALL: begin
                if (flush)
                    state_next = ST_FLUSH;
                else if (!stall_out)
                    state_next = ST_DECODE;
            end
            ST_FLUSH:  state_next = ST_DECODE;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // issued_mask 寄存器: 跨周期跟踪已发射指令 (ERR-014 修复)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        issued_mask_next = issued_mask_r;
        batch_pc_next    = batch_pc_r;

        if (flush) begin
            issued_mask_next = '0;
            batch_pc_next    = d_pc;
        end else if (d_valid && d_pc != batch_pc_r) begin
            // 新批次到达 (PC 变化): 清除 mask
            issued_mask_next = '0;
            batch_pc_next    = d_pc;
        end else if (d_valid) begin
            // always-record: 每周期都记录已发射指令
            // 确保 carry-over 指令不被丢失
            for (int s = 0; s < ISSUE_WIDTH; s++) begin
                if (issue_ready[s])
                    issued_mask_next[issue_sel[s]] = 1'b1;
            end
        end
    end

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            issued_mask_r <= '0;
            batch_pc_r    <= 32'h0;
        end else begin
            issued_mask_r <= issued_mask_next;
            batch_pc_r    <= batch_pc_next;
        end
    end

endmodule
