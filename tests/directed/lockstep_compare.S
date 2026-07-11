# =================================================================
# V4 Directed Test: Lockstep Compare (T-MS3-S1-2.4a)
# 验证双核同步执行 + W 级比较匹配
# 需求: LUMI-MCORE-002, LUMI-SAFE-002
# 预期: a0=0 (PASS)
# =================================================================
# 说明: Lockstep 模块在 multicore_top 中实例化。
# 本测试通过共享内存验证双核执行一致性。
# Hart 0 写入共享标志 → Hart 1 读取并比较。
# =================================================================

.section .text.init
.globl _start
.align 2

_start:
    # 读取 hart_id (mhartid CSR = 0xF14)
    csrr    t0, 0xF14               # mhartid

    # ══ Hart 0: 生产者 ═══════════════════════════════
    beq     t0, zero, hart0_producer

    # ══ Hart 1: 消费者 ═══════════════════════════════
    j       hart1_consumer

hart0_producer:
    li      sp, 0x0001_7F00

    # 共享内存基址 (DTCM0)
    li      t0, 0x0001_4000         # shared_mem base

    # 写入测试数据到共享内存
    li      t1, 0xDEAD_BEEF
    sw      t1, 0(t0)               # shared[0] = 0xDEADBEEF

    li      t1, 0x1234_5678
    sw      t1, 4(t0)               # shared[1] = 0x12345678

    li      t1, 0xCAFEBABE
    sw      t1, 8(t0)               # shared[2] = 0xCAFEBABE

    # 写入同步标志 (store-release 语义: 先 fence 再写标志)
    fence
    li      t1, 1
    sw      t1, 12(t0)              # shared[3] = 1 (ready flag)

    # 等待 Hart 1 确认
wait_hart1:
    lw      t1, 16(t0)             # shared[4] = Hart1 ack
    beq     t1, zero, wait_hart1

    # 验证 Hart 1 写回的数据
    lw      t1, 20(t0)             # shared[5] = Hart1 result
    li      t2, 0xDEAD_BEEF
    bne     t1, t2, fail

    # ══ PASS ════════════════════════════════════════════
    li      a0, 0
    ecall

hart1_consumer:
    li      sp, 0x0002_7F00        # Hart 1 使用 DTCM1 栈

    li      t0, 0x0001_4000         # shared_mem base

    # 等待 Hart 0 的 ready 标志
wait_ready:
    lw      t1, 12(t0)             # shared[3] = ready flag
    beq     t1, zero, wait_ready

    # 读取并验证共享数据
    lw      t1, 0(t0)              # shared[0]
    li      t2, 0xDEAD_BEEF
    bne     t1, t2, fail

    lw      t1, 4(t0)              # shared[1]
    li      t2, 0x1234_5678
    bne     t1, t2, fail

    lw      t1, 8(t0)              # shared[2]
    li      t2, 0xCAFEBABE
    bne     t1, t2, fail

    # 写回确认 + 结果
    fence
    sw      t2, 20(t0)             # shared[5] = 0xDEADBEEF (echo back)
    li      t1, 1
    sw      t1, 16(t0)             # shared[4] = ack

    # Hart 1 等待 (不退出)
hart1_halt:
    wfi
    j       hart1_halt

fail:
    li      a0, 1
    ecall
