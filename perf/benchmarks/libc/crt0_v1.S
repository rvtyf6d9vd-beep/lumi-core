/* crt0_v1.S — V1 Verilator 基准测试启动代码
 *
 * 与 gem5 SE 版 crt0.S 的区别:
 *   - 仅保留一次 ECALL (exit) 用于触发 scoreboard test_done
 *   - 栈大小 64KB (TCM 256KB 内足够)
 *   - SA-11 修复: 设置 mtvec trap handler (halt-and-report 策略)
 *     异常时写失败标记到 0x3FFE0 + 写 mcause/mepc + ECALL 退出
 *     避免 mtvec=0 导致的无限 trap 循环
 *
 * T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真
 */

.section .text.start
.globl _start
.type _start, @function

_start:
    /* Set up global pointer */
    .option push
    .option norelax
    la gp, __global_pointer$
    .option pop

    /* Set up stack pointer (64KB stack in BSS) */
    la sp, __stack_top

    /* Clear BSS section */
    la t0, __bss_start
    la t1, __bss_end
1:  bgeu t0, t1, 2f
    sw zero, 0(t0)
    addi t0, t0, 4
    j 1b
2:

    /* SA-11 修复: 设置 trap handler (BSS clear 之后才能设,避免 trap handler 使用未初始化 BSS) */
    .option push
    .option arch, +zicsr
    la t0, _trap_handler
    csrw mtvec, t0
    .option pop

    /* Call main(argc=0, argv=NULL) */
    li a0, 0
    li a1, 0
    call main

    /* Exit with main's return value — single ECALL for scoreboard detection */
    mv a0, a0
    li a7, 93              /* __NR_exit */
    ecall

    /* Should not reach here */
    j .

.size _start, . - _start

/* ═══════════════════════════════════════════════════════════
 * SA-11: Trap Handler (halt-and-report 策略)
 * 异常时:
 *   1. 写 0xDEAD0001 到 0x3FFE0 (TB 检测, 区别于 0xDEADBEEF 成功标记)
 *   2. 写 mcause 到 0x3FFE4 (调试用)
 *   3. 写 mepc   到 0x3FFE8 (调试用)
 *   4. ECALL 退出 (a0=1=FAIL, scoreboard 检测 test_done)
 *   5. 自旋 (不应到达)
 * ═══════════════════════════════════════════════════════════ */
.section .text
.globl _trap_handler
.type _trap_handler, @function
_trap_handler:
    /* 构造 0x3FFE0 地址 (lui 0x40 + addi -32 = 0x40000 - 32 = 0x3FFE0)
     * 注意: 0xFE0 = 4064 超出 addi 12-bit signed 范围 (-2048~2047)
     *       不能用 lui 0x3F + addi 0xFE0,需用 lui 0x40 + addi -0x20 */
    lui t0, 0x40
    addi t0, t0, -32
    /* 写失败标记 */
    li t1, 0xDEAD0001      /* 非 0xDEADBEEF = 失败标记 */
    sw t1, 0(t0)           /* 0x3FFE0: magic=0xDEAD0001 */
    /* 写 trap 原因 */
    .option push
    .option arch, +zicsr
    csrr t2, mcause
    sw t2, 4(t0)           /* 0x3FFE4: mcause */
    csrr t2, mepc
    sw t2, 8(t0)           /* 0x3FFE8: mepc */
    .option pop
    /* ECALL 退出 (a0=1=FAIL) */
    li a0, 1
    li a7, 93              /* __NR_exit */
    ecall
    /* Should not reach here */
    j .
.size _trap_handler, . - _trap_handler

/* Stack in BSS (64KB, 16-byte aligned) */
.section .bss
.align 4
.globl __stack_bottom
__stack_bottom:
    .space 65536
.globl __stack_top
__stack_top:

/* Weak symbol for global pointer */
.weak __global_pointer$
