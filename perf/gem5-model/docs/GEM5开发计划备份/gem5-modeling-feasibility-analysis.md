# GEM5+ RISC-V CPU 建模 — 技术可行性分析与筹备计划

**文档编号:** LUMI-ARCH-002  
**版本:** 1.0-draft  
**日期:** 2026-06-24  
**状态:** 调研中 (Investigation)  
**关联规则:** [06] 性能评估模型 (high), [12] 基准测试统一化 (medium)  
**适用角色:** hw-design (主要), pm-infra (监督)

---

## 1. 调研背景

根据项目规则 [06] 要求，进入实际项目之前需建立性能评估模型（基于 GEM5+ 的 Cycle Model）。Lumi-Core 是基于 RV32 的实时处理器 IP，面向汽车和工业控制领域，遵循 Quintauris RT-Europa Profile。

本文档对 gem5/gem5+ 框架对 Lumi-Core Profile 所选扩展的技术支持现状进行调研，并制定可行的筹备计划。

---

## 2. gem5 / gem5+ 基础介绍

### 2.1 gem5 模拟器

gem5 是一个模块化的全系统仿真器，支持多种 ISA（ARM、RISC-V、x86 等），提供 4 种 CPU 模型：

| 模型 | 类型 | 适用场景 | Lumi-Core 适用性 |
|------|------|---------|-----------------|
| **AtomicSimpleCPU** | 功能仿真，单周期 | 快速功能验证 | ✅ 验证 ISA 正确性 |
| **TimingSimpleCPU** | 简化时序 | 粗粒度性能估算 | ⚠️ 精度有限 |
| **MinorCPU** | in-order 流水线，可参数化 | 中等精度性能评估 | ✅ **首选建模起点** |
| **O3CPU** | 乱序执行 (Tomasulo) | 高精度性能评估 | ⚠️ 可后期参考 |

gem5 支持通过 `src/arch/riscv/isa/decoder.isa` 添加自定义指令扩展，扩展路径清晰。支持 full-system 和 syscall-emulation 两种仿真模式。

### 2.2 gem5+ 框架

gem5+ 由 Barcelona Supercomputing Center (BSC) 开发，是 gem5 的扩展框架：

- **gem5+rtl**: 在全系统仿真器中集成 RTL 模型的框架
- 可与 **Verilator** 结合，将 RTL 代码转换为 cycle-accurate C++ 仿真模型
- 提供渐进式精度提升路径：**功能仿真 → 时序仿真 → RTL 协同仿真**
- 在 gem5 基础上提供更精确的建模能力，适合从架构探索到 RTL 验证的全流程

---

## 3. Lumi-Core Profile 扩展的 gem5 支持状态

以下基于 Lumi-Core Profile (v1.0-draft) 中定义的扩展，逐一评估 gem5 原生支持情况：

### 3.1 Mandatory 扩展

| 扩展 | 版本 | gem5 支持状态 | 需补充工作 | 预估工作量 |
|------|------|-------------|-----------|-----------|
| **RV32I** | 2.1.0 | ✅ 原生支持 | 无 | 无 |
| **M** | 2.0.0 | ✅ 原生支持 | 无 | 无 |
| **A** | 2.1.0 | ✅ 原生支持 | 无 | 无 |
| **B (Zba/Zbb/Zbc/Zbs)** | 1.0.0 | ⚠️ 部分支持（Zba/Zbb 较新版本已有） | 检查并补全缺失指令 | 低-中 |
| **Zicsr** | 2.0.0 | ✅ 基础支持 | 适配新增 CSR | 低 |
| **Zicntr** | 2.0.0 | ✅ 基础支持 | 验证 cycle/instret/time 计数器 | 低 |
| **Zihpm** | 2.0.0 | ✅ 基础支持 | 配置 HPM 计数器 | 低 |
| **Zce (Zca+Zcb+Zcmp+Zcmt)** | 1.0.0 | ⚠️ 基础 C (Zca) 支持，Zcb/Zcmp/Zcmt 需补 | 添加压缩指令解码逻辑 | **中** |
| **Zicbom** | 1.0.0 | ❌ 需自行实现 | 添加 CBO.INVAL/CLEAN/FLUSH | 低-中 |
| **Zicbop** | 1.0.0 | ❌ 需自行实现 | 添加 PREFETCH.R/W | 低 |
| **Zicboz** | 1.0.0 | ❌ 需自行实现 | 添加 CBO.ZERO | 低 |
| **Zicond** | 1.0.0 | ❌ 需自行实现 | 添加 CZERO.EQZ / CZERO.NEZ（仅 2 条） | 低 |
| **Zihintpause** | 2.0.0 | ⚠️ 可能需添加 | 添加 PAUSE hint 指令 | 低 |
| **Zihintntl** | 1.0.0 | ⚠️ 可能需添加 | 添加 NTL hint 指令 | 低 |
| **Zimop** | 1.0.0 | ❌ 需自行实现 | NOP-like 语义 | 低 |
| **Zcmop** | 1.0.0 | ❌ 需自行实现 | NOP-like 语义 | 低 |
| **Ziccamoa** | 1.0.0 | ✅ 内存模型约束 | 配置一致性属性 | 低 |
| **Zifencei** | 1.0.0 | ✅ 原生支持 | 无 | 无 |
| **Sm** | 1.13.0 | ✅ 基础支持 | 验证 M-mode 特权操作 | 低 |
| **Smpmp** | 1.13.0 | ⚠️ 基础 PMP 框架存在 | 确认 16 条目 + 4KiB 粒度 | 中 |
| **Smepmp** | 1.0.0 | ❌ 需自行实现 | 添加增强 PMP 逻辑 + msecfg CSR | **中** |
| **Smrnmi** | 1.0.0 | ❌ 需自行实现 | 添加 NMI CSR 和处理逻辑 | 低-中 |
| **Smclic** | 0.9.0 | ❌ 需从零实现 | CLIC Machine-mode 接口 | **高** |
| **Ssclic** | 0.9.0 | ❌ 需从零实现 | CLIC Supervisor-mode 接口 | **高** |

### 3.2 Optional 扩展

| 扩展 | 版本 | gem5 支持状态 | 需补充工作 | 预估工作量 |
|------|------|-------------|-----------|-----------|
| **F** | 2.2.0 | ✅ 原生支持 | 无 | 无 |
| **D** | 2.2.0 | ✅ 原生支持 | 无 | 无 |
| **V** | 1.0.0 | ⚠️ 有第三方分支支持 | 可选集成 | 中-高 |
| **Zilsd** | 1.0.0 | ❌ 需自行实现 | 添加加载/存储对指令 | 低 |
| **Zclsd** | 1.0.0 | ❌ 需自行实现 | 添加压缩加载/存储对 | 低 |
| **Zfh** | ~1.0 | ⚠️ 部分支持 | 检查半精度浮点 | 低 |
| **Zfa** | 1.0.0 | ❌ 需自行实现 | 添加附加浮点指令 | 中 |

### 3.3 平台级组件

| 组件 | gem5 支持状态 | 需补充工作 | 预估工作量 |
|------|-------------|-----------|-----------|
| **PLIC** | ✅ 有现成模型参考 | 适配 Lumi-Core 配置 | 低 |
| **CLIC** | ❌ 需从零实现 | 完整 CLIC 中断控制器 | **高** |

### 3.4 支持状态汇总

| 类别 | 数量 | 占比 |
|------|------|------|
| ✅ 原生支持 / 基础支持 | ~12 项 | ~35% |
| ⚠️ 部分支持 / 需验证 | ~8 项 | ~23% |
| ❌ 需自行实现（简单） | ~10 项 | ~29% |
| ❌ 需自行实现（中等） | ~3 项 | ~8% |
| ❌ 需从零实现（高难度） | ~1 项 (CLIC) | ~5% |

---

## 4. 关键风险与挑战

### 4.1 CLIC 中断控制器（风险：高）

gem5 没有原生 CLIC 支持，需从零实现：
- CSR 接口：`mcliccfg`, `mclclicint[i]`, `mnxti`, `mintstatus`, `mintthresh` 等
- 优先级仲裁逻辑（0–255 优先级，256 中断级别）
- 硬件向量化机制（mtvec Vectored 模式 + CLIC 向量化）
- 中断嵌套与抢占逻辑
- 与 gem5 中断分发机制集成

**缓解措施：**
- 参考 QEMU/Renode 的 CLIC 实现作为参考
- 分阶段实现：先功能正确（AtomicSimpleCPU）再时序精确（MinorCPU）
- 如两天内无进展，触发 HD-2 回退预警

### 4.2 较新扩展指令补全（风险：中）

Zicond、Zce 子扩展（Zcb/Zcmp/Zcmt）、CMO 指令需添加到 decoder.isa，单条指令简单但数量较多，且需注意编码空间冲突。

**缓解措施：**
- 逐扩展添加，每个扩展完成后立即回归测试
- 仔细审查压缩指令编码空间，避免与现有 C 扩展冲突

### 4.3 确定性建模（风险：中）

Lumi-Core 强调确定性执行和低延迟中断响应，需在 gem5 中精确建模：
- 中断响应延迟的可预测性
- CSR 读写延迟
- 流水线级联效应

**缓解措施：**
- 与 RTL 仿真结果交叉校准
- 记录偏差并持续校准模型参数

### 4.4 MinorCPU 微架构适配（风险：中）

需将 MinorCPU 参数化匹配 Lumi-Core 的 in-order 流水线特征：
- 流水线阶段配置（Fetch → Decode → Execute → Memory → Writeback）
- 分支预测策略
- IQ/LQ/SQ 大小
- 缓存配置（64 字节缓存块）

**缓解措施：**
- 初期使用 MinorCPU 默认参数进行快速验证
- 逐步调整参数以匹配目标微架构

### 4.5 gem5+rtl 框架成熟度（风险：低，远期）

gem5+rtl 框架仍在发展中，可能存在接口变更。

**缓解措施：**
- 持续跟踪 BSC gem5+ 项目进展
- 备选方案：纯 Verilator + RTL 独立仿真

---

## 5. 可行性结论

### 总体评估：**可行，中等风险**

- gem5 的模块化架构天然支持自定义扩展，MinorCPU 作为 in-order 模型是合适的建模起点
- 约 35% 的 Lumi-Core Profile 扩展 gem5 原生支持或仅需微调
- 主要工作量集中在 **CLIC 实现**（约占 40% 工作量）和**扩展指令补全**（约占 30% 工作量）
- gem5+rtl 路径可在 RTL 设计成熟后集成，实现精度渐进提升
- 建议按阶段推进，每阶段设置明确的验证点

---

## 6. 筹备计划

### 阶段 0：环境搭建与基线验证

**Task 0.1: gem5 开发环境搭建**
- 在 `perf/gem5-model/` 下建立目录结构：
  - `configs/` — 仿真配置脚本
  - `patches/` — gem5 源码补丁
  - `scripts/` — 构建与运行脚本
  - `docs/` — 建模设计文档
  - `tests/` — 回归测试
- 克隆 gem5 官方仓库（v24.0+ 稳定分支），编译 RISC-V ISA 版本
- 验证 gem5 原生 RISC-V 示例可运行（如 `se.py` 运行简单 RV32 程序）
- 记录 gem5 版本、编译环境、依赖版本
- **验证点：** gem5 能正确执行 RV32I + M 指令集程序

**Task 0.2: 基线功能验证**
- 使用 AtomicSimpleCPU 运行基础 RV32I 测试程序
- 确认 gem5 的 RV32 full-system / syscall-emulation 模式可用
- 记录基线性能数据（指令执行数、仿真时间）

### 阶段 1：扩展指令补全

**Task 1.1: B 扩展支持验证与补全**
- 检查 gem5 对 Zba/Zbb/Zbc/Zbs 的支持状态
- 在 `decoder.isa` 中添加缺失指令
- 编写针对性测试用例

**Task 1.2: Zce 压缩指令补全**
- 确认 gem5 对基础 C 扩展（Zca）的支持
- 添加 Zcb / Zcmp / Zcmt 解码逻辑
- 验证压缩指令与标准指令等价性

**Task 1.3: Zicond / CMO / Hint / MOP 指令添加**
- Zicond：CZERO.EQZ / CZERO.NEZ
- Zicbom/Zicbop/Zicboz：CBO.* + PREFETCH.*
- Zihintpause/Zihintntl：hint 指令
- Zimop/Zcmop：May-Be Operations（NOP 语义）

### 阶段 2：特权架构与中断建模

**Task 2.1: PMP / Smepmp 实现**
- 审查 gem5 现有 PMP 实现，确认 16 条目 + 4KiB 粒度
- 添加 Smepmp 增强功能
- 实现 `msecfg` CSR

**Task 2.2: CLIC 中断控制器建模（关键路径）**
- 设计 CLIC 模型架构，作为 gem5 C++ 对象实现
- 实现 CSR 接口、优先级仲裁、向量化、嵌套抢占
- 集成 CLIC 本地中断源和外部中断输入
- **风险登记：** 如遇阻碍，记录到 `audit/risk-register.yaml`

**Task 2.3: PLIC 模型集成**
- 基于 gem5 现有 PLIC 模型适配
- 配置 PLIC → CLIC 的 MEIP/SEIP 信号连接

**Task 2.4: Smrnmi (NMI) 实现**
- 实现 `mnmi` CSR 和 NMI 处理逻辑
- NMI 最高优先级，可抢占任何低优先级处理

### 阶段 3：CPU 微架构建模

**Task 3.1: MinorCPU 参数化适配**
- 分析 Lumi-Core 微架构特征
- 参数化 MinorCPU 匹配 in-order 流水线
- 创建 `perf/gem5-model/configs/lumi-core.py`

**Task 3.2: 缓存与内存系统建模**
- 配置 L1 I-Cache / D-Cache（64 字节缓存块）
- 配置内存系统模型
- 实现 CMO 指令与缓存模型交互
- 配置 PMA 区域

**Task 3.3: 确定性时序校准**
- 验证中断响应延迟可预测性
- 测量关键路径时序
- 与架构设计文档对比校准

### 阶段 4：基准测试集成

**Task 4.1: CoreMark 基准测试集成**
- 在 `perf/benchmarks/` 下建立统一配置（规则 [12]）
- 移植 CoreMark，使用 RISC-V 工具链编译（启用 Lumi-Core Profile 扩展）
- 创建 `perf/benchmarks/coremark/config.yaml` 统一参数配置
- **合规要求：** 确认编译器版本、优化等级、编译参数、迭代次数、数据大小、计时方式完整记录后才可引用性能数据

**Task 4.2: 其他基准测试**
- 添加 Dhrystone 基准测试
- 添加中断延迟基准测试（CLIC 中断响应时间）
- 统一管理参数和运行脚本

### 阶段 5：gem5+rtl 集成路径（远期）

**Task 5.1: gem5+rtl 框架调研与选型**
- 调研 gem5+rtl 最新版本和 RISC-V 支持状态
- 评估 Verilator 集成方案可行性
- 确定过渡路径

**Task 5.2: RTL 协同仿真原型**
- 在 RTL 设计成熟后建立 gem5+rtl 原型
- 将 CPU core RTL 通过 Verilator 转换为 C++ 模型
- 集成到 gem5 全系统仿真环境

### 阶段 6：验证与文档

**Task 6.1: 模型验证与校准**
- 建立 gem5 模型与 RTL 仿真结果的交叉验证机制
- 对比关键指标（CPI、中断延迟等）
- 记录偏差并校准模型参数

**Task 6.2: 文档与知识库**
- 编写 `perf/gem5-model/docs/model-design.html` 建模设计文档
- 记录所有自定义扩展实现方式和补丁清单
- 经验教训写入 `knowledge/lessons-learned/`

---

## 7. 关键里程碑

| 里程碑 | 完成标志 | 关联规则 |
|--------|---------|---------|
| **M-GEM5-1: 基线就绪** | 阶段 0–1 完成，全部 Mandatory 扩展功能正确 | [06] perf/gem5-model/ 有可运行模型 |
| **M-GEM5-2: 系统级建模** | 阶段 2–3 完成，CLIC + PLIC + PMP 可用 | [10] 门禁报告 PASS |
| **M-GEM5-3: 性能评估** | 阶段 4 完成，CoreMark 等基准测试可运行 | [12] 基准测试统一化 |
| **M-GEM5-4: RTL 协同** | 阶段 5 完成，gem5+rtl 原型可用 | [06] Cycle Model 可运行 |

---

## 8. 风险登记摘要

| 风险 | 严重度 | 缓解措施 |
|------|--------|---------|
| CLIC 实现复杂度超预期 | 高 | 参考 QEMU/Renode CLIC 实现；分阶段实现（先功能正确再时序精确） |
| gem5 版本升级导致补丁冲突 | 中 | 锁定 gem5 版本，建立补丁管理机制 |
| Zce 子扩展 decoder 冲突 | 中 | 仔细检查压缩指令编码空间 |
| 确定性建模精度不足 | 中 | 对比 RTL 仿真结果校准；记录偏差原因 |
| gem5+rtl 框架成熟度 | 低 | 持续跟踪 BSC gem5+ 项目；备选方案：纯 Verilator + RTL |

---

## 9. GEM5+ 能力边界分析

### 9.1 能力对比矩阵

| 验证维度 | GEM5+ 能力 | 替代工具 | 推荐阶段 |
|---------|-----------|---------|---------|
| ISA 功能正确性 | ✅ 优秀（AtomicSimpleCPU） | QEMU, Spike | 架构设计期 |
| 微架构性能评估 | ✅ 良好（MinorCPU） | - | 架构设计期 |
| 中断延迟估算 | ⚠️ 中等（需校准） | RTL 仿真 | 设计验证期 |
| 系统级基准测试 | ✅ 优秀 | FPGA 原型 | 集成测试期 |
| RTL 时序收敛 | ❌ 不支持 | DC, Genus | RTL 设计期 |
| 功耗面积评估 | ❌ 不支持 | PrimePower, Design Compiler | RTL 设计期 |
| 形式验证 | ❌ 不支持 | JasperGold, OneSpin | RTL 设计期 |
| 安全认证 WCET | ❌ 不支持 | aiT, Bound-T | Sign-off 期 |
| Cycle-accurate 仿真 | ⚠️ 需 gem5+rtl | Verilator, VCS | RTL 验证期 |

### 9.2 GEM5+ 能做的（优势领域）

#### 9.2.1 架构探索与早期性能评估
- **在 RTL 编写前**就能评估不同微架构配置的性能（CPI、吞吐量等）
- 通过 MinorCPU 参数化快速探索流水线深度、IQ/LQ/SQ 大小等设计空间
- 对比不同缓存配置（大小、关联度、缓存块大小）对性能的影响

#### 9.2.2 ISA 扩展功能验证
- 验证 Lumi-Core Profile 中自定义扩展的**功能正确性**
- 快速测试新添加的指令（Zicond、Zce 子扩展、CMO 指令等）
- 在 AtomicSimpleCPU 上进行单周期功能仿真，确认指令语义正确

#### 9.2.3 中断系统建模与延迟分析
- 建模 CLIC 中断控制器的优先级仲裁、嵌套抢占逻辑
- **测量中断响应延迟**（从硬件中断触发到 ISR 第一条指令执行）
- 评估不同中断负载下的系统行为
- 验证硬件向量化机制的正确性

#### 9.2.4 系统级性能基准测试
- 运行 CoreMark、Dhrystone 等标准基准测试
- 在统一环境下对比不同配置的性能数据（规则 [12] 要求）
- 生成可复现的性能报告，记录编译器版本、优化等级等参数

#### 9.2.5 软件生态早期验证
- 在 syscall-emulation 模式下运行裸机程序
- 在 full-system 模式下运行 FreeRTOS/Zephyr 等 RTOS
- 验证 BSP、驱动、工具链的兼容性

#### 9.2.6 内存系统与缓存一致性验证
- 建模 PMP/Smepmp 内存保护机制
- 验证 CMO 指令（CBO.INVAL/CLEAN/FLUSH/ZERO）的缓存行为
- 测试不同内存访问模式下的缓存命中率

#### 9.2.7 渐进式精度提升路径（gem5+rtl）
- 从功能仿真（AtomicSimpleCPU）→ 时序仿真（MinorCPU）→ RTL 协同仿真
- 后期可将 RTL 通过 Verilator 集成到 gem5 全系统环境
- 实现 CPU 核的 cycle-accurate 仿真，同时保留系统级建模能力

### 9.3 GEM5+ 不能做的（局限性）

#### 9.3.1 不能替代 RTL 级功能验证
- ❌ 无法验证 RTL 代码的时序收敛、建立/保持时间
- ❌ 无法检测综合后的逻辑综合问题（glitch、毛刺等）
- ❌ 不能替代形式验证工具（如 JasperGold）进行等价性检查

#### 9.3.2 不能精确建模物理特性
- ❌ 无法评估功耗、面积、时钟频率
- ❌ 不能预测布线延迟、时钟树偏移
- ❌ 无法分析信号完整性、电磁兼容性问题

#### 9.3.3 自定义扩展需要大量开发工作
- ⚠️ CLIC 中断控制器需从零实现（gem5 无原生支持）
- ⚠️ Zicond、Zce 子扩展、CMO 指令需手动添加到 `decoder.isa`
- ⚠️ Smepmp、Smrnmi 等特权扩展需自行实现 CSR 逻辑
- ⚠️ 约 65% 的 Lumi-Core Profile 扩展需要补充开发

#### 9.3.4 确定性建模精度有限
- ⚠️ MinorCPU 是参数化模型，**不是 cycle-accurate**
- ⚠️ 中断响应延迟可能与实际 RTL 有偏差
- ⚠️ 需要与 RTL 仿真结果交叉校准，持续调整模型参数

#### 9.3.5 无法验证硬件安全机制
- ❌ 无法评估侧信道攻击防护（如时序攻击、功耗分析）
- ❌ 不能验证 PMP 配置的物理隔离效果
- ❌ 无法测试故障注入攻击的抵抗能力

#### 9.3.6 gem5+rtl 框架成熟度风险
- ⚠️ gem5+rtl 仍在发展中，可能存在接口变更
- ⚠️ Verilator 集成方案的文档和示例有限
- ⚠️ 备选方案：纯 Verilator + RTL 独立仿真

#### 9.3.7 不适用于实时性严格验证
- ⚠️ 对于汽车安全（ISO 26262）要求的 WCET（最坏情况执行时间）分析
- ❌ gem5 的时序模型不够精确，需依赖专业工具（如 aiT、Bound-T）
- ⚠️ 只能提供**估算值**，不能作为安全认证依据

---

## 10. 在 Lumi 项目中的推荐用法

根据能力边界分析，建议按以下阶段推进 GEM5+ 建模工作：

### 10.1 阶段 0-1：ISA 扩展功能验证（当前阶段）
- **目标：** 确保自定义指令语义正确
- **CPU 模型：** AtomicSimpleCPU（单周期功能仿真）
- **关键任务：**
  - 验证 B 扩展（Zba/Zbb/Zbc/Zbs）功能正确性
  - 添加并测试 Zce 子扩展（Zcb/Zcmp/Zcmt）
  - 验证 Zicond、CMO、Hint、MOP 指令
- **验收标准：** 所有 Mandatory 扩展通过功能回归测试

### 10.2 阶段 2-3：中断系统建模与微架构探索
- **目标：** 评估 CLIC 中断延迟和微架构性能
- **CPU 模型：** MinorCPU（参数化 in-order 流水线）
- **关键任务：**
  - 实现 CLIC 中断控制器模型（关键路径）
  - 建模 PMP/Smepmp 内存保护机制
  - 参数化 MinorCPU 匹配 Lumi-Core 流水线特征
  - 配置缓存和内存系统
- **验收标准：**
  - CLIC 中断嵌套、抢占逻辑功能正确
  - 中断响应延迟可测量并与设计文档对比
  - 缓存配置与 platform-spec.html 一致

### 10.3 阶段 4：系统级基准测试与性能基线建立
- **目标：** 运行标准基准测试，建立性能基线
- **CPU 模型：** MinorCPU（时序仿真）
- **关键任务：**
  - 集成 CoreMark、Dhrystone 基准测试（规则 [12]）
  - 运行中断延迟基准测试
  - 记录完整的编译环境和运行参数
- **合规要求：**
  - 确认编译器版本、优化等级、编译参数、迭代次数、数据大小、计时方式完整记录
  - 性能数据引用前必须通过规则 [05] 审查
- **验收标准：** 生成可复现的性能报告，所有参数记录完整

### 10.4 阶段 5：RTL 协同仿真（RTL 成熟后）
- **目标：** 实现 cycle-accurate 系统级仿真
- **技术路径：** gem5+rtl + Verilator
- **关键任务：**
  - 将 CPU core RTL 通过 Verilator 转换为 C++ 模型
  - 集成到 gem5 全系统仿真环境
  - 建立 gem5 模型与 RTL 仿真结果的交叉验证机制
- **验收标准：**
  - gem5 模型与 RTL 仿真的 CPI、中断延迟偏差 < 10%
  - 记录偏差原因并持续校准模型参数

### 10.5 全生命周期：与 RTL 仿真交叉校准
- **始终执行：**
  - 对比关键指标（CPI、中断延迟、缓存命中率）
  - 记录偏差并分析原因
  - 更新 MinorCPU 参数以匹配 RTL 行为
  - 维护补丁版本锁定机制（避免 gem5 版本升级冲突）

---

## 11. 架构决策总结

### 11.1 GEM5+ 在 Lumi 项目中的核心定位

**GEM5+ 是 Lumi 开发的架构探索工具和系统级验证平台**，核心价值在于：

1. **RTL 编写前的性能洞察：** 在微架构设计阶段就能评估不同配置的性能影响
2. **ISA 扩展快速验证：** 在 AtomicSimpleCPU 上快速验证自定义指令功能正确性
3. **系统级软件生态验证：** 在 full-system 模式下运行 RTOS、BSP、驱动
4. **渐进式精度提升：** 从功能仿真 → 时序仿真 → RTL 协同仿真的平滑过渡路径

### 11.2 不能替代的工具链

GEM5+ **不能替代**以下工具，需配合使用：

| 工具类别 | 典型工具 | GEM5+ 无法替代的原因 |
|---------|---------|-------------------|
| RTL 综合与时序分析 | Design Compiler, Genus | 无法验证物理实现和时序收敛 |
| 形式验证 | JasperGold, OneSpin | 无法进行等价性检查和属性验证 |
| 功耗面积评估 | PrimePower, Design Compiler | 无法评估物理特性 |
| WCET 分析（安全认证） | aiT, Bound-T | 时序模型不够精确，不能作为 ISO 26262 认证依据 |
| RTL 级功能验证 | VCS, Xcelium, Verilator | 无法验证门级行为和时序问题 |

### 11.3 关键风险提示

1. **CLIC 实现复杂度：** 占总体工作量约 40%，需参考 QEMU/Renode 实现，分阶段推进
2. **自定义扩展开发量：** 约 65% 的 Lumi-Core Profile 扩展需补充开发，预计占总工作量 30%
3. **模型精度校准：** MinorCPU 不是 cycle-accurate，需与 RTL 仿真持续校准
4. **gem5+rtl 成熟度：** 远期方案存在接口变更风险，需跟踪 BSC gem5+ 项目进展

### 11.4 与其他工具的协同策略

```
架构设计期: GEM5+ (MinorCPU) → 微架构参数探索
         ↓
RTL 设计期: RTL 仿真 (VCS/Verilator) + 形式验证 (JasperGold)
         ↓
RTL 验证期: GEM5+rtl (RTL 协同仿真) + 系统级基准测试
         ↓
Sign-off:  专业工具 (aiT for WCET, PrimePower for 功耗)
```

---

## 附录 A：参考资料

| 来源 | 说明 |
|------|------|
| [gem5 官方网站](https://www.gem5.org/) | gem5 文档、CPU 模型说明 |
| [gem5-riscv-ccc fork](https://github.com/tud-ccc/gem5-riscv-ccc) | 支持 RISC-V full-system + 自定义扩展的 gem5 fork |
| [gem5+rtl 论文](https://arxiv.org/pdf/2304.08880) | gem5+rtl: A framework to enable RTL models inside a full-system simulator |
| [MinorCPU 文档](https://www.gem5.org/documentation/general_docs/cpu_models/minor_cpu) | in-order CPU 模型参数与配置 |
| [Adding instructions to gem5](https://gem5bootcamp.github.io/gem5-bootcamp-env/modules/developing%20gem5%20models/instructions/) | 自定义指令添加教程 |
| [Extending Gem5 with custom RISC-V commands](https://fleker.medium.com/extending-gem5-with-custom-risc-v-commands-653eeefe83b8) | 端到端自定义 RISC-V 指令流程 |
| [CVA6 gem5 model](https://upcommons.upc.edu/bitstreams/27f7e723-3a48-430b-baf2-be9920fe145a/download) | 开源 RISC-V CVA6 gem5 建模案例 |
| [Renode CLIC 支持](https://antmicro.com/blog/2024/09/fast-interrupt-controller-for-risc-v-simulated-in-renode) | Renode 中 RISC-V CLIC 实现参考 |
| [pulp-platform/clic](https://github.com/pulp-platform/clic) | RISC-V CLIC 开源参考实现 |
| Lumi-Core Profile (本文档 REF) | `docs/profile/Lumi-Core-Profile.md` |

---

## 附录 B：变更记录

| 日期 | 版本 | 变更内容 | 作者 |
|------|------|---------|------|
| 2026-06-24 | 1.0-draft | 初始版本 — GEM5+ 建模技术可行性调研与筹备计划 | Lumi Project |
