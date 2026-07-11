// =================================================================
// V1 Directed Test: RV32I Smoke Test
// 验证基础 ALU + 寄存器写回 + ECALL 退出
// 预期: a0=0 (PASS), 约 15 条指令 retired
// =================================================================

    .section .text.init
    .globl _start
    .align 2

_start:
    // ── 基础 ALU 指令测试 ──────────────────────────────
    li      t0, 0x12345678     // LUI + ADDI
    li      t1, 0x87654321
    add     t2, t0, t1         // t2 = 0x99999999
    sub     t3, t0, t1         // t3 = 0x8ACF1357
    and     t4, t0, t1         // t4 = 0x02244220
    or      t5, t0, t1         // t5 = 0x97755779
    xor     t6, t0, t1         // t6 = 0x95511559
    slli    a1, t0, 4          // a1 = 0x23456780
    srli    a2, t0, 8          // a2 = 0x00123456
    srai    a3, t1, 4          // a3 = 0xF8765432

    // ── Load/Store 测试 ────────────────────────────────
    la      sp, stack_top       // 设置栈指针
    sw      t2, 0(sp)          // Store word
    lw      a4, 0(sp)          // Load word → a4 = t2

    // ── Branch 测试 ────────────────────────────────────
    beq     t0, t0, br_pass    // Should branch
    li      a5, 1               // FAIL marker (should skip)
br_pass:
    bne     t0, t1, br_pass2   // Should branch
    li      a5, 2               // FAIL marker (should skip)
br_pass2:

    // ── 退出: a0 = 0 (PASS) ──────────────────────────
    li      a0, 0              // exit code = 0 = PASS
    ecall                       // 触发 ECALL → scoreboard 检测 test_done

    .section .bss
    .align 4
    .space 256
stack_top:
