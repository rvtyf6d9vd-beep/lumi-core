# GitHub 同步计划

## 仓库现状

- **已有提交**: 1 个 (`5e88abc feat: initial Lumi-core project structure`)
- **远程仓库**: `https://github.com/rvtyf6d9vd-beep/lumi-core.git` (main 分支)
- **待提交文件**: ~129 个 (68 非 perf + 61 perf)
- **gem5 源码**: 4.3G，已通过 `.gitignore` 排除，用 patch + build script 恢复

## .gitignore 已覆盖

- gem5 源码/构建产物 (`perf/gem5-model/gem5/src/`, `build/`, `m5out*/`)
- 编译产物 (`*.o`, `*.a`, `*.riscv`, `*.elf`)
- Python 环境 (`.venv/`, `__pycache__/`)
- macOS (`.DS_Store`)
- IDE (`.qoder/`, `.vscode/`)

---

## Task 1: Commit — 基础设施与规则体系

**范围**: rules/, agents/, hooks/, infra/, knowledge/, .gitignore, AGENTS.md

文件清单 (~30 个):
- `rules/` — 业务规则、子规则、脚本、schema、changelog
- `agents/hw-design/`, `agents/pm-infra/` — 新增角色目录
- `agents/hw-ver/`, `agents/qa-audit/` — 更新 role-prompt
- 删除旧角色目录 (`agents/ai-infra/`, `agents/hw-arch/`, `agents/pm/`, `agents/sw-arch/`)
- `hooks/` — post-commit 钩子和 setup 脚本
- `.gitignore`, `AGENTS.md`
- `audit/risk-register.yaml`, `audit/errata/`, `audit/instruction-log/`
- `CLAUDE.md` 删除

**Commit message**: `feat: rules framework, agent roles, audit system and hooks (Phase 3-9)`

## Task 2: Commit — 文档与标准

**范围**: docs/

文件清单 (~40 个):
- `docs/profile/` — Lumi-Core Profile (HTML + MD)
- `docs/project/` — PRD、baselines、notes、flowchart
- `docs/standards/` — RISC-V specs/profiles (19 PDF, ~34MB)
- `docs/architecture/` — gem5 modeling analysis

**Commit message**: `docs: RISC-V standards, project profile, PRD and architecture docs`

## Task 3: Commit — 性能建模框架与基准测试

**范围**: perf/

文件清单 (~61 个):
- `perf/benchmarks/coremark/` — CoreMark 源码 + Makefile
- `perf/benchmarks/dhrystone/` — Dhrystone 源码 + Makefile
- `perf/benchmarks/libc/` — 精简 libc (crt0, mini_libc, linker script)
- `perf/benchmarks/m5-test/` — gem5 m5op 测试
- `perf/benchmarks/perf-report.yaml` — 综合性能报告 (Phase 5-9)
- `perf/benchmarks/perf-baseline.yaml` — 性能基线
- `perf/gem5-model/configs/` — gem5 配置 (lumi-lib, gem5-overlay)
- `perf/gem5-model/patches/` — MinorCPU patch (Phase 3-9, 3901 行)
- `perf/gem5-model/scripts/` — build-gem5.sh, python3-config-wrapper.sh
- `perf/gem5-model/tests/` — ISA 测试

**Commit message**: `perf: gem5-based CPU performance modeling framework with CoreMark/Dhrystone (Phase 3-9)`

## Task 4: Commit — 部署计划与杂项

**范围**: 根目录杂项文件

文件清单 (~5 个):
- `Lumi_Deployment_Plan.html` (修改)
- `Lumi_Deployment_Plan_v2.1_backup.html`
- `Lumi-to-Qoder-移植分析报告.md`

**Commit message**: `chore: deployment plan update and porting analysis report`

## Task 5: Push 到 GitHub

```bash
git push origin main
```

---

## 执行顺序

1. Task 1 (rules/agents/audit)
2. Task 2 (docs)
3. Task 3 (perf)
4. Task 4 (misc)
5. Task 5 (push)

## 注意事项

- PDF 文件 34MB 总计，GitHub 单文件限制 100MB，无需 LFS
- gem5 源码通过 `scripts/build-gem5.sh` clone + patch 恢复，不入库
- `.venv/`, `m5out*/`, `*.o` 等构建产物由 `.gitignore` 排除
# Phase 10: 冲击 6.0 CoreMark/MHz

## 现状分析

| 指标 | Phase 9 值 | Phase 10 目标 | 差距 |
|------|:---:|:---:|:---:|
| CoreMark Triple | 5.54 | 6.0 | +8.3% |
| CoreMark Dual | 4.46 | - | - |
| IPC | ~1.80 | ~1.95 | +8.3% |

**瓶颈分析：**
- Scoreboard stalls: 46K（已从 1.72M 降至几乎为零，RAW 依赖链最小化）
- **FU unavailable: 主瓶颈**（Phase 9 中增长 48%，3x ALU FU 在满载时饱和）
- Branch mispredict: ~2.3%（已用 TournamentBP 8K/2K，改善空间有限）
- Memory stalls: ~7%（CoreMark 非内存密集型）

**约束：** 顺序执行、3 发射、8 级流水线不可变。FU 数量不受发射宽度限制。

---

## Task 1: Stall 定量分析（诊断性，预期 0%）

在调优之前，先从 gem5 stats.txt 提取 Phase 9 基线的精确 stall 分布：

**文件：** `configs/lumi-lib/run_benchmarks.py`

修改 runner 增加 stats.txt 深度解析，提取：
- `executeStallScoreboard` / `executeStallFUUnavailable` / `executeStallMemBlocked`
- `executeIssueWidthDist[0..3]`（每周期发射 0/1/2/3 条的分布）
- `executeFUIssueCount[0..7]`（每个 FU 的负载分布）
- `executeSkipStalled`
- `numCycles`, `cpi`

运行 CoreMark Triple 收集完整 stall profile。

---

## Task 2: MAX_WIDTH 跳过窗口扩展（预期 +2-5%）

**文件：** `src/cpu/minor/execute.cc` L586

```cpp
static constexpr unsigned int MAX_WIDTH = 16;  // 当前值
```

改为 32，使 skip-stalled 机制能看到更远的独立指令。

**原理：** 当 head-of-line 因 scoreboard 停顿，当前 16 条窗口内可能全是依赖指令。扩大到 32 条可找到更多独立指令填充 FU 空闲槽位。

**风险评估：** 
- 低风险：仅影响搜索范围，不改变正确性
- 可能副作用：更多迭代开销（但 execute.cc 中已有 O(n^2) 的 skip 检查，32 的开销可忽略）

**验证：** Hello world + CoreMark CRC

---

## Task 3: FU 扩容（预期 +2-4%）

**文件：** `configs/lumi-lib/lumi_cpu.py` L113-122

当前 FU 列表：3x ALU + 1x MUL + 1x DIV + 1x FP + 1x MEM + 1x MISC = 8 FUs

修改方案：增加到 **4x ALU**（或 5x ALU）

```python
fu_list = [
    LumiIntFU(), LumiIntFU(), LumiIntFU(), LumiIntFU(),  # 4x ALU (was 3x)
    LumiIntMulFU(),
    MinorDefaultIntDivFU(),
    MinorDefaultFloatSimdFU(),
    MinorDefaultMemFU(),
    MinorDefaultMiscFU(),
]
```

**原理：** FU 数量不等于发射宽度。Cortex-R82（双发射）有 2 ALU + 1 MUL/DSP。三发射配 4 个 ALU 是合理的，给 skip-stalled 更多调度目标。

**风险评估：**
- 低风险：仅增加 FU 池大小，不影响流水线结构
- 可能副作用：FU 轮询开销略增（线性扫描 9 个 FU 而非 8 个）

**验证：** 测试 4x ALU 和 5x ALU 两个配置，取最优

---

## Task 4: FU 选择策略改进（预期 +1-3%）

**文件：** `src/cpu/minor/execute.cc` L646

当前代码每条指令都从 `fu_index = 0` 开始搜索 FU，导致 FU 0 负载高于 FU 1/2。

改为 round-robin：在 issue() 函数开头记录 `lastFUIndex`，每条指令从上次使用的下一个 FU 开始搜索。

```cpp
// L646: 改为
fu_index = thread.lastFUIndex;  // was: fu_index = 0
// ... 成功发射后:
thread.lastFUIndex = (fu_index + 1) % numFuncUnits;
```

需要在 `ExecuteThreadInfo` 中添加 `unsigned int lastFUIndex = 0;`

**原理：** 均衡 FU 负载，减少因 FU 0 繁忙但 FU 2 空闲导致的虚假 stall。

**风险评估：**
- 中等风险：修改 FU 搜索顺序可能影响旁路路径（不同 FU 的 cantForwardFromFUIndices 可能不同）
- 需要验证 `cantForwardFromFUIndices` 对结果的影响

---

## Task 5: 分支预测器精调（预期 +0-2%）

**文件：** `configs/lumi-lib/lumi_cpu.py` L126-135

当前 TournamentBP: local=2K, global=8K, choice=8K

测试方案：
1. **大容量**: local=4K, global=16K, choice=16K（减少 capacity miss）
2. **PerceptronBP**: 替换 TournamentBP（更先进的预测算法，gem5 内置）
3. **IndirectBP**: 添加间接分支预测（CoreMark 有 switch-case 间接跳转）

```python
# 方案 2 示例
from m5.objects import PerceptronBP
cpu.branchPred = PerceptronBP(
    perceptronTableSize=2048,
    perceptronWeightBits=8,
    globalHistoryLength=32,
)
```

**风险评估：** PerceptronBP 可能需要额外参数调试

---

## Task 6: 编译器 LTO 测试（预期 +0-3%）

**文件：** `perf/benchmarks/coremark/Makefile`

测试 Link-Time Optimization（跨编译单元优化，可能改善指令调度）：

```makefile
# LTO 标志
PORT_CFLAGS += -flto
LDFLAGS += -flto
```

**风险评估：** 需要确认 riscv64-unknown-elf-gcc 支持 LTO；可能需要增加 `--no-warn-rwx-segments` 链接器标志

---

## Task 7: 回归测试与报告

- 6/6 回归测试（Hello x2 + CoreMark x2 + Dhrystone x2）
- 更新 `perf/benchmarks/perf-report.yaml` 增加 Phase 10 段
- 更新 `audit/instruction-log/` 日志
- 记录所有尝试的优化及其 ablation 数据

---

## 执行顺序

1. **Task 1**（诊断）-- 收集 stall 基线数据，指导后续优先级
2. **Task 2**（MAX_WIDTH 32）-- 最低成本源码改动
3. **Task 3**（4x ALU）-- 配置变更，验证 FU 扩容效果
4. **Task 4**（Round-robin FU）-- 源码改动，需要重编译
5. **Task 5**（分支预测）-- 参数测试
6. **Task 6**（LTO）-- 编译器测试
7. **Task 7**（回归 + 报告）

每个 Task 独立测试，有效则叠加。

## 预期收益

| 优化 | 预期 | 累计（乐观） |
|------|:---:|:---:|
| Baseline | 5.54 | - |
| Task 2: MAX_WIDTH=32 | +2-5% | 5.82 |
| Task 3: 4x ALU | +2-4% | 6.05 |
| Task 4: Round-robin FU | +1-3% | 6.23 |
| Task 5: 分支预测 | +0-2% | 6.35 |
| Task 6: LTO | +0-3% | 6.54 |
| **保守估计** | | **~5.8-6.0** |
| **乐观估计** | | **~6.2-6.5** |

Task 2+3 的组合是达到 6.0 的关键路径。Task 4-6 提供额外裕量。
