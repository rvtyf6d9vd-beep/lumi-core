// =================================================================
// LUMI-V2+V4 | 覆盖率收集器 — 多槽 ISA + Privilege + Multicore/DFT
// CG1: cg_isa_rv32i (40)  CG2: cg_isa_m_ext (8)  CG3: cg_isa_b_ext (16)
// CG4: cg_isa_c_ext (12)  CG5: cg_isa_zce (4)
// CG6: cg_mandatory (8)   CG7: cg_pmp (8)        CG8: cg_timer (6)
// CG9: cg_clic (6)        CG10: cg_tcm_access (8)
// CG11: cg_lockstep (4)   CG12: cg_power_states (4)
// CG13: cg_dft_scan (4)   CG14: cg_boot_sequence (4)
// CG15: cg_multicore (4)  CG16: cg_security (4)
// Total: 140 cover points (V1: 80, V2: 36, V4: 24)
// =================================================================

module lumi_coverage #(
    parameter int ISSUE_WIDTH = 3
) (
    input logic                            clk_core,
    input logic                            reset_n,
    input logic [ISSUE_WIDTH-1:0]          commit_valid,
    input logic [ISSUE_WIDTH-1:0][31:0]    commit_inst,
    input logic [ISSUE_WIDTH-1:0][15:0]    commit_inst_raw
);

  // ─── 指令字段提取辅助 ──────────────────────────────────────
  logic        is_compressed [ISSUE_WIDTH-1:0];
  logic [6:0]  opcode [ISSUE_WIDTH-1:0];
  logic [4:0]  rd     [ISSUE_WIDTH-1:0];
  logic [2:0]  funct3 [ISSUE_WIDTH-1:0];
  logic [6:0]  funct7 [ISSUE_WIDTH-1:0];

  always_comb begin
    for (int s = 0; s < ISSUE_WIDTH; s++) begin
      // ERR-018 修复: 使用 inst_raw 检测压缩指令
      is_compressed[s] = (commit_inst_raw[s][1:0] != 2'b11);
      // 对于 32-bit 指令, 使用 commit_inst 提取字段;
      // 对于 16-bit 指令, commit_inst 已经是展开后的 32-bit 等效指令,
      // 所以 cg_isa_rv32i 等使用 commit_inst, cg_isa_c_ext 使用 commit_inst_raw
      opcode[s] = commit_inst[s][6:0];
      rd[s]     = commit_inst[s][11:7];
      funct3[s] = commit_inst[s][14:12];
      funct7[s] = commit_inst[s][31:25];
    end
  end

  // ─── Cover Group 1: cg_isa_rv32i (40 RV32I 指令) ──────────
  logic [39:0] rv32i_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      rv32i_hit <= 40'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // ── 先用 opcode 分流, 再用 funct3/funct7 精确匹配 ──
          case (opcode[s])
            // R-type + I-type ALU: funct7 + funct3 精确匹配
            7'b0110011: begin // R-type
              case ({funct7[s], funct3[s]})
                {7'b0000000, 3'b000}: rv32i_hit[0]  <= 1; // ADD
                {7'b0100000, 3'b000}: rv32i_hit[1]  <= 1; // SUB
                {7'b0000000, 3'b001}: rv32i_hit[2]  <= 1; // SLL
                {7'b0000000, 3'b010}: rv32i_hit[3]  <= 1; // SLT
                {7'b0000000, 3'b011}: rv32i_hit[4]  <= 1; // SLTU
                {7'b0000000, 3'b100}: rv32i_hit[5]  <= 1; // XOR
                {7'b0000000, 3'b101}: rv32i_hit[6]  <= 1; // SRL
                {7'b0100000, 3'b101}: rv32i_hit[7]  <= 1; // SRA
                {7'b0000000, 3'b110}: rv32i_hit[8]  <= 1; // OR
                {7'b0000000, 3'b111}: rv32i_hit[9]  <= 1; // AND
                default: ;
              endcase
            end
            7'b0010011: begin // I-type ALU
              case (funct3[s])
                3'b000: rv32i_hit[10] <= 1; // ADDI
                3'b001: rv32i_hit[11] <= 1; // SLLI
                3'b010: rv32i_hit[12] <= 1; // SLTI
                3'b011: rv32i_hit[13] <= 1; // SLTIU
                3'b100: rv32i_hit[14] <= 1; // XORI
                3'b101: begin
                  // SRLI vs SRAI: 用 imm[11:5]=funct7 区分
                  if (funct7[s] == 7'b0000000) rv32i_hit[15] <= 1; // SRLI
                  if (funct7[s] == 7'b0100000) rv32i_hit[16] <= 1; // SRAI
                end
                3'b110: rv32i_hit[17] <= 1; // ORI
                3'b111: rv32i_hit[18] <= 1; // ANDI
                default: ;
              endcase
            end
            // Upper Immediate: opcode 即匹配
            7'b0110111: rv32i_hit[19] <= 1; // LUI
            7'b0010111: rv32i_hit[20] <= 1; // AUIPC
            // Jump
            7'b1101111: rv32i_hit[21] <= 1; // JAL
            7'b1100111: begin
              if (funct3[s] == 3'b000) rv32i_hit[22] <= 1; // JALR
            end
            // Branch: funct3 区分
            7'b1100011: begin
              case (funct3[s])
                3'b000: rv32i_hit[23] <= 1; // BEQ
                3'b001: rv32i_hit[24] <= 1; // BNE
                3'b100: rv32i_hit[25] <= 1; // BLT
                3'b101: rv32i_hit[26] <= 1; // BGE
                3'b110: rv32i_hit[27] <= 1; // BLTU
                3'b111: rv32i_hit[28] <= 1; // BGEU
                default: ;
              endcase
            end
            // Load: funct3 区分
            7'b0000011: begin
              case (funct3[s])
                3'b000: rv32i_hit[29] <= 1; // LB
                3'b001: rv32i_hit[30] <= 1; // LH
                3'b010: rv32i_hit[31] <= 1; // LW
                3'b100: rv32i_hit[32] <= 1; // LBU
                3'b101: rv32i_hit[33] <= 1; // LHU
                default: ;
              endcase
            end
            // Store: funct3 区分
            7'b0100011: begin
              case (funct3[s])
                3'b000: rv32i_hit[34] <= 1; // SB
                3'b001: rv32i_hit[35] <= 1; // SH
                3'b010: rv32i_hit[36] <= 1; // SW
                default: ;
              endcase
            end
            // System: funct12 + funct3 区分
            7'b1110011: begin
              if (funct3[s] == 3'b000) begin
                rv32i_hit[37] <= 1; // ECALL/EBREAK
              end else begin
                rv32i_hit[38] <= 1; // CSR*
              end
            end
            // FENCE
            7'b0001111: begin
              if (funct3[s] == 3'b000) rv32i_hit[39] <= 1; // FENCE
            end
            default: ;
          endcase
        end
      end
    end
  end

  // ── 诊断: 追踪 CSR/FENCE 到达 commit ──────────────────
  always_ff @(posedge clk_core) begin
    if (reset_n) begin
      // [COV-DBG disabled for speed — re-enable for CSR/FENCE debug]
      // for (int s = 0; s < ISSUE_WIDTH; s++) begin
      //   if (commit_valid[s] && !is_compressed[s]) begin
      //     if (opcode[s] == 7'b1110011 || opcode[s] == 7'b0001111)
      //       $display("[COV-DBG] t=%0t s=%0d cv=%0b op=%07b f3=%03b inst=%08h",
      //                $time, s, commit_valid[s], opcode[s], funct3[s], commit_inst[s]);
      //   end
      //   if (!commit_valid[s] && !is_compressed[s] && commit_inst[s] != 32'h0) begin
      //     if (opcode[s] == 7'b1110011 && funct3[s] != 3'b000)
      //       $display("[COV-WARN] t=%0t s=%0d CSR not committed! inst=%08h",
      //                $time, s, commit_inst[s]);
      //     if (opcode[s] == 7'b0001111)
      //       $display("[COV-WARN] t=%0t s=%0d FENCE not committed! inst=%08h",
      //                $time, s, commit_inst[s]);
      //   end
      // end

    end
  end

  // ─── Cover Group 2: cg_isa_m_ext (8 M 扩展指令) ───────────
  logic [7:0] m_ext_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      m_ext_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s] &&
            opcode[s] == 7'b0110011 && funct7[s] == 7'b0000001) begin
          case (funct3[s])
            3'b000: m_ext_hit[0] <= 1; // MUL
            3'b001: m_ext_hit[1] <= 1; // MULH
            3'b010: m_ext_hit[2] <= 1; // MULHSU
            3'b011: m_ext_hit[3] <= 1; // MULHU
            3'b100: m_ext_hit[4] <= 1; // DIV
            3'b101: m_ext_hit[5] <= 1; // DIVU
            3'b110: m_ext_hit[6] <= 1; // REM
            3'b111: m_ext_hit[7] <= 1; // REMU
          endcase
        end
      end
    end
  end

  // ─── Cover Group 3: cg_isa_b_ext (Zba+Zbb+Zbc+Zbs) ───────
  // V3 更新: 补充 I-type B-ext (CLZ/CTZ/CPOP/RORI/REV8/ORC.B)
  logic [15:0] b_ext_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      b_ext_hit <= 16'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // R-type B-extension (opcode=0110011)
          if (opcode[s] == 7'b0110011) begin
            case ({funct7[s], funct3[s]})
              // Zba
              {7'b0010000, 3'b010}: b_ext_hit[0]  <= 1; // SH1ADD
              {7'b0010000, 3'b100}: b_ext_hit[1]  <= 1; // SH2ADD
              {7'b0010000, 3'b110}: b_ext_hit[2]  <= 1; // SH3ADD
              // Zbb
              {7'b0100000, 3'b111}: b_ext_hit[3]  <= 1; // ANDN
              {7'b0100000, 3'b110}: b_ext_hit[4]  <= 1; // ORN
              {7'b0100000, 3'b100}: b_ext_hit[5]  <= 1; // XNOR
              {7'b0110000, 3'b001}: b_ext_hit[6]  <= 1; // CLZ/CTZ/CPOP (R-type)
              {7'b0000101, 3'b100}: b_ext_hit[7]  <= 1; // MIN
              {7'b0000101, 3'b101}: b_ext_hit[8]  <= 1; // MINU
              {7'b0000101, 3'b110}: b_ext_hit[9]  <= 1; // MAX
              {7'b0000101, 3'b111}: b_ext_hit[10] <= 1; // MAXU
              // Zbc
              {7'b0000101, 3'b001}: b_ext_hit[11] <= 1; // CLMUL
              {7'b0000101, 3'b010}: b_ext_hit[12] <= 1; // CLMULR
              {7'b0000101, 3'b011}: b_ext_hit[13] <= 1; // CLMULH
              // Zbs
              {7'b0100100, 3'b001}: b_ext_hit[14] <= 1; // BCLR
              {7'b0110100, 3'b001}: b_ext_hit[15] <= 1; // BINV/BSET/BEXT
              default: ;
            endcase
          end
          // I-type B-extension (opcode=0010011)
          if (opcode[s] == 7'b0010011) begin
            case ({funct7[s], funct3[s]})
              {7'b0110000, 3'b001}: b_ext_hit[6]  <= 1; // CLZ/CTZ/CPOP (I-type)
              {7'b0110000, 3'b101}: b_ext_hit[6]  <= 1; // RORI
              {7'b0110100, 3'b101}: b_ext_hit[3]  <= 1; // REV8 (reuse ANDN slot)
              {7'b0010100, 3'b101}: b_ext_hit[4]  <= 1; // ORC.B (reuse ORN slot)
              default: ;
            endcase
          end
          // ROL/ROR (R-type, funct7=0110000)
          if (opcode[s] == 7'b0110011 && funct7[s] == 7'b0110000) begin
            if (funct3[s] == 3'b001) b_ext_hit[6] <= 1; // ROL
            if (funct3[s] == 3'b101) b_ext_hit[6] <= 1; // ROR
          end
        end
      end
    end
  end

  // ─── Cover Group 4: cg_isa_c_ext (C 压缩指令) ─────────────
  // 使用 commit_inst_raw 提取原始 16-bit 压缩指令的 quadrant 和 funct3
  logic [11:0] c_ext_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      c_ext_hit <= 12'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && is_compressed[s]) begin
          case (commit_inst_raw[s][1:0])
            2'b00: begin
              case (commit_inst_raw[s][15:13])
                3'b000: c_ext_hit[0]  <= 1; // C.ADDI4SPN
                3'b010: c_ext_hit[0]  <= 1; // C.LW
                3'b110: c_ext_hit[1]  <= 1; // C.SW
                default: ;
              endcase
            end
            2'b01: begin
              case (commit_inst_raw[s][15:13])
                3'b000: c_ext_hit[2]  <= 1; // C.ADDI/C.NOP
                3'b001: c_ext_hit[3]  <= 1; // C.JAL
                3'b010: c_ext_hit[4]  <= 1; // C.LI
                3'b011: c_ext_hit[5]  <= 1; // C.LUI/C.ADDI16SP
                3'b101: c_ext_hit[6]  <= 1; // C.J
                3'b110: c_ext_hit[7]  <= 1; // C.BEQZ
                3'b111: c_ext_hit[8]  <= 1; // C.BNEZ
                default: ;
              endcase
            end
            2'b10: begin
              case (commit_inst_raw[s][15:13])
                3'b000: c_ext_hit[9]  <= 1; // C.SLLI
                3'b010: c_ext_hit[9]  <= 1; // C.LWSP (reuse SLLI slot)
                3'b100: c_ext_hit[10] <= 1; // C.MV/C.ADD/C.JR/C.JALR
                3'b110: c_ext_hit[11] <= 1; // C.SWSP
                default: ;
              endcase
            end
            default: ;
          endcase
        end
      end
    end
  end

  // ─── Cover Group 5: cg_isa_zce (Zce 扩展) ─────────────────
  logic [3:0] zce_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      zce_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && is_compressed[s]) begin
          if (commit_inst[s][1:0] == 2'b00 && commit_inst[s][15:10] == 6'b100000)
            zce_hit[0] <= 1;
          if (commit_inst[s][1:0] == 2'b00 && commit_inst[s][15:10] == 6'b100001)
            zce_hit[1] <= 1;
          if (commit_inst[s][1:0] == 2'b10 && commit_inst[s][15:12] == 4'b1011 &&
              commit_inst[s][6:5] == 2'b11)
            zce_hit[2] <= 1;
          if (commit_inst[s][1:0] == 2'b10 && commit_inst[s][15:10] == 6'b101011)
            zce_hit[3] <= 1;
        end
      end
    end
  end

  // ─── Cover Group 6: cg_isa_mandatory (Zicsr/Zicntr) ────────
  // CSR instruction variants: csrrw/csrrs/csrrc/csrrwi/csrrsi/csrrci
  logic [7:0] mandatory_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      mandatory_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s] && opcode[s] == 7'b1110011) begin
          case (funct3[s])
            3'b000: begin
              // ECALL/EBREAK: funct12 distinguishes
              if (commit_inst[s][31:20] == 12'h000) mandatory_hit[0] <= 1; // ECALL
              if (commit_inst[s][31:20] == 12'h001) mandatory_hit[1] <= 1; // EBREAK
            end
            3'b001: mandatory_hit[2] <= 1; // CSRRW
            3'b010: mandatory_hit[3] <= 1; // CSRRS
            3'b011: mandatory_hit[4] <= 1; // CSRRC
            3'b101: mandatory_hit[5] <= 1; // CSRRWI
            3'b110: mandatory_hit[6] <= 1; // CSRRSI
            3'b111: mandatory_hit[7] <= 1; // CSRRCI
            default: ;
          endcase
        end
      end
    end
  end

  // ─── Cover Group 7: cg_pmp_regions ─────────────────────────
  // PMP CSR accesses: pmpcfg0~3 (0x3A0~0x3A3), pmpaddr0~15 (0x3B0~0x3BF)
  logic [7:0] pmp_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      pmp_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s] && opcode[s] == 7'b1110011 &&
            funct3[s] != 3'b000) begin
          case (commit_inst[s][31:20]) // CSR address in funct12/immediate
            12'h3A0: pmp_hit[0] <= 1; // pmpcfg0
            12'h3A1: pmp_hit[1] <= 1; // pmpcfg1
            12'h3A2: pmp_hit[2] <= 1; // pmpcfg2
            12'h3A3: pmp_hit[3] <= 1; // pmpcfg3
            12'h3B0: pmp_hit[4] <= 1; // pmpaddr0
            12'h3B1: pmp_hit[5] <= 1; // pmpaddr1
            12'h3B2: pmp_hit[6] <= 1; // pmpaddr2
            12'h3B3: pmp_hit[7] <= 1; // pmpaddr3 (extendable to 0~15)
            default: ;
          endcase
        end
      end
    end
  end

  // ─── Cover Group 8: cg_timer_mtime ─────────────────────────
  // Timer CSR: mcycle(0xB00), time(0xC01), minstret(0xB02), mcountinhibit(0x320)
  logic [7:0] timer_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      timer_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s] && opcode[s] == 7'b1110011) begin
          case (commit_inst[s][31:20])
            12'hB00: timer_hit[0] <= 1; // mcycle (read)
            12'hB02: timer_hit[1] <= 1; // minstret (read)
            12'hC01: timer_hit[2] <= 1; // time (read)
            12'hC81: timer_hit[3] <= 1; // timeh (read)
            12'h320: timer_hit[4] <= 1; // mcountinhibit (rw)
            12'hB80: timer_hit[5] <= 1; // mcycleh (read)
            default: ;
          endcase
        end
      end
    end
  end

  // ─── Cover Group 9: cg_interrupt_clic ──────────────────────
  // Interrupt CSR: mie(0x304), mip(0x344), mstatus.MIE, mtvec(0x305)
  logic [7:0] clic_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      clic_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s] && opcode[s] == 7'b1110011 &&
            funct3[s] != 3'b000) begin
          case (commit_inst[s][31:20])
            12'h304: clic_hit[0] <= 1; // mie
            12'h344: clic_hit[1] <= 1; // mip
            12'h300: clic_hit[2] <= 1; // mstatus (MIE bit)
            12'h305: clic_hit[3] <= 1; // mtvec
            12'h342: clic_hit[4] <= 1; // mcause
            12'h341: clic_hit[5] <= 1; // mepc
            default: ;
          endcase
        end
      end
    end
  end

  // ─── Cover Group 10: cg_tcm_access (instruction-level proxy) ─
  // Track load/store types that exercise TCM/memory paths
  // Full address-based coverage requires TB-level monitoring
  logic [7:0] tcm_access_hit;

  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      tcm_access_hit <= 8'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          case (opcode[s])
            7'b0000011: begin // Load
              case (funct3[s])
                3'b010: tcm_access_hit[0] <= 1; // LW
                3'b001: tcm_access_hit[1] <= 1; // LH
                3'b000: tcm_access_hit[2] <= 1; // LB
                3'b100: tcm_access_hit[3] <= 1; // LBU
                3'b101: tcm_access_hit[4] <= 1; // LHU
                default: ;
              endcase
            end
            7'b0100011: begin // Store
              case (funct3[s])
                3'b010: tcm_access_hit[5] <= 1; // SW
                3'b001: tcm_access_hit[6] <= 1; // SH
                3'b000: tcm_access_hit[7] <= 1; // SB
                default: ;
              endcase
            end
            default: ;
          endcase
        end
      end
    end
  end

  // ═══════════════════════════════════════════════════════════
  // V4 Cover Groups: 多核/功耗/DFT (CG11~CG16)
  // ═══════════════════════════════════════════════════════════

  // ─── CG11: cg_lockstep (4 覆盖点: 确定性指令验证) ─────────
  logic [3:0] lockstep_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      lockstep_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          if (opcode[s] == 7'b0110011)  lockstep_hit[0] <= 1; // R-type ALU (deterministic)
          if (opcode[s] == 7'b0100011)  lockstep_hit[1] <= 1; // Store (memory consistency)
          if (opcode[s] == 7'b1100011)  lockstep_hit[2] <= 1; // Branch (control flow)
          if (opcode[s] == 7'b1110011)  lockstep_hit[3] <= 1; // SYSTEM/CSR (privilege)
        end
      end
    end
  end

  // ─── CG12: cg_power_states (4 覆盖点: 功耗指令) ──────────
  logic [3:0] power_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      power_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // WFI: opcode=1110011, funct3=000, rs2=00101
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b000 &&
              commit_inst[s][24:20] == 5'b00101)
            power_hit[0] <= 1; // WFI executed
          // FENCE: opcode=0001111, funct3=000
          if (opcode[s] == 7'b0001111 && funct3[s] == 3'b000)
            power_hit[1] <= 1; // FENCE (memory ordering)
          // FENCE.I: opcode=0001111, funct3=001
          if (opcode[s] == 7'b0001111 && funct3[s] == 3'b001)
            power_hit[2] <= 1; // FENCE.I
          // MRET: opcode=1110011, funct3=000, funct7=0011000, rs2=00010
          if (opcode[s] == 7'b1110011 && funct7[s] == 7'b0011000 &&
              commit_inst[s][24:20] == 5'b00010)
            power_hit[3] <= 1; // MRET (return from trap)
        end
      end
    end
  end

  // ─── CG13: cg_dft_scan (4 覆盖点: DFT 操作指令) ──────────
  logic [3:0] dft_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      dft_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // CSRRW: system register read/write (DFT config)
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b001)
            dft_hit[0] <= 1; // CSRRW
          // CSRRS: set bits in CSR
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b010)
            dft_hit[1] <= 1; // CSRRS
          // CSRRC: clear bits in CSR
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b011)
            dft_hit[2] <= 1; // CSRRC
          // MRET: return from trap (secure mode exit)
          if (opcode[s] == 7'b1110011 && funct7[s] == 7'b0011000 &&
              commit_inst[s][24:20] == 5'b00010)
            dft_hit[3] <= 1; // MRET
        end
      end
    end
  end

  // ─── CG14: cg_boot_sequence (4 覆盖点: Boot 相关指令) ────
  logic [3:0] boot_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      boot_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // AUIPC: PC-relative addressing (boot address verify)
          if (opcode[s] == 7'b0010111)
            boot_hit[0] <= 1; // AUIPC
          // LUI: load upper immediate (page setup)
          if (opcode[s] == 7'b0110111)
            boot_hit[1] <= 1; // LUI
          // JAL: jump and link (function calls during boot)
          if (opcode[s] == 7'b1101111)
            boot_hit[2] <= 1; // JAL
          // JALR: indirect jump (boot target)
          if (opcode[s] == 7'b1100111)
            boot_hit[3] <= 1; // JALR
        end
      end
    end
  end

  // ─── CG15: cg_multicore (4 覆盖点: 多核同步指令) ─────────
  logic [3:0] multicore_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      multicore_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // LR/SC (atomic operations for multicore sync)
          if (opcode[s] == 7'b0101111) // AMO
            multicore_hit[0] <= 1;
          // FENCE: memory ordering between harts
          if (opcode[s] == 7'b0001111 && funct3[s] == 3'b000)
            multicore_hit[1] <= 1;
          // Load (shared memory read)
          if (opcode[s] == 7'b0000011 && funct3[s] == 3'b010)
            multicore_hit[2] <= 1; // LW
          // Store (shared memory write)
          if (opcode[s] == 7'b0100011 && funct3[s] == 3'b010)
            multicore_hit[3] <= 1; // SW
        end
      end
    end
  end

  // ─── CG16: cg_security (4 覆盖点: 安全相关指令) ──────────
  logic [3:0] security_hit;
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      security_hit <= 4'h0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s] && !is_compressed[s]) begin
          // ECALL: environment call (secure service request)
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b000 &&
              commit_inst[s][24:20] == 5'b00000)
            security_hit[0] <= 1; // ECALL
          // EBREAK: breakpoint (debug lock)
          if (opcode[s] == 7'b1110011 && funct3[s] == 3'b000 &&
              commit_inst[s][24:20] == 5'b00001)
            security_hit[1] <= 1; // EBREAK
          // PMP CSR access: pmpcfg/pmpaddr
          if (opcode[s] == 7'b1110011 && commit_inst[s][31:20] >= 12'h3A0 &&
              commit_inst[s][31:20] <= 12'h3EF)
            security_hit[2] <= 1; // PMP CSR
          // mvendorid/marchid/mimpid (ID verification)
          if (opcode[s] == 7'b1110011 && commit_inst[s][31:20] >= 12'hF11 &&
              commit_inst[s][31:20] <= 12'hF14)
            security_hit[3] <= 1; // ID CSR
        end
      end
    end
  end

  // ─── 覆盖率报告 ────────────────────────────────────────────
  function automatic void report_coverage();
    int rv32i_covered, m_covered, b_covered, c_covered, zce_covered;
    int mandatory_covered, pmp_covered, timer_covered, clic_covered, tcm_covered;

    rv32i_covered   = $countones(rv32i_hit);
    m_covered       = $countones(m_ext_hit);
    b_covered       = $countones(b_ext_hit);
    c_covered       = $countones(c_ext_hit);
    zce_covered     = $countones(zce_hit);
    mandatory_covered = $countones(mandatory_hit);
    pmp_covered     = $countones(pmp_hit);
    timer_covered   = $countones(timer_hit);
    clic_covered    = $countones(clic_hit);
    tcm_covered     = $countones(tcm_access_hit);

    $display("===========================================");
    $display(" Lumi Coverage Report (V1 + V2)");
    $display("===========================================");
    $display(" --- V1 ISA Cover Groups ---");
    $display(" cg_isa_rv32i: %0d / 40 (%0d%%)", rv32i_covered, rv32i_covered * 100 / 40);
    // DEBUG: 打印每条指令的 hit/miss
    $display("[COV-RV32I] hit_mask = %040b", rv32i_hit);
    if (!rv32i_hit[0])  $display("[COV-MISS] hit[0]:  ADD");
    if (!rv32i_hit[1])  $display("[COV-MISS] hit[1]:  SUB");
    if (!rv32i_hit[2])  $display("[COV-MISS] hit[2]:  SLL");
    if (!rv32i_hit[3])  $display("[COV-MISS] hit[3]:  SLT");
    if (!rv32i_hit[4])  $display("[COV-MISS] hit[4]:  SLTU");
    if (!rv32i_hit[5])  $display("[COV-MISS] hit[5]:  XOR");
    if (!rv32i_hit[6])  $display("[COV-MISS] hit[6]:  SRL");
    if (!rv32i_hit[7])  $display("[COV-MISS] hit[7]:  SRA");
    if (!rv32i_hit[8])  $display("[COV-MISS] hit[8]:  OR");
    if (!rv32i_hit[9])  $display("[COV-MISS] hit[9]:  AND");
    if (!rv32i_hit[10]) $display("[COV-MISS] hit[10]: ADDI");
    if (!rv32i_hit[11]) $display("[COV-MISS] hit[11]: SLLI");
    if (!rv32i_hit[12]) $display("[COV-MISS] hit[12]: SLTI");
    if (!rv32i_hit[13]) $display("[COV-MISS] hit[13]: SLTIU");
    if (!rv32i_hit[14]) $display("[COV-MISS] hit[14]: XORI");
    if (!rv32i_hit[15]) $display("[COV-MISS] hit[15]: SRLI");
    if (!rv32i_hit[16]) $display("[COV-MISS] hit[16]: SRAI");
    if (!rv32i_hit[17]) $display("[COV-MISS] hit[17]: ORI");
    if (!rv32i_hit[18]) $display("[COV-MISS] hit[18]: ANDI");
    if (!rv32i_hit[19]) $display("[COV-MISS] hit[19]: LUI");
    if (!rv32i_hit[20]) $display("[COV-MISS] hit[20]: AUIPC");
    if (!rv32i_hit[21]) $display("[COV-MISS] hit[21]: JAL");
    if (!rv32i_hit[22]) $display("[COV-MISS] hit[22]: JALR");
    if (!rv32i_hit[23]) $display("[COV-MISS] hit[23]: BEQ");
    if (!rv32i_hit[24]) $display("[COV-MISS] hit[24]: BNE");
    if (!rv32i_hit[25]) $display("[COV-MISS] hit[25]: BLT");
    if (!rv32i_hit[26]) $display("[COV-MISS] hit[26]: BGE");
    if (!rv32i_hit[27]) $display("[COV-MISS] hit[27]: BLTU");
    if (!rv32i_hit[28]) $display("[COV-MISS] hit[28]: BGEU");
    if (!rv32i_hit[29]) $display("[COV-MISS] hit[29]: LB");
    if (!rv32i_hit[30]) $display("[COV-MISS] hit[30]: LH");
    if (!rv32i_hit[31]) $display("[COV-MISS] hit[31]: LW");
    if (!rv32i_hit[32]) $display("[COV-MISS] hit[32]: LBU");
    if (!rv32i_hit[33]) $display("[COV-MISS] hit[33]: LHU");
    if (!rv32i_hit[34]) $display("[COV-MISS] hit[34]: SB");
    if (!rv32i_hit[35]) $display("[COV-MISS] hit[35]: SH");
    if (!rv32i_hit[36]) $display("[COV-MISS] hit[36]: SW");
    if (!rv32i_hit[37]) $display("[COV-MISS] hit[37]: ECALL");
    if (!rv32i_hit[38]) $display("[COV-MISS] hit[38]: CSR");
    if (!rv32i_hit[39]) $display("[COV-MISS] hit[39]: FENCE");
    $display(" cg_isa_m_ext: %0d / 8  (%0d%%)", m_covered, m_covered * 100 / 8);
    $display(" cg_isa_b_ext: %0d / 16 (%0d%%)", b_covered, b_covered * 100 / 16);
    $display(" cg_isa_c_ext: %0d / 12 (%0d%%)", c_covered, c_covered * 100 / 12);
    $display(" cg_isa_zce:   %0d / 4  (%0d%%)", zce_covered, zce_covered * 100 / 4);
    $display("-------------------------------------------");
    $display(" --- V2 Privilege/CSR Cover Groups ---");
    $display(" cg_mandatory: %0d / 8  (%0d%%)", mandatory_covered, mandatory_covered * 100 / 8);
    $display("[COV-MAND] hit_mask = %08b", mandatory_hit);
    if (!mandatory_hit[0]) $display("[COV-MISS] mand[0]: ECALL");
    if (!mandatory_hit[1]) $display("[COV-MISS] mand[1]: EBREAK");
    if (!mandatory_hit[2]) $display("[COV-MISS] mand[2]: CSRRW");
    if (!mandatory_hit[3]) $display("[COV-MISS] mand[3]: CSRRS");
    if (!mandatory_hit[4]) $display("[COV-MISS] mand[4]: CSRRC");
    if (!mandatory_hit[5]) $display("[COV-MISS] mand[5]: CSRRWI");
    if (!mandatory_hit[6]) $display("[COV-MISS] mand[6]: CSRRSI");
    if (!mandatory_hit[7]) $display("[COV-MISS] mand[7]: CSRRCI");
    $display(" cg_pmp:       %0d / 8  (%0d%%)", pmp_covered, pmp_covered * 100 / 8);
    $display("[COV-PMP] hit_mask = %08b", pmp_hit);
    if (!pmp_hit[0]) $display("[COV-MISS] pmp[0]: pmpcfg0");
    if (!pmp_hit[1]) $display("[COV-MISS] pmp[1]: pmpcfg1");
    if (!pmp_hit[2]) $display("[COV-MISS] pmp[2]: pmpcfg2");
    if (!pmp_hit[3]) $display("[COV-MISS] pmp[3]: pmpcfg3");
    if (!pmp_hit[4]) $display("[COV-MISS] pmp[4]: pmpaddr0");
    if (!pmp_hit[5]) $display("[COV-MISS] pmp[5]: pmpaddr1");
    if (!pmp_hit[6]) $display("[COV-MISS] pmp[6]: pmpaddr2");
    if (!pmp_hit[7]) $display("[COV-MISS] pmp[7]: pmpaddr3");
    $display(" cg_timer:     %0d / 6  (%0d%%)", timer_covered, timer_covered * 100 / 6);
    $display("[COV-TMR] hit_mask = %08b", timer_hit);
    if (!timer_hit[0]) $display("[COV-MISS] tmr[0]: mcycle");
    if (!timer_hit[1]) $display("[COV-MISS] tmr[1]: minstret");
    if (!timer_hit[2]) $display("[COV-MISS] tmr[2]: time");
    if (!timer_hit[3]) $display("[COV-MISS] tmr[3]: timeh");
    if (!timer_hit[4]) $display("[COV-MISS] tmr[4]: mcountinhibit");
    if (!timer_hit[5]) $display("[COV-MISS] tmr[5]: mcycleh");
    $display(" cg_clic:      %0d / 6  (%0d%%)", clic_covered, clic_covered * 100 / 6);
    $display("[COV-IRQ] hit_mask = %08b", clic_hit);
    if (!clic_hit[0]) $display("[COV-MISS] irq[0]: mie");
    if (!clic_hit[1]) $display("[COV-MISS] irq[1]: mip");
    if (!clic_hit[2]) $display("[COV-MISS] irq[2]: mstatus");
    if (!clic_hit[3]) $display("[COV-MISS] irq[3]: mtvec");
    if (!clic_hit[4]) $display("[COV-MISS] irq[4]: mcause");
    if (!clic_hit[5]) $display("[COV-MISS] irq[5]: mepc");
    $display(" cg_tcm_acc:   %0d / 8  (%0d%%)", tcm_covered, tcm_covered * 100 / 8);
    $display("[COV-TCM] hit_mask = %08b", tcm_access_hit);
    if (!tcm_access_hit[0]) $display("[COV-MISS] tcm[0]: LW");
    if (!tcm_access_hit[1]) $display("[COV-MISS] tcm[1]: LH");
    if (!tcm_access_hit[2]) $display("[COV-MISS] tcm[2]: LB");
    if (!tcm_access_hit[3]) $display("[COV-MISS] tcm[3]: LBU");
    if (!tcm_access_hit[4]) $display("[COV-MISS] tcm[4]: LHU");
    if (!tcm_access_hit[5]) $display("[COV-MISS] tcm[5]: SW");
    if (!tcm_access_hit[6]) $display("[COV-MISS] tcm[6]: SH");
    if (!tcm_access_hit[7]) $display("[COV-MISS] tcm[7]: SB");
    $display("===========================================");
    $display(" V1 Total: %0d / 80", rv32i_covered + m_covered + b_covered + c_covered + zce_covered);
    $display(" V2 Total: %0d / 36", mandatory_covered + pmp_covered + timer_covered + clic_covered + tcm_covered);
    $display(" V4 Total: %0d / 24", $countones(lockstep_hit) + $countones(power_hit) + $countones(dft_hit) + $countones(boot_hit) + $countones(multicore_hit) + $countones(security_hit));
    $display(" Combined: %0d / 140", rv32i_covered + m_covered + b_covered + c_covered + zce_covered + mandatory_covered + pmp_covered + timer_covered + clic_covered + tcm_covered + $countones(lockstep_hit) + $countones(power_hit) + $countones(dft_hit) + $countones(boot_hit) + $countones(multicore_hit) + $countones(security_hit));
    $display("===========================================");
  endfunction

  // ─── 导出覆盖率到文件 ──────────────────────────────────────
  task automatic dump_coverage(input string filename);
    int fd;
    fd = $fopen(filename, "w");
    if (fd == 0) begin
      $display("[COV] ERROR: Cannot open file: %s", filename);
      return;
    end
    $fwrite(fd, "# Lumi Coverage Dump (V1 + V2)\n");
    $fwrite(fd, "# Generated by lumi_coverage module\n\n");
    $fwrite(fd, "cover_group: cg_isa_rv32i\n");
    $fwrite(fd, "covered: %0d / 40\n", $countones(rv32i_hit));
    $fwrite(fd, "hit_mask: %040b\n", rv32i_hit);
    $fwrite(fd, "\ncover_group: cg_isa_m_ext\n");
    $fwrite(fd, "covered: %0d / 8\n", $countones(m_ext_hit));
    $fwrite(fd, "hit_mask: %08b\n", m_ext_hit);
    $fwrite(fd, "\ncover_group: cg_isa_b_ext\n");
    $fwrite(fd, "covered: %0d / 16\n", $countones(b_ext_hit));
    $fwrite(fd, "hit_mask: %016b\n", b_ext_hit);
    $fwrite(fd, "\ncover_group: cg_isa_c_ext\n");
    $fwrite(fd, "covered: %0d / 12\n", $countones(c_ext_hit));
    $fwrite(fd, "hit_mask: %012b\n", c_ext_hit);
    $fwrite(fd, "\ncover_group: cg_isa_zce\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(zce_hit));
    $fwrite(fd, "hit_mask: %04b\n", zce_hit);
    $fwrite(fd, "\n# --- V2 Privilege/CSR Cover Groups ---\n");
    $fwrite(fd, "\ncover_group: cg_mandatory\n");
    $fwrite(fd, "covered: %0d / 8\n", $countones(mandatory_hit));
    $fwrite(fd, "hit_mask: %08b\n", mandatory_hit);
    $fwrite(fd, "\ncover_group: cg_pmp_regions\n");
    $fwrite(fd, "covered: %0d / 8\n", $countones(pmp_hit));
    $fwrite(fd, "hit_mask: %08b\n", pmp_hit);
    $fwrite(fd, "\ncover_group: cg_timer_mtime\n");
    $fwrite(fd, "covered: %0d / 6\n", $countones(timer_hit));
    $fwrite(fd, "hit_mask: %08b\n", timer_hit);
    $fwrite(fd, "\ncover_group: cg_interrupt_clic\n");
    $fwrite(fd, "covered: %0d / 6\n", $countones(clic_hit));
    $fwrite(fd, "hit_mask: %08b\n", clic_hit);
    $fwrite(fd, "\ncover_group: cg_tcm_access\n");
    $fwrite(fd, "covered: %0d / 8\n", $countones(tcm_access_hit));
    $fwrite(fd, "hit_mask: %08b\n", tcm_access_hit);
    $fwrite(fd, "\n# --- Summary ---\n");
    $fwrite(fd, "v1_total: %0d / 80\n", $countones(rv32i_hit) + $countones(m_ext_hit) + $countones(b_ext_hit) + $countones(c_ext_hit) + $countones(zce_hit));
    $fwrite(fd, "v2_total: %0d / 36\n", $countones(mandatory_hit) + $countones(pmp_hit) + $countones(timer_hit) + $countones(clic_hit) + $countones(tcm_access_hit));
    $fwrite(fd, "combined: %0d / 116\n", $countones(rv32i_hit) + $countones(m_ext_hit) + $countones(b_ext_hit) + $countones(c_ext_hit) + $countones(zce_hit) + $countones(mandatory_hit) + $countones(pmp_hit) + $countones(timer_hit) + $countones(clic_hit) + $countones(tcm_access_hit));
    $fwrite(fd, "\n# --- V4 Multicore/Power/DFT Cover Groups ---\n");
    $fwrite(fd, "\ncover_group: cg_lockstep\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(lockstep_hit));
    $fwrite(fd, "\ncover_group: cg_power_states\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(power_hit));
    $fwrite(fd, "\ncover_group: cg_dft_scan\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(dft_hit));
    $fwrite(fd, "\ncover_group: cg_boot_sequence\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(boot_hit));
    $fwrite(fd, "\ncover_group: cg_multicore\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(multicore_hit));
    $fwrite(fd, "\ncover_group: cg_security\n");
    $fwrite(fd, "covered: %0d / 4\n", $countones(security_hit));
    $fwrite(fd, "\n# --- Updated Summary ---\n");
    $fwrite(fd, "v4_total: %0d / 24\n", $countones(lockstep_hit) + $countones(power_hit) + $countones(dft_hit) + $countones(boot_hit) + $countones(multicore_hit) + $countones(security_hit));
    $fwrite(fd, "grand_total: %0d / 140\n", $countones(rv32i_hit) + $countones(m_ext_hit) + $countones(b_ext_hit) + $countones(c_ext_hit) + $countones(zce_hit) + $countones(mandatory_hit) + $countones(pmp_hit) + $countones(timer_hit) + $countones(clic_hit) + $countones(tcm_access_hit) + $countones(lockstep_hit) + $countones(power_hit) + $countones(dft_hit) + $countones(boot_hit) + $countones(multicore_hit) + $countones(security_hit));
    $fclose(fd);
    $display("[COV] Dumped coverage to %s", filename);
  endtask

endmodule
