# =================================================================
# V3 Directed Test: RV32C Smoke (T-MS3-S1-2.3c)
# C 压缩指令基本验证 (显式 16-bit 编码)
# 需求: LUMI-ISA-002, ERR-010
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    # sp 初始化 (使用标准 32-bit 指令)
    li      sp, 0x00017F00

    # ══ C.NOP (0x0001) ══════════════════════════════
    .2byte  0x0001                  # c.nop

    # ══ C.LI: rd = imm (Quadrant 01, funct3=010) ═══
    # C.LI a0, 42 → c.li a0, 42
    # Encoding: 010 | imm[5] | 01010 | imm[4:0] | 01
    # imm=42=0b101010, imm[5]=1, imm[4:0]=01010, rd=a0=10
    # 010_1_01010_01010_01 = 0x4D15
    .2byte  0x4D15
    li      s0, 42
    bne     a0, s0, fail

    # ══ C.ADDI: rd = rd + imm (Quadrant 01, funct3=000) ═
    # C.ADDI a0, 8 → addi a0, a0, 8
    # Encoding: 000 | nzimm[5] | 01010 | nzimm[4:0] | 01
    # nzimm=8=0b001000, nzimm[5]=0, nzimm[4:0]=01000, rd=10
    # 000_0_01010_01000_01 = 0x0521
    .2byte  0x0521
    li      s0, 50
    bne     a0, s0, fail

    # ══ C.MV: rd = rs2 (Quadrant 10, funct4=1000) ═══
    # C.MV a1, a0 → mv a1, a0
    # Encoding: 100_0 | 01011 | 01010 | 10
    # rd=a1=11, rs2=a0=10
    # 100_0_01011_01010_10 = 0x85AA
    .2byte  0x85AA
    li      s0, 50
    bne     a1, s0, fail

    # ══ C.ADD: rd = rd + rs2 (Quadrant 10, funct4=1001) ═
    # C.ADD a1, a0 → add a1, a1, a0
    # Encoding: 100_1 | 01011 | 01010 | 10
    # 100_1_01011_01010_10 = 0x95AA
    .2byte  0x95AA
    li      s0, 100
    bne     a1, s0, fail

    # ══ C.LUI: rd = imm << 12 (Quadrant 01, funct3=011) ═
    # C.LUI a2, 1 → lui a2, 1
    # Encoding: 011 | nzimm[17] | 01100 | nzimm[16:12] | 01
    # nzimm=1, nzimm[17]=0, nzimm[16:12]=00001, rd=a2=12
    # 011_0_01100_00001_01 = 0x6605
    .2byte  0x6605
    li      s0, 0x00001000
    bne     a2, s0, fail

    # ══ C.SLLI: rd = rd << shamt (Quadrant 10, funct3=000) ═
    # C.SLLI a2, 4 → slli a2, a2, 4
    # Encoding: 000 | shamt[5] | 01100 | shamt[4:0] | 10
    # shamt=4, shamt[5]=0, shamt[4:0]=00100, rd=12
    # 000_0_01100_00100_10 = 0x0612
    .2byte  0x0612
    li      s0, 0x00010000
    bne     a2, s0, fail

    # ══ C.LW: rd = M[rs1+offset] (Quadrant 00, funct3=010) ═
    # Store a known value to memory first (use 32-bit SW)
    li      t0, 0x00014000         # DTCM0 address
    li      t1, 0xDEADBEEF
    sw      t1, 0(t0)

    # C.LW a3, 0(t0) → lw a3, 0(t0)
    # Encoding: 010 | offset[5:3] | 01000 | offset[2|6] | rd | 00
    # offset=0, rs1=t0=5, rd=a3=13
    # 010_000_01000_00_01101_00 = 0x4234 → wait, let me recalculate
    # Actually C.LW format: 010 | uimm[5:3] | rs1'(3bit) | uimm[2|6] | rd'(3bit) | 00
    # rs1' and rd' use 3-bit compressed register encoding (x8-x15)
    # t0=x5 is NOT in the compressed range. Let me use s0=x8 instead.
    li      s0, 0x00014000         # s0 = x8 (in compressed range)
    li      t1, 0xCAFEBABE
    sw      t1, 0(s0)

    # C.LW a0, 0(s0): rs1'=s0(x8)=000, rd'=a0(x10)=010, uimm=0
    # 010 | 000 | 000 | 00 | 010 | 00 = 0x4010 → 010_000_000_00_010_00
    # = 0100_0000_0000_1000 = 0x4008
    .2byte  0x4008
    li      s1, 0xCAFEBABE
    bne     a0, s1, fail

    # ══ C.SW: M[rs1+offset] = rs2 (Quadrant 00, funct3=110) ═
    # C.SW a0, 4(s0): store a0 to M[s0+4]
    # rs1'=s0(x8)=000, rs2'=a0(x10)=010, uimm=4 (bit2=1, bit6=0)
    # 110 | uimm[5:3]=001 | rs1'=000 | uimm[2]=0 uimm[6]=0 | rs2'=010 | 00
    # 110_001_000_00_010_00 = 1100_0100_0000_1000 = 0xC408
    .2byte  0xC408
    lw      t2, 4(s0)
    li      s1, 0xCAFEBABE
    bne     t2, s1, fail

    # ══ C.J (Quadrant 01, funct3=101) — 基本跳转 ═══
    # C.J skip → j skip (offset to next instruction)
    # We'll verify by checking PC progression
    c.j     skip
    li      a0, 1                   # Should be skipped
    ecall
skip:

    # ══ C.BEQZ (Quadrant 01, funct3=110) ══════════
    li      s0, 0
    c.beqz  s0, beqz_ok             # s0==0, should branch
    j       fail
beqz_ok:

    # ══ C.BNEZ (Quadrant 01, funct3=111) ══════════
    li      s0, 1
    c.bnez  s0, bnez_ok             # s0!=0, should branch
    j       fail
bnez_ok:

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
