/* test_bgeu_taken_v2.S — BGEU should-take test (V2: 内存存储验证)
 * 策略: 不依赖 ECALL 退出, 而是将结果写入固定内存地址.
 * 错误路径先写入 FAIL 值, 正确路径后写入 PASS 值 (覆盖).
 * 最终检查 0x3FFE0 处的值: 0x5678=PASS, 0xBBBB=FAIL.
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

    /* Fall through = WRONG path */
    li a0, 0xBBBB
    li t2, 0x3FFE0
    sw a0, 0(t2)          /* 写 FAIL 值到 0x3FFE0 */
    li a7, 93
    ecall                  /* 退出 (a0=0xBBBB, scoreboard 看到 FAIL) */

taken:
    /* Branch taken = CORRECT path */
    li a0, 0x5678
    li t2, 0x3FFE0
    sw a0, 0(t2)          /* 覆盖: 写 PASS 值到 0x3FFE0 */
    j .                    /* spin loop → scoreboard 检测 spin = PASS */
