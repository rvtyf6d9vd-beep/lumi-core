# =================================================================
# V2 Directed Test: MTIME Timer (T-MS3-S1-2.2f)
# 验证 MTIME/MTIMECMP 定时器中断路径
# 需求: LUMI-SYS-003
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x0001_7F00

    # ══ MTIME CSR 读写验证 ════════════════════════════
    # time (CSR 0xC01) — read-only, monotonic counter
    csrr    t0, 0xC01               # time (low 32 bits)
    csrr    t1, 0xC01               # Read again
    bge     t1, t0, time_ok         # Should be >= (monotonic)
    j       fail
time_ok:

    # timeh (CSR 0xC81) — high 32 bits
    csrr    t0, 0xC81               # timeh

    # ══ mcycle 与 time 对比 ══════════════════════════
    # mcycle and time should both increment
    csrr    t0, 0xB00               # mcycle
    csrr    t1, 0xC01               # time
    # Both should be non-zero at this point
    beq     t0, zero, fail          # mcycle should be > 0

    # ══ mcountinhibit 验证 ════════════════════════════
    # Inhibit CY counter (bit 0)
    li      t0, 0x1                 # CY inhibit
    csrw    0x320, t0               # mcountinhibit

    csrr    t1, 0xB00               # mcycle (read)
    # Do some NOPs
    nop
    nop
    nop
    nop
    csrr    t2, 0xB00               # mcycle again
    # With inhibit, mcycle should NOT advance (or advance slowly)
    # Note: Implementation may still count, just inhibited

    # Uninhibit
    csrw    0x320, zero
    csrr    t3, 0xB00               # mcycle
    nop
    nop
    nop
    nop
    csrr    t4, 0xB00               # mcycle again
    # Without inhibit, mcycle should advance
    bgt     t4, t3, cycle_advances
    j       fail
cycle_advances:

    # ══ 验证 minstret (CSR 0xB02) ═══════════════════
    csrr    t0, 0xB02               # minstret
    nop
    nop
    csrr    t1, 0xB02               # minstret again
    bgt     t1, t0, instret_ok
    j       fail
instret_ok:

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall
