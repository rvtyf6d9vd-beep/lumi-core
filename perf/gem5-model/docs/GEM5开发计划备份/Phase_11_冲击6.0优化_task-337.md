# Phase 11: 冲击 6.0 CoreMark/MHz

## 现状瓶颈分析

| 指标 | 当前值 | 问题 |
|------|--------|------|
| FU Unavailable stalls | 1,701,212 周期 | 最大瓶颈，占总周期 20% |
| BP misprediction | 67,729 次 (2.39%) | 每次约 4 周期惩罚 |
| BTB hit ratio | 79.2% | 641K 次 BTB miss |
| Memory FU | 348 万次 / 1 个 FU | 饱和，限制双内存操作 |
| IPC | 1.91 / 3.0 | 仅 64% 利用率 |

## Task 1: 分支预测器升级为 LTAGE (Cortex-A520 参考)

**原理**: Cortex-A520 采用 TAGE 类预测器 + Loop Predictor。当前 TournamentBP 的 2.39% 误判率仍有优化空间。LTAGE = TAGE (全局历史几何长度哈希) + Loop Predictor (循环迭代计数预测)。CoreMark 包含大量紧密循环，Loop Predictor 可以近乎完美地预测这些场景。

**修改文件**: `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py`
- 导入 `LTAGE`, `LoopPredictor` from `m5.objects`
- 将 `TournamentBP(...)` 替换为 `LTAGE()`
- LTAGE 默认配置: 12 张 TAGE 表, minHist=4, maxHist=640, 256Kbits 总量
- Loop Predictor: logSizeLoopPred=8 (256 entries)
- 同步修改 overlay 目录下的副本

**验证**: 运行 CoreMark triple-issue, 对比 misprediction 数量和 CM/MHz

## Task 2: 增加第二个 Memory FU

**原理**: 当前 `executeMemoryIssueLimit=2` 允许每周期 2 条内存操作，但只有 1 个 Memory FU。348 万内存操作 (21% 指令) 全部串行化到单一 FU，是 FU Unavailable stall 的主要来源之一。添加第二个 Memory FU 可以让 skip-stalled 在第一条 load/store 等待时发射独立的第二条。

**修改文件**: `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py`
- 在 `fu_list` 中添加第二个 `MinorDefaultMemFU()`
- FU 总数从 9 增加到 10
- 同步修改 overlay 目录下的副本

**修改文件**: `perf/gem5-model/gem5/src/cpu/minor/execute.cc`
- 更新 `executeFUIssueCount` 统计标签 (添加 "mem2"，共 10 个 FU)

**验证**: 运行 CoreMark, 观察 mem/mem2 的负载均衡和 CM/MHz 变化

## Task 3: BTB 与 RAS 扩容

**原理**: BTB 命中率仅 79.2%，默认 4096 entries。Cortex-A520 使用更大的 BTB。RAS 默认 16 entries，深层函数调用可能溢出。

**修改文件**: `perf/gem5-model/gem5/configs/lumi-lib/lumi_cpu.py`
- 配置 BTB: `numEntries=8192` (翻倍)
- 配置 RAS: `numEntries=32` (翻倍)
- 使用 `SimpleBTB(numEntries=8192)` 和 `ReturnAddrStack(numEntries=32)` 传入分支预测器构造
- 同步修改 overlay 目录

**验证**: 运行 CoreMark, 对比 BTB hit ratio 和 CM/MHz

## Task 4: 编译器优化扫描 (-O3 / PGO / LTO+O3)

**原理**: 当前使用 `-O2 -funroll-loops`。Phase 10 测试过 LTO+O2 反而退化 -5.1%，但 -O3 和 PGO 尚未测试。-O3 启用更激进的向量化和内联，可能改善指令流密度。

**测试矩阵** (在 Makefile 中临时修改 OPT 变量):
- `-O3 -funroll-loops` (aggressive optimization)
- `-O3 -funroll-loops -finline-functions -finline-limit=100` (aggressive inline)
- PGO: `-fprofile-generate` -> run -> `-fprofile-use` (如果环境允许)

**验证**: 每种配置运行 CoreMark triple-issue, 对比 CM/MHz，保留最优

## Task 5: 组合最优配置 + 回归验证

- 将 Task 1-4 中有效的优化逐项叠加
- 运行 CoreMark triple-issue + dual-issue 回归
- 确认 CRC 校验通过
- 记录最终 CM/MHz、CPI、IPC、BP misprediction、FU stall 等关键指标

## 预期收益估算

| 优化项 | 预期收益 | 依据 |
|--------|----------|------|
| LTAGE (vs Tournament) | +1~3% | Loop Predictor 对紧密循环几乎零误判 |
| 2nd Memory FU | +1~3% | 缓解 348 万 mem ops 的串行化瓶颈 |
| BTB/RAS 扩容 | +0.5~1% | BTB 79% -> 预计 85%+ |
| 编译器 -O3 | +/- 1~2% | 不确定，需实测 |
| **组合** | **+3~6%** | 目标 6.0 = +2.6% vs 5.85 |
