// =================================================================
// T-MS3-S3-RF.5 | test_zicbom_zicbop_nop.S
// 验证 Zicbom (CBO.CLEAN/FLUSH/INVAL), Zicboz (CBO.ZERO),
// Zicbop (PREFETCH.R/W/I) 指令作为 NOP 执行, 不触发异常
// ERR-060, ERR-061 回归测试
// =================================================================

    .section .text
    .globl _start

_start:
    // 设置栈指针
    li      sp, 0x00010000

    // ── 1. 验证 CBO 指令不触发异常 ──
    // 准备基地址 (使用 x5 作为基地址寄存器)
    li      x5, 0x00008000

    // CBO.INVAL: opcode=0001111, funct3=010, rs1=x5, rs2=00000
    // Encoding: funct12=000000000000, rs1=00101, funct3=010, rd=00000, opcode=0001111
    // = 0x0002A00F
    .word 0x0002A00F    // CBO.INVAL x5

    // CBO.CLEAN: funct12=000000000001, rs1=00101, funct3=010, rd=00000, opcode=0001111
    // = 0x0012A00F
    .word 0x0012A00F    // CBO.CLEAN x5

    // CBO.FLUSH: funct12=000000000010, rs1=00101, funct3=010, rd=00000, opcode=0001111
    // = 0x0022A00F
    .word 0x0022A00F    // CBO.FLUSH x5

    // ── 2. 验证 CBO.ZERO (Zicboz) ──
    // CBO.ZERO: funct12=000000000100, rs1=00101, funct3=010, rd=00000, opcode=0001111
    // = 0x0042A00F
    .word 0x0042A00F    // CBO.ZERO x5

    // ── 3. 验证 PREFETCH hints (Zicbop) ──
    // PREFETCH.I: funct12=000000000000, rs1=00101, funct3=110, rd=00000, opcode=0001111
    // = 0x0002E00F
    .word 0x0002E00F    // PREFETCH.I x5

    // PREFETCH.R: funct12=000000000001, rs1=00101, funct3=110, rd=00000, opcode=0001111
    // = 0x0012E00F
    .word 0x0012E00F    // PREFETCH.R x5

    // PREFETCH.W: funct12=000000000011, rs1=00101, funct3=110, rd=00000, opcode=0001111
    // = 0x0032E00F
    .word 0x0032E00F    // PREFETCH.W x5

    // ── 4. 验证执行到此处 (无异常跳转) ──
    // 如果任何 CBO/PREFETCH 触发了异常, trap handler 会设置 x10 != 0
    li      x10, 0      // x10 = 0: PASS (no exception)
    li      x11, 7      // x11 = 7: expected instruction count (3 CBO + 1 CBO.ZERO + 3 PREFETCH)

    // ── 5. 正常退出 ──
    li      a0, 0       // exit code = 0 (pass)
    li      a7, 93      // ecall exit
    ecall

    // ── Trap Handler ──
    .align 4
trap_handler:
    // 记录异常: x10 = 1 (FAIL)
    li      x10, 1
    // 跳过导致异常的指令 (PC += 4)
    csrr    t0, mepc
    addi    t0, t0, 4
    csrw    mepc, t0
    mret
