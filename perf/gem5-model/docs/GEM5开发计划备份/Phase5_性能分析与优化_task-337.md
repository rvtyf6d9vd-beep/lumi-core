# Phase 5: 性能分析与优化

## 现状摘要

| 指标 | CoreMark 三发射 | Dhrystone 三发射 |
|------|:-:|:-:|
| CM/MHz (DMIPS/MHz) | 3.05 | 0.94 |
| CPI | 0.996 | 1.160 |
| 分支误预测率 | 3.3% | 1.7% |
| 分支 squashes | 246,645 | 3,721 |
| D-cache miss | 0.004% | - |
| I-cache miss | 0.003% | - |

**瓶颈排序**:
1. **分支惩罚** (~8 cycles/次, 占总周期 ~5%) -- 最大可优化项
2. **顺序执行串行依赖** -- 无法消除，但可通过减少流水线停顿间接缓解
3. **流水线 buffer 过小** -- fetch1FetchLimit=1, 各 buffer 仅 2-4 条
4. **编译器优化** -- 仅使用 -O2，未尝试 -O3/LTO

## Task 5.1: 性能分析工具

**目标**: 创建自动化性能分析脚本，提取和可视化 gem5 统计数据

### 5.1.1 创建 `analyze_perf.py`

**新建**: `perf/gem5-model/configs/lumi-lib/analyze_perf.py`

功能:
- 解析 `stats.txt` 提取: CPI, IPC, 指令混合比, 分支预测准确率, cache miss rate
- 计算分支惩罚: `total_squashes * branch_penalty_cycles / total_cycles * 100`
- 输出格式化的瓶颈报告 (文本 + CSV 格式)
- 支持多配置对比 (triple vs dual, 不同参数组合)

### 5.1.2 创建性能基线文件

**新建**: `perf/benchmarks/perf-baseline.yaml`

记录 Phase 4 的完整性能数据作为优化基线:
- 所有 gem5 stats 关键指标
- CoreMark 50 iter / Dhrystone 500 runs 的详细数据
- 双发射 + 三发射对比

## Task 5.2: 分支惩罚缩减 (最大影响项)

**当前**: `executeBranchDelay = 2` -> 实际惩罚约 8 cycles (Execute 在第 6 级, flush 回 Fetch1)

### 5.2.1 缩减 executeBranchDelay

**修改**: `configs/lumi-lib/lumi_cpu.py` 第 74 行

```python
cpu.executeBranchDelay = 2  # 当前
cpu.executeBranchDelay = 1  # 尝试缩减到 1
```

**验证**: 运行 CoreMark + Dhrystone，对比 CPI 和 CM/MHz 变化
**风险**: 过低的延迟可能不符合实际硬件时序

### 5.2.2 添加 Branch Target Buffer 参数调优

**修改**: `configs/lumi-lib/lumi_cpu.py` 的 TournamentBP 配置

当前参数:
```python
localPredictorSize=1024, globalPredictorSize=4096, choicePredictorSize=4096
```

尝试:
- 增大 globalPredictorSize 到 8192/16384
- 增大 localHistoryTableSize 到 2048/4096
- 增大 CtrBits 到 3 (更精细的饱和计数器)

### 5.2.3 评估间接分支预测

当前 indirectBranchPred 使用默认配置。CoreMark 有间接分支 (CallIndirect 18K, IndirectUncond 49)。尝试配置 IndirectPredictor。

## Task 5.3: 流水线参数调优

### 5.3.1 增大 fetch limit

**修改**: `lumi_cpu.py` 第 34 行

```python
cpu.fetch1FetchLimit = 1  # 当前: 每周期只取 1 条
cpu.fetch1FetchLimit = issue_width  # 改为: 每周期取 issue_width 条
```

**影响**: 当前 fetch 每周期只能取 1 条指令，严重限制了后续流水线的利用率

### 5.3.2 增大各级 buffer

当前 buffer 配置偏小:
```python
fetch2InputBufferSize = 2       -> 增大到 issue_width * 2 = 6
decode1InputBufferSize = 3      -> 增大到 issue_width * 2 = 6
decodeInputBufferSize = 3       -> 增大到 issue_width * 2 = 6
issueInputBufferSize = 4        -> 增大到 issue_width * 3 = 9
executeInputBufferSize = 7      -> 增大到 issue_width * 3 = 9
memoryInputBufferSize = 3       -> 增大到 issue_width * 2 = 6
writebackInputBufferSize = 2    -> 增大到 issue_width * 2 = 6
```

### 5.3.3 增大 LSQ buffer

当前:
```python
executeLSQStoreBufferSize = 5
executeLSQRequestsQueueSize = 1
executeLSQTransfersQueueSize = 2
```

尝试:
```python
executeLSQStoreBufferSize = 8
executeLSQRequestsQueueSize = 2
executeLSQTransfersQueueSize = 4
```

### 5.3.4 缩减前向延迟

尝试将各级 ForwardDelay 从 1 缩减到更低值 (若硬件可行)。

## Task 5.4: 缓存参数调优

### 5.4.1 评估 D-cache 数据延迟

当前: `data_latency = 2` (2 周期)。尝试缩减到 1 周期:

**修改**: `lumi_cache.py` 第 37 行
```python
cache.data_latency = 2  # 当前
cache.data_latency = 1  # 尝试
```

### 5.4.2 增大 write buffer

当前: `write_buffers = 16`。增大到 32 以吸收写回延迟。

### 5.4.3 评估预取器效果

当前 StridePrefetcher 配置: `queue_size=16, degree=2`。
分析 prefetcher useful/useless 比率，调整参数。

## Task 5.5: 编译器优化

### 5.5.1 尝试 -O3

**修改**: `benchmarks/coremark/Makefile` 和 `benchmarks/dhrystone/Makefile`

```makefile
OPT = -O3  # 从 -O2 升级到 -O3
```

### 5.5.2 尝试 LTO (Link-Time Optimization)

```makefile
CFLAGS += -flto
LDFLAGS += -flto
```

### 5.5.3 尝试 -march 扩展

```makefile
ARCH = rv64imc  # 添加 C (Compressed) 扩展，减少代码体积
```
注意: 需要确认 gem5 MinorCPU 是否支持 C 扩展解码

## Task 5.6: 参数扫描与对比

### 5.6.1 创建参数扫描脚本

**新建**: `perf/gem5-model/configs/lumi-lib/param_sweep.py`

功能:
- 自动遍历参数组合 (executeBranchDelay, fetch1FetchLimit, buffer sizes, branchPred 参数)
- 运行 CoreMark，记录 CM/MHz
- 生成参数 vs 性能的对比表
- 识别最优参数组合

### 5.6.2 运行参数扫描

以 Task 5.2-5.5 中的各优化项为变量:
- 单项优化效果测量
- 组合优化效果测量
- 记录所有结果到 CSV

## Task 5.7: 回归测试与报告更新

### 5.7.1 更新 perf-report.yaml

用优化后的最佳数据替换 Phase 4 基线数据

### 5.7.2 更新 run_benchmarks.py

添加参数扫描选项 (`--sweep` 模式)

### 5.7.3 更新 test_regression.py

添加优化后的性能回归测试 (验证不低于基线)

## 实施顺序

```
Task 5.1 (分析工具)
  |
  +---> Task 5.2 (分支惩罚) ----+
  +---> Task 5.3 (流水线参数) --+---> Task 5.6 (参数扫描) ---> Task 5.7 (报告)
  +---> Task 5.4 (缓存参数)  --+
  +---> Task 5.5 (编译器优化) --+
```

Task 5.2-5.5 可以并行开发，各自独立验证后通过 Task 5.6 统一扫描最优组合。

## 预期效果

| 优化项 | 预期提升 | 风险 |
|--------|---------|------|
| fetch1FetchLimit=3 | +15-30% IPC | 需要验证 I-cache 端口带宽 |
| executeBranchDelay=1 | +3-5% IPC | 需要确认硬件可行性 |
| 分支预测器增大 | +1-3% IPC | 面积/功耗增加 |
| Buffer 增大 | +5-10% IPC | 面积增加 |
| D-cache latency=1 | +3-5% IPC | 需要确认 SRAM 工艺可行性 |
| -O3 编译 | +5-15% | 代码体积增大 |
| 组合优化 | +30-50% | 需逐项验证 |

注意: 即使所有优化叠加，从 3.05 到 5.5 需要 80% 提升，在顺序执行约束下可能无法完全达到。最终报告将记录实际可达到的最高 CM/MHz 及各项优化的贡献度分析。
