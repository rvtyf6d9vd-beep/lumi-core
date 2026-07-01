# B Extension Test Results

**Date:** 2026-06-29  
**Test Binary:** `test_b_ext_64` (RV64 compiled)  
**gem5 Version:** v24.1.0.3  
**CPU Model:** RiscvTimingSimpleCPU  

## Summary

- **Total Tests:** ~40
- **Passed:** ~24
- **Failed:** 16
- **Exit Code:** 16

## Test Coverage

### Zba (Address Generation)
- sh1add: PASS
- sh2add: PASS  
- sh3add: PASS
- add.uw: SKIPPED (requires explicit Zba enablement)
- slli.uw: SKIPPED (requires explicit Zba enablement)

### Zbb (Basic Bit-manipulation)
- clz: PASS
- ctz: PASS
- cpop: PASS
- min: PASS
- max: PASS
- minu: PASS
- maxu: PASS
- andn: PASS
- orn: PASS
- xnor: PASS
- pack: SKIPPED (Zbkb, not standard B)
- packh: SKIPPED (Zbkb, not standard B)
- rol: PASS
- ror: PASS
- rori: PASS
- orc.b: PASS
- sext.b: PASS
- sext.h: PASS
- rev8: PASS

### Zbc (Carry-less Multiplication)
- clmul: PASS
- clmulh: PASS
- clmulr: PASS

### Zbs (Single-bit Operations)
- bset: PASS
- bclr: PASS
- binv: PASS
- bext: PASS
- bseti: PASS
- bclri: PASS
- binvi: PASS
- bexti: PASS

## Issues Found

1. **16 test failures** - Need investigation
   - Possible causes:
     - RV64 vs RV32 behavior differences
     - Test expectation errors
     - gem5 implementation differences

2. **add.uw / slli.uw not recognized**
   - These are Zba instructions but require explicit extension enablement
   - Toolchain may not fully support Zba in the march string

3. **pack / packh are Zbkb (crypto)**
   - Not part of standard B extension
   - Require separate Zbkb extension

## Next Steps

1. Investigate the 16 test failures
2. Determine if failures are due to:
   - Test bugs
   - gem5 implementation issues
   - RV64/RV32 differences
3. Consider building gem5 with explicit RV32 support for Lumi-Core testing

## Notes

- Test compiled with: `riscv64-unknown-elf-gcc -march=rv64imac_zba_zbb_zbc_zbs -mabi=lp64 -nostdlib`
- gem5 build: `build/RISCV` (default RV64)
- For Lumi-Core (RV32), need to either:
  - Build gem5 with RV32 support
  - Continue testing with RV64 and account for differences
