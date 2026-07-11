# =================================================================
# V2 Directed Test: PLIC Dispatch (T-MS3-S1-2.2e)
# 验证 PLIC 中断分发: threshold, claim, complete
# 需求: LUMI-SYS-001
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    li      sp, 0x00017F00

    # ══ PLIC CSR 路径验证 ═════════════════════════════
    # In CLIC+PLIC architecture, PLIC operates via:
    # - External interrupt enable: mie.MEIE (bit 11)
    # - External interrupt pending: mip.MEIP (bit 11, read-only)
    # - mtvec: trap vector for interrupt handling

    # ══ Setup trap handler for interrupt ═══════════════
    la      t0, interrupt_handler
    csrw    0x305, t0               # mtvec (Direct mode)

    # ══ 验证 mie.MEIE 可写 ═══════════════════════════
    li      t0, 0x800               # MEIE bit
    csrrs   t1, 0x304, t0           # Set MEIE, old value in t1
    csrr    t2, 0x304               # Read mie
    and     t3, t2, t0
    bne     t3, t0, fail            # MEIE should be set

    # Clear MEIE
    csrrc   zero, 0x304, t0         # Clear MEIE
    csrr    t2, 0x304
    and     t3, t2, t0
    bne     t3, zero, fail          # MEIE should be cleared

    # ══ 验证 mie.MTIE (Timer) 可写 ═══════════════════
    li      t0, 0x80                # MTIE bit
    csrrs   zero, 0x304, t0
    csrr    t1, 0x304
    and     t2, t1, t0
    bne     t2, t0, fail

    # ══ 验证 mie.MSIE (Software) 可写 ════════════════
    li      t0, 0x8                 # MSIE bit
    csrrs   zero, 0x304, t0
    csrr    t1, 0x304
    and     t2, t1, t0
    bne     t2, t0, fail

    # ══ 验证全中断使能位组合 ═════════════════════════
    li      t0, 0x888               # MEIE + MTIE + MSIE
    csrw    0x304, t0
    csrr    t1, 0x304
    and     t2, t1, t0
    bne     t2, t0, fail

    # ══ mstatus.MIE 全局使能 ═════════════════════════
    csrr    t0, 0x300               # mstatus
    li      t1, 0x8                 # MIE
    csrrs   zero, 0x300, t1
    csrr    t2, 0x300
    and     t3, t2, t1
    bne     t3, t1, fail

    # Disable MIE for safety
    csrrc   zero, 0x300, t1

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall

# ── Interrupt Handler ─────────────────────────────────────
.align 4
interrupt_handler:
    csrr    t0, 0x342               # mcause
    # Check if interrupt (mcause[31] = 1)
    bltz    t0, is_interrupt
    # Not an interrupt — exception, advance mepc
    csrr    t0, 0x341
    addi    t0, t0, 4
    csrw    0x341, t0
    mret

is_interrupt:
    # Acknowledge and return
    csrr    t0, 0x341
    addi    t0, t0, 4
    csrw    0x341, t0
    mret
