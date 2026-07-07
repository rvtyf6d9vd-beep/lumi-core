/* Minimal m5_exit test for SE mode verification */
#include <stdint.h>

void _start(void) {
    /* m5_exit with code=42 to make it identifiable */
    register uint32_t a0 __asm__("a0") = 42;
    __asm__ volatile (
        ".word 0x4200007b"  /* m5_exit: custom-3, M5FUNC=0x21 */
        : : "r"(a0) : "memory"
    );
    /* Fallback infinite loop */
    while (1) { __asm__ volatile("wfi"); }
}
