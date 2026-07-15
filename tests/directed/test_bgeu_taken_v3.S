/* test_bgeu_taken_v3.S — BGEU should-take test (V3: spin loop 验证)
 * 策略: 正确路径进入 spin loop, scoreboard 检测 spin = PASS.
 * 错误路径也进入 spin loop (但 PC 不同), 先到达的 spin 决定结果.
 *
 * 关键: 如果 BGEU 正确 taken → 跳到 taken spin → PASS
 *       如果 BGEU 未 taken (错误) → 进入 fall-through spin → 不同 PC
 *
 * t0 = 0x100, t1 = 0x10
 * bgeu t0, t1 → 0x100 >= 0x10 = TRUE → should branch to taken
 */

.section .text
.globl _start
.type _start, @function

_start:
    li t0, 0x100
    li t1, 0x10
    bgeu t0, t1, taken    /* 0x100 >= 0x10? YES → should branch */

    /* Fall through = WRONG: 分支未 taken (错误) */
    li a0, 1               /* a0 = 1 (FAIL) */
wrong_spin:
    j wrong_spin           /* spin at wrong_spin PC */

taken:
    /* Branch taken = CORRECT */
    li a0, 0               /* a0 = 0 (PASS) */
correct_spin:
    j correct_spin         /* spin at correct_spin PC */
