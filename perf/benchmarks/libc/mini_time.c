/* mini_time.c - Timing functions for bare-metal RISC-V in gem5
 *
 * Provides:
 *   rdcycle()         - read RISC-V cycle counter CSR
 *   m5_reset_stats()  - reset gem5 statistics
 *   m5_dump_stats()   - dump gem5 statistics
 *   m5_exit()         - exit gem5 simulation
 *
 * The m5 functions use gem5's pseudo-instruction interface (opcode 0x7b).
 * These are declared as external in mini_libc.h and implemented in libm5.a.
 * This file provides inline-asm versions as a fallback.
 */

#include "mini_libc.h"

unsigned long rdcycle(void) {
    unsigned long val;
    __asm__ volatile("rdcycle %0" : "=r"(val));
    return val;
}

/* clock() - return cycle count (CoreMark timing interface)
 * Note: CoreMark expects clock() to return processor time in "clock ticks".
 * We return rdcycle which counts CPU cycles at 1GHz = 1 tick per nanosecond.
 */
long clock(void) {
    return (long)rdcycle();
}

/* CLOCKS_PER_SEC for CoreMark - use rdcycle at 1GHz = 1e9 ticks/sec */
#define CLOCKS_PER_SEC_VAL 1000000000L
