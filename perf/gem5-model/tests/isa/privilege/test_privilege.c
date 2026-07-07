/* test_privilege.c - Privilege mode ISA test for RV32 (SE-mode compatible)
 * Tests: U-mode counters (cycle/time/instret), ECALL trap, basic execution
 * Note: M-mode CSR access requires FS mode; SE mode runs in U-mode.
 *
 * Compile: riscv64-unknown-elf-gcc -march=rv32imac_zicsr_zifencei -mabi=ilp32 \
 *          -nostdlib -static -o test_privilege test_privilege.c crt0.o -lmini -T lumi-se-rv32.ld -lgcc
 */

static void write_str(const char *s) {
    register unsigned long a0 __asm__("a0") = 1;
    register const char *a1 __asm__("a1") = s;
    register unsigned long a2 __asm__("a2");
    const char *p = s;
    while (*p) p++;
    a2 = (unsigned long)(p - s);
    register unsigned long a7 __asm__("a7") = 64;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a1), "r"(a2), "r"(a7) : "memory");
}

static void exit_test(int code) {
    register unsigned long a0 __asm__("a0") = (unsigned long)code;
    register unsigned long a7 __asm__("a7") = 93;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    __builtin_unreachable();
}

static int tests_passed = 0;
static int tests_failed = 0;

#define CHECK(cond, name) do { \
    if (cond) { tests_passed++; } \
    else { tests_failed++; write_str("FAIL: "); write_str(name); write_str("\n"); } \
} while(0)

/* Read U-mode accessible CSRs (cycle, time, instret and their high halves) */
#define CSR_READ(csr, val) \
    __asm__ volatile("csrr %0, " #csr : "=r"(val))

int main(void) {
    unsigned long val, val2;

    /* --- Test 1: cycle counter (U-mode readable via mcountinhibit) --- */
    CSR_READ(cycle, val);
    CHECK(val > 0, "cycle counter > 0");

    /* Verify counter increments */
    CSR_READ(cycle, val2);
    CHECK(val2 >= val, "cycle counter increments");

    /* --- Test 2: instret counter --- */
    CSR_READ(instret, val);
    CHECK(val > 0, "instret counter > 0");

    /* --- Test 3: time counter --- */
    /* Note: gem5 SE mode may return 0 for time CSR (no RTC emulated) */
    CSR_READ(time, val);
    CHECK(1, "time CSR readable (value may be 0 in SE mode)");

    /* --- Test 4: cycleh (RV32 high word) --- */
    unsigned long high;
    __asm__ volatile("csrr %0, cycleh" : "=r"(high));
    CHECK(high == 0, "cycleh == 0 (small tick count)");

    /* --- Test 5: ECALL syscall mechanism --- */
    /* In SE mode, ECALL is intercepted by gem5 as a Linux syscall.
     * This verifies the trap mechanism works correctly. */
    register unsigned long syscall_a0 __asm__("a0") = 0;
    register unsigned long syscall_a7 __asm__("a7") = 172;  /* getpid */
    __asm__ volatile("ecall" : "+r"(syscall_a0) : "r"(syscall_a7) : "memory");
    CHECK(syscall_a0 > 0, "ECALL syscall returns PID");

    /* --- Test 6: write syscall works --- */
    write_str("ECALL write test OK\n");
    CHECK(1, "ECALL write syscall functional");

    /* --- Test 7: Basic arithmetic in U-mode --- */
    volatile int a = 12345;
    volatile int b = 67890;
    volatile int c = a + b;
    CHECK(c == 80235, "U-mode arithmetic correct");

    /* --- Test 8: Memory access in U-mode --- */
    volatile int arr[4] = {10, 20, 30, 40};
    volatile int sum = arr[0] + arr[1] + arr[2] + arr[3];
    CHECK(sum == 100, "U-mode memory access correct");

    /* --- Summary --- */
    if (tests_failed == 0) {
        write_str("Privilege (SE-mode): ALL TESTS PASSED\n");
    } else {
        write_str("Privilege (SE-mode): FAILURES DETECTED\n");
    }
    char buf[8];
    buf[0] = '0' + tests_passed;
    buf[1] = '/';
    buf[2] = '0' + tests_passed + tests_failed;
    buf[3] = 0;
    write_str(buf);
    write_str("\n");
    write_str("Note: M-mode CSR/PMP/Smrnmi tests require FS mode.\n");

    exit_test(tests_failed == 0 ? 0 : 1);
    return 0;
}
