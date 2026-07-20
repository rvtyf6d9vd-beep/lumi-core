# ERR-132 ~ ERR-136: Bypass / Store-Forwarding / Slot2 Buffer 修复

> 日期: 2026-07-20 | 关联: PLN-0012 (CoreMark V1 端到端调试) | 状态: 已修复, CODE-WR 待完全消除

---

## 概要

CoreMark V1 在 BYPASS_SB=1 (store-to-load forwarding 启用) 模式下出现 CODE-WR
(向 .text 段写入数据)。经多轮调试发现 5 个独立 RTL/TB 缺陷，编号 ERR-132 ~ ERR-136。

---

## ERR-132 | P0 | Bypass 网络未转发延迟写回

**现象**: 3-wide issue 时 slot 2 写回被延迟 (两写端口被 slot 0/1 占用)，
后续依赖 slot 2 结果的指令从 bypass 网络读到旧值。

**根因**: `lumi_bypass.sv` W 级旁路仅有 2 个端口 (rf_wr_en[0], rf_wr_en[1])，
被延迟的 slot 2 数据不在任何旁路源中，导致 E1 级 RAW 冒险检测失败。

**修复**:
- `lumi_writeback.sv`: 添加 `pending_bypass_valid/rd/data` 输出，
  当 slot2/slot1 写回被延迟时提供其结果
- `lumi_core_top.sv`: 将 pending_bypass 连接到 `bp_w_valid[2]` (W 级第 3 端口)

**回归测试**: TC-9 (rv32im_bug_regression.S)

---

## ERR-133 | P0 | Store-to-Load 同周期转发方向错误

**现象**: 链表反转循环中出现 2-node cycle (0x7418 <-> 0x7500)，
load 读到同周期 younger store 的新值而非原始值。

**根因**: `lumi_memory_stage.sv` 的 `fwd_load_data` 组合逻辑中，
port 1 (younger) store 的数据被错误转发给 port 0 (older) load。
正确行为: 仅 older store -> younger load 转发合法。

**修复**:
- `lumi_memory_stage.sv`: 添加年龄守卫条件
  - port 0 store: `l >= 1` (仅转发给 port 1+ 的 younger load)
  - port 1 store: `l >= 2` (2 端口设计中等效禁用)

**回归测试**: TC-10 (rv32im_bug_regression.S)

---

## ERR-134 | P0 | slot2_pending 单缓冲区溢出致数据丢失

**现象**: CoreMark 第二次迭代时 `[SLOT2-LOSS]` 追踪显示
旧 slot2_pending 数据被新延迟写回覆盖 (如 `OLD rd=x14 | NEW rd=x31`)。

**根因**: `lumi_writeback.sv` 中 slot2_pending 仅有 1 个 entry。
当 slot2_pending 已存在且未写入时，新的 slot2_need_stall 覆盖旧数据。
`pending_bypass_stall` 阻止新 issue 但无法阻止已在流水线中的指令到达 W 级。

**修复**:
- `lumi_writeback.sv`: 实现 2-entry buffer (slot2_pending + slot2_pending2)
- 引入 `pd_e0_valid/pd_e1_valid` 组合逻辑计算 post-drain 状态
- 重排写回仲裁: 延迟写回优先于新写回
- `pending_bypass_stall` 计数包含 slot2_pending2

**回归测试**: TC-11 (rv32im_bug_regression.S)

---

## ERR-135 | P0 | 第 2 个 pending entry 无 bypass 端口致数据腐蚀

**现象**: CODE-WR 在 ~17 次 CoreMark 迭代后出现 (cyc=1784989)，
写入地址 0x20-0x24，PC 0x106a (非指令边界)。渐进数据腐蚀。

**根因**: bypass 网络仅有 1 个 pending 端口 (bp_w_valid[2])。
当 slot2_pending 和 slot2_pending2 同时存在时，仅 slot2_pending 被转发，
slot2_pending2 的数据对 E1 级不可见。依赖 slot2_pending2 结果的指令
读到错误值，导致渐进寄存器/内存腐蚀。

**修复**:
- `lumi_bypass.sv`: 添加 `w_extra_valid/rd/result` 输入端口，
  在 always_comb 中以最低 W 级优先级检查
- `lumi_writeback.sv`: 添加 `pending_bypass2_valid/rd/data` 输出，
  独立提供 slot2_pending2 数据
- `lumi_core_top.sv`: 连接 pending_bypass2 到 bypass 模块的 w_extra 端口

**回归测试**: TC-12 (rv32im_bug_regression.S)

---

## ERR-136 | P1 | Scoreboard 非 magic 写入 0x3FFE0 误触发 test_done

**现象**: CoreMark 在 ~1.76M cycles 时 "PASS" 但 magic=0x0000c444 (无效)，
iterations=0。程序实际仍在运行但被 testbench 提前终止。

**根因**: `lumi_scoreboard.sv` 的 store-to-0x3FFE0 检测在**任何**写入
该地址时触发 `test_done=1, exit_code=0`。CoreMark 栈操作意外写入 0x3FFE0
(栈顶附近)，被误判为程序完成。

**修复**:
- `lumi_scoreboard.sv`: 仅在 `v1_dc_wdata == 32'hDEADBEEF` (正常结束)
  或 `32'hDEAD0001` (trap) 时触发 test_done。
  非 magic 写入仅打印 `[SB] STORE-to-0x3FFE0 (non-magic)` 日志。

**回归测试**: 无需 RTL 回归 (纯 testbench 修复)

---

## 验证状态

| ERR | 单元修复 | 回归测试 | CoreMark 端到端 |
|-----|----------|----------|-----------------|
| ERR-132 | PASS | TC-9 待验证 | 2-node cycle 消除 |
| ERR-133 | PASS | TC-10 待验证 | 2-node cycle 消除 |
| ERR-134 | PASS | TC-11 待验证 | SLOT2-LOSS 消除 |
| ERR-135 | PASS | TC-12 待验证 | CODE-WR 仍在 (cyc~1.78M) |
| ERR-136 | PASS | N/A | 误触发消除 |

**注**: ERR-132~135 修复后 CODE-WR 在 ~17 次迭代后仍出现，
根因待进一步定位 (疑似 PC 非对齐或另一条 bypass 路径遗漏)。

---

## 修改文件清单

| 文件 | ERR |
|------|-----|
| `src/rtl/core/lumi_bypass.sv` | ERR-135 |
| `src/rtl/core/lumi_writeback.sv` | ERR-132, ERR-134, ERR-135 |
| `src/rtl/core/lumi_core_top.sv` | ERR-132, ERR-135 |
| `src/rtl/core/lumi_memory_stage.sv` | ERR-133 |
| `src/tb/env/lumi_scoreboard.sv` | ERR-136 |
| `tests/directed/rv32im_bug_regression.S` | TC-9~TC-12 |
