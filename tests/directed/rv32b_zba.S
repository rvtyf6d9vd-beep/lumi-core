# =================================================================
# V3 Directed Test: RV32B Zba Full (T-MS3-S1-2.3b)
# SH1ADD/SH2ADD/SH3ADD 全操作数组合 + 边界值
# 需求: LUMI-ISA-003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ SH1ADD 边界值 ═══════════════════════════════
    # 0 + 0
    li      t0, 0
    li      t1, 0
    sh1add  t2, t0, t1
    bne     t2, zero, fail

    # 1 << 1 + 0 = 2
    li      t0, 1
    sh1add  t2, t0, zero
    li      s0, 2
    bne     t2, s0, fail

    # -1 << 1 + 0 = -2
    li      t0, -1
    sh1add  t2, t0, zero
    li      s0, -2
    bne     t2, s0, fail

    # 0x7FFFFFFF << 1 + 1 = 0xFFFFFFFE + 1 = 0xFFFFFFFF
    li      t0, 0x7FFF_FFFF
    li      t1, 1
    sh1add  t2, t0, t1
    li      s0, 0xFFFF_FFFF
    bne     t2, s0, fail

    # ══ SH2ADD 边界值 ═══════════════════════════════
    # 1 << 2 + 0 = 4
    li      t0, 1
    sh2add  t2, t0, zero
    li      s0, 4
    bne     t2, s0, fail

    # 256 << 2 + 3 = 1027
    li      t0, 256
    li      t1, 3
    sh2add  t2, t0, t1
    li      s0, 1027
    bne     t2, s0, fail

    # -1 << 2 + 0 = -4
    li      t0, -1
    sh2add  t2, t0, zero
    li      s0, -4
    bne     t2, s0, fail

    # ══ SH3ADD 边界值 ═══════════════════════════════
    # 1 << 3 + 0 = 8
    li      t0, 1
    sh3add  t2, t0, zero
    li      s0, 8
    bne     t2, s0, fail

    # 16 << 3 + 7 = 135
    li      t0, 16
    li      t1, 7
    sh3add  t2, t0, t1
    li      s0, 135
    bne     t2, s0, fail

    # -1 << 3 + 0 = -8
    li      t0, -1
    sh3add  t2, t0, zero
    li      s0, -8
    bne     t2, s0, fail

    # ══ 循环验证: 100 次迭代 ═══════════════════════
    li      s1, 0                   # counter
    li      s2, 100
loop_zba:
    # SH1ADD: i*2 + i = 3*i
    sh1add  t0, s1, s1
    li      t1, 3
    mul     t2, s1, t1
    bne     t0, t2, fail

    # SH2ADD: i*4 + i = 5*i
    sh2add  t0, s1, s1
    li      t1, 5
    mul     t2, s1, t1
    bne     t0, t2, fail

    # SH3ADD: i*8 + i = 9*i
    sh3add  t0, s1, s1
    li      t1, 9
    mul     t2, s1, t1
    bne     t0, t2, fail

    addi    s1, s1, 1
    blt     s1, s2, loop_zba

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
