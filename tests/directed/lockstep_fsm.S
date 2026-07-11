# =================================================================
# V4 Directed Test: Lockstep FSM State Transition (T-MS3-S1-2.4a+)
# 验证 Lockstep 比较器 FSM 状态转换行为
# 需求: LUMI-MCORE-002, LUMI-SAFE-002, D-011
# 预期: a0=0 (PASS)
# =================================================================
# RTL 参考: lumi_lockstep.sv
#   FSM: ST_IDLE → ST_COMPARE → ST_MISMATCH → ST_RECOVER
#   lockstep_enable 控制 ST_IDLE ↔ ST_COMPARE
#   any_mismatch 触发 ST_COMPARE → ST_MISMATCH → ST_RECOVER
#   lockstep_error_mode: 00=NMI, 01=Reset, 10=Log
#   error_code[0]=valid_mismatch, [1]=pc_mismatch, [2]=result_mismatch
# =================================================================
# 说明: 软件无法直接驱动 lockstep 硬件信号，本测试通过确定性指令流
# 验证双核在相同输入下产生相同输出的确定性行为 (lockstep 前提)。
# 同时验证错误恢复路径: CSR 写入 → 异常处理 → 正常继续。
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    csrr    t0, 0xF14               # mhartid
    beq     t0, zero, hart0_main
    j       hart1_main

# ══════════════════════════════════════════════════════════════
# Hart 0: 确定性指令流 + 异常恢复验证
# ══════════════════════════════════════════════════════════════
hart0_main:
    li      sp, 0x00017F00

    # ─── 测试 1: 确定性 ALU 序列 ─────────────────────────────
    # 双核执行相同指令流，lockstep 比较器应无 mismatch
    li      t0, 0
    li      t1, 0x12345678
    li      t2, 0x9ABCDEF0

    # 序列 A: 算术运算链 (确定性)
    add     t3, t1, t2              # t3 = 0x12345678 + 0x9ABCDEF0 = 0xACF13568
    sub     t4, t3, t1              # t4 = 0xACF13568 - 0x12345678 = 0x9ABCDEF0
    xor     t5, t1, t2              # t5 = 0x12345678 ^ 0x9ABCDEF0 = 0x88888888
    and     t6, t1, t2              # t6 = 0x12345678 & 0x9ABCDEF0 = 0x12345670

    # 验证结果 (确保指令执行正确)
    li      s0, 0xACF13568
    bne     t3, s0, fail
    li      s0, 0x9ABCDEF0
    bne     t4, s0, fail
    li      s0, 0x88888888
    bne     t5, s0, fail
    li      s0, 0x12345670
    bne     t6, s0, fail

    # ─── 测试 2: 确定性内存访问序列 ───────────────────────────
    # 双核访问各自 DTCM，相同地址/数据 → lockstep 匹配
    li      t0, 0x00014000         # DTCM0 base (Hart 0 local)

    li      t1, 0xAAAA5555
    sw      t1, 0(t0)
    li      t1, 0x5555AAAA
    sw      t1, 4(t0)
    fence

    lw      t2, 0(t0)
    li      s0, 0xAAAA5555
    bne     t2, s0, fail

    lw      t2, 4(t0)
    li      s0, 0x5555AAAA
    bne     t2, s0, fail

    # ─── 测试 3: 异常处理恢复路径 ─────────────────────────────
    # 模拟 ST_MISMATCH → ST_RECOVER: 通过 ECALL trap 验证
    # 异常处理后指令流仍能正常继续 (lockstep re-sync)
    la      t0, trap_handler
    csrw    0x305, t0               # mtvec = trap_handler
    csrw    0x304, zero             # mie = 0 (禁用中断)

    # 触发 ECALL (environment call from M-mode)
    ecall                           # → trap_handler

    # trap_handler 应通过 mepc+4 返回到此处
    j       test4_csr

trap_handler:
    # 读取 mepc，加 4 跳过 ecall 指令
    csrr    t0, 0x341               # mepc
    addi    t0, t0, 4
    csrw    0x341, t0               # mepc += 4
    mret

    # ─── 测试 4: CSR 确定性读写 ────────────────────────────────
test4_csr:
    # CSR 操作序列 — lockstep 比较器需匹配 CSR 结果
    li      t0, 0x00001888         # mstatus.MIE=1, MPIE=1
    csrw    0x300, t0               # mstatus
    csrr    t1, 0x300               # read back
    li      t2, 0x1888              # mask = MIE+MPIE
    and     t1, t1, t2              # mask relevant bits
    li      s0, 0x00001888
    bne     t1, s0, fail

    # mscratch 读写
    li      t0, 0xDEADC0DE
    csrw    0x340, t0               # mscratch
    csrr    t1, 0x340
    li      s0, 0xDEADC0DE
    bne     t1, s0, fail

    # ─── 测试 5: 分支确定性 ────────────────────────────────────
    # 分支预测对 lockstep 透明 — 两核必须最终 commit 一致
    li      t0, 10
    li      t1, 0
branch_loop:
    addi    t1, t1, 1
    addi    t0, t0, -1
    bnez    t0, branch_loop

    li      s0, 10
    bne     t1, s0, fail            # 循环计数必须精确

    # ─── 通知 Hart 1 完成 ──────────────────────────────────────
    li      t0, 0x00014100
    li      t1, 0xA5A5A5A5
    sw      t1, 0(t0)              # done flag
    fence

    # ══ PASS ════════════════════════════════════════════════════
    li      a0, 0
    ecall

# ══════════════════════════════════════════════════════════════
# Hart 1: 执行相同确定性序列 (lockstep 对比端)
# ══════════════════════════════════════════════════════════════
hart1_main:
    li      sp, 0x00027F00

    # 相同 ALU 序列
    li      t1, 0x12345678
    li      t2, 0x9ABCDEF0
    add     t3, t1, t2
    sub     t4, t3, t1
    xor     t5, t1, t2
    and     t6, t1, t2

    # 相同内存访问 (Hart 1 DTCM1)
    li      t0, 0x00024000         # DTCM1 base
    li      t1, 0xAAAA5555
    sw      t1, 0(t0)
    li      t1, 0x5555AAAA
    sw      t1, 4(t0)
    fence

    # 等待 Hart 0 完成
    li      t0, 0x00014100
wait_done:
    lw      t1, 0(t0)
    li      s0, 0xA5A5A5A5
    bne     t1, s0, wait_done

    # Hart 1 进入低功耗等待
hart1_halt:
    wfi
    j       hart1_halt

fail:
    li      a0, 1
    ecall
