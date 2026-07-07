/* test_zcmp.c - Zcmp extension ISA test for RV32
 * Tests: cm.push, cm.pop, cm.popret (compiler-emitted in prologue/epilogue)
 *
 * Compile: riscv64-unknown-elf-gcc -march=rv32imac_zicsr_zifencei_zcmp -mabi=ilp32 \
 *          -nostdlib -static -Os -o test_zcmp test_zcmp.c crt0.o -lmini -T lumi-se-rv32.ld -lgcc
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

/* These functions should use cm.push/cm.popret in prologue/epilogue with -Os */
static int __attribute__((noinline)) func_push_pop(int a, int b, int c) {
    volatile int x = a + b;
    volatile int y = b + c;
    volatile int z = a * c;
    return x + y + z;
}

static int __attribute__((noinline)) func_popret(int a, int b) {
    volatile int x = a * b + a;
    return x;
}

/* Deep call chain to test stack push/pop across multiple frames */
static int __attribute__((noinline)) depth3(int n) {
    volatile int x = n * 2;
    return x + 1;
}

static int __attribute__((noinline)) depth2(int n) {
    volatile int x = n + 1;
    return depth3(x) + depth3(n);
}

static int __attribute__((noinline)) depth1(int n) {
    volatile int x = n * 3;
    return depth2(x) + depth2(n + 1);
}

int main(void) {
    int result;

    /* --- Test 1: cm.push / cm.pop basic --- */
    result = func_push_pop(3, 4, 5);
    /* x=7, y=9, z=15, result=31 */
    CHECK(result == 31, "cm.push/cm.pop preserves regs");

    /* --- Test 2: cm.popret --- */
    result = func_popret(10, 3);
    /* x = 10*3+10 = 40 */
    CHECK(result == 40, "cm.popret returns value");

    /* --- Test 3: Deep call chain (multiple push/pop frames) --- */
    result = depth1(5);
    /* depth1: x=15, calls depth2(15) + depth2(6)
     * depth2(15): x=16, calls depth3(16)+depth3(15) = 33+31 = 64
     * depth2(6):  x=7,  calls depth3(7)+depth3(6) = 15+13 = 28
     * depth1 result = 64 + 28 = 92 */
    CHECK(result == 92, "deep call chain push/pop");

    /* --- Test 4: Register callee-saved preservation --- */
    /* s0-s11 should be preserved across calls */
    register int saved_s0 __asm__("s0") = 0x11111111;
    register int saved_s1 __asm__("s1") = 0x22222222;
    result = func_push_pop(saved_s0, saved_s1, 42);
    /* After call, s0 and s1 should still hold their values */
    CHECK(saved_s0 == 0x11111111, "s0 preserved across call");
    CHECK(saved_s1 == 0x22222222, "s1 preserved across call");

    /* --- Summary --- */
    if (tests_failed == 0) {
        write_str("Zcmp extension: ALL TESTS PASSED\n");
    } else {
        write_str("Zcmp extension: FAILURES DETECTED\n");
    }
    char buf[8];
    buf[0] = '0' + tests_passed;
    buf[1] = '/';
    buf[2] = '0' + tests_passed + tests_failed;
    buf[3] = 0;
    write_str(buf);
    write_str("\n");

    exit_test(tests_failed == 0 ? 0 : 1);
    return 0;
}
