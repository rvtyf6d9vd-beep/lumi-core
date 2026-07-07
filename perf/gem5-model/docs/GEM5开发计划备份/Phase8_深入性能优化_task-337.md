# Phase 8: 深入性能优化

## 瓶颈分析总结

当前状态: CM/MHz=4.57, IPC=1.50, CPI=0.67, 目标 5.5 (差距 20.3%)

### 指令构成
- IntAlu: 76.21% (12.58M)
- MemRead: 16.58% (2.74M)
- MemWrite: 4.36% (719K)
- IntMul: 2.85% (470K)

### 缓存命中率 (已极优, 非瓶颈)
- D-cache: 99.99% hit (403 misses / 3.46M)
- I-cache: 99.998% hit (230 misses / 10.87M)

### CPI 开销分解
| 来源 | CPI 开销 | 占比 |
|------|:--------:|:----:|
| 依赖链停顿 (data hazard stalls) | ~0.25 | 37% |
| 基础流水线延迟 | ~0.27 | 40% |
| 结构冒险 + 流水线开销 | ~0.08 | 12% |
| 内存操作阻塞 (LSQ stalls) | ~0.05 | 7% |
| 分支误预测 | ~0.016 | 2.3% |

### 关键洞察
1. **依赖链是最大瓶颈** (37%): 即使 opLat=1, 顺序执行的依赖链导致 50% 的 FU 利用率
2. **分支误预测影响很小** (2.3%): 更好的分支预测器只能带来 ~2-3% 提升
3. **缓存已极优**: 99.99%+ 命中率, 优化空间极小
4. **skip-stalled 无效**: 瓶颈不在指令排序, 而在依赖链和 FU 可用性

---

## Task 8.1: 短期参数调优 (预期 +5-10%, 无需重编译)

### 8.1.1 分支预测器升级

当前 TournamentBP 误预测率 2.97%, 其中 98.9% 是条件分支误预测。

**方案 A: 增大预测器容量**
- localPredictorSize: 2048 -> 4096
- globalPredictorSize: 8192 -> 16384
- choicePredictorSize: 8192 -> 16384
- 预期误预测率降至 ~2.0%

**方案 B: 切换到 LocalBP + Tournament 组合**
- gem5 的 TournamentBP 已包含 local/global/choice 三个预测器
- 可尝试调整 choice predictor 权重

**测量方法**: 对比 squashes_0::total 和 mispredicted_0::total

### 8.1.2 executeCommitLimit 调优

当前 commitLimit=3 (等于 issue_width)。虽然平均 commit 带宽足够 (IPC=1.50 < 3),
但突发依赖链可能导致 commit 排队。

**测试**: commitLimit=4 或 5, 观察是否减少 commit 阶段瓶颈

### 8.1.3 LSQ 参数微调

当前 LSQ: store_buf=12, req_q=4, xfer_q=6
- 测试 store_buf=16, req_q=8, xfer_q=8
- 观察是否减少内存操作阻塞

### 8.1.4 编译器优化级别探索

当前 -O2。测试:
- `-O2 -funroll-loops`: 循环展开可能暴露更多 ILP
- `-O2 -fno-schedule-insns`: 不同指令调度策略
- `-O3`: 虽然之前在旧 FU 上更差, 但新 FU 下可能不同

### 8.1.5 Prefetcher 调优

当前 StridePrefetcher(queue_size=16, degree=2)
- 测试 degree=4 (更激进的预取)
- 测试 queue_size=32
- 观察 D-cache miss 是否进一步减少

---

## Task 8.2: 中期源码优化 (预期 +10-20%, 需重编译)

### 8.2.1 方向 A: 增强 skip-stalled 为有限 OoO 发射

当前 skip-stalled 限制:
- 不跳过内存指令 (!isMemRef())
- 只窥视 16 条指令 (MAX_WIDTH=16)
- 在 FU 不可用时也无效

**改进方案**: 扩大跳过窗口 + 允许跳过更多指令类型
- MAX_WIDTH: 16 -> 32 (更大窥视窗口)
- 允许跳过 load (但保留 store 不跳过, 因为 store 有顺序要求)
- 添加简单的 load-load 重排序安全性检查 (地址不重叠检查)

**风险**: load 重排序可能导致正确性问题 (如果两个 load 访问同一地址)
**缓解**: 只对确定不重叠的 load 进行重排序 (例如不同基址寄存器的 load)

### 8.2.2 方向 B: 添加简单 ROB (Reorder Buffer)

在 MinorCPU 中添加一个小型 ROB (8-16 entries), 允许:
- 指令乱序执行但顺序提交
- 在 head inst 被 cache miss 阻塞时, 后续独立指令继续执行
- 有效隐藏内存延迟

**实现要点**:
- 在 Execute 阶段添加 ROB 数据结构
- 修改 commit 逻辑: 从 ROB head 顺序提交, 但执行可以乱序
- 需要处理异常: ROB 中的异常必须按序处理

**预期收益**: 隐藏 cache miss 延迟, IPC 可能提升 0.3-0.5
**风险**: 实现复杂度高, 需要仔细处理异常和内存顺序

### 8.2.3 方向 C: 寄存器重命名

当前 MinorCPU 的 scoreboard 只跟踪 RAW 依赖。WAR 和 WAW 假依赖
(由 ISA 的有限寄存器集引起) 会阻止不必要的停顿。

**方案**: 在 Decode/Issue 阶段添加物理寄存器映射表
- 消除 WAR/WAW 假依赖
- RISC-V 有 32 个 GPR, 相对充足, 所以收益可能有限
- 预期收益: <5% (因为 RISC-V 寄存器较多, 假依赖不严重)

### 8.2.4 方向 D: 更积极的 load 延迟预测

当前 loadAssumedLatency=2 (FU opLat=1 + D-cache data_lat=1)
这只在 L1D hit 时正确。对于 L1D miss, 实际延迟 ~47K cycles。

**方案**: 添加 L1D miss 预测, 使用历史平均延迟
- 维护最近 N 次 load 的平均延迟
- 对新 load 使用预测延迟而不是固定值
- 如果预测错误 (load 实际更慢), 在结果就绪时修正

**预期收益**: 减少 load-use 依赖链的等待时间

---

## Task 8.3: 性能测量框架

### 8.3.1 添加 FU 利用率统计探针

在 execute.cc 中添加统计计数器:
```cpp
// 每个周期记录:
// - 每个 FU 是否被使用
// - issue 阶段 stall 原因分布 (scoreboard/FU unavailable/mem blocked)
// - commit 阶段实际提交数量
```

### 8.3.2 添加 stall 原因分布统计

```cpp
// 在 issue() 中记录:
stats.stallScoreboard++;    // 源寄存器未就绪
stats.stallFUUnavailable++; // 所有匹配的 FU 都忙
stats.stallMemBlocked++;    // 内存排序阻塞
stats.stallCommitFull++;    // commit 队列满
```

### 8.3.3 添加依赖链长度分析

通过静态分析 CoreMark 二进制, 统计:
- 连续依赖指令的平均链长
- 独立指令窗口的平均大小
- 这决定了 OoO 执行的最大收益

---

## Task 8.4: 更新性能报告

更新 `perf/benchmarks/perf-report.yaml` 添加 Phase 8 数据。

---

## 执行顺序建议

1. **Task 8.3** (测量框架) -- 先添加统计探针, 用数据驱动后续优化
2. **Task 8.1** (参数调优) -- 快速测试, 低成本
3. **Task 8.2** (源码优化) -- 根据 8.3 数据选择最有价值的方向

## 风险评估

| 风险 | 等级 | 缓解措施 |
|------|:----:|----------|
| 参数调优收益不及预期 | 中 | 已用统计数据确认瓶颈, 调优方向明确 |
| ROB 实现引入正确性 bug | 高 | 先实现最简单的版本, 逐步验证 |
| load 重排序导致内存错误 | 高 | 只对确定安全的 load 对进行重排序 |
| 统计探针影响性能测量 | 低 | 使用条件编译, 只在需要时启用 |

## 文件变更清单 (预期)

| 文件 | 操作 | 阶段 |
|------|------|------|
| `configs/lumi-lib/lumi_cpu.py` | 修改 | 8.1 参数调优 |
| `src/cpu/minor/execute.cc` | 修改 | 8.2 源码优化 + 8.3 统计探针 |
| `src/cpu/minor/execute.hh` | 修改 | 8.2/8.3 新字段 |
| `configs/lumi-lib/perf_measure.py` | 修改 | 新配置测试 |
| `perf/benchmarks/perf-report.yaml` | 修改 | 8.4 报告更新 |
