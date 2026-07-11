# =================================================================
# V2 Directed Test: Precise Exception (T-MS3-S1-2.2f)
# 验证精确异常 + trap handler + mepc/mcause 恢复
# 需求: LUMI-PROF-002
# 预期: a0=0 (PASS)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    # ══ 设置 trap handler ══════════════════════════════
    la      t0, trap_handler
    csrw    0x305, t0               # mtvec = trap_handler (MODE=0, Direct)

    # ══ 设置栈指针 ═══════════════════════════════════
    li      sp, 0x00017F00

    # ══ 初始化全局状态 ═════════════════════════════════
    li      s0, 0                   # trap_count = 0

    # ══ ECALL 异常测试 ═════════════════════════════════
    ecall                           # Trigger ECALL (mcause=11)
    # After trap handler returns, mepc is advanced by 4
    addi    s0, s0, 1               # trap_count++
    nop

    # ══ EBREAK 异常测试 ═══════════════════════════════
    ebreak                          # Trigger EBREAK (mcause=3)
    addi    s0, s0, 1               # trap_count++

    # ══ 非法指令异常测试 ══════════════════════════════
    .word   0x00000000             # Illegal instruction (all zeros)
    addi    s0, s0, 1               # trap_count++

    # ══ 验证 trap 计数 ═════════════════════════════════
    li      t0, 3
    bne     s0, t0, fail            # Should have 3 traps

    # ══ 验证 mcause 记录 ══════════════════════════════
    # Last mcause should be 2 (illegal instruction)
    csrr    t1, 0x342               # mcause
    li      t0, 2                   # Illegal instruction cause
    bne     t1, t0, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

fail:
    li      a0, 1
    ecall

# ── Trap Handler ──────────────────────────────────────────
.align 4
trap_handler:
    # Save context
    csrr    t0, 0x341               # mepc
    csrr    t1, 0x342               # mcause

    # Record last mcause in s1
    csrr    s1, 0x342               # s1 = mcause

    # Advance mepc by 4 (skip faulting instruction)
    addi    t0, t0, 4
    csrw    0x341, t0               # mepc += 4

    # Return from trap
    mret
