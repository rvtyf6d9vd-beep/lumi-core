# Phase 9: 深度性能优化 -- 全面评估与计划

## 当前状态

| 指标 | 值 | 目标 | 差距 |
|------|----|------|------|
| CoreMark CM/MHz | 4.62 | 5.5 | 16.0% |
| IPC (triple) | 1.51 | - | - |
| CPI | 0.662 | - | - |

**瓶颈分布** (Phase 8 探针数据):
- Scoreboard stalls: 59% (1.72M) -- 数据依赖链 (源寄存器未就绪)
- FU Unavailable: 41% (1.20M) -- 所有匹配 FU 都忙
- Mem Blocked: 0%
- 分支误预测: ~2.3% (90K/2.98M, penalty ~3-4 cycles)
- D-cache miss: 403 次, 每次 ~47K cycles (极小影响)

## 为什么 3 发射 MinorCPU 低于双发射真实硅片

N900/R908 用双发射达到 5.5 CM/MHz，我们用三发射只有 4.62。差距根因:

1. **无寄存器重命名**: scoreboard 追踪所有 RAW/WAR/WAW 依赖，产生假依赖停顿 (估计影响 +5-8%)
2. **严格顺序发射**: skip-stalled 仅对非访存指令有效且窗口有限 (估计 +2-4%)
3. **保守 LSQ**: load 必须等前面所有 store 完成 (估计 +1-3%)
4. **分支解析在 Execute 级**: 误预测惩罚 = 整个流水线深度 (估计 +2-3%)

---

## 可行优化方案全面评估

### 方案 A: `fetch1ToFetch2BackwardDelay = 0`
**类别**: 参数调优 (纯配置，无需重编译)

gem5 MinorCPU 中 `fetch1ToFetch2BackwardDelay` 是**唯一允许为 0 的延迟参数** (pipeline.cc L65 `true` 参数)。设为 0 表示分支预测器反馈与取指在同一周期完成，减少 1 个周期的分支惩罚。

- **预期收益**: +2-4% (约 90K mispredictions x 1 cycle saved = ~90K cycles)
- **实现难度**: 极低 (改一行 Python)
- **风险**: 可能影响模拟器稳定性
- **文件**: `configs/lumi-lib/lumi_cpu.py`

### 方案 B: `executeLoadAssumedLatency` 精调
**类别**: 参数调优 (纯配置)

当前 loadAssumedLatency=2 (匹配 L1D 总延迟 opLat+data_lat=1+1)。测试值 1/3/4:
- 值=1: 更激进的推测，依赖指令更早发射，但 miss 时需修正
- 值=3: 更保守，减少误推测但不改善命中情况

- **预期收益**: +0-2%
- **实现难度**: 极低
- **风险**: 低
- **文件**: `configs/lumi-lib/lumi_cpu.py`

### 方案 C: `executeMaxAccessesInMemory` 增大
**类别**: 参数调优 (纯配置)

当前默认值 2，控制 D-cache 端口的最大并发访存数。增大到 3-4 可能允许更多并发访存。

- **预期收益**: +0-1% (cache 端口不是主要瓶颈)
- **实现难度**: 极低
- **风险**: 低
- **文件**: `configs/lumi-lib/lumi_cpu.py`

### 方案 D: 修复 Load Skip WAR 安全问题
**类别**: 源码修改

Phase 8 尝试允许 load skip 但因 WAR 冒险 (窗口外指令修改 load 地址寄存器) 导致 crash。修复方案:
- 在 skip 时保存 load 的地址源寄存器值
- 在 load 重试时检查地址寄存器是否被修改
- 如果被修改，标记 load 为不安全并取消 skip

**关键代码位置**: `src/cpu/minor/execute.cc` L906-1027 (skip-stalled 逻辑)

- **预期收益**: +3-6% (允许 load 被 skip，暴露更多 ILP)
- **实现难度**: 中高 (需要修改 MinorDynInst 结构)
- **风险**: 高 (正确性必须严格保证)
- **文件**: `execute.cc`, `dyn_inst.hh`

### 方案 E: 选择性 Scoreboard 放松 (消除假依赖)
**类别**: 源码修改 (核心)

当前 `canInstIssue()` (scoreboard.cc L208-279) 对每个源寄存器检查 `returnCycle` 和 `numUnpredictableResults`。这是正确的 RAW 检查，不会引入假依赖。

**关键发现**: 真正的瓶颈不是 WAR/WAW 假依赖 (scoreboard 只追踪 RAW)，而是 **真实的 RAW 依赖链** + **FU 繁忙**。因此寄存器重命名的收益可能低于预期 (估计 +2-4% 而非 +5-8%)。

更可行的方向: **修改 scoreboard 的 `returnCycle` 计算**，让结果在 FU 输出可用时就标记为 ready，而不是等到 commit。这实质上增加了**结果旁路 (result forwarding)** 的深度。

- **预期收益**: +2-4%
- **实现难度**: 中 (修改 scoreboard.cc 的 markupInstDests)
- **风险**: 中 (必须确保旁路时序正确)
- **文件**: `scoreboard.cc`, `execute.cc`

### 方案 F: 分支早期解析
**类别**: 源码修改

当前分支在 Execute 级 (Stage 6) 解析。将简单分支 (直接跳转、条件分支) 的解析提前到 Decode2 级 (Stage 4)，减少误预测惩罚 2 个周期。

- **预期收益**: +2-4% (90K mispredictions x 2 cycles = ~180K cycles saved)
- **实现难度**: 高 (需修改 decode2.cc 添加分支解析逻辑)
- **风险**: 高 (需要确保 PC 正确恢复)
- **文件**: `decode2.cc`, `decode2.hh`

### 方案 G: 增强 Store-to-Load Forwarding
**类别**: 源码修改

LSQ 已有 store-to-load forwarding (lsq.cc L804 `forwardStoreData`)，但条件是 `FullAddrRangeCoverage` (store 地址完全覆盖 load 地址)。放宽条件或允许 partial forwarding 可能改善 load 延迟。

- **预期收益**: +1-2% (CoreMark 的 load/store 模式较简单)
- **实现难度**: 中
- **风险**: 低 (已有 forwarding 基础设施)
- **文件**: `lsq.cc`

### 方案 H: 编译器进一步优化
**类别**: 编译参数 (已部分完成)

当前: `-O2 -funroll-loops`。其他可测试:
- `-O2 -funroll-loops -fpeel-loops`: 循环剥离
- `-O2 -funroll-loops -fmodulo-sched`: 模调度 (软件流水)
- `-O2 -funroll-loops --param max-unroll-times=4`: 控制展开次数

- **预期收益**: +0-3%
- **实现难度**: 低
- **风险**: 低

---

## 推荐执行计划 (按优先级排序)

### Task 1: 参数快速扫描 (预期 +3-6%, 无需重编译)
快速测试所有未探索参数，找到最佳组合:
1. `fetch1ToFetch2BackwardDelay`: 测试 0 vs 1
2. `executeLoadAssumedLatency`: 测试 1, 3, 4
3. `executeMaxAccessesInMemory`: 测试 3, 4
4. 编译器: 测试 `-fpeel-loops`, `-fmodulo-sched`

验证方法: 每项测试后运行 CoreMark，对比 CM/MHz 和 IPC。

### Task 2: Load Skip WAR 安全修复 (预期 +3-6%, 需重编译)
在 `execute.cc` 的 skip-stalled 逻辑中:
1. 在 `MinorDynInst` 中添加 `savedSrcRegValues` 字段
2. 在 skip load 时保存地址源寄存器值
3. 在 load 重试时比较当前值与保存值
4. 不匹配时取消 skip 并重新发射

### Task 3: Scoreboard 结果旁路优化 (预期 +2-4%, 需重编译)
修改 `scoreboard.cc` 的 `markupInstDests`，让结果在 FU 输出可用时 (而非 commit 时) 就标记为 ready:
- 分析当前 `returnCycle` 的计算方式
- 减少不必要的延迟周期

### Task 4: 分支早期解析 (预期 +2-4%, 需重编译)
在 `decode2.cc` 中添加简单分支解析:
- 检测直接跳转 (JAL) 和简单条件分支
- 在 Decode2 级提前解析已预测正确的分支
- 误预测时仍回退到 Execute 级处理

### Task 5: 性能报告更新
汇总所有结果，更新 `perf-report.yaml`。

---

## 风险评估与收益上限

| 方案 | 预期收益 | 累计上限 | 可行性 |
|------|:-------:|:-------:|:------:|
| A: backwardDelay=0 | +2-4% | 5.0 | 高 |
| B: loadLatency 精调 | +0-2% | 5.1 | 高 |
| C: maxAccesses | +0-1% | 5.1 | 高 |
| H: 编译器优化 | +0-3% | 5.2 | 高 |
| D: load skip 修复 | +3-6% | 5.5 | 中 |
| E: scoreboard 旁路 | +2-4% | 5.6 | 中 |
| F: 分支早期解析 | +2-4% | 5.8 | 中低 |
| G: store forwarding | +1-2% | 5.9 | 中 |

**关键结论**: 参数调优 (Task 1) 可能贡献 +3-6%，达到 ~4.8 CM/MHz。源码优化 (Task 2-4) 可能再贡献 +5-10%，理论上有望达到 ~5.2-5.5。但各优化之间并非完全叠加，实际收益需要逐项验证。

**诚实评估**: 即使所有方案全部成功，5.5 仍是一个极具挑战性的目标。MinorCPU 模型在顺序执行框架内已接近其性能天花板。剩余差距的根本原因是 gem5 MinorCPU 的结构性简化 (无物理寄存器重命名、无 ROB、保守内存模型)。
