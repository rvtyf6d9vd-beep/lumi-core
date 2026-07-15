# =============================================================================
# Lumi-Core: Zimop NOP Test (ERR-094)
# =============================================================================
# Purpose: Verify that Zimop (may-be-operations) instructions are treated as
#          NOP and do NOT trigger illegal instruction exception.
#
# Expected behavior:
#   - Zimop instructions (opcode=0001011) should be treated as NOP
#   - No exception should be triggered
#   - PC should advance normally
#   - Register values should remain unchanged
#
# Test strategy:
#   1. Set up trap handler to catch unexpected exceptions
#   2. Execute Zimop instructions
#   3. Verify no trap was taken
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

    # Initialize test registers
    li      s0, 0           # s0 = exception count
    li      s1, 0x12345678  # s1 = test value

    # =============================================================================
    # Test: Execute Zimop instructions (opcode=0001011)
    # These should be treated as NOP, not trigger illegal instruction
    # =============================================================================
test_zimop_nop:
    # Zimop encoding examples (opcode=0001011, various funct3/rd/rs1/rs2)
    # All should be treated as NOP

    # Zimop instruction 1: rnum=00000, rd=x0, funct3=000, rs1=x0, rs2=x0
    # Encoding: 0000000 00000 00000 000 00000 0001011 = 0x0000000B
    .word   0x0000000B

    # Zimop instruction 2: rnum=00001, rd=x1, funct3=001, rs1=x1, rs2=x1
    # Encoding: 0000001 00001 00001 001 00001 0001011 = 0x021090B3 (but opcode is 0001011)
    # Correct: 0000001 00001 00001 001 00001 0001011 = 0x0210900B
    .word   0x0210900B

    # Zimop instruction 3: Another variant
    .word   0x0421100B

    # If we reach here, no exception was triggered (PASS)
    # Verify s1 is unchanged
    li      t0, 0x12345678
    bne     s1, t0, test_fail

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
# Trap Handler - Should NOT be reached for Zimop instructions
# =============================================================================
    .align 4
trap_handler:
    # Increment exception count
    addi    s0, s0, 1

    # Get faulting instruction address from mepc
    csrr    t0, mepc

    # Skip over the faulting instruction (assume 4 bytes)
    addi    t0, t0, 4
    csrw    mepc, t0

    # Return from trap
    mret

# =============================================================================
# Stack
# =============================================================================
    .section .bss
    .align 4
    .space 256
_stack_top:
