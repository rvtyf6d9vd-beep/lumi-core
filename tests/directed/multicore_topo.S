# =================================================================
# V4 Directed Test: Multicore Topology (T-MS3-S1-2.4a)
# 验证 Hart ID + 多核间通信 + Round-Robin 仲裁
# 需求: LUMI-MCORE-001
# 预期: a0=0 (PASS, Hart 0 视角)
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    csrr    t0, 0xF14               # mhartid
    beqz    t0, hart0_main

    # ══ Hart 1~3: Worker ══════════════════════════════
    j       hart_worker

hart0_main:
    li      sp, 0x00017F00

    # ══ Hart 0: 拓扑验证 ══════════════════════════════
    # 共享内存 (DTCM0) 用于核间通信
    li      s0, 0x00014000         # shared_mem base

    # 清除共享内存
    li      t0, 0
    sw      t0, 0(s0)               # slot 0: Hart 1 ack
    sw      t0, 4(s0)               # slot 1: Hart 1 hart_id
    sw      t0, 8(s0)               # slot 2: task done flag
    fence

    # ── 测试 1: mhartid CSR 可读性 ──
    csrr    t0, 0xF14
    bnez    t0, fail                # Hart 0 must have ID=0

    # ── 测试 2: 写任务描述到共享内存 ──
    li      t0, 0x00014100         # task descriptor
    li      t1, 42                  # task value
    sw      t1, 0(t0)               # task_data = 42
    li      t1, 1
    sw      t1, 4(t0)               # task_ready = 1
    fence

    # 等待 Hart 1 完成
wait_worker:
    lw      t1, 0(s0)              # Hart 1 ack
    beqz    t1, wait_worker

    # 验证 Hart 1 的 hart_id
    lw      t1, 4(s0)              # Hart 1 reported ID
    li      t2, 1
    bne     t1, t2, fail

    # 验证 Hart 1 的计算结果
    lw      t1, 8(s0)              # Hart 1 result
    li      t2, 84                  # 42 * 2 = 84
    bne     t1, t2, fail

    # ── 测试 3: Round-Robin 仲裁验证 ──
    # 连续发起多个内存请求, 验证仲裁公平性
    li      t0, 0x00014200
    li      t1, 0xAA
    sw      t1, 0(t0)               # req 1
    sw      t1, 4(t0)               # req 2
    sw      t1, 8(t0)               # req 3
    sw      t1, 12(t0)              # req 4
    fence

    # 读回验证
    lw      t2, 0(t0)
    bne     t1, t2, fail
    lw      t2, 12(t0)
    bne     t1, t2, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

hart_worker:
    # Hart 1+ worker
    li      sp, 0x00027F00

    # 读取自己的 hart_id
    csrr    t0, 0xF14
    mv      s1, t0                  # save hart_id

    # 等待任务
    li      t0, 0x00014100         # task descriptor
wait_task:
    lw      t1, 4(t0)              # task_ready
    beqz    t1, wait_task

    # 读取任务数据
    lw      t2, 0(t0)              # task_data = 42

    # 执行计算 (乘以 2)
    slli    t3, t2, 1              # result = task_data * 2

    # 写回结果
    li      t0, 0x00014000         # shared_mem
    fence
    sw      s1, 4(t0)              # report hart_id
    sw      t3, 8(t0)              # report result
    li      t1, 1
    sw      t1, 0(t0)              # ack

    # Worker 等待
worker_halt:
    wfi
    j       worker_halt

fail:
    li      a0, 1
    ecall
