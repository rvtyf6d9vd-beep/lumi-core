# =================================================================
# RV32I Comprehensive Test v6 — 覆盖全部 40 条 RV32I 基础指令
# 核心策略:
#   1. 每 batch 4 条 (PC+=16, 128-bit ICache), issue 3 + carry 1
#   2. Carry (position 3) 指令会被丢弃 — 关键指令必须在 pos 0/1/2
#   3. 同 batch 内避免 RAW — 否则 skip-stalled 把指令推到 carry
#   4. JAL/JALR 后一个 batch 被 flush — 用 NOP 填充
# =================================================================

.section .text.init
.globl _start

_start:
    li      sp, 0x400          # 0x00: pos 0 — stack ptr
    # ══ 操作数准备 ══
    li      a0, 100            # 0x04: pos 1
    li      a1, 30             # 0x08: pos 2
    nop                        # 0x0C: pos 3 (carry — lost, OK)

    li      a2, 3              # 0x10: pos 0
    li      a3, -64            # 0x14: pos 1
    li      a4, 2              # 0x18: pos 2
    nop                        # 0x1C: pos 3 (carry)

    # ══ R-type (10 types) ══
    add     t0, a0, a1         # 0x20: pos 0 — ADD
    sub     t1, a0, a1         # 0x24: pos 1 — SUB
    sll     t2, a0, a2         # 0x28: pos 2 — SLL
    nop                        # 0x2C: pos 3 (carry)

    slt     t3, a1, a0         # 0x30: pos 0 — SLT
    sltu    t4, a1, a0         # 0x34: pos 1 — SLTU
    xor     t5, a0, a1         # 0x38: pos 2 — XOR
    nop                        # 0x3C: pos 3 (carry)

    srl     t0, a0, a2         # 0x40: pos 0 — SRL
    sra     t1, a3, a4         # 0x44: pos 1 — SRA
    or      t2, a0, a1         # 0x48: pos 2 — OR
    nop                        # 0x4C: pos 3 (carry)

    and     t3, a0, a1         # 0x50: pos 0 — AND
    nop                        # 0x54: pos 1 (padding)
    nop                        # 0x58: pos 2 (padding)
    nop                        # 0x5C: pos 3 (carry)

    # ══ I-type ALU (9 types) ══
    # 关键: SRAI 读 a3 — li a3 在前一 batch, 避免 batch 内 RAW
    slli    t1, a2, 2          # 0x50: pos 0 — SLLI
    ori     t3, a2, 0x0F       # 0x54: pos 1 — ORI
    xori    t4, a2, 0xFF       # 0x58: pos 2 — XORI
    nop                        # 0x5C: pos 3 (carry)

    andi    t5, a2, 0x0F       # 0x60: pos 0 — ANDI
    slti    t6, a2, 100        # 0x64: pos 1 — SLTI
    sltiu   t0, a2, 100        # 0x68: pos 2 — SLTIU
    nop                        # 0x6C: pos 3 (carry)

    srli    t1, a4, 1          # 0x70: pos 0 — SRLI
    srai    t2, a3, 2          # 0x74: pos 1 — SRAI (a3 from batch 1, bypass OK)
    addi    t3, a2, 10         # 0x78: pos 2 — ADDI
    nop                        # 0x7C: pos 3 (carry)

    # ══ Upper Immediate (2 types) ══
    lui     t4, 0x12345        # 0x80: pos 0 — LUI
    auipc   t5, 0              # 0x84: pos 1 — AUIPC
    nop                        # 0x88: pos 2 (padding)
    nop                        # 0x8C: pos 3 (carry)

    # ══ Store (3 types) ══ — sp=0x400, safe memory
    sw      t0, 0(sp)          # 0x90: pos 0 — SW
    sh      t0, 4(sp)          # 0x94: pos 1 — SH
    sb      t0, 8(sp)          # 0x98: pos 2 — SB
    nop                        # 0x9C: pos 3 (carry)

    # ══ Load (5 types) ══
    lw      t1, 0(sp)          # 0xA0: pos 0 — LW
    lh      t2, 4(sp)          # 0xA4: pos 1 — LH
    lb      t3, 8(sp)          # 0xA8: pos 2 — LB
    nop                        # 0xAC: pos 3 (carry)

    lhu     t4, 4(sp)          # 0xB0: pos 0 — LHU
    lbu     t5, 8(sp)          # 0xB4: pos 1 — LBU
    nop                        # 0xB8: pos 2 (padding)
    nop                        # 0xBC: pos 3 (carry)

    # ══ Branch NOT-TAKEN (6 types) ══ — 3 per batch, NONE at pos 3
    beq     a0, a1, 1f         # 0xC0: pos 0 — BEQ  (100 != 30, not taken)
    bne     a0, a0, 1f         # 0xC4: pos 1 — BNE  (100 == 100, not taken)
    blt     a0, a0, 1f         # 0xC8: pos 2 — BLT  (100 !< 100, not taken)
    nop                        # 0xCC: pos 3 (carry)

    # batch 12: BGE/BLTU/BGEU — all NOT-TAKEN
    # a2=3, a3=-64 (0xFFFFFFC0 unsigned)
    # BGE(a3,a2): -64>=3→F ✓  BLTU(a3,a2): 0xFFFFFFC0<3→F ✓  BGEU(a2,a3): 3>=0xFFFFFFC0→F ✓
    bge     a3, a2, 1f         # 0xD0: pos 0 — BGE  (-64 >= 3 → F, NOT taken)
    bltu    a3, a2, 1f         # 0xD4: pos 1 — BLTU (0xFFFFFFC0 < 3 → F, NOT taken)
    bgeu    a2, a3, 1f         # 0xD8: pos 2 — BGEU (3 >= 0xFFFFFFC0 → F, NOT taken)
    nop                        # 0xDC: pos 3 (carry)
1:
    # ══ System + FENCE (3 types) — BEFORE JAL/JALR ══
    csrr    t0, 0xC00          # 0xE0: pos 0 — CSRRS (cycle CSR, overwrites t0)
    fence                      # 0xE4: pos 1 — FENCE (NOP-like, pos 1 = safe!)
    li      t0, 0x130          # setup JALR target (jlr_target addr, shifted by AND batch)
    nop                        # carry

    # ══ Jump (2 types) — AT THE END ══
    # JAL: jump forward +8 (skip delay slot)
    jal     t0, jal_target     # JAL (overwrites t0 with PC+4)
    nop                        # delay slot (flushed)
    nop                        # padding
    nop                        # carry

jal_target:
    # JALR: indirect jump via register
    li      t0, 0x130          # reload JALR target (jlr_target)
    nop                        # padding
    nop                        # padding — avoid RAW!
    nop                        # carry

    # Now JALR in a NEW batch with t0 already set
    jalr    t1, t0, 0          # JALR (t0 from prev batch, no RAW)
    nop                        # delay
    nop                        # padding
    nop                        # carry

jlr_target:
    # ══ Exit ══
    li      a0, 0              # 0x110: pos 0 (exit code = success)
    ecall                      # 0x114: pos 1 — ECALL
    nop                        # 0x118: pos 2
    nop                        # 0x11C: pos 3

    # Fallback (should not reach here)
    li      a0, 1              # 0x120
    ecall                      # 0x124
