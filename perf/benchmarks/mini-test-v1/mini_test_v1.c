/* v1_mini_test.c — Minimal V1 test: write result and ECALL
 *
 * Purpose: Verify the V1 simulation can:
 *   1. Execute boot code
 *   2. Write to 0x3FFE0 (V1 SRAM)
 *   3. ECALL exit (trigger scoreboard)
 *
 * Each result word uses a different magic so we can detect
 * which sw commits (3-issue carry-over might drop some).
 *
 * Layout at 0x3FFE0 (8 × uint32):
 *   [0] magic:    0xDEADBEEF
 *   [1] bench_id: 0xBEEF0001
 *   [2] iterations: 0xBEEF0007
 *   [3] total_ticks: 0xBEEF0000
 *   [4] metric:   0xBEEF00FA
 *   [5] checks:   0xBEEF0000
 *   [6] reserved
 *   [7] reserved
 */

#include <stdint.h>

#define V1_RESULT_BASE  ((volatile unsigned long *)0x3FFE0UL)

/* v1_write_result is provided by ../libc/v1_lib.c */
extern void v1_write_result(unsigned long bench_id, unsigned long iterations,
                            unsigned long total_ticks, unsigned long metric_x100,
                            unsigned long checks);

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;

    /* Use v1_write_result with distinctive patterns */
    v1_write_result(
        0xBEEF0001UL,    /* bench_id marker */
        0xBEEF0007UL,    /* iterations marker */
        0xBEEF0000UL,    /* total_ticks (will be overwritten with rdcycle) */
        0xBEEF00FAUL,    /* metric_x100 = 250 marker */
        0xBEEF0000UL     /* checks = 0 (PASS) */
    );

    /* Compute rdcycle to record some real ticks */
    unsigned long start, end;
    __asm__ volatile("rdcycle %0" : "=r"(start));
    /* Small delay loop */
    for (volatile int i = 0; i < 100; i++) {
        __asm__ volatile("nop");
    }
    __asm__ volatile("rdcycle %0" : "=r"(end));

    /* Update ticks with real measured value (overrides r[3]) */
    volatile unsigned long *r = V1_RESULT_BASE;
    r[3] = end - start;

    /* ECALL exit */
    register long a0 __asm__("a0") = 0;
    register long a7 __asm__("a7") = 93;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while (1) {}
}
