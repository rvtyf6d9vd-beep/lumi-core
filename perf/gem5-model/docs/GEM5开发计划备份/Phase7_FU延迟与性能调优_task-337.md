# Phase 7: FU 延迟修正与性能调优

## 问题诊断

### 根因分析：ALU opLat=3 是最大性能瓶颈

MinorCPU 的 `MinorDefaultIntFU` 默认 `opLat=3`（定义于 `src/cpu/minor/BaseMinorCPU.py:157`），意味着每条 ALU 指令在 FU 流水线中占用 3 个周期。这与目标架构 Cortex-R82 的实际行为不符（简单 ALU 操作应为 1 周期）。

**影响链条：**
1. `FUPipeline` 构造函数使用 `description.opLat` 设置流水线深度（`func_unit.cc:88`）
2. `markupInstDests` 设置 `returnCycle = curCycle + opLat`（`execute.cc:801`）
3. `canInstIssue` 检查 `returnCycle > (now + relative_latency)`（`scoreboard.cc:259`）
4. 对于依赖链：生产者 issued at cycle N → returnCycle=N+3 → 消费者最早在 cycle N+1 发射（因为 relative_lat=2），但生产者结果在 N+3 才就绪 → 消费者虽然在 N+1 进入 FU 但需要等到 N+3

**量化分析（依赖链 `ADD r1, r2, r3` -> `ADD r4, r1, r5`）：**
- opLat=3, srcRegsRelativeLats=[2]：依赖延迟 = 3 周期
- opLat=1, srcRegsRelativeLats=[2]：依赖延迟 = 1 周期（生产者 cycle N 发射，returnCycle=N+1，消费者 cycle N+1 发射，returnCycle 已到）

当前 IPC=1.08（三发射理论上限 3.0），说明约 64% 的发射能力被浪费，主要原因是依赖链等待。

### 其他 FU 延迟分析

| FU | 当前 opLat | 目标 opLat | 理由 |
|---|:---:|:---:|---|
| IntALU | 3 | **1** | 简单整数 ALU（add/sub/and/or/xor/slt）应为 1 周期 |
| IntMul | 3 | **2** | 流水线化乘法器可做到 2 周期（如 N900）|
| IntDiv | 9 | 9 | 除法器确实慢，保持不变 |
| Mem | 1 | 1 | 已正确（地址计算 1 周期 + L1D 访问延迟）|
| Misc | 1 | 1 | 已正确 |

---

## Task 7.1: 定义自定义 FU 类并更新配置

**修改文件**: `configs/lumi-lib/lumi_cpu.py`

在文件顶部添加自定义 FU 类定义，覆盖默认 opLat：

```python
from m5.objects import MinorFU, MinorFUTiming, minorMakeOpClassSet

class LumiIntFU(MinorFU):
    """Single-cycle ALU: opLat=1 (vs default 3)"""
    opClasses = minorMakeOpClassSet(["IntAlu"])
    timings = [MinorFUTiming(description="Int", srcRegsRelativeLats=[2])]
    opLat = 1

class LumiIntMulFU(MinorFU):
    """2-cycle pipelined multiplier: opLat=2 (vs default 3)"""
    opClasses = minorMakeOpClassSet(["IntMult"])
    timings = [MinorFUTiming(description="Mul", srcRegsRelativeLats=[0])]
    opLat = 2
```

将 FU pool 中的 `MinorDefaultIntFU()` 替换为 `LumiIntFU()`，`MinorDefaultIntMulFU()` 替换为 `LumiIntMulFU()`：

```python
fu_list = [
    LumiIntFU(),
    LumiIntFU(),
    LumiIntFU(),       # 3x single-cycle ALU
    LumiIntMulFU(),     # 1x 2-cycle MUL
    MinorDefaultIntDivFU(),  # 1x DIV (opLat=9, unchanged)
    MinorDefaultFloatSimdFU(),  # 1x FP/SIMD (opLat=6, unchanged)
    MinorDefaultMemFU(),  # 1x MEM (opLat=1, unchanged)
    MinorDefaultMiscFU(),  # 1x MISC (opLat=1, unchanged)
]
```

**副作用验证**：
- `inFlightInsts` 队列大小由 `total_slots = sum(opLat)` 决定（`execute.cc:143`）
  - 当前: 3*3 + 3 + 9 + 6 + 1 + 1 = 29
  - 修改后: 3*1 + 2 + 9 + 6 + 1 + 1 = 22（仍然充足）
- FUPipeline 深度 = opLat，opLat=1 时 pushWire=popWire，指令在 advance() 后立即可读。由于 evaluate() 中 advance() 在 issue() 之后执行（`execute.cc:1700-1702`），下一条指令将在下一个 cycle 的 commit() 中看到结果。正确性不受影响。

## Task 7.2: 重新编译并运行正确性验证

**无需重新编译 gem5！** opLat 是 Python 参数，由 gem5 配置系统在启动时读取，不需要 C++ 重编译。

正确性验证步骤：
1. Triple-issue hello world：验证输出 "Hello world!" 且正常退出（tohost=1）
2. Dual-issue hello world：验证输出正确（确保更低的 opLat 不会破坏双发射路径）
3. 完整回归测试：`python3 configs/lumi-lib/test_regression.py`，8/8 PASS
4. CoreMark CRC：验证 "Correct operation validated"
5. Dhrystone checks：验证所有 check 值正确

## Task 7.3: 性能测量

运行 4 个配置的性能对比（使用 `perf_measure.py`）：

| 配置 | skip_stalled | load_latency | 说明 |
|---|:---:|:---:|---|
| baseline | 0 | 0 | Phase 6 推荐配置关闭，用于对比基准 |
| phase7_alu_only | 0 | 0 | 仅降低 ALU/MUL opLat |
| phase7_full | 1 | 1 | 降低 opLat + Phase 6 优化全开 |

记录指标：CM/MHz, DMIPS/MHz, CPI, IPC, branch squashes

**预期结果**：
- IPC 从 ~1.08 提升到 ~1.8-2.5（依赖链延迟降低 3 倍）
- CM/MHz 从 3.30 提升到 ~4.8-5.5（如果 IPC 线性提升 1.5-1.7 倍）

## Task 7.4: 消融分析与深入调优

根据 Task 7.3 结果，决定后续调优方向：

**如果 CM/MHz >= 5.0（接近目标）：**
- 微调分支预测器参数
- 微调 fetch limit（3 -> 6）
- 记录最终配置

**如果 CM/MHz < 5.0（仍有差距）：**
- 添加统计探针收集 FU 利用率、stall 分布
- 分析是依赖链受限还是带宽受限
- 考虑进一步降低 IntMulFU opLat（2 -> 1）
- 考虑降低 FloatSimdFU opLat（6 -> 3）
- 增大 fetch limit 到 6 以提供更多指令给执行单元

## Task 7.5: 更新性能报告

更新 `perf/benchmarks/perf-report.yaml` 添加 Phase 7 数据。

## 风险评估

| 风险 | 等级 | 缓解措施 |
|---|:---:|---|
| opLat=1 导致时序不正确 | 低 | MinorCPU 的 FUPipeline 支持任意 opLat>=1。advance() 在每个 cycle 末尾调用，保证时序正确。CRC 验证确认 |
| 双发射路径受影响 | 低 | opLat 不影响发射宽度，只影响 FU 流水线深度。双发射使用相同的 issue/commit 逻辑 |
| inFlightInsts 队列过小 | 极低 | total_slots 从 29 降至 22，远大于 commitLimit=3 |
| 性能提升不及预期 | 中 | 如果依赖链不是唯一瓶颈，需要 Phase 7.4 的进一步分析 |

## 文件变更清单

| 文件 | 操作 | 说明 |
|---|---|---|
| `configs/lumi-lib/lumi_cpu.py` | 修改 | 添加 LumiIntFU/LumiIntMulFU 类，更新 FU pool |
| `perf/benchmarks/perf-report.yaml` | 修改 | 添加 Phase 7 性能数据 |
