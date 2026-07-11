# =================================================================
# V3 Directed Test: RV32B Zbb Full (T-MS3-S1-2.3b)
# 位计数/位逻辑/比较/移位/特殊 全覆盖
# 需求: LUMI-ISA-003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00

    # ══ ANDN/ORN/XNOR 全覆盖 ════════════════════════
    # 全0/全1 组合
    li      t0, 0x00000000
    li      t1, 0x00000000
    andn    t2, t0, t1              # 0 & ~0 = 0
    bne     t2, zero, fail
    orn     t2, t0, t1              # 0 | ~0 = -1
    li      s0, -1
    bne     t2, s0, fail
    xnor    t2, t0, t1              # ~(0^0) = -1
    bne     t2, s0, fail

    li      t0, 0xFFFFFFFF
    li      t1, 0xFFFFFFFF
    andn    t2, t0, t1              # -1 & ~(-1) = 0
    bne     t2, zero, fail
    orn     t2, t0, t1              # -1 | ~(-1) = -1
    li      s0, -1
    bne     t2, s0, fail

    li      t0, 0xFFFFFFFF
    li      t1, 0x00000000
    xnor    t2, t0, t1              # ~(-1 ^ 0) = 0
    bne     t2, zero, fail

    # ══ MIN/MAX 有符号/无符号 ═══════════════════════
    # Equal values
    li      t0, 42
    li      t1, 42
    min     t2, t0, t1
    li      s0, 42
    bne     t2, s0, fail
    max     t2, t0, t1
    bne     t2, s0, fail

    # Positive vs Negative
    li      t0, 100
    li      t1, -100
    min     t2, t0, t1              # min(100, -100) = -100
    bne     t2, t1, fail
    max     t2, t0, t1              # max(100, -100) = 100
    bne     t2, t0, fail

    # MINU/MAXU with large unsigned
    li      t0, 0xFFFFFFFF         # -1 unsigned = max
    li      t1, 0
    minu    t2, t0, t1              # minu(max, 0) = 0
    bne     t2, zero, fail
    maxu    t2, t0, t1              # maxu(max, 0) = max
    li      s0, 0xFFFFFFFF
    bne     t2, s0, fail

    # ══ CLZ 全边界 ══════════════════════════════════
    # All bits set → 0 leading zeros
    li      t0, 0xFFFFFFFF
    clz     t2, t0
    bne     t2, zero, fail

    # Only MSB set → 0 leading zeros
    li      t0, 0x80000000
    clz     t2, t0
    bne     t2, zero, fail

    # Only bit 0 set → 31 leading zeros
    li      t0, 1
    clz     t2, t0
    li      s0, 31
    bne     t2, s0, fail

    # Only bit 15 set → 16 leading zeros
    li      t0, 0x00008000
    clz     t2, t0
    li      s0, 16
    bne     t2, s0, fail

    # ══ CTZ 全边界 ══════════════════════════════════
    # All bits set → 0 trailing zeros
    li      t0, 0xFFFFFFFF
    ctz     t2, t0
    bne     t2, zero, fail

    # Only MSB → 31 trailing zeros
    li      t0, 0x80000000
    ctz     t2, t0
    li      s0, 31
    bne     t2, s0, fail

    # bit 16 → 16 trailing zeros
    li      t0, 0x00010000
    ctz     t2, t0
    li      s0, 16
    bne     t2, s0, fail

    # ══ CPOP 全边界 ═════════════════════════════════
    li      t0, 0
    cpop    t2, t0
    bne     t2, zero, fail

    li      t0, 1
    cpop    t2, t0
    li      s0, 1
    bne     t2, s0, fail

    li      t0, 0xAAAAAAAA         # 16 bits set
    cpop    t2, t0
    li      s0, 16
    bne     t2, s0, fail

    li      t0, 0x55555555         # 16 bits set
    cpop    t2, t0
    li      s0, 16
    bne     t2, s0, fail

    # ══ ROL/ROR/RORI 全移位量 ══════════════════════
    li      t0, 0x12345678

    # Rotate by 0 = identity
    ror     t2, t0, zero
    bne     t2, t0, fail

    # Rotate left by 32 = identity
    li      t1, 0                   # shamt=0 → identity for rol too
    rol     t2, t0, t1
    bne     t2, t0, fail

    # ROR by 16: swap halves
    li      t1, 16
    ror     t2, t0, t1              # 0x12345678 >> 16 | << 16 = 0x56781234
    li      s0, 0x56781234
    bne     t2, s0, fail

    # ROL by 8: shift left by 8
    li      t1, 8
    rol     t2, t0, t1              # 0x12345678 << 8 | >> 24 = 0x34567812
    li      s0, 0x34567812
    bne     t2, s0, fail

    # RORI by 1
    li      t0, 0x80000001
    rori    t2, t0, 1               # >> 1 | << 31 = 0xC0000000
    li      s0, 0xC0000000
    bne     t2, s0, fail

    # RORI by 31 = ROL by 1
    li      t0, 0x80000001
    rori    t2, t0, 31
    li      s0, 0x00000003
    bne     t2, s0, fail

    # ══ REV8 验证 ════════════════════════════════════
    li      t0, 0xAABBCCDD
    rev8    t2, t0
    li      s0, 0xDDCCBBAA
    bne     t2, s0, fail

    li      t0, 0x00000000
    rev8    t2, t0
    bne     t2, zero, fail

    li      t0, 0xFFFFFFFF
    rev8    t2, t0
    li      s0, 0xFFFFFFFF
    bne     t2, s0, fail

    # ══ ORC.B 验证 ══════════════════════════════════
    li      t0, 0x00000000
    orc.b   t2, t0
    bne     t2, zero, fail

    li      t0, 0xFFFFFFFF
    orc.b   t2, t0
    li      s0, 0xFFFFFFFF
    bne     t2, s0, fail

    li      t0, 0x80000001
    orc.b   t2, t0
    li      s0, 0xFF0000FF
    bne     t2, s0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
