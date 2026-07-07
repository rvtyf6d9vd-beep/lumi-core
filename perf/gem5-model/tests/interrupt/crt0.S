/*
 * crt0.S - Bare-metal startup for Lumi-Core gem5 FS mode
 * Initializes stack pointer, frame pointer, and trap handler before
 * calling _start.  The trap handler skips unsupported CSR/instructions
 * (e.g. Smepmp mseccfg on gem5 without Smepmp) so tests can continue
 * to m5_exit.
 *
 * Required because gem5 initializes all GPRs to 0.
 */
    .section .text.init, "ax"
    .globl _reset
    .type  _reset, @function

_reset:
    /* Initialize stack pointer to top of memory (defined in linker script) */
    la   sp, _stack_top
    /* Initialize frame pointer */
    la   s0, _stack_top

    /* ── Install trap handler ──
     * Set mtvec to _trap_handler in Direct mode (mode=0).
     * This catches illegal-instruction / unsupported-CSR traps and
     * skips the faulting instruction so the test can continue. */
    la   t0, _trap_handler
    csrw mtvec, t0

    /* Jump to C runtime _start */
    call _start

    /* Should not return; loop forever if it does */
.L_hang:
    wfi
    j .L_hang

/* ── Trap handler ──
 * On any synchronous exception (illegal instruction, unsupported CSR):
 *   Advance mepc by 4 bytes (all test CSR insts are 4-byte standard).
 *   Then mret to resume execution past the faulting instruction.
 *
 * Note: we do NOT load the faulting instruction bytes (lh/lw) because
 * that can itself trigger a nested trap in gem5 bare-metal mode.
 */
    .globl _trap_handler
    .type  _trap_handler, @function
    .balign 4
_trap_handler:
    csrr  t0, mepc          /* t0 = faulting PC            */
    addi  t0, t0, 4         /* skip 4-byte standard inst   */
    csrw  mepc, t0
    mret
