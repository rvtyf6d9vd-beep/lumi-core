# =================================================================
# CSR mcause Test — 验证 EBREAK 异常 mcause 值
# Phase 1: 调查 trap handler 中 mcause 读出 0 (应为 3=EBREAK)
# Pass: a0=0 ECALL | Fail: a0=1 ECALL (sig 区记录实际 mcause 值)
# Compile: riscv64-unknown-elf-gcc -march=rv32im_zicsr -mabi=ilp32 -nostdlib
# =================================================================

.section .text.init
.globl _start

_start:
    li      sp, 0x800           # signature base
    li      s0, 0               # fail counter

    # ══════════════════════════════════════════════════════════
    # Test 1: EBREAK → mcause == 3
    # ══════════════════════════════════════════════════════════
    la      t0, trap_handler_ebreak
    csrw    mtvec, t0

    ebreak                      # 应触发 trap, mcause=3

    # 不应到达此处 (ebreak 触发异常后跳到 trap_handler_ebreak)
    j       test_fail

    .align 2
trap_handler_ebreak:
    csrr    t1, mcause          # 读取 mcause
    sw      t1, 0(sp)           # sig[0] = mcause value

    # 验证 mcause == 3 (EBREAK)
    li      t2, 3
    beq     t1, t2, t1_mcause_ok
    # mcause != 3 → FAIL
    addi    s0, s0, 1
    sw      t1, 4(sp)           # sig[1] = wrong mcause
    j       test_fail
t1_mcause_ok:

    # 验证 mepc 指向 ebreak 指令地址
    csrr    t3, mepc
    sw      t3, 8(sp)           # sig[2] = mepc (ebreak 地址)

    # 跳过 ebreak (mepc += 4)
    addi    t3, t3, 4
    csrw    mepc, t3
    mret

    # ══════════════════════════════════════════════════════════
    # Test 2: ECALL from M-mode → mcause == 11
    # ══════════════════════════════════════════════════════════
t2_start:
    la      t0, trap_handler_ecall
    csrw    mtvec, t0

    ecall                       # 应触发 trap, mcause=11

    # trap_handler_ecall 通过 MRET 回到此处
    j       test_fail           # 不应到达 (handler 直接跳到 t2_after)

    .align 2
trap_handler_ecall:
    csrr    t1, mcause
    sw      t1, 12(sp)          # sig[3] = mcause value

    li      t2, 11
    beq     t1, t2, t2_mcause_ok
    addi    s0, s0, 1
    sw      t1, 16(sp)          # sig[4] = wrong mcause
    j       test_fail
t2_mcause_ok:

    csrr    t3, mepc
    sw      t3, 20(sp)          # sig[5] = mepc (ecall 地址)

    # 跳过 ecall，直接跳到 t2_after
    la      t3, t2_after
    csrw    mepc, t3
    mret

t2_after:

    # ══════════════════════════════════════════════════════════
    # Test 3: 连续两次 EBREAK (验证 trap flush 不重复提交)
    # ══════════════════════════════════════════════════════════
t3_start:
    la      t0, trap_handler_multi
    csrw    mtvec, t0
    li      s1, 0               # trap counter

    ebreak                      # 第 1 次
    ebreak                      # 第 2 次

    # trap_handler_multi 通过 MRET 回到此处
    # s1 应等于 2 (两次 trap)
    li      t0, 2
    beq     s1, t0, t3_count_ok
    addi    s0, s0, 1
    sw      s1, 24(sp)          # sig[6] = trap count
    j       test_fail
t3_count_ok:

    # ══════════════════════════════════════════════════════════
    # All tests passed!
    # ══════════════════════════════════════════════════════════
    li      t0, 0x55AA
    sw      t0, 28(sp)          # PASS marker

    li      a0, 0
    ecall

test_fail:
    sw      s0, 32(sp)          # total fail count
    li      a0, 1
    ecall

    # ── Multi-EBREAK Trap Handler ──
    .align 2
trap_handler_multi:
    addi    s1, s1, 1           # 计数 trap 次数
    csrr    t3, mepc
    addi    t3, t3, 4           # 跳过当前 ebreak
    csrw    mepc, t3
    mret
