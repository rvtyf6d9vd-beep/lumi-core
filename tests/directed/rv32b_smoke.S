# =================================================================
# V3 Directed Test: RV32B (Zba/Zbb) Smoke (T-MS3-S1-2.3a)
# 每条 Zba/Zbb 指令至少 1 个测试向量
# 需求: LUMI-ISA-003, ERR-011
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ Zba: Shift-and-Add ════════════════════════════
    # SH1ADD: rd = (rs1 << 1) + rs2
    li      t0, 5
    li      t1, 10
    sh1add  t2, t0, t1              # (5<<1)+10 = 20
    li      s0, 20
    bne     t2, s0, fail

    # SH2ADD: rd = (rs1 << 2) + rs2
    li      t0, 3
    li      t1, 7
    sh2add  t2, t0, t1              # (3<<2)+7 = 19
    li      s0, 19
    bne     t2, s0, fail

    # SH3ADD: rd = (rs1 << 3) + rs2
    li      t0, 2
    li      t1, 5
    sh3add  t2, t0, t1              # (2<<3)+5 = 21
    li      s0, 21
    bne     t2, s0, fail

    # ══ Zbb: Bit-logic ════════════════════════════════
    # ANDN: rd = rs1 & ~rs2
    li      t0, 0xFF00_FF00
    li      t1, 0x0F0F_0F0F
    andn    t2, t0, t1              # 0xFF00_FF00 & ~0x0F0F_0F0F = 0xF000_F000
    li      s0, 0xF000_F000
    bne     t2, s0, fail

    # ORN: rd = rs1 | ~rs2
    li      t0, 0x00FF_00FF
    li      t1, 0xF0F0_F0F0
    orn     t2, t0, t1              # 0x00FF_00FF | ~0xF0F0_F0F0 = 0x0FFF_0FFF
    li      s0, 0x0FFF_0FFF
    bne     t2, s0, fail

    # XNOR: rd = ~(rs1 ^ rs2)
    li      t0, 0xAAAA_AAAA
    li      t1, 0x5555_5555
    xnor    t2, t0, t1              # ~(0xAAAA ^ 0x5555) = 0
    bne     t2, zero, fail

    # ══ Zbb: MIN/MAX ═════════════════════════════════
    # MIN (signed)
    li      t0, -5
    li      t1, 3
    min     t2, t0, t1              # min(-5, 3) = -5
    bne     t2, t0, fail

    # MAX (signed)
    max     t2, t0, t1              # max(-5, 3) = 3
    bne     t2, t1, fail

    # MINU (unsigned)
    li      t0, 10
    li      t1, 20
    minu    t2, t0, t1              # minu(10, 20) = 10
    bne     t2, t0, fail

    # MAXU (unsigned)
    maxu    t2, t0, t1              # maxu(10, 20) = 20
    bne     t2, t1, fail

    # ══ Zbb: CLZ/CTZ/CPOP ═══════════════════════════
    # CLZ: count leading zeros
    li      t0, 0x0080_0000         # bit 23 set → 8 leading zeros
    clz     t2, t0
    li      s0, 8
    bne     t2, s0, fail

    # CLZ of zero = 32
    clz     t2, zero
    li      s0, 32
    bne     t2, s0, fail

    # CTZ: count trailing zeros
    li      t0, 0x0000_0100         # bit 8 set → 8 trailing zeros
    ctz     t2, t0
    li      s0, 8
    bne     t2, s0, fail

    # CPOP: population count
    li      t0, 0xFFFF_FFFF
    cpop    t2, t0                  # 32 bits set
    li      s0, 32
    bne     t2, s0, fail

    li      t0, 0x0000_000F
    cpop    t2, t0                  # 4 bits set
    li      s0, 4
    bne     t2, s0, fail

    # ══ Zbb: ROL/ROR/RORI ═══════════════════════════
    # ROL: rotate left
    li      t0, 0x8000_0001
    li      t1, 4
    rol     t2, t0, t1              # rotate left by 4
    li      s0, 0x0000_0018
    bne     t2, s0, fail

    # ROR: rotate right
    li      t0, 0x8000_0001
    li      t1, 4
    ror     t2, t0, t1              # rotate right by 4
    li      s0, 0x1800_0000
    bne     t2, s0, fail

    # RORI: rotate right immediate
    li      t0, 0x8000_0001
    rori    t2, t0, 4               # rotate right by 4
    li      s0, 0x1800_0000
    bne     t2, s0, fail

    # ══ Zbb: REV8 ════════════════════════════════════
    li      t0, 0x0102_0304
    rev8    t2, t0                  # byte-reverse: 0x04030201
    li      s0, 0x0403_0201
    bne     t2, s0, fail

    # ══ Zbb: ORC.B ══════════════════════════════════
    li      t0, 0x0001_0200
    orc.b   t2, t0                  # byte 3=0→00, byte 2=01→FF, byte 1=02→FF, byte 0=00→00
    li      s0, 0x00FF_FF00
    bne     t2, s0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
