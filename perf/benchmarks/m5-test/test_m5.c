/* Minimal m5 test: verify m5_exit works in gem5 SE mode */
#include <stdint.h>

/* m5_exit function declaration - implemented in libm5.a */
extern void m5_exit(uint64_t ns_delay);

int main(void) {
    /* If m5_exit works, simulation exits with cause "m5_exit called" */
    /* If it doesn't work (illegal instruction), simulation will crash */
    m5_exit(0);
    /* Should not reach here if m5_exit works */
    return 42;
}
