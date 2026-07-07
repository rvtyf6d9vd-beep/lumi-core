/*
 * Minimal m5 syscall stubs for Lumi-Core interrupt tests
 *
 * gem5 m5 pseudo-instructions use RISC-V custom-3 opcode (0x7B).
 * M5FUNC is encoded in bits [31:25]:
 *   m5_exit:  M5FUNC=0x21 → 0x4200007B
 *   m5_fail:  M5FUNC=0x22 → 0x4400007B
 *
 * Works in both SE mode and FS mode (gem5 decoder handles custom-3).
 * See: gem5/include/gem5/asm/generic/m5ops.h
 *      gem5/util/m5/src/abi/riscv/m5op.S
 */

#include <stdint.h>

/* gem5 m5_exit: custom-3 opcode, M5FUNC=0x21
 * Encoding: 0x0000007B | (0x21 << 25) = 0x4200007B */
void m5_exit(uint64_t code) {
    register uint32_t a0 __asm__("a0") = (uint32_t)code;
    __asm__ volatile (
        ".word 0x4200007b"  /* m5_exit: custom-3, M5FUNC=0x21 */
        : : "r"(a0) : "memory"
    );
    /* Fallback: infinite loop if not running under gem5 */
    while (1) { __asm__ volatile("wfi"); }
}

void m5_dump_stats(uint64_t ns, uint64_t id) {
    /* m5_dump_stats: custom-3 opcode, M5FUNC=0x41
     * Encoding: 0x0000007B | (0x41 << 25) = 0x8200007B */
    register uint32_t a0 __asm__("a0") = (uint32_t)ns;
    register uint32_t a1 __asm__("a1") = (uint32_t)id;
    __asm__ volatile (
        ".word 0x8200007b"  /* m5_dump_stats: custom-3, M5FUNC=0x41 */
        : : "r"(a0), "r"(a1) : "memory"
    );
}
