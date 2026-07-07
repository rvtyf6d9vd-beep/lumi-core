# Phase 6: gem5 MinorCPU 源码级优化

## 问题诊断

通过源码审查，确认 MinorCPU IPC 被限制在 ~1.0 的两个**结构性原因**：

### 根因 1: Execute::issue() 阻塞式发射

文件: `src/cpu/minor/execute.cc` 第 547-830 行

```cpp
// 第 563 行: 一旦 issued=false, 整个发射循环退出
bool issued = true;
do {
    // ... 尝试发射 inst[inputIndex] ...
    // 第 674 行: 如果 canInstIssue 返回 false
    //   -> issued 保持 false -> 内层 do-while 退出
    // 第 826 行: 外层 do-while 检查 issued && ... -> 整个循环退出
} while (... issued && ...);
```

**影响**: 假设一个周期有 3 条指令 [ADD(可发), LW(卡住), ADD(独立可发)]，第 2 条 LW 因 load-use 依赖无法发射时，第 3 条独立 ADD 也被跳过。真实 in-order 核（如 Cortex-R82、N900）会**跳过**被阻塞的 LW，发射第 3 条独立指令。

### 根因 2: Load 结果标记为 unpredictable

文件: `src/cpu/minor/execute.cc` 第 755-760 行

```cpp
scoreboard[thread_id].markupInstDests(inst, ...,
    issued_mem_ref && extra_assumed_lat == Cycles(0));
//                                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//                                     mark_unpredictable = true for loads
```

文件: `src/cpu/minor/scoreboard.cc` 第 259-262 行

```cpp
if (returnCycle[index] > (now + relative_latency) ||
    numUnpredictableResults[index] != 0)  // <-- 完全阻塞
{
    ret = false;
}
```

**影响**: 所有 load 指令的 destination register 被标记为 unpredictable，导致任何依赖该 load 结果的后续指令**完全无法发射**，直到 load 完成 commit。这使得 load-use 延迟完全不可隐藏。

## Task 6.1: 添加 skip-stalled 发射策略

**修改文件**: `src/cpu/minor/execute.cc`, `src/cpu/minor/execute.hh`

### 设计

在 `Execute::issue()` 中引入 `enableSkipStalled` 模式:
- 当一条指令因依赖无法发射时，不退出循环，而是标记该指令为 "skipped"
- 继续尝试后续指令
- 维护 `hasMemBlock` 标志：如果跳过的指令是 memory ref，后续 memory ref 也不能发射（保持内存顺序）
- 仍然遵守 `issueLimit` 和 `memoryIssueLimit`

### 实现要点

1. `execute.hh` 新增成员:
```cpp
bool enableSkipStalled;  // 从 params 读取
```

2. `execute.cc` issue() 核心修改（第 563-828 行）:
```cpp
bool issued = true;
bool skip_stalled_happened = false;
bool mem_blocked = false;  // 如果跳过了 mem ref, 后续 mem ref 也要阻塞

do {
    MinorDynInstPtr inst = insts_in->insts[thread.inputIndex];
    // ...
    issued = false;
    // 尝试发射...
    // 如果失败:
    if (!issued) {
        if (enableSkipStalled && !inst->isFault()) {
            // 标记为 skipped, 不退出循环
            skip_stalled_happened = true;
            if (inst->isMemRef())
                mem_blocked = true;
            thread.inputIndex++;  // 跳到下一条
            issued = true;  // 让循环继续
            // 注意: num_insts_issued 不增加
        }
    }
    // ...
} while (insts_in && ... issued && ...);
```

3. 关键约束:
   - 被跳过的指令下一周期会重新尝试（inputIndex 不回退，但 inputBuffer 不 pop）
   - 需要确保跳过的指令不会丢失——inputIndex 前移但 inst 留在 buffer 中
   - 如果所有指令都被 skip，循环正常退出

**风险**: inputIndex 前移可能导致跳过的指令在下一周期不被重新尝试。需要仔细设计 skipped 指令的回收机制。

### 替代方案 (更安全)

不移动 inputIndex，而是记录 skipped 位置，下一周期从该位置重试:
```cpp
unsigned int skip_count = 0;
const unsigned int MAX_SKIP = issue_width;  // 最多跳过 issue_width 条

do {
    MinorDynInstPtr inst = insts_in->insts[thread.inputIndex + skip_count];
    // ... 尝试发射 ...
    if (!issued && skip_count < MAX_SKIP) {
        skip_count++;
        issued = true;  // 继续循环
    }
} while (...);
// 下一周期: inputIndex 不变, 从第一条未发射的指令重新开始
```

**推荐采用替代方案**——不移动 inputIndex，仅在本周期内尝试跳过。下周期自然重试。

## Task 6.2: Load 延迟预测 (替代 unpredictable)

**修改文件**: `src/cpu/minor/execute.cc`, `src/cpu/minor/BaseMinorCPU.py`

### 设计

将 load 的 `mark_unpredictable=true` 替换为确定性的 `extra_assumed_lat` 值（等于 L1D hit 延迟）:

1. `BaseMinorCPU.py` 新增参数:
```python
executeLoadAssumedLatency = Param.Cycles(
    0, "Assumed latency for load instructions (0 = use unpredictable marking)"
)
```

2. `execute.cc` 第 755-760 行修改:
```cpp
bool mark_unpredictable;
if (issued_mem_ref) {
    if (loadAssumedLatency > Cycles(0)) {
        // 使用确定性延迟代替 unpredictable
        extra_assumed_lat = std::max(extra_assumed_lat, loadAssumedLatency);
        mark_unpredictable = false;
    } else {
        mark_unpredictable = (extra_assumed_lat == Cycles(0));
    }
} else {
    mark_unpredictable = false;
}
scoreboard[thread_id].markupInstDests(inst, ..., mark_unpredictable);
```

3. 在 `lumi_cpu.py` 中设置:
```python
cpu.loadAssumedLatency = 1  # 匹配 L1D data_latency=1
```

**效果**: load 结果的 returnCycle 变为可预测的，依赖指令可以在 `returnCycle - relative_latency` 时刻发射，而非等待 load commit。

## Task 6.3: 参数注册

**修改文件**: `src/cpu/minor/BaseMinorCPU.py`

新增两个参数:
```python
executeEnableSkipStalled = Param.Bool(
    False,
    "Enable skip-stalled issue policy: skip blocked instructions "
    "and issue later independent instructions in the same cycle"
)
executeLoadAssumedLatency = Param.Cycles(
    0,
    "Assumed latency for load results (0 = mark as unpredictable, "
    "N = use N cycles as deterministic prediction)"
)
```

## Task 6.4: 重新编译 gem5

```bash
cd perf/gem5-model/gem5
scons build/RISCV/gem5.opt -j8
```

预计编译时间: ~10 分钟

## Task 6.5: 正确性验证

1. 运行 hello world 回归:
```bash
./build/RISCV/gem5.opt configs/lumi-core.py --binary tests/test-progs/hello/bin/riscv/linux/hello
```
验证输出 "Hello world!" 且正常退出

2. 运行 Phase 3 回归测试:
```bash
python3 configs/lumi-lib/test_regression.py
```
验证所有测试 PASS

3. 运行 CoreMark 验证 "Correct operation validated"
4. 运行 Dhrystone 验证所有 check 值正确

## Task 6.6: 性能测量与分析

1. 四个配置对比 (CoreMark + Dhrystone):
   - 基线 (skip_stalled=false, load_lat=0)
   - 仅 skip_stalled=true
   - 仅 load_lat=1
   - skip_stalled=true + load_lat=1

2. 记录 CM/MHz, DMIPS/MHz, CPI, IPC, branch squashes

3. 更新 `perf/benchmarks/perf-report.yaml`

## 预期效果

| 修改 | 预期 IPC 影响 | 原理 |
|------|:---:|------|
| skip-stalled | +20-40% | 独立指令不再被阻塞指令连带卡住 |
| load 延迟预测 | +10-20% | load-use 延迟可部分隐藏 |
| 组合 | +30-50% | 两个修改正交，效果叠加 |

如果 IPC 从 1.14 提升到 1.5-1.7，CM/MHz 可达 4.5-5.2，接近 5.5 目标。

## 风险

| 风险 | 等级 | 缓解 |
|------|:---:|------|
| skip-stalled 导致指令丢失 | 高 | 采用"不移动 inputIndex"的替代方案 |
| skip-stalled 破坏内存顺序 | 高 | mem_blocked 标志确保跳过 mem ref 后不发射后续 mem ref |
| load 延迟预测不准 | 中 | L1 miss 时实际延迟远大于预测，但 scoreboard 的 returnCycle 机制允许后续修正 |
| gem5 编译失败 | 低 | 增量修改，每步验证编译 |
| 分支 squash 增多 | 低 | 更多指令在飞意味着 squash 代价更大，但 IPC 提升应覆盖此开销 |

## 文件变更清单

| 文件 | 操作 | 说明 |
|------|------|------|
| `src/cpu/minor/BaseMinorCPU.py` | 修改 | 新增 2 个参数 |
| `src/cpu/minor/execute.hh` | 修改 | 新增成员变量 |
| `src/cpu/minor/execute.cc` | 修改 | 核心: issue() 改为 skip-stalled + load lat |
| `configs/lumi-lib/lumi_cpu.py` | 修改 | 设置新参数 |
| `perf/benchmarks/perf-report.yaml` | 修改 | 更新性能数据 |
