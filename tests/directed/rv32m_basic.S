# =================================================================
# RV32M Extension Basic Test (Memory Signature)
# Tests: MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU
# Pass: writes results to signature area, then ECALL (a0=0)
# Scoreboard detects ECALL on 2nd wave (mtvec=0 re-execution).
# Compile: riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib
# =================================================================

.section .text.init
.globl _start

_start:
    # Set up signature base pointer
    li      sp, 0x100           # signature at 0x100

    # ── Test 1: MUL (32x32 -> lower 32 bits) ──
    li      t0, 7
    li      t1, 6
    mul     t2, t0, t1          # t2 = 42
    sw      t2, 0(sp)           # sig[0] = 42

    # MUL with negative numbers
    li      t0, -3
    li      t1, 5
    mul     t2, t0, t1          # t2 = -15
    sw      t2, 4(sp)           # sig[1] = -15

    # ── Test 2: MULH (signed x signed -> upper 32) ──
    lui     t0, 0x10            # t0 = 0x10000 = 65536
    lui     t1, 0x10            # t1 = 65536
    mulh    t2, t0, t1          # t2 = upper32(65536*65536) = 1
    sw      t2, 8(sp)           # sig[2] = 1

    # MULH with negative
    li      t0, -1
    li      t1, 2
    mulh    t2, t0, t1          # upper32(-1*2) = -1
    sw      t2, 12(sp)          # sig[3] = -1

    # ── Test 3: MULHSU (signed x unsigned -> upper 32) ──
    li      t0, -1
    li      t1, 2
    mulhsu  t2, t0, t1          # upper32(-1 * 2u) = -1
    sw      t2, 16(sp)          # sig[4] = -1

    # ── Test 4: MULHU (unsigned x unsigned -> upper 32) ──
    li      t0, 0x7FFFFFFF
    slli    t0, t0, 1           # t0 = 0xFFFFFFFE (not quite 0x80000000)
    li      t1, 2
    mulhu   t2, t0, t1          # upper32(0xFFFFFFFE * 2) = 1
    sw      t2, 20(sp)          # sig[5] = 1

    # ── Test 5: DIV (signed division) ──
    li      t0, 42
    li      t1, 7
    div     t2, t0, t1          # t2 = 6
    sw      t2, 24(sp)          # sig[6] = 6

    # DIV with negative
    li      t0, -42
    li      t1, 7
    div     t2, t0, t1          # t2 = -6
    sw      t2, 28(sp)          # sig[7] = -6

    # ── Test 6: DIVU (unsigned division) ──
    li      t0, 100
    li      t1, 10
    divu    t2, t0, t1          # t2 = 10
    sw      t2, 32(sp)          # sig[8] = 10

    # ── Test 7: REM (signed remainder) ──
    li      t0, 43
    li      t1, 7
    rem     t2, t0, t1          # t2 = 1
    sw      t2, 36(sp)          # sig[9] = 1

    # REM with negative
    li      t0, -43
    li      t1, 7
    rem     t2, t0, t1          # t2 = -1
    sw      t2, 40(sp)          # sig[10] = -1

    # ── Test 8: REMU (unsigned remainder) ──
    li      t0, 100
    li      t1, 7
    remu    t2, t0, t1          # t2 = 2
    sw      t2, 44(sp)          # sig[11] = 2

    # ── Write magic pass marker ──
    li      t0, 0x55AA
    sw      t0, 48(sp)          # sig[12] = 0x55AA (PASS marker)

    # ── ECALL to terminate (a0=0 = PASS) ──
    li      a7, 93              # syscall number (unused, but conventional)
    li      a0, 0               # exit code = 0 (PASS)
    ecall
