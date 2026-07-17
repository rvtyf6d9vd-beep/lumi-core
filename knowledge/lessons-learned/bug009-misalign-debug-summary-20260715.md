# BUG-009 未对齐访问迭代调试总结

> **日期:** 2026-07-15
> **范围:** ERR-108~ERR-114，未对齐访问两周期拆分逻辑的 6 个 RTL 修复 + 1 个未解决问题
> **状态:** 6/7 已修复，ERR-114 (ECALL 未提交) 仍在调试中

---

## 1. 背景

为修复 BUG-007 (CoreMark V1 产生未对齐 sh 指令触发 trap)，在 `lumi_memory_stage.sv` 中实现了未对齐 load/store 透明处理（两周期拆分：cycle 1 低部分 + cycle 2 高部分）。回归测试全部通过，但 CoreMark V1 仍失败。

## 2. 发现的 6 个 RTL 子问题

### 2.1 ERR-108: gen_byte_enable 地址错误

**根因:** `gen_byte_enable()` 使用未对齐的原始地址计算 byte enable。
**修复:** 改用对齐地址 `(addr & ~3)` 计算 BE。
**教训:** 地址计算函数必须统一使用对齐地址，不能混用原始地址和对齐地址。

### 2.2 ERR-109: align_store_data 地址错误

**根因:** `align_store_data()` 使用未对齐地址做数据移位。
**修复:** 改用对齐地址计算移位量。
**教训:** 与 ERR-108 同源——同一函数组中的地址参数必须一致。

### 2.3 ERR-110: MA cycle 2 信号未寄存

**根因:** 未对齐访问第二周期的地址/WE 信号未通过寄存器保持，组合逻辑毛刺。
**修复:** 添加 `ma_c2_addr` / `ma_c2_we` 寄存器。
**教训:** 多周期操作的第二周期信号必须用寄存器锁存，不能依赖组合逻辑。

### 2.4 ERR-111: Load 数据合并逻辑缺失

**根因:** 未对齐 load 的两周期数据合并（高低部分拼接 + 符号扩展）路径不完整。
**修复:** 实现完整的 load 数据合并路径。
**教训:** 两周期拆分的 load 需要在 cycle 2 出口处统一合并，不能只处理 store 路径。

### 2.5 ERR-112: Cycle 2 BE/data 未覆盖

**根因:** `ma_active_r==1` 时 `lsu_be` / `lsu_aligned_data` 未被覆盖为高字值。
**修复:** 在 cycle 2 路径中显式覆盖这两个信号。
**教训:** 多周期操作中，所有输出信号在第二个周期都必须被正确覆盖，遗漏任何一个都会导致静默数据错误。

### 2.6 ERR-113: DIB 满导致 fetch PC 死锁

**根因:** `dib_not_full` 基于 `all_issued` 判断，未考虑当前周期 issue 排空 DIB 后的有效空间。当 DIB 满且 issue 排空时，fetch 被错误阻塞，PC 停止前进。

**修复:** 新增 `dib_can_accept` 信号：
```
dib_count_after_issue = dib_count - issue_count
dib_can_accept = (dib_count_after_issue + pd_inst_count) <= DIB_DEPTH
```

**涉及文件:** `lumi_decode_issue.sv` (DIB FIFO + dib_can_accept), `lumi_core_top.sv` (信号连线), `lumi_fetch.sv` (端口连接)。

**教训:** FIFO 的 full 信号必须考虑同一周期的排空效果。`can_accept` 比 `not_full` 更精确——前者是"当前批次能否放入"，后者是"当前是否有空位"。

## 3. 未解决问题 ERR-114

完整 `rv32i_misalign.S` 测试 INCOMPLETE：ECALL 从未被提交，scoreboard 检测到 0 条 SYSTEM 指令。6M 指令被 retire 但 PC 最终落入 `0x00f42xxx`（未初始化内存区域）。

min8 简单测试 PASS，说明基本功能正确。问题仅在长测试中暴露，可能原因：
- 长程序执行路径中存在其他未发现的兼容性问题
- PC 跳转到错误地址（间接跳转目标计算错误？）
- 某种边界条件导致的静默数据损坏

## 4. 调试策略总结

### 4.1 先隔离再集成

1. 先用 min8 简单测试验证每个子修复的正确性
2. 回归测试 (smoke/rv32i/rv32m) 确认无退化
3. 最后用完整 rv32i_misalign.S 验证

### 4.2 多 bug 叠加时的分解策略

当多个 bug 同时存在时：
- 从最简单的测试用例开始，逐步增加复杂度
- 每修复一个 bug 立即回归，确认不引入新问题
- 区分"修复后仍然失败"和"修复引入新问题"

### 4.3 FIFO 反压信号设计原则

`dib_can_accept` 的设计是一个通用模式：
- **错误做法:** `not_full = (count < depth)` — 只看当前状态
- **正确做法:** `can_accept = (count - drain + inflight) <= depth` — 考虑同一周期的流入和流出

这个模式适用于所有 decoupled FIFO 场景。

## 5. 相关文件

| 文件 | 修改内容 |
|------|----------|
| `src/rtl/core/lumi_memory_stage.sv` | ERR-108~112: 未对齐拆分逻辑全面修复 |
| `src/rtl/core/lumi_decode_issue.sv` | ERR-113: DIB 32-entry FIFO + dib_can_accept |
| `src/rtl/core/lumi_core_top.sv` | ERR-113: dib_can_accept 连线 + mem_busy 冻结 I→E1 |
| `src/rtl/core/lumi_fetch.sv` | ERR-113: dib_not_full → dib_can_accept 端口连接 |

## 6. Errata 关联

- ERR-108 ~ ERR-113: 已修复 (resolved)
- ERR-114: 未解决 (open) — ECALL 未提交
- BUG-010: 已解决 — 创建 `tests/directed/rv32i_misalign.S` (1337 行, 14 场景)
