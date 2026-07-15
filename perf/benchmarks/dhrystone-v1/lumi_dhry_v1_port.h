/* lumi_dhry_v1_port.h — Dhrystone V1 bare-metal adaptation for Verilator
 *
 * 与原版 lumi_dhry_port.h 的区别:
 *   - printf → no-op (v1_lib.c 提供, 无 ECALL)
 *   - write_tohost → 写结果到 0x3FFE0 后 ECALL 退出
 *   - setStats → no-op (无 gem5)
 *   - 不依赖 mini_libc.h
 *
 * 通过预定义 _LUMI_DHRY_PORT_H 阻止原版 header 被 dhrystone.h 包含。
 *
 * T-MS3-S1-7
 */

#ifndef _LUMI_DHRY_V1_PORT_H
#define _LUMI_DHRY_V1_PORT_H

#include <stddef.h>
#include <stdint.h>

/* ---- String functions (provided by v1_lib.c) ---- */
size_t strlen(const char *s);
int    strcmp(const char *s1, const char *s2);
char  *strcpy(char *dst, const char *src);
char  *strncpy(char *dst, const char *src, size_t n);
void  *memcpy(void *dst, const void *src, size_t n);
void  *memset(void *s, int c, size_t n);

/* ---- I/O: no-op for V1 ---- */
int printf(const char *fmt, ...);

/* ---- RISC-V cycle counter ---- */
static inline unsigned long read_csr_mcycle(void) {
    unsigned long val;
    __asm__ volatile ("rdcycle %0" : "=r"(val));
    return val;
}
#define read_csr(reg) read_csr_mcycle()

/* ---- m5 stubs: no-op for V1 ---- */
static inline void m5_reset_stats(unsigned long a, unsigned long b) {
    (void)a; (void)b;
}
static inline void m5_dump_stats(unsigned long a, unsigned long b) {
    (void)a; (void)b;
}

/* ---- setStats: no-op for V1 ---- */
static inline void setStats(int enable) {
    (void)enable;
}

/* ---- Benchmark result protocol ---- */
extern void v1_write_result(unsigned long bench_id, unsigned long iterations,
                             unsigned long total_ticks, unsigned long metric_x100,
                             unsigned long checks);

/* ---- write_tohost: 写 Dhrystone 结果 → ECALL 退出 ---- */
/*
 * 此时 dhrystone main() 已计算完:
 *   - Number_Of_Runs (NUMBER_OF_RUNS)
 *   - User_Time (End_Time - Begin_Time, in cycles)
 *   - dmips_mhz_x100 (溢出安全的分步计算)
 *
 * 全局变量可直接访问。
 */
extern long User_Time;
extern int  Int_Glob;  /* 用于验证: should be 5 */

#ifndef NUMBER_OF_RUNS
#define NUMBER_OF_RUNS 500
#endif

static inline void write_tohost(unsigned int val) {
    /* RV32 溢出安全的 DMIPS/MHz 计算 (与 dhrystone.c 中一致) */
    unsigned long n_runs = (unsigned long)NUMBER_OF_RUNS;
    unsigned long u_time = (unsigned long)User_Time;
    unsigned long dmips_mhz_x100 = 0;

    if (u_time > 0) {
        unsigned long scaled_dps = (n_runs * 10000UL) / u_time;
        dmips_mhz_x100 = (scaled_dps * 10000UL) / 1757UL;
    }

    /* 变量正确性检查 */
    unsigned long checks = 0;
    if (Int_Glob != 5) checks |= 1;

    /* 写入结果到 0x3FFE0 */
    v1_write_result(
        2,              /* bench_id: Dhrystone */
        n_runs,         /* iterations */
        u_time,         /* total_ticks */
        dmips_mhz_x100, /* metric_x100: DMIPS/MHz * 100 */
        checks          /* 0=pass */
    );

    /* ECALL exit */
    register long a0 __asm__("a0") = (long)val;
    register long a7 __asm__("a7") = 93;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while(1);
}

#endif /* _LUMI_DHRY_V1_PORT_H */
