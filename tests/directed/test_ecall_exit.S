/* V1 Directed Test: ECALL Exit Minimal Test (T-MS3-S1-7 Debug)
 * Scoreboard ECALL detection chain verification
 * Expected: a0=0 (PASS), scoreboard test_done=1
 */

.section .text.init
.globl _start
.align 2

_start:
    li      a0, 0          /* exit code = 0 (PASS) */
    li      a7, 93         /* __NR_exit */
    ecall                  /* trigger ECALL */
    j       .              /* spin loop fallback */
