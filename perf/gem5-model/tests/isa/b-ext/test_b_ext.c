/*
 * B Extension (Zba/Zbb/Zbc/Zbs) Test Suite for gem5
 * Tests all bit-manipulation instructions
 *
 * Compile: riscv64-unknown-elf-gcc -march=rv32gc_zba_zbb_zbc_zbs -mabi=ilp32 -O0 -o test_b_ext test_b_ext.c
 * Run: ./build/RISCV/gem5.opt configs/learning_gem5/part1/simple-riscv.py
 */

#include <stdio.h>
#include <stdint.h>

/* Helper macro for inline assembly */
#define TEST_INSTR_R(name, instr, rs1_val, rs2_val, expected) do { \
    uint32_t rd; \
    uint32_t rs1 = (rs1_val); \
    uint32_t rs2 = (rs2_val); \
    __asm__ volatile ( \
        instr " %0, %1, %2" \
        : "=r"(rd) \
        : "r"(rs1), "r"(rs2) \
    ); \
    if (rd == (expected)) { \
        printf("PASS: %s(0x%x, 0x%x) = 0x%x\n", name, rs1, rs2, rd); \
    } else { \
        printf("FAIL: %s(0x%x, 0x%x) = 0x%x, expected 0x%x\n", \
               name, rs1, rs2, rd, (expected)); \
        fail_count++; \
    } \
} while(0)

#define TEST_INSTR_I(name, instr, rs1_val, imm_val, expected) do { \
    uint32_t rd; \
    uint32_t rs1 = (rs1_val); \
    __asm__ volatile ( \
        instr " %0, %1, %2" \
        : "=r"(rd) \
        : "r"(rs1), "i"(imm_val) \
    ); \
    if (rd == (expected)) { \
        printf("PASS: %s(0x%x, %d) = 0x%x\n", name, rs1, imm_val, rd); \
    } else { \
        printf("FAIL: %s(0x%x, %d) = 0x%x, expected 0x%x\n", \
               name, rs1, imm_val, rd, (expected)); \
        fail_count++; \
    } \
} while(0)

int main() {
    int fail_count = 0;
    
    printf("=== B Extension Test Suite ===\n\n");
    
    /* ===== Zba: Address Generation ===== */
    printf("--- Zba: Address Generation ---\n");
    
    /* sh1add: rd = (rs1 << 1) + rs2 */
    TEST_INSTR_R("sh1add", "sh1add", 0x12345678, 0x11111111, 0x3579AC01);
    TEST_INSTR_R("sh1add", "sh1add", 0x80000000, 0x00000001, 0x00000001);
    
    /* sh2add: rd = (rs1 << 2) + rs2 */
    TEST_INSTR_R("sh2add", "sh2add", 0x12345678, 0x11111111, 0x5A159E11);
    TEST_INSTR_R("sh2add", "sh2add", 0x40000000, 0x00000002, 0x00000002);
    
    /* sh3add: rd = (rs1 << 3) + rs2 */
    TEST_INSTR_R("sh3add", "sh3add", 0x12345678, 0x11111111, 0xA2ACF0D1);
    TEST_INSTR_R("sh3add", "sh3add", 0x20000000, 0x00000003, 0x00000003);
    
    /* add.uw: rd = rs1_uw + rs2 (zero-extend rs1 to XLEN) */
    TEST_INSTR_R("add.uw", "add.uw", 0x80000000, 0x00000001, 0x80000001);
    TEST_INSTR_R("add.uw", "add.uw", 0xFFFFFFFF, 0x00000001, 0x00000000);
    
    /* slli.uw: rd = (rs1_uw << shamt) */
    TEST_INSTR_I("slli.uw", "slli.uw", 0x80000001, 1, 0x00000002);
    TEST_INSTR_I("slli.uw", "slli.uw", 0x00000001, 31, 0x80000000);
    
    printf("\n--- Zbb: Basic Bit-manipulation ---\n");
    
    /* clz: count leading zeros */
    TEST_INSTR_R("clz", "clz", 0x80000000, 0, 0);
    TEST_INSTR_R("clz", "clz", 0x00000001, 0, 31);
    TEST_INSTR_R("clz", "clz", 0x00000000, 0, 32);
    TEST_INSTR_R("clz", "clz", 0x00010000, 0, 15);
    
    /* ctz: count trailing zeros */
    TEST_INSTR_R("ctz", "ctz", 0x00000001, 0, 0);
    TEST_INSTR_R("ctz", "ctz", 0x80000000, 0, 31);
    TEST_INSTR_R("ctz", "ctz", 0x00000000, 0, 32);
    TEST_INSTR_R("ctz", "ctz", 0x00010000, 0, 16);
    
    /* cpop: count population (number of 1s) */
    TEST_INSTR_R("cpop", "cpop", 0x00000000, 0, 0);
    TEST_INSTR_R("cpop", "cpop", 0xFFFFFFFF, 0, 32);
    TEST_INSTR_R("cpop", "cpop", 0xAAAAAAAA, 0, 16);
    TEST_INSTR_R("cpop", "cpop", 0x12345678, 0, 13);
    
    /* min */
    TEST_INSTR_R("min", "min", 5, 10, 5);
    TEST_INSTR_R("min", "min", -5, 10, -5);
    TEST_INSTR_R("min", "min", -1, -2, -2);
    
    /* max */
    TEST_INSTR_R("max", "max", 5, 10, 10);
    TEST_INSTR_R("max", "max", -5, 10, 10);
    TEST_INSTR_R("max", "max", -1, -2, -1);
    
    /* minu */
    TEST_INSTR_R("minu", "minu", 5, 10, 5);
    TEST_INSTR_R("minu", "minu", 0xFFFFFFFF, 10, 10);
    
    /* maxu */
    TEST_INSTR_R("maxu", "maxu", 5, 10, 10);
    TEST_INSTR_R("maxu", "maxu", 0xFFFFFFFF, 10, 0xFFFFFFFF);
    
    /* andn: rd = rs1 & ~rs2 */
    TEST_INSTR_R("andn", "andn", 0xFF00FF00, 0x0F0F0F0F, 0xF000F000);
    TEST_INSTR_R("andn", "andn", 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF);
    
    /* orn: rd = rs1 | ~rs2 */
    TEST_INSTR_R("orn", "orn", 0xFF00FF00, 0x0F0F0F0F, 0xFF0FFF00);
    TEST_INSTR_R("orn", "orn", 0x00000000, 0xFFFFFFFF, 0x00000000);
    
    /* xnor: rd = ~(rs1 ^ rs2) */
    TEST_INSTR_R("xnor", "xnor", 0xFF00FF00, 0x0F0F0F0F, 0xF0F0F0F0);
    TEST_INSTR_R("xnor", "xnor", 0xAAAAAAAA, 0x55555555, 0x00000000);
    
    /* pack: rd = {rs2[15:0], rs1[15:0]} */
    TEST_INSTR_R("pack", "pack", 0x12345678, 0xABCDEF01, 0xEF015678);
    
    /* packh: rd = {0, rs2[7:0], 0, rs1[7:0]} */
    TEST_INSTR_R("packh", "packh", 0x12345678, 0xABCDEF01, 0x00010078);
    
    /* rol: rotate left */
    TEST_INSTR_R("rol", "rol", 0x12345678, 4, 0x23456781);
    TEST_INSTR_R("rol", "rol", 0x80000000, 1, 0x00000001);
    
    /* ror: rotate right */
    TEST_INSTR_R("ror", "ror", 0x12345678, 4, 0x81234567);
    TEST_INSTR_R("ror", "ror", 0x00000001, 1, 0x80000000);
    
    /* rori: rotate right immediate */
    TEST_INSTR_I("rori", "rori", 0x12345678, 4, 0x81234567);
    
    /* orc.b: OR-combine bytes */
    TEST_INSTR_R("orc.b", "orc.b", 0x00000000, 0, 0x00000000);
    TEST_INSTR_R("orc.b", "orc.b", 0x01020304, 0, 0xFFFFFFFF);
    TEST_INSTR_R("orc.b", "orc.b", 0x80000000, 0, 0xFF000000);
    
    /* sext.b: sign-extend byte */
    TEST_INSTR_R("sext.b", "sext.b", 0x0000007F, 0, 0x0000007F);
    TEST_INSTR_R("sext.b", "sext.b", 0x00000080, 0, 0xFFFFFF80);
    
    /* sext.h: sign-extend halfword */
    TEST_INSTR_R("sext.h", "sext.h", 0x00007FFF, 0, 0x00007FFF);
    TEST_INSTR_R("sext.h", "sext.h", 0x00008000, 0, 0xFFFF8000);
    
    /* rev8: reverse bytes */
    TEST_INSTR_R("rev8", "rev8", 0x12345678, 0, 0x78563412);
    
    printf("\n--- Zbc: Carry-less Multiplication ---\n");
    
    /* clmul: carry-less multiply */
    TEST_INSTR_R("clmul", "clmul", 0x00000003, 0x00000005, 0x0000000F);
    TEST_INSTR_R("clmul", "clmul", 0x00000001, 0x12345678, 0x12345678);
    
    /* clmulh: carry-less multiply high */
    TEST_INSTR_R("clmulh", "clmulh", 0x00000003, 0x00000005, 0x00000001);
    
    /* clmulr: carry-less multiply reversed */
    TEST_INSTR_R("clmulr", "clmulr", 0x00000003, 0x00000005, 0x00000007);
    
    printf("\n--- Zbs: Single-bit Operations ---\n");
    
    /* bset: bit set */
    TEST_INSTR_R("bset", "bset", 0x00000000, 0, 0x00000001);
    TEST_INSTR_R("bset", "bset", 0x00000000, 31, 0x80000000);
    TEST_INSTR_R("bset", "bset", 0x12345678, 0, 0x12345679);
    
    /* bclr: bit clear */
    TEST_INSTR_R("bclr", "bclr", 0xFFFFFFFF, 0, 0xFFFFFFFE);
    TEST_INSTR_R("bclr", "bclr", 0xFFFFFFFF, 31, 0x7FFFFFFF);
    
    /* binv: bit invert */
    TEST_INSTR_R("binv", "binv", 0x00000000, 0, 0x00000001);
    TEST_INSTR_R("binv", "binv", 0xFFFFFFFF, 0, 0xFFFFFFFE);
    
    /* bext: bit extract */
    TEST_INSTR_R("bext", "bext", 0x00000001, 0, 1);
    TEST_INSTR_R("bext", "bext", 0x80000000, 31, 1);
    TEST_INSTR_R("bext", "bext", 0x00000000, 0, 0);
    
    /* bseti: bit set immediate */
    TEST_INSTR_I("bseti", "bseti", 0x00000000, 0, 0x00000001);
    TEST_INSTR_I("bseti", "bseti", 0x00000000, 7, 0x00000080);
    
    /* bclri: bit clear immediate */
    TEST_INSTR_I("bclri", "bclri", 0xFFFFFFFF, 0, 0xFFFFFFFE);
    TEST_INSTR_I("bclri", "bclri", 0xFFFFFFFF, 7, 0xFFFFFF7F);
    
    /* binvi: bit invert immediate */
    TEST_INSTR_I("binvi", "binvi", 0x00000000, 0, 0x00000001);
    TEST_INSTR_I("binvi", "binvi", 0xFFFFFFFF, 0, 0xFFFFFFFE);
    
    /* bexti: bit extract immediate */
    TEST_INSTR_I("bexti", "bexti", 0x00000001, 0, 1);
    TEST_INSTR_I("bexti", "bexti", 0x00000080, 7, 1);
    TEST_INSTR_I("bexti", "bexti", 0x00000000, 0, 0);
    
    printf("\n=== Test Summary ===\n");
    if (fail_count == 0) {
        printf("ALL TESTS PASSED!\n");
    } else {
        printf("FAILED: %d tests\n", fail_count);
    }
    
    return fail_count;
}
