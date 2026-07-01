# B Extension (Zba/Zbb/Zbc/Zbs) Test Suite for gem5
# Pure assembly test - no libc required
# Assemble: riscv64-unknown-elf-gcc -march=rv32imac_zba_zbb_zbc_zbs -mabi=ilp32 -nostdlib -o test_b_ext test_b_ext.s

.section .text
.globl _start

_start:
    # Initialize test counters
    li      s0, 0           # pass count
    li      s1, 0           # fail count

    # ===== Zba: Address Generation =====
    
    # sh1add: rd = (rs1 << 1) + rs2
    li      a0, 0x12345678
    li      a1, 0x11111111
    sh1add  a2, a0, a1
    li      a3, 0x3579AC01
    bne     a2, a3, fail_sh1add_1
    addi    s0, s0, 1
    j       pass_sh1add_1
fail_sh1add_1:
    addi    s1, s1, 1
pass_sh1add_1:

    # sh2add: rd = (rs1 << 2) + rs2
    li      a0, 0x12345678
    li      a1, 0x11111111
    sh2add  a2, a0, a1
    li      a3, 0x5A159E11
    bne     a2, a3, fail_sh2add_1
    addi    s0, s0, 1
    j       pass_sh2add_1
fail_sh2add_1:
    addi    s1, s1, 1
pass_sh2add_1:

    # sh3add: rd = (rs1 << 3) + rs2
    li      a0, 0x12345678
    li      a1, 0x11111111
    sh3add  a2, a0, a1
    li      a3, 0xA2ACF0D1
    bne     a2, a3, fail_sh3add_1
    addi    s0, s0, 1
    j       pass_sh3add_1
fail_sh3add_1:
    addi    s1, s1, 1
pass_sh3add_1:

    # Note: add.uw requires Zba extension (address generation)
    # Skipping add.uw and slli.uw as they need explicit Zba enablement
    
    # ===== Zbb: Basic Bit-manipulation =====
    
    # clz: count leading zeros
    li      a0, 0x80000000
    clz     a2, a0
    li      a3, 0
    bne     a2, a3, fail_clz_1
    addi    s0, s0, 1
    j       pass_clz_1
fail_clz_1:
    addi    s1, s1, 1
pass_clz_1:

    li      a0, 0x00000001
    clz     a2, a0
    li      a3, 31
    bne     a2, a3, fail_clz_2
    addi    s0, s0, 1
    j       pass_clz_2
fail_clz_2:
    addi    s1, s1, 1
pass_clz_2:

    li      a0, 0
    clz     a2, a0
    li      a3, 32
    bne     a2, a3, fail_clz_3
    addi    s0, s0, 1
    j       pass_clz_3
fail_clz_3:
    addi    s1, s1, 1
pass_clz_3:

    # ctz: count trailing zeros
    li      a0, 0x00000001
    ctz     a2, a0
    li      a3, 0
    bne     a2, a3, fail_ctz_1
    addi    s0, s0, 1
    j       pass_ctz_1
fail_ctz_1:
    addi    s1, s1, 1
pass_ctz_1:

    li      a0, 0x80000000
    ctz     a2, a0
    li      a3, 31
    bne     a2, a3, fail_ctz_2
    addi    s0, s0, 1
    j       pass_ctz_2
fail_ctz_2:
    addi    s1, s1, 1
pass_ctz_2:

    # cpop: count population
    li      a0, 0xFFFFFFFF
    cpop    a2, a0
    li      a3, 32
    bne     a2, a3, fail_cpop_1
    addi    s0, s0, 1
    j       pass_cpop_1
fail_cpop_1:
    addi    s1, s1, 1
pass_cpop_1:

    li      a0, 0xAAAAAAAA
    cpop    a2, a0
    li      a3, 16
    bne     a2, a3, fail_cpop_2
    addi    s0, s0, 1
    j       pass_cpop_2
fail_cpop_2:
    addi    s1, s1, 1
pass_cpop_2:

    # min
    li      a0, 5
    li      a1, 10
    min     a2, a0, a1
    li      a3, 5
    bne     a2, a3, fail_min_1
    addi    s0, s0, 1
    j       pass_min_1
fail_min_1:
    addi    s1, s1, 1
pass_min_1:

    # max
    li      a0, 5
    li      a1, 10
    max     a2, a0, a1
    li      a3, 10
    bne     a2, a3, fail_max_1
    addi    s0, s0, 1
    j       pass_max_1
fail_max_1:
    addi    s1, s1, 1
pass_max_1:

    # minu
    li      a0, 0xFFFFFFFF
    li      a1, 10
    minu    a2, a0, a1
    li      a3, 10
    bne     a2, a3, fail_minu_1
    addi    s0, s0, 1
    j       pass_minu_1
fail_minu_1:
    addi    s1, s1, 1
pass_minu_1:

    # maxu
    li      a0, 0xFFFFFFFF
    li      a1, 10
    maxu    a2, a0, a1
    li      a3, 0xFFFFFFFF
    bne     a2, a3, fail_maxu_1
    addi    s0, s0, 1
    j       pass_maxu_1
fail_maxu_1:
    addi    s1, s1, 1
pass_maxu_1:

    # andn: rd = rs1 & ~rs2
    li      a0, 0xFF00FF00
    li      a1, 0x0F0F0F0F
    andn    a2, a0, a1
    li      a3, 0xF000F000
    bne     a2, a3, fail_andn_1
    addi    s0, s0, 1
    j       pass_andn_1
fail_andn_1:
    addi    s1, s1, 1
pass_andn_1:

    # orn: rd = rs1 | ~rs2
    li      a0, 0xFF00FF00
    li      a1, 0x0F0F0F0F
    orn     a2, a0, a1
    li      a3, 0xFF0FFF00
    bne     a2, a3, fail_orn_1
    addi    s0, s0, 1
    j       pass_orn_1
fail_orn_1:
    addi    s1, s1, 1
pass_orn_1:

    # xnor: rd = ~(rs1 ^ rs2)
    li      a0, 0xFF00FF00
    li      a1, 0x0F0F0F0F
    xnor    a2, a0, a1
    li      a3, 0xF0F0F0F0
    bne     a2, a3, fail_xnor_1
    addi    s0, s0, 1
    j       pass_xnor_1
fail_xnor_1:
    addi    s1, s1, 1
pass_xnor_1:

    # Note: pack/packh are Zbkb (crypto), not standard B extension
    # Skipping pack and packh tests
    
    # rol: rotate left
    li      a0, 0x12345678
    li      a1, 4
    rol     a2, a0, a1
    li      a3, 0x23456781
    bne     a2, a3, fail_rol_1
    addi    s0, s0, 1
    j       pass_rol_1
fail_rol_1:
    addi    s1, s1, 1
pass_rol_1:

    # ror: rotate right
    li      a0, 0x12345678
    li      a1, 4
    ror     a2, a0, a1
    li      a3, 0x81234567
    bne     a2, a3, fail_ror_1
    addi    s0, s0, 1
    j       pass_ror_1
fail_ror_1:
    addi    s1, s1, 1
pass_ror_1:

    # rori: rotate right immediate
    li      a0, 0x12345678
    rori    a2, a0, 4
    li      a3, 0x81234567
    bne     a2, a3, fail_rori_1
    addi    s0, s0, 1
    j       pass_rori_1
fail_rori_1:
    addi    s1, s1, 1
pass_rori_1:

    # orc.b: OR-combine bytes
    li      a0, 0x01020304
    orc.b   a2, a0
    li      a3, 0xFFFFFFFF
    bne     a2, a3, fail_orc_b_1
    addi    s0, s0, 1
    j       pass_orc_b_1
fail_orc_b_1:
    addi    s1, s1, 1
pass_orc_b_1:

    # sext.b: sign-extend byte
    li      a0, 0x00000080
    sext.b  a2, a0
    li      a3, 0xFFFFFF80
    bne     a2, a3, fail_sext_b_1
    addi    s0, s0, 1
    j       pass_sext_b_1
fail_sext_b_1:
    addi    s1, s1, 1
pass_sext_b_1:

    # sext.h: sign-extend halfword
    li      a0, 0x00008000
    sext.h  a2, a0
    li      a3, 0xFFFF8000
    bne     a2, a3, fail_sext_h_1
    addi    s0, s0, 1
    j       pass_sext_h_1
fail_sext_h_1:
    addi    s1, s1, 1
pass_sext_h_1:

    # rev8: reverse bytes
    li      a0, 0x12345678
    rev8    a2, a0
    li      a3, 0x78563412
    bne     a2, a3, fail_rev8_1
    addi    s0, s0, 1
    j       pass_rev8_1
fail_rev8_1:
    addi    s1, s1, 1
pass_rev8_1:

    # ===== Zbc: Carry-less Multiplication =====
    
    # clmul: carry-less multiply
    li      a0, 0x00000003
    li      a1, 0x00000005
    clmul   a2, a0, a1
    li      a3, 0x0000000F
    bne     a2, a3, fail_clmul_1
    addi    s0, s0, 1
    j       pass_clmul_1
fail_clmul_1:
    addi    s1, s1, 1
pass_clmul_1:

    # clmulh: carry-less multiply high
    li      a0, 0x00000003
    li      a1, 0x00000005
    clmulh  a2, a0, a1
    li      a3, 0x00000001
    bne     a2, a3, fail_clmulh_1
    addi    s0, s0, 1
    j       pass_clmulh_1
fail_clmulh_1:
    addi    s1, s1, 1
pass_clmulh_1:

    # clmulr: carry-less multiply reversed
    li      a0, 0x00000003
    li      a1, 0x00000005
    clmulr  a2, a0, a1
    li      a3, 0x00000007
    bne     a2, a3, fail_clmulr_1
    addi    s0, s0, 1
    j       pass_clmulr_1
fail_clmulr_1:
    addi    s1, s1, 1
pass_clmulr_1:

    # ===== Zbs: Single-bit Operations =====
    
    # bset: bit set
    li      a0, 0x00000000
    li      a1, 0
    bset    a2, a0, a1
    li      a3, 0x00000001
    bne     a2, a3, fail_bset_1
    addi    s0, s0, 1
    j       pass_bset_1
fail_bset_1:
    addi    s1, s1, 1
pass_bset_1:

    # bclr: bit clear
    li      a0, 0xFFFFFFFF
    li      a1, 0
    bclr    a2, a0, a1
    li      a3, 0xFFFFFFFE
    bne     a2, a3, fail_bclr_1
    addi    s0, s0, 1
    j       pass_bclr_1
fail_bclr_1:
    addi    s1, s1, 1
pass_bclr_1:

    # binv: bit invert
    li      a0, 0x00000000
    li      a1, 0
    binv    a2, a0, a1
    li      a3, 0x00000001
    bne     a2, a3, fail_binv_1
    addi    s0, s0, 1
    j       pass_binv_1
fail_binv_1:
    addi    s1, s1, 1
pass_binv_1:

    # bext: bit extract
    li      a0, 0x00000001
    li      a1, 0
    bext    a2, a0, a1
    li      a3, 1
    bne     a2, a3, fail_bext_1
    addi    s0, s0, 1
    j       pass_bext_1
fail_bext_1:
    addi    s1, s1, 1
pass_bext_1:

    # bseti: bit set immediate
    li      a0, 0x00000000
    bseti   a2, a0, 7
    li      a3, 0x00000080
    bne     a2, a3, fail_bseti_1
    addi    s0, s0, 1
    j       pass_bseti_1
fail_bseti_1:
    addi    s1, s1, 1
pass_bseti_1:

    # bclri: bit clear immediate
    li      a0, 0xFFFFFFFF
    bclri   a2, a0, 7
    li      a3, 0xFFFFFF7F
    bne     a2, a3, fail_bclri_1
    addi    s0, s0, 1
    j       pass_bclri_1
fail_bclri_1:
    addi    s1, s1, 1
pass_bclri_1:

    # binvi: bit invert immediate
    li      a0, 0x00000000
    binvi   a2, a0, 0
    li      a3, 0x00000001
    bne     a2, a3, fail_binvi_1
    addi    s0, s0, 1
    j       pass_binvi_1
fail_binvi_1:
    addi    s1, s1, 1
pass_binvi_1:

    # bexti: bit extract immediate
    li      a0, 0x00000080
    bexti   a2, a0, 7
    li      a3, 1
    bne     a2, a3, fail_bexti_1
    addi    s0, s0, 1
    j       pass_bexti_1
fail_bexti_1:
    addi    s1, s1, 1
pass_bexti_1:

    # ===== Exit with results =====
    # Store results in memory for verification
    # a0 = pass count (s0), a1 = fail count (s1)
    mv      a0, s0
    mv      a1, s1
    
    # Print summary using simple output
    # For gem5 SE mode, we'll use exit syscall with result
    # Exit code = fail count (0 = all passed)
    
    # Exit syscall (a7=93 for exit, a0=exit_code)
    li      a7, 93
    mv      a0, s1          # exit code = fail count
    ecall
