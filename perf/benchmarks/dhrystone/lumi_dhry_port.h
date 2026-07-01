/*
 * lumi_dhry_port.h -- Dhrystone bare-metal adaptation for Lumi-Core gem5 SE mode
 *
 * Provides:
 *   - rdcycle for timer
 *   - printf via mini_libc (Linux write syscall)
 *   - string functions via mini_libc
 *   - setStats() via m5 pseudo-instructions
 *   - DMIPS/MHz output calculation
 */

#ifndef _LUMI_DHRY_PORT_H
#define _LUMI_DHRY_PORT_H

#include "../libc/mini_libc.h"

/* ---- RISC-V cycle counter ---- */
static inline unsigned long read_csr_mcycle(void) {
    unsigned long val;
    __asm__ volatile ("rdcycle %0" : "=r"(val));
    return val;
}
#define read_csr(reg) read_csr_mcycle()

/* ---- m5 pseudo-instructions for stats control ---- */
extern void m5_reset_stats(unsigned long ns, unsigned long ns2);
extern void m5_dump_stats(unsigned long ns, unsigned long ns2);
extern void m5_exit(unsigned long code);

/* ---- setStats mapped to m5 instructions ---- */
static inline void setStats(int enable) {
    if (enable)
        m5_reset_stats(0, 0);
    else
        m5_dump_stats(0, 0);
}

/* ---- Exit via Linux syscall ---- */
static inline void write_tohost(unsigned int val) {
    register long a0 __asm__("a0") = (long)val;
    register long a7 __asm__("a7") = 93;  /* __NR_exit */
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while(1);
}

#endif /* _LUMI_DHRY_PORT_H */
