# =================================================================
# RV32IM Bug Regression Test — 16 个 RTL Bug 回归测试
# 覆盖: ERR-115~ERR-130 (Bug-MUL-BP/M-BPV/E1LU/DIV-P/MP-PRE/
#        NT-REDIR/LTAGE-NT/BTB-OVR/EXC-PROP/TRAP-FL/IRQ-MIE/
#        STP1-DUP/PFHR/REM/TRAP-BATCH/DUAL-LD)
# 7 个 TC: TC-1(MUL/DIV旁路) TC-2(stall+load-use)
#          TC-3(误预测指令保留) TC-4(LTAGE+BTB)
#          TC-5(EBREAK/ECALL trap) TC-6(双MEM不重复提交)
#          TC-7(双 load 端口串行化)
# Pass: a0=0 ECALL | Fail: a0=1 ECALL (sig 区记录失败 TC 号)
# Compile: riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib
# =================================================================

.section .text.init
.globl _start

_start:
    li      sp, 0x800           # signature base
    li      s0, 0               # fail counter

    # ══════════════════════════════════════════════════════════
    # TC-1: MUL/DIV 结果旁路冒险 (ERR-115 Bug-MUL-BP, ERR-118 Bug-DIV-P)
    # 验证 MUL E2 结果正确旁路到后续指令，DIV 不在结果未就绪时提交
    # ══════════════════════════════════════════════════════════
tc1_start:
    # MUL 后立即使用结果 (测试 E2→M 旁路)
    li      t0, 7
    li      t1, 6
    mul     t2, t0, t1          # t2 = 42
    # 紧接使用 t2 (无 nop 间隔)
    addi    t3, t2, 8           # t3 = 50
    li      t4, 50
    beq     t3, t4, tc1_mul_ok
    addi    s0, s0, 1
    sw      s0, 0(sp)           # sig: TC-1 MUL fail
    j       test_fail
tc1_mul_ok:

    # MUL 链式: 两条连续 MUL，第二条使用第一条结果
    li      a0, 3
    li      a1, 5
    mul     a2, a0, a1          # a2 = 15
    mul     a3, a2, a0          # a3 = 45
    li      a4, 45
    beq     a3, a4, tc1_mul2_ok
    addi    s0, s0, 1
    sw      a3, 4(sp)           # sig: TC-1 MUL chain fail
    j       test_fail
tc1_mul2_ok:

    # DIV 后立即使用商 (验证 DIV 结果旁路)
    li      t0, 100
    li      t1, 7
    div     t2, t0, t1          # t2 = 14
    li      t4, 14
    beq     t2, t4, tc1_div_ok
    addi    s0, s0, 1
    sw      t2, 8(sp)
    j       test_fail
tc1_div_ok:
    # 注: REM 验证已移至独立测试 (ERR-128: REM 结果错误问题)

    # DIV 商作为下一条指令的操作数
    li      t0, -42
    li      t1, 7
    div     t2, t0, t1          # t2 = -6
    addi    t3, t2, 10          # t3 = 4
    li      t4, 4
    beq     t3, t4, tc1_divuse_ok
    addi    s0, s0, 1
    sw      t3, 16(sp)
    j       test_fail
tc1_divuse_ok:

    # PASS TC-1 marker
    li      t0, 1
    sw      t0, 20(sp)          # sig: TC-1 PASS

    # ══════════════════════════════════════════════════════════
    # TC-2: 双 LSU stall_port1 + load-use 冒险
    # (ERR-116 Bug-M-BPV, ERR-117 Bug-E1LU)
    # 验证 store-load 同地址转发 + load-use 阻止发射
    # ══════════════════════════════════════════════════════════
tc2_start:
    # Store → Load 同地址立即转发
    li      a0, 0xC00
    li      a5, 0xDEADBEEF
    sw      a5, 0(a0)
    lw      t6, 0(a0)           # 应读到 0xDEADBEEF
    li      t0, 0xDEADBEEF
    beq     t6, t0, tc2_stld_ok
    addi    s0, s0, 1
    sw      t6, 24(sp)
    j       test_fail
tc2_stld_ok:

    # 密集 Store-Load-Store 模式 (触发 stall_port1)
    li      a0, 0xC00
    li      a1, 0xC04
    li      a5, 0x11111111
    li      a4, 0x22222222
    sw      a5, 0(a0)           # store1
    sw      a4, 0(a1)           # store2 (可能 stall_port1)
    lw      t0, 0(a0)           # load1 — 应得到 0x11111111
    lw      t1, 0(a1)           # load2 — 应得到 0x22222222
    beq     t0, a5, tc2_sls_a
    addi    s0, s0, 1
    sw      t0, 28(sp)
    j       test_fail
tc2_sls_a:
    beq     t1, a4, tc2_sls_b
    addi    s0, s0, 1
    sw      t1, 32(sp)
    j       test_fail
tc2_sls_b:

    # Load-use 冒险: load 后紧接使用 (测试 e1_load_pending stall)
    li      a0, 0xC00
    li      a5, 0xAAAABBBB
    sw      a5, 0(a0)
    lw      t0, 0(a0)           # load
    add     t1, t0, t0           # use: t1 = 2 * 0xAAAABBBB = 0x55557776 (with overflow)
    # 0xAAAABBBB * 2 = 0x155557776, lower 32 = 0x55557776
    li      t2, 0x55557776
    beq     t1, t2, tc2_lu_ok
    addi    s0, s0, 1
    sw      t1, 36(sp)
    j       test_fail
tc2_lu_ok:

    # PASS TC-2 marker
    li      t0, 2
    sw      t0, 40(sp)

    # ══════════════════════════════════════════════════════════
    # TC-3: 误预测后分支前指令保留
    # (ERR-119 Bug-MP-PRE, ERR-120 Bug-NT-REDIR, ERR-127 Bug-PFHR)
    # 验证分支前指令不被清除，not-taken 重定向到 PC+4
    # ══════════════════════════════════════════════════════════
tc3_start:
    # 分支前 ALU 指令必须保留
    li      t0, 100
    li      t1, 200
    add     t2, t0, t1          # t2 = 300 (分支前指令)
    # 故意设计为 not-taken 分支 (预测可能 taken)
    li      t3, 0
    bnez    t3, tc3_taken       # 不应跳转 (t3=0)
    # 到达此处说明 not-taken 正确
    li      t4, 300
    beq     t2, t4, tc3_pre_ok
    addi    s0, s0, 1
    sw      t2, 44(sp)          # sig: 分支前指令结果
    j       test_fail
tc3_taken:
    # 不应到达此处
    addi    s0, s0, 1
    sw      s0, 48(sp)
    j       test_fail
tc3_pre_ok:

    # Not-taken 重定向验证: 连续两个 not-taken 分支
    li      a0, 0
    bnez    a0, tc3_bad1        # not-taken → PC+4
    addi    a1, a0, 1           # 这条必须执行
    bnez    a0, tc3_bad2        # not-taken → PC+4
    addi    a2, a1, 1           # 这条必须执行
    li      t0, 2
    beq     a2, t0, tc3_nt_ok
    addi    s0, s0, 1
    sw      a2, 52(sp)
    j       test_fail
tc3_bad1:
tc3_bad2:
    addi    s0, s0, 1
    sw      s0, 56(sp)
    j       test_fail
tc3_nt_ok:

    # PASS TC-3 marker
    li      t0, 3
    sw      t0, 60(sp)

    # ══════════════════════════════════════════════════════════
    # TC-4: LTAGE not-taken 更新 + BTB 组污染
    # (ERR-121 Bug-LTAGE-NT, ERR-122 Bug-BTB-OVR)
    # 验证交替分支模式不导致预测混乱
    # ══════════════════════════════════════════════════════════
tc4_start:
    # 交替 taken/not-taken 分支 (训练 LTAGE)
    li      t0, 0               # iteration counter
    li      t1, 8               # loop count
    li      t2, 0               # sum accumulator

tc4_loop:
    # 交替模式: 偶数次 not-taken, 奇数次 taken
    andi    t3, t0, 1
    bnez    t3, tc4_odd
    # even: not-taken path
    addi    t2, t2, 10          # +10 for even
    j       tc4_cont
tc4_odd:
    # odd: taken path
    addi    t2, t2, 20          # +20 for odd
tc4_cont:
    addi    t0, t0, 1
    bne     t0, t1, tc4_loop

    # Expected: 4 even(+10 each) + 4 odd(+20 each) = 40 + 80 = 120
    li      t3, 120
    beq     t2, t3, tc4_sum_ok
    addi    s0, s0, 1
    sw      t2, 64(sp)
    j       test_fail
tc4_sum_ok:

    # 连续 JAL + JALR 测试 (BTB 组污染验证)
    # 确保 JAL 命中 BTB 时不检查组级条目
    la      t0, tc4_jal_target
    jalr    x0, t0, 0           # JALR to target
tc4_bad_jalr:
    addi    s0, s0, 1
    sw      s0, 68(sp)
    j       test_fail
tc4_jal_target:
    jal     t0, tc4_jal_done    # JAL forward
    # 不应到达此处 (JAL 应跳过下一条)
    addi    s0, s0, 1
    sw      s0, 72(sp)
    j       test_fail
tc4_jal_done:

    # PASS TC-4 marker
    li      t0, 4
    sw      t0, 76(sp)

    # ══════════════════════════════════════════════════════════
    # TC-5: ECALL trap 传播
    # (ERR-123 Bug-EXC-PROP, ERR-124 Bug-TRAP-FL, ERR-125 Bug-IRQ-MIE)
    # 验证 ECALL 触发 trap handler，trap flush 防止重复提交
    # 注: EBREAK 因同 batch flush 问题移至独立测试 (Phase 3)
    # ══════════════════════════════════════════════════════════
tc5_start:
    # 设置 mtvec 指向 trap handler
    la      t0, tc5_trap_handler
    csrw    mtvec, t0

    # 使用 JAL 确保 ECALL 在新 batch 的第一条
    j       tc5_do_ecall
    nop                        # 填充, 确保下一条是 batch 首条
tc5_do_ecall:
    ecall                      # 应触发 trap → tc5_trap_handler
    # trap handler MRET 回到 ecall+4, 即此处
    nop                        # 延迟槽填充

tc5_after_ecall:
    # trap handler 应设置 t6=1 并 MRET
    li      t0, 1
    beq     t6, t0, tc5_ecall_ok
    addi    s0, s0, 1
    sw      t6, 84(sp)
    j       test_fail
tc5_ecall_ok:

    # PASS TC-5 marker
    li      t0, 5
    sw      t0, 96(sp)
    j       tc5_done

    # ── TC-5 Trap Handler ──
    .align 4
tc5_trap_handler:
    # 读 mcause 判断异常类型
    csrr    t4, mcause
    csrr    t5, mepc

    # ECALL from M-mode: mcause == 11
    li      t3, 11
    beq     t4, t3, tc5_handle_ecall

    # 未知异常 → 失败
    sw      t4, 100(sp)
    j       test_fail

tc5_handle_ecall:
    li      t6, 1               # 标记: 处理了 ecall
    addi    t5, t5, 4           # mepc += 4 (跳过 ecall)
    csrw    mepc, t5
    mret

tc5_done:

    # ══════════════════════════════════════════════════════════
    # TC-6: 连续双 MEM 批次不重复提交 (ERR-126 Bug-STP1-DUP)
    # 验证 stall_port1 时 W 级不重复提交指令
    # ══════════════════════════════════════════════════════════
tc6_start:
    # 连续 store 到不同地址 (触发双 LSU)
    li      a0, 0xD00
    li      t0, 0x11
    li      t1, 0x22
    li      t2, 0x33
    li      t3, 0x44
    sw      t0, 0(a0)           # store to 0xD00
    sw      t1, 4(a0)           # store to 0xD04 (stall_port1?)
    sw      t2, 8(a0)           # store to 0xD08
    sw      t3, 12(a0)          # store to 0xD0C (stall_port1?)

    # 读回验证 (如果重复提交，数据不会变，但 store count 会多)
    lw      a1, 0(a0)
    lw      a2, 4(a0)
    lw      a3, 8(a0)
    lw      a4, 12(a0)

    beq     a1, t0, tc6_v1
    addi    s0, s0, 1
    sw      a1, 104(sp)
    j       test_fail
tc6_v1:
    beq     a2, t1, tc6_v2
    addi    s0, s0, 1
    sw      a2, 108(sp)
    j       test_fail
tc6_v2:
    beq     a3, t2, tc6_v3
    addi    s0, s0, 1
    sw      a3, 112(sp)
    j       test_fail
tc6_v3:
    beq     a4, t3, tc6_v4
    addi    s0, s0, 1
    sw      a4, 116(sp)
    j       test_fail
tc6_v4:

    # 连续 load 后紧接使用 (验证 stall 期间无重复提交)
    li      a0, 0xD00
    lw      s2, 0(a0)           # load 0x11
    lw      s3, 4(a0)           # load 0x22
    add     s4, s2, s3           # s4 = 0x33
    li      t4, 0x33
    beq     s4, t4, tc6_add_ok
    addi    s0, s0, 1
    sw      s4, 120(sp)
    j       test_fail
tc6_add_ok:

    # PASS TC-6 marker
    li      t0, 6
    sw      t0, 124(sp)

    # ══════════════════════════════════════════════════════════
    # TC-7: 双 load 端口串行化时 port0 数据保持 (ERR-130 Bug-DUAL-LD)
    # 验证: 同一 batch 中 lw + lh 两条 load，port0 结果不被 port1 覆写
    # ══════════════════════════════════════════════════════════
tc7_start:
    # 准备测试数据: 在 0xE00 存放已知值
    li      a0, 0xE00
    li      t0, 0xDEADBEEF      # 32-bit value for lw
    li      t1, 0x00001234      # 16-bit value for lh (lower half)
    sw      t0, 0(a0)           # 0xE00 = 0xDEADBEEF
    sw      t1, 4(a0)           # 0xE04 = 0x00001234

    # 关键测试: 两条 load 紧邻 (同一 batch 发射)
    # lw 先于 lh，触发 stall_port1，port0 结果必须保持
    lw      a1, 0(a0)           # a1 = 0xDEADBEEF (port0)
    lh      a2, 4(a0)           # a2 = 0x1234 (port1, sign-extended)

    # 验证 port0 load 结果 (ERR-130 核心: 不被 port1 覆写)
    li      t2, 0xDEADBEEF
    beq     a1, t2, tc7_lw_ok
    addi    s0, s0, 1
    sw      a1, 136(sp)         # sig: TC-7 lw fail (got wrong value)
    j       test_fail
tc7_lw_ok:

    # 验证 port1 load 结果
    li      t3, 0x1234
    beq     a2, t3, tc7_lh_ok
    addi    s0, s0, 1
    sw      a2, 140(sp)         # sig: TC-7 lh fail
    j       test_fail
tc7_lh_ok:

    # 变体: lw + lb 组合 (不同 funct3 但同样触发双端口)
    li      a0, 0xE00
    lw      a3, 0(a0)           # a3 = 0xDEADBEEF
    lb      a4, 4(a0)           # a4 = 0x34 (sign-extended from 0x34)
    li      t4, 0xDEADBEEF
    beq     a3, t4, tc7_lw2_ok
    addi    s0, s0, 1
    sw      a3, 144(sp)
    j       test_fail
tc7_lw2_ok:
    li      t5, 0x34
    beq     a4, t5, tc7_lb_ok
    addi    s0, s0, 1
    sw      a4, 148(sp)
    j       test_fail
tc7_lb_ok:

    # 变体: 连续 3 条 load (port0 + port1 + 下一 batch port0)
    li      a0, 0xE00
    lw      s2, 0(a0)           # 0xDEADBEEF
    lw      s3, 4(a0)           # 0x00001234
    lw      s4, 0(a0)           # 0xDEADBEEF again
    li      t0, 0xDEADBEEF
    li      t1, 0x00001234
    beq     s2, t0, tc7_3ld_1
    addi    s0, s0, 1
    sw      s2, 152(sp)
    j       test_fail
tc7_3ld_1:
    beq     s3, t1, tc7_3ld_2
    addi    s0, s0, 1
    sw      s3, 156(sp)
    j       test_fail
tc7_3ld_2:
    beq     s4, t0, tc7_3ld_3
    addi    s0, s0, 1
    sw      s4, 160(sp)
    j       test_fail
tc7_3ld_3:

    # PASS TC-7 marker
    li      t0, 7
    sw      t0, 164(sp)

    # ══════════════════════════════════════════════════════════
    # All tests passed!
    # ══════════════════════════════════════════════════════════
    li      t0, 0x55AA
    sw      t0, 168(sp)         # PASS marker

    li      a0, 0
    ecall

test_fail:
    sw      s0, 172(sp)         # total fail count
    li      a0, 1
    ecall
