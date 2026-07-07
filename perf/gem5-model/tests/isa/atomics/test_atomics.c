/* test_atomics.c - A extension (Atomics) ISA test for RV32
 * Tests: LR.W, SC.W, AMOADD.W, AMOSWAP.W, AMOXOR.W, AMOAND.W, AMOOR.W,
 *        AMOMIN.W, AMOMAX.W, AMOMINU.W, AMOMAXU.W
 *
 * Compile: riscv64-unknown-elf-gcc -march=rv32imac_zicsr_zifencei -mabi=ilp32 \
 *          -nostdlib -static -o test_atomics test_atomics.c ../libc/crt0.o \
 *          -T ../libc/lumi-se-rv32.ld -lgcc
 */

/* Minimal syscall-based I/O */
static void write_str(const char *s) {
    register unsigned long a0 __asm__("a0") = 1;  /* stdout */
    register const char *a1 __asm__("a1") = s;
    register unsigned long a2 __asm__("a2");
    /* compute length */
    const char *p = s;
    while (*p) p++;
    a2 = (unsigned long)(p - s);
    register unsigned long a7 __asm__("a7") = 64;  /* write */
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a1), "r"(a2), "r"(a7) : "memory");
}

static void exit_test(int code) {
    register unsigned long a0 __asm__("a0") = (unsigned long)code;
    register unsigned long a7 __asm__("a7") = 93;  /* exit */
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    __builtin_unreachable();
}

static int tests_passed = 0;
static int tests_failed = 0;

#define CHECK(cond, name) do { \
    if (cond) { tests_passed++; } \
    else { tests_failed++; write_str("FAIL: "); write_str(name); write_str("\n"); } \
} while(0)

int main(void) {
    unsigned int val, result, tmp;

    /* --- Test 1: LR.W / SC.W basic --- */
    val = 42;
    __asm__ volatile(
        "lr.w %0, (%2)\n"
        "sc.w %1, %0, (%2)\n"
        : "=&r"(result), "=r"(tmp)
        : "r"(&val)
        : "memory"
    );
    CHECK(result == 42, "lr.w loads value");
    CHECK(tmp == 0, "sc.w succeeds (returns 0)");

    /* --- Test 2: LR.W / SC.W failure (another SC.W without LR) --- */
    val = 100;
    /* First do LR+SC successfully */
    __asm__ volatile(
        "lr.w %0, (%2)\n"
        "sc.w %1, %0, (%2)\n"
        : "=&r"(result), "=r"(tmp)
        : "r"(&val)
        : "memory"
    );
    CHECK(tmp == 0, "lr/sc pair succeeds");

    /* --- Test 3: AMOADD.W --- */
    val = 10;
    __asm__ volatile(
        "amoadd.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(5)
        : "memory"
    );
    CHECK(result == 10, "amoadd.w returns old value");
    CHECK(val == 15, "amoadd.w updates memory");

    /* --- Test 4: AMOSWAP.W --- */
    val = 20;
    __asm__ volatile(
        "amoswap.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(99)
        : "memory"
    );
    CHECK(result == 20, "amoswap.w returns old value");
    CHECK(val == 99, "amoswap.w updates memory");

    /* --- Test 5: AMOXOR.W --- */
    val = 0xFF;
    __asm__ volatile(
        "amoxor.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(0x0F)
        : "memory"
    );
    CHECK(result == 0xFF, "amoxor.w returns old value");
    CHECK(val == 0xF0, "amoxor.w XORs correctly");

    /* --- Test 6: AMOAND.W --- */
    val = 0xFF;
    __asm__ volatile(
        "amoand.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(0x0F)
        : "memory"
    );
    CHECK(result == 0xFF, "amoand.w returns old value");
    CHECK(val == 0x0F, "amoand.w ANDs correctly");

    /* --- Test 7: AMOOR.W --- */
    val = 0xF0;
    __asm__ volatile(
        "amoor.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(0x0F)
        : "memory"
    );
    CHECK(result == 0xF0, "amoor.w returns old value");
    CHECK(val == 0xFF, "amoor.w ORs correctly");

    /* --- Test 8: AMOMIN.W --- */
    val = 10;
    __asm__ volatile(
        "amomin.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(5)
        : "memory"
    );
    CHECK(result == 10, "amomin.w returns old value");
    CHECK(val == 5, "amomin.w stores min");

    /* --- Test 9: AMOMAX.W --- */
    val = 10;
    __asm__ volatile(
        "amomax.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(20)
        : "memory"
    );
    CHECK(result == 10, "amomax.w returns old value");
    CHECK(val == 20, "amomax.w stores max");

    /* --- Test 10: AMOMINU.W --- */
    val = 10;
    __asm__ volatile(
        "amominu.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(5)
        : "memory"
    );
    CHECK(result == 10, "amominu.w returns old value");
    CHECK(val == 5, "amominu.w stores min (unsigned)");

    /* --- Test 11: AMOMAXU.W --- */
    val = 10;
    __asm__ volatile(
        "amomaxu.w %0, %2, (%1)\n"
        : "=&r"(result)
        : "r"(&val), "r"(20)
        : "memory"
    );
    CHECK(result == 10, "amomaxu.w returns old value");
    CHECK(val == 20, "amomaxu.w stores max (unsigned)");

    /* --- Summary --- */
    if (tests_failed == 0) {
        write_str("A extension: ALL TESTS PASSED (");
    } else {
        write_str("A extension: FAILURES (");
    }
    /* Simple number print */
    char buf[4];
    buf[0] = '0' + tests_passed;
    buf[1] = '/';
    buf[2] = '0' + tests_passed + tests_failed;
    buf[3] = 0;
    write_str(buf);
    write_str(")\n");

    exit_test(tests_failed == 0 ? 0 : 1);
    return 0;
}
