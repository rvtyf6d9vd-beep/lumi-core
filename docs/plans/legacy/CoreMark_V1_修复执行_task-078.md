# CoreMark V1 Carry 路径修复执行计划

## 背景
静态分析发现 3 个 bug 导致 CoreMark V1 无法通过 ECALL 退出。所有 bug 集中在 `lumi_predecode.sv` 的 carry 路径。

## Task 1: 修复 lumi_predecode.sv (3 个 bug)

**Bug 1 (最关键)**: 行 197, `bytes_consumed` 遗漏 `carry_valid_out` 检查
- 当主扫描循环在行 174-175 生成新 carry 时, `carry_valid_out=1` 但 `bytes_consumed` 条件只检查 `carry_valid`(输入)
- 导致 pc_reg 停在当前块内 (`bo - start_offset`) 而非前进到下一块 (`16 - start_offset`)
- 修复: `if (carry_valid || auto_carry)` -> `if (carry_valid || carry_valid_out)`

**Bug 2**: 行 88, carry PC 应为 `aligned_base - 2`
- Bug 1 修复后 pc_reg 正确前进到下一块, `base_pc` 变为 `aligned_base_{N+1}`, carry 指令地址 = `aligned_base_{N+1} - 2`
- 修复: `inst_pc[0] = base_pc` -> `inst_pc[0] = aligned_base - 32'd2`

**Bug 3**: 行 101-125, 移除 auto_carry (设计缺陷)
- auto_carry 重建 branch target 之前的指令, 不应被执行
- 删除 auto_carry 分支、变量声明、所有引用

完整变更清单:
1. 行 45: 删除 `auto_carry` 声明
2. 行 61: 删除 `auto_carry = 1'b0` 默认赋值
3. 行 88: `base_pc` -> `aligned_base - 32'd2`
4. 行 101-125: 删除 auto_carry 分支, 保留 else 分支
5. 行 134: `(carry_valid || auto_carry)` -> `carry_valid`
6. 行 197: `(carry_valid || auto_carry)` -> `(carry_valid || carry_valid_out)`
7. 行 226,228: `auto_carry` -> 移除
8. 行 244: `auto_carry` -> 移除
9. 行 249-268: 删除 debug $display

## Task 2: 清理 lumi_fetch.sv 调试代码

删除行 456-492 和 565-591 的 DIAG-* $display, 保留功能逻辑。删除 diag_cycle_cnt 和 ex_byte_off/ex_compressed 死代码。

## Task 3: 清理 lumi_soc_top.sv 调试代码

删除行 304-334 的 diag_dc_* 诊断代码, 保留 SRAM 写入逻辑 (行 335-346)。

## Task 4: 编译并运行 CoreMark V1

```bash
cd src/tb && make v1-build
src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=<abs_path>/coremark-v1_32.hex +max_cycles=10000000
```
验证: ECALL 检测 PASS, magic=0xDEADBEEF, we_count>0

## Task 5: Dhrystone V1 (如果 CoreMark 通过)

## Task 6: 回归测试 + 归档 + GitHub 同步
