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
    # 设计: MRET 回到 ebreak+4, 所以 ebreak+4 必须是成功路径
    # ══════════════════════════════════════════════════════════
    la      t0, trap_handler_ebreak
    csrw    mtvec, t0

    j       t1_do_ebreak       # 确保 EBREAK 在新 batch
    nop
t1_do_ebreak:
    ebreak                      # 应触发 trap, mcause=3
    # MRET 回到此处 (mepc+4)
    nop
    j       t1_mcause_verified  # 跳过 handler 代码

    .align 2
trap_handler_ebreak:
    csrr    t1, mcause          # 读取 mcause
    sw      t1, 0(sp)           # sig[0] = mcause value

    # 验证 mcause == 3 (EBREAK)
    li      t2, 3
    beq     t1, t2, t1_handler_ok
    # mcause != 3 → FAIL
    addi    s0, s0, 1
    sw      t1, 4(sp)           # sig[1] = wrong mcause
    j       test_fail
t1_handler_ok:

    # 验证 mepc 指向 ebreak 指令地址
    csrr    t3, mepc
    sw      t3, 8(sp)           # sig[2] = mepc (ebreak 地址)

    # 跳过 ebreak (mepc += 4)
    addi    t3, t3, 4
    csrw    mepc, t3
    mret
    # MRET 回到 t1_do_ebreak+4 (nop), 然后 j t1_mcause_verified

t1_mcause_verified:

    # ══════════════════════════════════════════════════════════
    # Test 2: ECALL from M-mode → mcause == 11
    # ══════════════════════════════════════════════════════════
t2_start:
    la      t0, trap_handler_ecall
    csrw    mtvec, t0

    j       t2_do_ecall        # 确保 ECALL 在新 batch
    nop
t2_do_ecall:
    ecall                       # 应触发 trap, mcause=11
    # MRET 回到此处 (mepc+4)
    nop
    j       t2_after            # 跳过 handler 代码

    .align 2
trap_handler_ecall:
    csrr    t1, mcause
    sw      t1, 12(sp)          # sig[3] = mcause value

    li      t2, 11
    beq     t1, t2, t2_handler_ok
    addi    s0, s0, 1
    sw      t1, 16(sp)          # sig[4] = wrong mcause
    j       test_fail
t2_handler_ok:

    csrr    t3, mepc
    sw      t3, 20(sp)          # sig[5] = mepc (ecall 地址)

    # 跳过 ecall
    addi    t3, t3, 4
    csrw    mepc, t3
    mret
    # MRET 回到 t2_do_ecall+4 (nop), 然后 j t2_after

t2_after:

    # ══════════════════════════════════════════════════════════
    # Test 3: 连续两次 EBREAK (验证 trap flush 不重复提交)
    # ══════════════════════════════════════════════════════════
t3_start:
    la      t0, trap_handler_multi
    csrw    mtvec, t0
    li      s1, 0               # trap counter

    j       t3_do_ebreak1      # 确保 EBREAK 在新 batch
    nop
t3_do_ebreak1:
    ebreak                      # 第 1 次
    nop
t3_do_ebreak2:
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
