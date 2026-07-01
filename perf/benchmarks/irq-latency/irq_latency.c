/*
 * irq_latency.c -- Interrupt latency measurement stub for Lumi-Core
 *
 * STATUS: DEFERRED (requires gem5 FS mode with CLIC/PLIC support)
 * SEE: audit/risk-register.yaml RISK-001
 *
 * This file documents the intended approach for measuring interrupt
 * latency (postInterrupt to first ISR instruction) on the MinorCPU.
 *
 * Target: <= 16 cycles
 *
 * Method:
 *   1. Set up a timer/CLIC SW interrupt handler
 *   2. Record rdcycle before triggering interrupt
 *   3. In ISR handler, record rdcycle again
 *   4. Report difference as IRQ latency
 *
 * Limitation:
 *   gem5 SE mode does not support external interrupts.
 *   This test requires gem5 FS (full-system) mode.
 */

/* Placeholder: this file will be implemented when FS mode is available */

static inline unsigned long rdcycle(void) {
    unsigned long val;
    __asm__ volatile("rdcycle %0" : "=r"(val));
    return val;
}

/* This function exists to avoid an empty compilation unit */
int irq_latency_placeholder(void) {
    (void)rdcycle();
    return 0;  /* deferred */
}
