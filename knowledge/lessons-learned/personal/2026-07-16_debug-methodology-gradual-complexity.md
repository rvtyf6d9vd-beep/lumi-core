# 调试方法论：由易到难，逐级递增复杂度

> **日期:** 2026-07-16
> **分类:** personal-experience
> **来源:** CoreMark V1 调试实践
> **关联任务:** T-MS3-S1-7 基准测试调试
> **核心原则:** 调试应从最简可运行配置开始，逐级增加复杂度，每一步确认正常后再进入下一步，避免多变量耦合导致无法定位根因。

---

## 1. 背景

CoreMark V1 在 RTL 仿真中长时间无法正常运行。早期调试策略是一次性启用所有硬件特性（超标量、分支预测、Cache、完整指令集），结果程序在数十亿 cycle 后超时崩溃，trace 文件达数 GB，完全无法定位根因。

**教训：** 调试不是"跑一次看结果"，而是"最小化变量，逐级确认"。一次性暴露太多变量，等于没有暴露任何变量。

---

## 2. 调试策略：四级递增复杂度模型

任何复杂基准程序（CoreMark、Dhrystone 等）在 RTL 仿真环境中的调试，应按以下四级逐步推进：

```
Level 1: 基础功能贯通 —— 进入 main 并完成初始化
    ↓ 确认
Level 2: 单函数正确性 —— 完成第一个完整函数调用
    ↓ 确认
Level 3: 全程序贯通   —— 完成所有函数，正常退出（ECALL）
    ↓ 确认
Level 4: 结果与性能   —— 检查计算结果正确性 + 性能指标
```

### Level 1 — 基础功能贯通

**目标：** 程序从启动到进入 `main()`，完成初始化（BSS 清零、栈指针设置、全局变量初始化），不崩溃、不 trap。

**验证手段：**
- 设置断点条件：PC 到达 `main` 入口地址
- 检查栈指针 SP、全局指针 GP 是否正确初始化
- 确认 BSS 段已被清零
- 确认 `ee_printf` 等基础 I/O 函数可正常输出

**常见失败模式：**
- 启动代码 `.text` 入口地址与 linker script 不一致
- `_start` → `main` 的跳转未正确链接
- 栈溢出（SP 未设置在有效 SRAM 范围）

### Level 2 — 单函数正确性

**目标：** 完成第一个完整函数调用（如 CoreMark 的 `core_init_matrix`），函数参数传递正确，返回结果符合预期，无异常 trap。

**验证手段：**
- 在函数入口和出口设置观察点
- 检查函数参数（a0~a7 寄存器）传递是否正确
- 检查返回值（a0）是否符合预期
- 确认函数调用栈帧（ra 保存/恢复）正确
- 确认无未对齐访问异常

**常见失败模式：**
- 函数调用参数传递约定（ABI）不匹配
- JAL/RET 指令的 ra 链路断裂
- 栈帧分配不足导致局部变量覆盖

### Level 3 — 全程序贯通

**目标：** 程序完整运行到 `_exit(rc)` 或 ECALL，无异常终止。

**验证手段：**
- 确认所有函数调用链完整
- 确认所有循环边界正确（CoreMark 的迭代循环不陷入死循环）
- 观察 `we_count`（写计数）是否有非零值
- 确认最终 PC 到达退出点（`ecall` 或写入 magic 地址 0x3FFE0）

**常见失败模式：**
- 分支预测误跳导致 PC 异常
- 函数指针/虚表调用目标错误
- 全局变量的写入/读取不一致

### Level 4 — 结果与性能

**目标：** 计算结果与参考值一致，性能指标达标。

**验证手段：**
- 对比 CoreMark Score 与已知正确值（QEMU/Spike 参考运行）
- 检查 `ee_printf` 输出的最终统计行
- 对比 cycle 计数与性能基线
- 性能未达标时排查：流水线 stall、Cache miss、分支误预测等

---

## 3. CoreMark V1 调试实例（分级步骤）

以下是在 Lumi-Core V1 RTL 仿真中运行 CoreMark 的分级调试步骤：

### 步骤 1：最小可运行配置

**硬件配置：**
- 指令集：仅 RV32IM（禁用 C 扩展，编译器使用 `-march=rv32im`）
- 流水线：单发射模式（禁用超标量）
- 分支预测：静态 not-taken（禁用 BTB/RAS/LTAGE）
- Cache：直通模式（ICache/DCache bypass，SRAM 直接访问）
- SRAM：256KB TCM 模式

**程序配置：**
```c
// coremark_v1_main.c
#define ITERATIONS      1        // 最小迭代次数
#define TOTAL_DATA_SIZE 2000     // 最小数据集
```

**验证目标：** PC 成功到达 `main` 并执行到第一个函数入口。

### 步骤 2：单函数验证（core_init_matrix）

**目标：** 确认 `core_init_matrix` 函数完整执行并返回。

**方法：**
- 在 RTL 中插入 watchpoint，监视 `core_init_matrix` 入口和返回地址
- 检查矩阵数据指针有效性
- 确认函数返回后 a0 寄存器非零（种子值）

### 步骤 3：主循环单次迭代

**目标：** `core_bench_matrix` 完成一次完整执行。

**方法：**
- 先将 `ITERATIONS` 设为 1
- 确认 `crc32` 计算函数正确累加
- 检查结果结构体字段值非零

### 步骤 4：完整程序退出

**目标：** 程序写入 magic 地址 `0x3FFE0` 并触发 ECALL。

**方法：**
- 持续增加 `TOTAL_DATA_SIZE` 到目标值（2000）
- 确认 TB Scoreboard 收到 `test_done` 信号
- 检查退出码（rc == 0）

### 步骤 5：逐步开放硬件特性

在 Level 1~4 全部 PASS 后，逐级开放硬件特性，每步确认：

```
RV32IM  PASS → 加入 C 扩展 (RV32IMC)  PASS
    → 启用 BTB  PASS
    → 启用 RAS  PASS
    → 启用 LTAGE  PASS
    → 启用超标量 (3-wide)  PASS
    → 启用 ICache/DCache  PASS
    → 增大 ITERATIONS (1 → 10 → 100 → 1000)  PASS
```

> **关键原则：** 每一步开放后如果失败，**立即回退到上一步**确认基线仍正常，然后分析新增特性引入的差异，而不是在复杂配置中漫无目的地翻 trace。

---

## 4. 硬件简化策略

### 4.1 Verilator 编译选项

在调试阶段使用最小配置编译：

```bash
# 非调试阶段（全功能）：
verilator --binary --trace --coverage --timing --top lumi_v1_tb_top ...

# 调试阶段（最小配置）：
verilator --binary --timing --top lumi_v1_tb_top \
  -DCORE_SINGLE_ISSUE=1 \
  -DICACHE_BYPASS=1 \
  -DDCACHE_BYPASS=1 \
  -DBTB_DISABLE=1 \
  -DRAS_DISABLE=1 \
  -DLTAGE_DISABLE=1
```

### 4.2 编译器选项

```bash
# 调试阶段：最小指令集 + 无优化
riscv32-unknown-elf-gcc -march=rv32im -mabi=ilp32 -O0 -g ...

# 全功能阶段：完整指令集 + 优化
riscv32-unknown-elf-gcc -march=rv32imc -mabi=ilp32 -O2 -g ...
```

### 4.3 Testbench 配置

```bash
# 调试阶段：短超时 + 详细 trace
+max_cycles=10000000 +dump_trace +verbose=1

# 全功能阶段：长超时 + 仅进度
+max_cycles=500000000 +progress_interval=1000000
```

---

## 5. 与项目规则关联

| 规则 | 关联说明 |
|------|---------|
| **IT-1** | 本条经验纳入 `knowledge/index.yaml` 索引管理 |
| **HD-3** | 调试思路的反复试错过程记录为失败经验，提炼出正确方法论 |
| **18 (问题不允许跳过)** | CoreMark 问题未跳过，通过四级调试策略持续推进 |
| **21 (Bug 回归测试用例)** | 每一步确认后固化回归测试用例，防止回归 |
| **25 (复杂计划交叉审查)** | 调试计划提出后应使用多模型（GLM/Deepseek）交叉审查逻辑推导 |

---

## 6. 偏差处理

如果按照上述策略调试后仍不通过，可能的偏差原因：

| 现象 | 排查方向 |
|------|---------|
| Level 1 失败 | 启动代码异常、链接脚本错误、TCM 初始化遗漏 |
| Level 1 PASS，Level 2 失败 | ABI 不匹配、栈帧溢出、函数调用约定不一致 |
| Level 2 PASS，Level 3 失败 | 全局数据竞争、未对齐 Load/Store、循环边界错误 |
| Level 3 PASS，Level 4 失败 | 计算结果精度、定点数溢出、编译优化导致的语义差异 |
| 硬件特性开放后失败 | 新增特性与流水线交互有 bug，回退上一步后单独验证该特性 |

---

## 7. 总结

> **调试的第一原则：让系统尽可能简单，然后一步步证明每一层是对的。**
>
> 不要试图在满配下一次性调试复杂程序。满配一旦出错，变量空间太大，trace 文件用 grep 都找不到问题。从"最简单的跑通"开始，每步确认，每步加码——这是最慢但其实最快的方法。

---

## 附录：参考文件

- [CoreMark V1 调试工作总结报告](/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/knowledge/lessons-learned/coremark-v1-debug-summary-20260715.md)
- [T-MS3-S1-7 基准测试调试任务](/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/docs/plans/execution/)
- [RISK-023 V1 Fetch PC 非对齐](/Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/audit/risk-register.yaml)
