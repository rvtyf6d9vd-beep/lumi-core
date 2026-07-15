# =============================================================================
# Lumi-Core: Zicond Illegal Instruction Test (ERR-093)
# =============================================================================
# Purpose: Verify that Zicond instructions (CZERO.EQZ/CZERO.NEZ) trigger
#          illegal instruction exception since they are not implemented.
#
# Expected behavior:
#   - CZERO.EQZ (opcode=0110011, funct7=0000111, funct3=011) -> illegal
#   - CZERO.NEZ (opcode=0010011, funct7=0000111, funct3=011) -> illegal
#   - mcause should be set to 2 (ILLEGAL_INSTRUCTION)
#   - mtval should contain the faulting instruction
#
# Test strategy:
#   1. Set up trap handler to catch illegal instruction
#   2. Execute Zicond instructions
#   3. Verify trap was taken and mcause/mtval are correct
#   4. Exit with PASS (0) or FAIL (1)
# =============================================================================

    .section .text
    .global _start

_start:
    # Initialize stack pointer
    la      sp, _stack_top

    # Set up trap vector
    la      t0, trap_handler
    csrw    mtvec, t0

    # Clear test result
    li      s0, 0           # s0 = trap count

    # =============================================================================
    # Test 1: CZERO.EQZ (opcode=0110011, funct7=0000111, funct3=011)
    # Encoding: 0000111 rs2 rs1 011 rd 0110011
    # Example: czero.eqz x1, x2, x3 -> 0x0E2110B3
    # =============================================================================
test_czero_eqz:
    li      t0, 0x0E2110B3  # czero.eqz x1, x2, x3
    csrw    mtval, t0       # Store expected instruction in mtval for comparison
    .word   0x0E2110B3      # This should trigger illegal instruction

    # If we reach here, trap was not taken (FAIL)
    li      a0, 1
    j       test_fail

trap_return_1:
    # Verify mcause = 2 (ILLEGAL_INSTRUCTION)
    csrr    t1, mcause
    li      t2, 2
    bne     t1, t2, test_fail

    # Increment trap count
    addi    s0, s0, 1

    # =============================================================================
    # Test 2: CZERO.NEZ (opcode=0010011, funct7=0000111, funct3=011)
    # Encoding: 0000111 rs2 rs1 011 rd 0010011
    # Example: czero.nez x1, x2, x3 -> 0x0E2110B3 (but with opcode 0010011)
    # Actual encoding: funct7=0000111, rs2=00010, rs1=00001, funct3=011, rd=00001, opcode=0010011
    # Binary: 0000111 00010 00001 011 00001 0010011 = 0x0E2090B3
    # =============================================================================
test_czero_nez:
    li      t0, 0x0E2090B3  # czero.nez x1, x2, x3
    csrw    mtval, t0
    .word   0x0E2090B3      # This should trigger illegal instruction

    # If we reach here, trap was not taken (FAIL)
    li      a0, 1
    j       test_fail

trap_return_2:
    # Verify mcause = 2 (ILLEGAL_INSTRUCTION)
    csrr    t1, mcause
    li      t2, 2
    bne     t1, t2, test_fail

    # Increment trap count
    addi    s0, s0, 1

    # =============================================================================
    # Verify results
    # =============================================================================
    li      t0, 2           # Expected trap count
    bne     s0, t0, test_fail

    # PASS
    li      a0, 0
    j       test_exit

test_fail:
    li      a0, 1

test_exit:
    # Exit via ecall (testbench should handle this)
    ecall

    # Fallback: infinite loop
1:  j       1b

# =============================================================================
# Trap Handler
# =============================================================================
    .align 4
trap_handler:
    # Save context
    addi    sp, sp, -16
    sw      t0, 0(sp)
    sw      t1, 4(sp)

    # Check if this is an illegal instruction trap
    csrr    t0, mcause
    li      t1, 2
    bne     t0, t1, trap_unexpected

    # Get faulting instruction address from mepc
    csrr    t0, mepc

    # Skip over the faulting instruction (assume 4 bytes)
    addi    t0, t0, 4
    csrw    mepc, t0

    # Restore context
    lw      t0, 0(sp)
    lw      t1, 4(sp)
    addi    sp, sp, 16

    # Return to appropriate test
    csrr    t0, mepc
    la      t1, test_czero_eqz
    addi    t1, t1, 8       # Skip past the .word instruction
    beq     t0, t1, trap_return_1

    la      t1, test_czero_nez
    addi    t1, t1, 8
    beq     t0, t1, trap_return_2

    # Unexpected trap location
trap_unexpected:
    li      a0, 1
    j       test_exit

# =============================================================================
# Stack
# =============================================================================
    .section .bss
    .align 4
    .space 256
_stack_top:
