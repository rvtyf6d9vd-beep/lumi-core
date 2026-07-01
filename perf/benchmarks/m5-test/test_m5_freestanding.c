/* Freestanding m5 test - NO C library dependencies
 * Verifies m5_exit pseudo-instruction works in gem5 SE mode.
 */

/* m5_exit: func=0x21, opcode 0x7b
 * Inline assembly version of what libm5.a provides */
static inline void m5_exit_inline(unsigned long ns_delay) {
    register unsigned long a0 __asm__("a0") = ns_delay;
    (void)a0;
    __asm__ volatile(".long 0x0000007b | (0x21 << 25)" ::: "memory");
}

/* write syscall: Linux RISC-V __NR_write=64 */
static long sys_write(int fd, const void *buf, unsigned long count) {
    register long a0 __asm__("a0") = fd;
    register const void *a1 __asm__("a1") = buf;
    register unsigned long a2 __asm__("a2") = count;
    register long a7 __asm__("a7") = 64;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a1), "r"(a2), "r"(a7) : "memory");
    return a0;
}

/* exit syscall: Linux RISC-V __NR_exit=93 */
static void sys_exit(int code) {
    register long a0 __asm__("a0") = code;
    register long a7 __asm__("a7") = 93;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while (1) {}
}

/* Minimal string output */
static void putstr(const char *s) {
    unsigned long len = 0;
    while (s[len]) len++;
    sys_write(1, s, len);
}

void _start(void) {
    putstr("m5-test: calling m5_exit(0)...\n");

    /* This is the critical test: if m5_exit works, gem5 exits cleanly.
     * If it fails (illegal instruction), simulation crashes. */
    m5_exit_inline(0);

    /* Should not reach here */
    putstr("m5-test: ERROR - m5_exit did not work!\n");
    sys_exit(1);
}
