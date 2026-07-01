# Zicond / CMO Extension Test Suite for gem5
# Pure assembly test - no libc required
# Compile: riscv64-unknown-elf-gcc -march=rv64imac_zicond_zicbom_zicbop_zicboz -mabi=lp64 -nostdlib -o test_zicond_cmo test_zicond_cmo.s

.section .text
.globl _start

_start:
    li      s0, 0           # pass count
    li      s1, 0           # fail count

    # ===== Zicond: Conditional Operations =====
    
    # czero.eqz: rd = (rs2 == 0) ? 0 : rs1
    li      a0, 0x12345678
    li      a1, 0           # rs2 = 0
    czero.eqz a2, a0, a1
    li      a3, 0           # expected: 0 (because rs2 == 0)
    bne     a2, a3, fail_czero_eqz_1
    addi    s0, s0, 1
    j       pass_czero_eqz_1
fail_czero_eqz_1:
    addi    s1, s1, 1
pass_czero_eqz_1:

    li      a0, 0x12345678
    li      a1, 1           # rs2 != 0
    czero.eqz a2, a0, a1
    li      a3, 0x12345678  # expected: rs1 (because rs2 != 0)
    bne     a2, a3, fail_czero_eqz_2
    addi    s0, s0, 1
    j       pass_czero_eqz_2
fail_czero_eqz_2:
    addi    s1, s1, 1
pass_czero_eqz_2:

    # czero.nez: rd = (rs2 != 0) ? 0 : rs1
    li      a0, 0xABCDEF01
    li      a1, 5           # rs2 != 0
    czero.nez a2, a0, a1
    li      a3, 0           # expected: 0 (because rs2 != 0)
    bne     a2, a3, fail_czero_nez_1
    addi    s0, s0, 1
    j       pass_czero_nez_1
fail_czero_nez_1:
    addi    s1, s1, 1
pass_czero_nez_1:

    li      a0, 0xABCDEF01
    li      a1, 0           # rs2 == 0
    czero.nez a2, a0, a1
    li      a3, 0xABCDEF01  # expected: rs1 (because rs2 == 0)
    bne     a2, a3, fail_czero_nez_2
    addi    s0, s0, 1
    j       pass_czero_nez_2
fail_czero_nez_2:
    addi    s1, s1, 1
pass_czero_nez_2:

    # ===== CMO: Cache Management Operations =====
    # Note: In SE mode, CMO instructions may be NOPs or have limited effect
    # We test that they don't cause illegal instruction exceptions
    
    # cbo.inval: cache block invalidate
    li      a0, 0x1000      # some address
    .insn i 0x0F, 0x2, x0, a0, 0x00  # cbo.inval
    addi    s0, s0, 1       # if we get here, instruction executed
    
    # cbo.clean: cache block clean
    li      a0, 0x1000
    .insn i 0x0F, 0x2, x0, a0, 0x01  # cbo.clean
    addi    s0, s0, 1
    
    # cbo.flush: cache block flush
    li      a0, 0x1000
    .insn i 0x0F, 0x2, x0, a0, 0x02  # cbo.flush
    addi    s0, s0, 1
    
    # cbo.zero: cache block zero
    li      a0, 0x1000
    .insn i 0x0F, 0x2, x0, a0, 0x04  # cbo.zero
    addi    s0, s0, 1
    
    # prefetch.r: prefetch for read
    li      a0, 0x1000
    .insn i 0x0F, 0x6, x0, a0, 0x01  # prefetch.r
    addi    s0, s0, 1
    
    # prefetch.w: prefetch for write
    li      a0, 0x1000
    .insn i 0x0F, 0x6, x0, a0, 0x03  # prefetch.w
    addi    s0, s0, 1
    
    # prefetch.i: prefetch for instruction
    li      a0, 0x1000
    .insn i 0x0F, 0x6, x0, a0, 0x00  # prefetch.i
    addi    s0, s0, 1

    # ===== Exit with results =====
    li      a7, 93
    mv      a0, s1          # exit code = fail count
    ecall
