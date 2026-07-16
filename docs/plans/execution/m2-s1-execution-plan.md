# M2-S1 详细设计执行计划

## 概述

| 属性 | 值 |
|------|-----|
| Stage | M2-S1 (详细设计) |
| 所属 Milestone | M2 (详细设计与验证框架完成) |
| 时间范围 | 2026-10 ~ 2026-12 (12 周) |
| 核心交付物 | 14 份模块设计文档、GEM5+ 微架构模型、RTL 骨架、验证方案定版 |
| 参与角色 | hw-design / hw-ver / pm-infra / qa-audit |
| 门禁标准 | 见 [milestone-plan.yaml](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/docs/project/milestone-plan.yaml) M2 gates |

## 前置条件 (M1 已完成)

- PRD v1.0 定版 (BL-1.1 基线, 99 条需求)
- 架构说明书 v1.0 定版 ([platform-spec.html](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/docs/architecture/platform-spec.html))
- Lumi-Core Profile 定版
- GEM5+ 性能模型 + 中断建模已完成 (FS 模式 4/4 PASS)
- 验证策略框架 + 覆盖率计划 (26 个 cover group) 已建立
- 全部 4 个 agent 已进入 M2-S1 阶段

---

## Task 0: 微架构详细审查 (Pre-Design Review)

**负责角色**: hw-design (主导) + hw-ver (可测试性视角) | **Phase**: architecture | **时间**: Week 1-2

**目的**: 在进入 14 份模块详细设计文档之前，对 M1 定版的微架构进行一轮全面审查，确认流水线划分、模块边界、接口定义和数据通路是否需要调整，避免设计阶段返工。

### Task 0.1: 流水线架构审查

审查 8 级流水线 (F1→F2→D→I→E1→E2→M→W) 的阶段划分合理性:

| 审查项 | 审查内容 | 关注问题 |
|--------|---------|---------|
| 流水线深度 | 8 级是否为最优分割？是否存在可合并或需拆分的阶段？ | E1/E2 是否需要合并为单级？M 级是否需要拆分 Load/Store？ |
| 发射策略 | 三发射 (3x ALU + 1x MUL/DIV + 1x LSU + 1x FPU + 1x Branch) 的 FU 配比是否合理？ | ALU 饱和是否仍为主瓶颈？是否需要 4x ALU？FPU 是否需要独立发射槽？ |
| 分支预测集成 | LTAGE 预测器与 F1/F2 级的接口是否清晰？误预测 flush 路径是否完整？ | 误预测惩罚 3cycle (flush F2+D+I) 是否可接受？是否可减少到 2cycle？ |
| 旁路网络 | E1→D, E2→D, M→D 旁路路径是否覆盖所有 RAW 场景？ | 是否需要 W→D 旁路？FPU 结果旁路路径是否需要独立设计？ |
| 冒险处理 | Load-Use stall (1cycle) 的检测逻辑和 stall 传播是否完整？ | MUL/DIV 多周期占用的 stall 传播路径是否清晰？Vector 多周期如何处理？ |

**审查方法**: 基于 [platform-spec.html §4](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/docs/architecture/platform-spec.html) 微架构定义，逐级绘制数据通路图和时序图，标注所有 stall/flush/forward 路径。

### Task 0.2: 模块划分审查

审查 14 份设计文档的模块边界是否合理:

| 审查项 | 审查内容 | 关注问题 |
|--------|---------|---------|
| 文档聚合度 | 当前 14 份文档的模块划分是否内聚？是否存在跨文档的强耦合？ | `decode-issue.html` 合并 D/I 级是否合理？还是应拆分为 `decode.html` + `issue.html`？ |
| `execute-alu.html` 合并 E1/E2 | ALU + MUL/DIV 在同一文档是否合理？ | MUL/DIV 多周期逻辑是否应独立为 `execute-muldiv.html`？ |
| `interrupt-clic-plic.html` 合并 | CLIC + PLIC + 异常处理三合一是否过于庞大？ | 是否应拆分为 `clic.html` + `plic.html` + `exception.html`？ |
| `multicore-dft.html` 合并 | 多核锁步 + DFT + 安全三合一是否过于庞大？ | 是否应拆分为 `multicore.html` + `dft.html` + `security.html`？ |
| `fpu-vector.html` 合并 | FPU + Vector 在同一文档是否合理？ | FPU 和 Vector 的功能单元独立，是否应拆分？ |
| 模块边界清晰度 | 各模块的输入/输出信号边界是否清晰定义？ | CSR 文件是独立模块还是嵌入 W 级？PMA 检查器是独立模块还是嵌入 LSU？ |

**审查输出**: 模块划分调整建议 (如有)，包括文档拆分/合并方案和理由。

### Task 0.3: 模块间接口审查

审查模块间接口定义的完整性和一致性:

| 接口 | 审查内容 | 关注问题 |
|------|---------|---------|
| Core ↔ Memory | 流水线 M 级与 TCM/Cache 的接口时序是否明确？ | Load 数据返回时序 (TCM 0/1拍 vs Cache 1+拍) 如何统一处理？ |
| Core ↔ CSR | CSR 读写端口与流水线 D/W 级的接口是否清晰？ | CSR 读是否在 D 级完成？CSR 写是否在 W 级提交？旁路是否需要？ |
| Core ↔ Interrupt | 中断注入点 (W 级) 与流水线的交互是否完整？ | 中断响应时序 (≤16cycle) 的预算分配是否合理？CLIC 仲裁占用几拍？ |
| Core ↔ Debug | Debug halt/resume 与流水线的交互是否定义？ | Halt 在哪个流水线级生效？Resume 后流水线如何重新填充？ |
| Core ↔ FPU/Vector | FPU/Vector 功能单元与 Issue 级的接口是否清晰？ | FPU 多周期指令如何与流水线同步？Vector 长指令是否需要独立 issue 机制？ |
| Memory ↔ Bus | TCM/Cache 与 AXI 总线的接口是否清晰？ | Cache miss 时 AXI 请求如何发起？TCM DMA 从接口与主接口的仲裁？ |
| Interrupt ↔ Bus | CLIC/PLIC MMIO 访问路径是否清晰？ | PLIC 寄存器通过 AXI 访问还是直连？地址映射一致性？ |
| multicore ↔ Core | 锁步比较器的接入点在哪个流水线级？ | 比较粒度 (指令级) 的具体接入信号是什么？ |

**审查方法**: 绘制模块间接口框图，标注每个接口的信号清单、时序关系和握手协议。

### Task 0.4: 性能模型交叉校验

基于 GEM5+ 性能模型验证微架构假设:

| 校验项 | 方法 | 预期结果 |
|--------|------|---------|
| 流水线延迟 | gem5 MinorCPU 参数与 platform-spec §4.2 对齐 | 8 级流水线参数一致 |
| 发射宽度 | gem5 issueWidth=3 与 spec §4.5 对齐 | 三发射配置一致 |
| FU 配比 | gem5 FU 数量与 spec §4.3 对齐 | 3xALU/1xMUL/1xLSU/1xFPU/1xBranch |
| 旁路网络 | gem5 forwardPath 配置与 spec §4.6.1 对齐 | E1/E2/M→D 旁路一致 |
| 中断延时 | gem5 中断测试验证 ≤16cycle | 当前实测值 vs 目标 |
| 性能基线 | CoreMark/Dhrystone 跑分与 spec §4.1 对齐 | CoreMark ≥5.5, Dhrystone ≥3.8 |

**审查输出**: GEM5 参数与 spec 差异清单 (如有)，以及微架构参数调整建议。

### Task 0.5: 审查输出与架构修正

| 交付物 | 路径 | 内容 |
|--------|------|------|
| 微架构审查报告 | `docs/architecture/m2-s1-microarch-review.html` | 审查结论、调整建议、风险评估 |
| 架构说明书修正 (如有) | `docs/architecture/platform-spec.html` (更新) | 必要的微架构参数调整 |
| 模块划分确认表 | 审查报告附录 | 最终确认的文档清单 (14 份或调整后的数量) |
| Change Notices | `agents/*/change-notices/` | 审查结论通知各角色 |

**审查决策机制**:
- hw-design 主导审查，提出调整建议
- hw-ver 从可测试性角度提供意见 (DFT 插入点、观测点可行性)
- pm-infra 记录审查决策到指令日志 (规则 16)
- 重大调整需用户确认后方可修改 platform-spec.html

**Week 2 检查点**: 审查报告完成，模块划分最终确认，后续文档清单冻结。如无调整则直接进入 Task 1；如有调整则更新文档清单后再进入。

---

## Task 1: 14 份模块设计文档 (T2.1)

**负责角色**: hw-design | **Phase**: design | **路径**: `docs/design/` | **格式**: HTML

> **前置依赖**: Task 0 微架构审查完成，文档清单冻结。以下文档清单为初始规划，最终以 Task 0 审查结论为准。

**文档标准章节** (7 标准章节, 承接规则 08):
1. 模块概述与范围
2. 接口信号定义 (端口、时序、协议)
3. 内部微架构 (状态机、数据通路)
4. 配置参数与可选特性
5. 需求追溯矩阵 (每条 REQ-ID 必须承接 platform-spec.html)
6. 设计约束 (面积/时序/功耗预估)
7. 可测试性考量 (DFT 插入点、MBIST 接口)

### Task 1.1: Batch-1 核心流水线 (P0, Week 3-6)

| # | 文件 | 内容 | 承接需求 | 验收要点 |
|---|------|------|---------|---------|
| 1 | `fetch-bpred.html` | F1/F2 级 + LTAGE 分支预测 | LUMI-PIPE-001, LUMI-IPC-001 | LTAGE 12表参数、BTB 8192条目、RAS 32条目、误预测惩罚 3cycle |
| 2 | `decode-issue.html` | D/I 级三发射 + 冒险处理 | LUMI-IPC-001, LUMI-ISA-001~008 | 发射仲裁逻辑、旁路网络 E1/E2/M→D、FU 分配规则、Load-Use stall |
| 3 | `execute-alu.html` | E1/E2 级 ALU+MUL/DIV | LUMI-ISA-001/002/006 | 3x ALU 功能定义、MUL 3cycle/DIV 迭代、位操作扩展 |
| 4 | `writeback-csr.html` | W 级 + CSR + HPM 计数器 | LUMI-ISA-011, LUMI-PROF-001/002 | Zicntr/Zihpm 完整 CSR 映射、29 个 HPM 事件、异常/中断提交 |
| 5 | `regfile.html` | 整数/浮点/向量寄存器堆 | LUMI-ISA-004/007 | 三读二写整数堆、FP NaN-Boxing、向量多 Bank 结构 |

**Week 6 检查点**: Batch-1 文档 hw-design 内部评审完成, 通知 hw-ver 进行可测试性审查。

### Task 1.2: Batch-2 内存与接口 (P1, Week 6-7)

| # | 文件 | 内容 | 承接需求 | 验收要点 |
|---|------|------|---------|---------|
| 6 | `tcm.html` | ITCM/DTCM 控制器 + ECC | LUMI-MEM-002~005 | 容量配置 0~128KB、三区域划分、0/1拍延迟、ECC SECDED、DMA 从接口 |
| 7 | `cache.html` | L1 I/D-Cache | LUMI-MEM-006~008 | 容量 8/16/32KB 可配、ECC 保护、RVWMO 内存序模型 |
| 8 | `pma-axi.html` | PMA 检查器 + AXI 总线 | LUMI-MEM-009, LUMI-IF-001/002 | 3~6 PMA 区域、7 种内存属性、AXI4 128bit 主总线 + 32bit FFP |

### Task 1.3: Batch-3 中断/特权/调试 (P1, Week 7-8)

| # | 文件 | 内容 | 承接需求 | 验收要点 |
|---|------|------|---------|---------|
| 9 | `interrupt-clic-plic.html` | CLIC + PLIC + 异常处理 | LUMI-SYS-001~003 | CLIC 1~240 中断、PLIC 32~960 中断、≤16cycle 中断延时、异常优先级排序 |
| 10 | `privilege-pmp.html` | 特权架构 + PMP/Smepmp | LUMI-MEM-001, LUMI-SEC-004 | M/S/U 三模式、TOR/NA4/NAPOT、Smepmp MML/MMWP/RLB、陷阱委托 |
| 11 | `debug-trace.html` | JTAG Debug + Nexus Trace | LUMI-FEAT-001~004 | Debug Module 寄存器映射、Abstract Command、Trace 编码、AXI4 写出 |

**Week 8 检查点**: Batch-1~3 共 11 份文档完成, qa-audit 执行中期审计。

> 如 Task 0 审查调整了文档清单，此处“11 份”以实际为准。

### Task 1.4: Batch-4 扩展 (P2, Week 9-10)

| # | 文件 | 内容 | 承接需求 | 验收要点 |
|---|------|------|---------|---------|
| 12 | `fpu-vector.html` | FPU + Vector 单元 | LUMI-ISA-004/007/009/010 | FPU FADD 4cycle/FMUL 4cycle、RVV1.0 VLEN=128/256、zvfh/zvfbf、可选 Vector Crypto |
| 13 | `power-reset.html` | 低功耗 + 复位 + 时钟域 | LUMI-SYS-004/005/008, LUMI-PWR, LUMI-CLK | WFI/WRS、Active/Sleep/DeepSleep 三态、Clock Gating、多时钟域、UPF 电源约束 |
| 14 | `multicore-dft.html` | 多核锁步 + DFT + 安全 | LUMI-MCORE/DFT/SAFE/SEC | 1~4 核拓扑、锁步指令级比较、Scan Chain、MBIST、JTAG 边界扫描、安全启动/调试锁定 |

**Week 10 检查点**: 14 份文档全部完成, 进入门禁审计准备。

### Task 1.5: 文档质量保障

- **需求覆盖**: 99 条 PRD 需求 (BL-1.1) 必须 100% 被至少 1 份文档承接 (规则 08)
- **追溯矩阵**: 每份文档第 5 章列出所有承接的 REQ-ID 和对应的 platform-spec.html 章节
- **交叉引用**: 文档间的依赖关系用超链接标注 (如 `interrupt-clic-plic.html` 引用 `privilege-pmp.html` 的 CSR 定义)
- **配置一致性**: 所有可配置参数与 [platform-spec.html §10](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/docs/architecture/platform-spec.html) 的 23 个配置项保持一致

---

## Task 2: GEM5+ 微架构扩展 (T2.3)

**负责角色**: hw-design | **Phase**: design/implementation | **路径**: `perf/gem5-model/`

### Task 2.1: P0 优先级 (Week 2-5)

> Week 2 可与 Task 0 审查并行启动 (GEM5 环境准备 + 参数核对), Week 3-5 正式开发。

| 子任务 | 描述 | 验收标准 | 复用 Skill |
|--------|------|---------|-----------|
| 中断延时精化 | 精化 CLIC 中断延时模型，验证 ≤16cycle | 中断测试套件 PASS (≤16cycle) | skill-interrupt-model |
| PMA 检查器 | 集成 PMA Checker 到 gem5 RISC-V 模型 | 3 个默认 PMA 区域属性检查正确 | 参考 gem5/src/arch/riscv/pma_checker.hh |
| LTAGE 预测器 | 替换现有分支预测器为 LTAGE | 12 表配置、256Kbits 总量、CoreMark 无退化 | 无 (新实现) |

### Task 2.2: P1 优先级 (Week 5-8)

| 子任务 | 描述 | 验收标准 |
|--------|------|---------|
| FPU/Vector FU 模型 | 添加 FPU 和 Vector 功能单元模型 | FADD/FMUL 4cycle、RVV 基础指令可执行 |
| TCM/Cache 参数化 | TCM 容量/延迟和 Cache 容量参数化配置 | 支持 8/16/32/64/128KB TCM、8/16/32KB Cache |

### Task 2.3: P2 优先级 (Week 9-10)

| 子任务 | 描述 | 验收标准 |
|--------|------|---------|
| 低功耗状态建模 | WFI 状态、功耗状态转换 | Active/Sleep/DeepSleep 三态可模拟 |
| HPM 事件扩展 | 扩展硬件性能监控事件 | ≥8 个核心 HPM 事件可计数 |

### Task 2.4: 模型验证

- 每个子任务完成后运行基准测试验证 (skill-coremark, skill-dhrystone)
- 性能不退化: CoreMark ≥5.5 CM/MHz, Dhrystone ≥3.8 DMIPS/MHz
- 结果记录到 `perf/benchmarks/perf-report-auto.yaml`

---

## Task 3: RTL 骨架搭建 (T2.4)

**负责角色**: hw-design | **Phase**: implementation | **路径**: `src/rtl/`

### Task 3.1: 目录结构 (Week 3)

> 前置依赖: Task 0 模块划分审查完成后，确认 RTL 目录结构。

创建 `src/rtl/` 顶层目录结构 (11 个子目录):

```
src/rtl/
├── top/            # 顶层模块 lumi_core_top.sv
├── core/           # 核心流水线 (fetch/decode/issue/execute/writeback)
├── csr/            # CSR 寄存器文件
├── memory/         # TCM/Cache/PMA
├── bus/            # AXI4 总线接口
├── interrupt/      # CLIC/PLIC
├── debug/          # Debug Module/Trace Encoder
├── fpu/            # 浮点单元
├── vector/         # 向量单元
├── power/          # 低功耗管理/时钟复位
├── multicore/      # 多核互联/锁步比较
└── dft/            # DFT 控制器/Scan/MBIST
```

### Task 3.2: 骨架文件编写 (Week 4-8)

**M2-S1 仅要求** (不要求功能实现):
- 端口定义 (input/output/logic, 位宽标注)
- 关键信号声明 (内部 wire/reg)
- 状态机框架 (enum 定义、state transition 骨架)
- 模块间接口 (实例化端口连接)
- 配置参数 (parameter/localparam 声明)

| 优先级 | 文件 | 内容 | 时间 |
|--------|------|------|------|
| P0 | `top/lumi_core_top.sv` | 顶层模块，实例化所有子模块，边界信号 (§1.5.1) | Week 4 |
| P0 | `core/fetch.sv` | F1/F2 级端口，分支预测器接口 | Week 4-5 |
| P0 | `core/decode.sv` | D 级端口，指令解码框架 | Week 5 |
| P0 | `core/issue.sv` | I 级端口，发射仲裁框架 | Week 5 |
| P0 | `core/execute.sv` | E1/E2 级端口，FU 接口 | Week 5-6 |
| P0 | `core/writeback.sv` | W 级端口，写回/异常检测框架 | Week 6 |
| P0 | `csr/csr_file.sv` | CSR 读写端口，标准 CSR 地址映射 | Week 6-7 |
| P1 | `memory/tcm.sv` | TCM 控制器端口、ECC 接口、DMA 从接口 | Week 7 |
| P1 | `memory/cache.sv` | I/D-Cache 端口、配置参数 | Week 7 |
| P1 | `memory/pma_checker.sv` | PMA 检查器端口、区域配置 | Week 7 |
| P1 | `bus/axi_master.sv` | AXI4 Master 接口信号 (128bit + 32bit FFP) | Week 7-8 |
| P1 | `bus/axi_slave.sv` | TCM DMA Slave 接口 | Week 8 |
| P1 | `interrupt/clic.sv` | CLIC 端口、中断优先级仲裁框架 | Week 8 |
| P1 | `interrupt/plic.sv` | PLIC 端口、多核路由框架 | Week 8 |
| P2 | `debug/debug_module.sv` | Debug Module DMI 接口、Abstract Command 框架 | Week 9 |
| P2 | `debug/trace_encoder.sv` | Trace 编码器端口、AXI4 写出接口 | Week 9 |
| P2 | `fpu/fpu_top.sv` | FPU 顶层端口、FADD/FMUL/FDIV 接口 | Week 9-10 |
| P2 | `vector/vector_top.sv` | 向量单元顶层、VLEN 配置 | Week 10 |
| P2 | `power/power_mgr.sv` | 低功耗管理器、WFI/WRS 框架 | Week 10 |
| P2 | `power/clk_rst.sv` | 时钟域划分、复位控制器 | Week 10 |
| P2 | `multicore/multicore_top.sv` | 多核互联框架、锁步比较器接口 | Week 10 |
| P2 | `dft/dft_ctrl.sv` | DFT 控制器、Scan 链框架、MBIST 接口 | Week 10 |

### Task 3.3: 骨架 Lint 检查 (Week 11)

- 所有 `.sv` 文件通过基础 Lint 检查 (无语法错误)
- 端口连接完整性验证 (无悬空端口)
- 配置参数与 platform-spec.html §10 一致性检查

---

## Task 4: 验证方案定版 (T2.2)

**负责角色**: hw-ver | **Phase**: verification | **时间**: Week 1-10

### Task 4.1: 设计可测试性审查 (Week 3-10)

> Week 1-2: hw-ver 参与 Task 0 微架构审查，提供可测试性视角意见。

- hw-design 每批次文档完成后, hw-ver 审查可测试性设计 (DFT 插入点、观测点、控制点)
- 输出: 每批次的可测试性审查意见 (记录到 change-notices/)
- 关键审查项: 分支预测器状态可观测、中断延时可测量、PMP/PMA 边界可验证

### Task 4.2: 验证方案定版 (Week 3-11)

| 子任务 | 描述 | 时间 | 验收标准 |
|--------|------|------|---------|
| TB 框架设计 | UVM Testbench 顶层架构设计 | Week 3-5 | 与 verification-strategy.html §3.1 拓扑一致 |
| Agent 开发计划 | ISA/AXI/JTAG/Interrupt Agent 开发排期 | Week 4-6 | 覆盖所有 26 个 cover group |
| Reference Model 集成 | Spike/gem5 参考模型对接方案 | Week 5-7 | Scoreboard 比对框架可用 |
| 覆盖率细化 | 26 个 cover group 细化到具体 cross coverage | Week 6-9 | 每个 cover group 有明确的 coverpoint/cross 定义 |
| 验证方案评审 | 验证方案文档定版评审 | Week 10-11 | 评审通过, 更新 verification-strategy.html 状态 |

### Task 4.3: TB 框架搭建 (Week 5-11)

- 搭建 UVM Testbench 顶层模块
- 实现基础 Scoreboard (比对框架)
- 实现 ISA Agent 基础版 (随机指令生成)
- 实现 AXI VIP 基础版 (协议检查)
- M2-S1 不要求完整 TB, 仅要求框架可编译

---

## Task 5: 项目管理 (pm-infra)

**负责角色**: pm-infra | **Phase**: 持续 | **时间**: Week 1-12

> Week 1-2: 重点跟踪 Task 0 微架构审查进度和决策记录。

### Task 5.1: 进度跟踪

- 每周更新 `docs/project/milestone-plan.yaml` 中 M2 的任务进度
- 维护 Task 级别进度 (T2.1~T2.4 各子任务状态)
- 阻塞问题 24h 内升级到 risk-register.yaml (规则 18)

### Task 5.2: 需求追溯矩阵

- 建立并维护 REQ-ID → 设计文档 → 验证用例的三层追溯矩阵
- M2-S1 结束时确保 99 条需求 100% 有设计文档承接
- 追溯矩阵格式: YAML 文件, 路径 `docs/project/traceability-matrix.yaml` (新建)

### Task 5.3: Token 预算与资源管理

- 监控 Token 消耗, 记录到 `infra/token-budget/tracker.py`
- 每批次任务预估 Token 消耗并提前规划

### Task 5.4: 指令记录 (规则 16)

- 每个工作日追加操作记录到 `audit/instruction-log/YYYY-MM-DD.yaml`
- 选择类指令记录全部选项和最终选择

---

## Task 6: 门禁审计 (qa-audit)

**负责角色**: qa-audit | **Phase**: 持续 + 节点审计 | **时间**: Week 2/6/10/11/12

### Task 6.1: 批次审计

| 审计节点 | 时间 | 审计内容 | 输出 |
|----------|------|---------|------|
| 微架构审查审计 | Week 2 | Task 0 审查报告完整性 + 决策记录 | 审计报告 (compliance-reports/) |
| Batch-1 审计 | Week 6 | 5 份核心流水线文档 + RTL 骨架 P0 文件 | 审计报告 |
| 中期审计 | Week 9 | 11 份文档 + GEM5 P0/P1 + RTL P0/P1 | 审计报告 |
| 全量审计 | Week 11 | 14 份文档 + GEM5 全部 + RTL 全部 | 审计报告 |
| M2 门禁审计 | Week 12 | 全面门禁检查 (隔离审计) | M2 门禁报告 |

### Task 6.2: M2 门禁检查清单

| 门禁项 | 检查标准 | 规则 |
|--------|---------|------|
| 微架构审查报告 | 审查报告完成, 架构修正 (如有) 已归档 | 07, 08 |
| 14 份设计文档 | 7 标准章节齐全, 需求 100% 覆盖 | 08 |
| 验证方案定版 | 26 个 cover group 全有测试计划 | 09 |
| GEM5+ 模型 | LTAGE/PMA/中断延时模型可用 | 06 |
| RTL 骨架 | 全 .sv 文件存在, 端口定义完整, Lint 无 Error | 08 |
| 需求追溯 | 99 条需求 → 设计文档 → 验证用例追溯完整 | 08, 10 |
| 文档时效 | 所有文档最后更新在 M2 周期内 | 19 |
| Errata 维护 | 新发现问题记录到 known-issues.yaml | 20 |
| 规则合规 | check_compliance.py 运行通过 | 10 |

---

## 执行时间线 (Gantt 概览)

```
Week  1  2  3  4  5  6  7  8  9  10  11  12
      ├────┤
      Task 0: 微架构审查
         ├────────────┐
         Batch-1 流水线文档
               ├────┐
               Batch-2 内存接口
                    ├────┐
                    Batch-3 中断/特权/调试
                         ├────┐
                         Batch-4 扩展
      ├────┐
      GEM5 P0 (中断/PMA/LTAGE)
         ├────┐
         GEM5 P1 (FPU/TCM)
               ├────┐
               GEM5 P2 (功耗/HPM)
            ├────────────┐
            RTL P0 (core/csr)
                  ├────────────┐
                  RTL P1 (memory/bus/interrupt)
                        ├────────┐
                        RTL P2 (debug/fpu/vector/power/multicore/dft)
     ●              ●        ●              ●    ●
     微架构审查审计  Batch-1   中期           全量  M2门禁
  ─────────────────────────────────────────────────────────
  pm-infra: 进度跟踪 / 追溯矩阵 / 指令记录 (持续)
```

## 风险与缓解

| 风险项 | 影响 | 缓解措施 |
|--------|------|---------|
| Task 0 审查发现重大调整 | 后续所有任务延期 | 审查限定在 2 周内，仅调整必要项；非关键调整推迟到设计阶段渐进更新 |
| FPU/Vector 设计复杂度高 | Batch-4 文档延期 | P2 优先级, 可拆分 FPU 和 Vector 为独立文档 |
| GEM5 LTAGE 模型实现难度 | 分支预测性能无法验证 | 先用 gem5 内置 TAGE 验证, 后续替换为自定义 LTAGE |
| RTL 骨架端口定义反复 | 后续实现阶段返工 | Task 0 接口审查冻结模块边界 + 每批次文档完成后同步更新 RTL 骨架端口 |
| 需求覆盖遗漏 | 门禁不通过 | pm-infra 持续维护追溯矩阵, 每批次审计检查覆盖率 |

## 交付物清单

| # | 交付物 | 路径 | 状态目标 |
|---|--------|------|---------|
| 0 | 微架构审查报告 | `docs/architecture/m2-s1-microarch-review.html` | 完成 |
| 1 | 14 份模块设计文档 | `docs/design/*.html` | 完成 |
| 2 | GEM5+ 微架构扩展代码 | `perf/gem5-model/gem5/src/` | 可用 |
| 3 | GEM5 性能报告 | `perf/benchmarks/perf-report-auto.yaml` | 更新 |
| 4 | RTL 骨架文件 (~22 个 .sv) | `src/rtl/**/*.sv` | 端口完整 |
| 5 | 验证方案定版文档 | `docs/verification/verification-strategy.html` | 更新为 v0.2 |
| 6 | TB 框架代码 | `src/ver/tb/` (新建) | 可编译 |
| 7 | 需求追溯矩阵 | `docs/project/traceability-matrix.yaml` (新建) | 99 条 100% 覆盖 |
| 8 | M2 门禁审计报告 | `audit/compliance-reports/m2-*.yaml` | PASS |
| 9 | 指令记录 | `audit/instruction-log/` | 每日更新 |
