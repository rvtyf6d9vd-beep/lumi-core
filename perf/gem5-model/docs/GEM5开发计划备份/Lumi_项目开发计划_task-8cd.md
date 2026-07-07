# Lumi-Core 产品开发计划

## 第一部分：GEM5+ 作为项目启动切入点的评估

### 1. 技术可行性分析

**结论：可行，中等风险**

基于 [gem5-modeling-feasibility-analysis.md](docs/architecture/gem5-modeling-feasibility-analysis.md) 的详细调研：

| 维度 | 评估 | 依据 |
|------|------|------|
| ISA 功能验证 | 可行 | gem5 AtomicSimpleCPU 原生支持 RV32I/M/A，~35% 扩展直接可用 |
| 微架构性能建模 | 可行 | MinorCPU（in-order 参数化流水线）匹配 Lumi 8 级流水线特征 |
| 中断系统建模 | 高风险 | CLIC 需从零实现（gem5 无原生支持），占工作量 ~40% |
| 扩展指令补全 | 中等 | ~65% Profile 扩展需补充开发（Zce/Zicond/CMO/Smepmp 等） |
| 渐进精度路径 | 可行 | Atomic → Minor → gem5+rtl(Verilator) 三级精度提升 |
| 当前进展 | 阶段1进行中 | Zimop/Zcmt/Zcmop 已添加，基础 RV32 仿真验证通过（5518 instructions, exit @ tick 3306500） |

**关键发现：** gem5 的模块化架构天然支持自定义扩展，且当前项目已完成阶段 0 环境搭建和阶段 1 部分扩展指令补全，技术路径已验证可行。

### 2. 资源投入评估

| 阶段 | 工作内容 | 预估工期 | 当前状态 |
|------|---------|---------|---------|
| 阶段 0 | 环境搭建+基线验证 | 1-2 周 | 已完成 |
| 阶段 1 | ISA 扩展指令补全 | 2-3 周 | 进行中（Zimop/Zcmt/Zcmop 已完成，B/Zce/Zicond/CMO 待补） |
| 阶段 2 | 特权架构+中断建模（CLIC 关键路径） | 4-6 周 | 未开始 |
| 阶段 3 | CPU 微架构建模 | 2-3 周 | 未开始 |
| 阶段 4 | 基准测试集成 | 1-2 周 | 未开始 |
| 阶段 5 | gem5+rtl 协同（远期） | 待 RTL 成熟 | N/A |

**总预估：** 功能模型就绪 ~10-14 周（从当前算起 ~8-12 周），与 M2 架构评审节点（2026-Q4）时间匹配。

### 3. 风险控制评估

| 风险 | 严重度 | 缓解措施 | 关联规则 |
|------|--------|---------|---------|
| CLIC 实现复杂度超预期 | 高 | 参考 QEMU/Renode CLIC 实现；分阶段（先功能后时序）；HD-2 两天预警 | HD-2, [18] |
| Zce 子扩展 decoder 编码冲突 | 中 | 仔细检查压缩指令编码空间；逐扩展添加+即时回归 | [18] |
| gem5 版本升级补丁冲突 | 中 | 锁定 gem5 v24.0+ 版本，建立补丁管理机制 | [13] |
| 确定性建模精度不足 | 中 | 与 RTL 仿真结果交叉校准；记录偏差持续校准 | [06] |
| gem5+rtl 框架成熟度 | 低（远期） | 跟踪 BSC gem5+ 项目；备选纯 Verilator | [06] |

### 4. 与项目目标匹配度

| PRD 需求 | GEM5+ 能否支撑 | 说明 |
|----------|---------------|------|
| CoreMark >=5.5 CM/MHz | 可估算（非精确） | MinorCPU 时序仿真可提供 CPI 估算，RTL 成熟后校准 |
| 中断延迟 <=16 周期 | 可建模测量 | CLIC 模型建成后可测量中断响应延迟 |
| Cycle Accurate Model 交付 | 渐进实现 | 阶段 5 gem5+rtl 可达 cycle-accurate |
| Profile 合规验证 | 可功能验证 | AtomicSimpleCPU 验证 ISA 扩展功能正确性 |
| 规则 [06] 性能模型前置 | 完全匹配 | GEM5+ 是规则 [06] 明确推荐的方案 |
| 规则 [12] 基准统一化 | 完全匹配 | 阶段 4 建立统一基准测试配置 |

### 5. 替代方案对比

| 方案 | ISA 功能 | 微架构性能 | CLIC 支持 | 自定义扩展 | 推荐度 |
|------|---------|-----------|----------|-----------|--------|
| **GEM5+** | 优秀 | 良好(MinorCPU) | 需自建 | 支持扩展 | **首选** |
| Spike | 优秀 | 不支持 | 有参考 | 支持扩展 | 仅功能验证备选 |
| QEMU | 优秀 | 不支持 | 有支持 | 有限 | 仅软件验证备选 |
| Renode | 良好 | 不支持 | 有支持 | 有限 | CLIC 参考实现来源 |
| 纯 Verilator | N/A（需RTL） | 精确 | 随RTL | 随RTL | 需RTL成熟后 |

### 评估结论

**GEM5+ 是项目启动的最佳切入点，但不应是唯一切入点。** 建议采用**双线并行策略**：

- **主线 A（GEM5+ 建模）：** 继续推进阶段 1-4，为架构决策提供性能数据支撑
- **主线 B（需求定版+架构设计）：** 同步推进 PRD 基线定版和平台架构说明书编写

理由：
1. 规则 [06] 明确要求"进入实际项目之前需建立性能模型"
2. GEM5+ 已验证技术可行，当前进展良好
3. 但 GEM5+ 建模（特别是 CLIC）需要 4-6 周，不能阻塞需求定版和架构设计
4. 两条线在 M2（架构评审）节点汇合：GEM5+ 提供性能数据，架构设计提供微架构参数

---

## 第二部分：项目开发计划

### 总体里程碑规划

| 里程碑 | 计划时间 | 交付物 | 门禁规则 |
|--------|---------|--------|---------|
| M0: 项目启动 | 当前（2026-06-29） | 项目基础设施就绪 | [03][13][16] |
| M1: 需求评审 | 2026-Q3（~2026-09） | PRD 基线 BL-1.0 + 平台架构说明书 v1.0 | [05][07][10][QA-1] |
| M2: 架构设计评审 | 2026-Q4（~2026-12） | 详细设计文档 + GEM5+ 性能模型 + 验证方案框架 | [06][08][09][10][QA-1] |
| M3: RTL 冻结 | 2027-Q2（~2027-06） | RTL 源码 + 验证报告 + 回归测试 100% | [10][11][18][20][21][QA-1] |
| M4: 交付就绪 | 2027-Q3（~2027-09） | 完整 IP 交付包（RTL+验证台+CAM+文档） | [10][14][QA-1] |

---

### Task 1: 项目启动阶段（M0 → M1 准备，~2 周）

**目标：** 建立项目基础设施，完善 PRD 需求，启动 GEM5+ 建模和架构设计双线并行

**1.1 PRD 需求完善与定版准备**（角色：pm-infra）
- 审查 [product-requirements.html](docs/project/product-requirements.html) 中所有 Draft 状态需求，推动至 Proposed/Approved
- 补全空缺需求章节：7.2 SDK / 7.3 固件 / 7.4 IDE / 7.5 仿真器 / 7.6 调试工具 / 7.7 性能工具
- 补全功能安全需求（5. 安全）和信息安全需求（6. 安全）详细条目
- 补全增量需求（3.3）和需求追溯矩阵（10.）
- **交付物：** PRD v1.0 候选版，所有 Must 需求状态 >= Proposed
- **关联规则：** [16] 指令记录、[05] RISC-V Profile

**1.2 项目基础设施搭建**（角色：pm-infra）
- 确认 GitHub 远程仓库配置和分支保护策略（规则 [13]）
- 建立 CI/CD 流水线框架：每日构建 + 回归测试触发机制（规则 [11]）
- 建立 `docs/index.html` 文档地图（规则 [14]）
- 建立 `skills/` 目录和 `index.yaml`（规则 [22]）
- 建立 `audit/errata/known-issues.yaml` 维护机制（规则 [20]）
- **交付物：** CI/CD 配置文件、docs/index.html、skills/index.yaml

**1.3 GEM5+ 建模继续推进（阶段 1 剩余）**（角色：hw-design）
- 完成 B 扩展（Zba/Zbb/Zbc/Zbs）支持验证与补全
- 完成 Zce 子扩展（Zcb/Zcmp/Zcmt）补全（Zcmt 已完成部分）
- 完成 Zicond / CMO / Hint / MOP 指令添加
- 每个扩展完成后即时回归测试
- **交付物：** gem5 decoder.isa 补丁集、ISA 扩展测试用例
- **关联规则：** HD-1 迭代前审查、HD-2 两天预警、HD-3 失败记录、[18] 问题不跳过

**1.4 平台架构说明书起草**（角色：hw-design + pm-infra）
- 基于 PRD 硬件需求清单，起草 [platform-spec.html](docs/architecture/platform-spec.html) 框架
- 包含：处理器架构总览、硬件需求清单（承接 PRD 每条需求）、微架构方案初稿
- 定义 8 级流水线微架构参数（Fetch → Decode → Execute → Memory → Writeback 细化）
- 定义中断架构方案（PLIC + CLIC 两层架构，参考项目记忆中的中断架构决策）
- **交付物：** platform-spec.html v0.1-draft
- **关联规则：** [07] 平台架构说明书、[05] RISC-V Profile

---

### Task 2: 需求基线与架构定义阶段（~6 周，→ M1 门禁）

**目标：** PRD 定版 BL-1.0，平台架构说明书评审通过，GEM5+ 中断系统建模启动

**2.1 PRD 评审与基线定版**（角色：pm-infra）
- 组织需求评审会议，逐条审查 Must 优先级需求
- 确认可配置参数范围（15 项配置表）与 Profile 合规性
- 执行基线定版：生成 `baseline-BL-1.0.yaml` 快照，放入 `docs/project/baselines/`
- 运行 `generate_baseline_html.py` 生成 HTML 报告
- 更新需求追溯矩阵初始版本
- **交付物：** PRD BL-1.0 基线（YAML + HTML）、追溯矩阵 v1.0
- **关联规则：** [16] 指令记录（定版选择需记录全部选项）

**2.2 平台架构说明书定版**（角色：hw-design）
- 完善 platform-spec.html 至 v1.0
- 确保每条 PRD 硬件需求都有架构承接
- 包含完整硬件需求清单：流水线、内存子系统（PMP/TCM/Cache）、中断（PLIC/CLIC）、总线（AXI4/FFP）、调试跟踪、低功耗管理
- 明确可配置参数的架构影响
- **交付物：** platform-spec.html v1.0
- **关联规则：** [07] 平台架构说明书（critical）

**2.3 GEM5+ 阶段 2：特权架构与中断建模**（角色：hw-design）
- **Task 2.3a:** PMP/Smepmp 实现 — 审查 gem5 现有 PMP，确认 16 条目 + 4KiB 粒度，添加 Smepmp + msecfg CSR
- **Task 2.3b:** CLIC 中断控制器建模（**关键路径**）— 设计 CLIC C++ 模型，实现 CSR 接口/优先级仲裁/向量化/嵌套抢占
- **Task 2.3c:** PLIC 模型集成 — 基于 gem5 现有 PLIC 适配，配置 PLIC → CLIC 信号连接
- **Task 2.3d:** Smrnmi (NMI) 实现 — mnvi CSR 和 NMI 处理逻辑
- **风险控制：** CLIC 实现遵循 HD-2 两天预警，如遇阻塞立即登记 risk-register.yaml 并启动回退方案
- **交付物：** gem5 CLIC/PMP/PLIC 模型代码、中断系统测试用例
- **关联规则：** HD-2、[18]、[06]

**2.4 验证方案框架设计启动**（角色：hw-ver + pm-infra）
- 建立 `docs/verification/` 目录结构
- 起草验证策略文档：验证层级（单元/集成/系统）、覆盖率目标、验证方法（定向/随机/形式）
- 定义验证用例到需求的覆盖率矩阵模板
- **交付物：** docs/verification/verification-plan.html v0.1
- **关联规则：** [09] 验证方案框架（critical）

**M1 门禁检查项：**
- [ ] PRD BL-1.0 基线已定版，所有 Must 需求 >= Approved
- [ ] platform-spec.html v1.0 存在且包含完整硬件需求清单
- [ ] RISC-V Profile 仅包含 Ratified 扩展（规则 [05]）
- [ ] docs/standards/riscv-specs/ 有最新标准文档（规则 [05]）
- [ ] GitHub 分支保护已启用（规则 [13]）
- [ ] CI/CD 每日回归运行中（规则 [11]）
- [ ] 知识库 index.yaml 已建立（规则 IT-1）
- [ ] QA 隔离审计通过（规则 QA-1）
- [ ] 人类项目负责人签署确认（规则 [10]）
- **门禁报告路径：** `audit/compliance-reports/M1-202609.yaml`

---

### Task 3: 详细设计与 GEM5+ 建模阶段（~12 周，→ M2 门禁）

**目标：** 模块级详细设计文档完成，GEM5+ 性能模型可用，验证方案框架定版

**3.1 GEM5+ 阶段 3：CPU 微架构建模**（角色：hw-design）
- MinorCPU 参数化适配 Lumi 8 级流水线
- 创建 `perf/gem5-model/configs/lumi-core.py` 配置文件
- 缓存与内存系统建模（L1 I/D Cache 64 字节缓存块，TCM，PMA 区域）
- CMO 指令与缓存模型交互
- 确定性时序校准：中断响应延迟可预测性验证
- **交付物：** lumi-core.py 配置、微架构参数文档
- **关联规则：** [06] 性能评估模型

**3.2 GEM5+ 阶段 4：基准测试集成**（角色：hw-design）
- 移植 CoreMark，使用 RISC-V 工具链编译（启用 Lumi-Core Profile 扩展）
- 创建 `perf/benchmarks/coremark/config.yaml` 统一参数配置
- 添加 Dhrystone 基准测试
- 添加中断延迟基准测试（CLIC 中断响应时间）
- **合规要求：** 编译器版本、优化等级、编译参数、迭代次数、数据大小、计时方式完整记录
- **交付物：** 基准测试套件、统一配置 YAML、性能基线报告
- **关联规则：** [12] 基准测试统一化、性能数据严谨性（用户行为规范）

**3.3 模块级详细设计文档**（角色：hw-design）
- 为每个计划实现的 RTL 子模块编写设计文档，存放在 `docs/design/{module}/`
- 设计文档必须承接 platform-spec.html 的硬件需求（每条需求有承接）
- 文档内容细化到寄存器级/接口级
- 模块清单（基于 PRD 需求分解）：
  - `docs/design/core/pipeline.html` — 8 级流水线（LUMI-PIPE-001）
  - `docs/design/isa/decoder.html` — ISA 解码器（LUMI-ISA-001~010）
  - `docs/design/mem/pmp.html` — PMP 物理内存保护（LUMI-MEM-001, SAFE-001）
  - `docs/design/mem/tcm.html` — TCM 紧耦合内存（LUMI-MEM-002~005）
  - `docs/design/mem/cache.html` — L1 Cache（LUMI-MEM-006~007）
  - `docs/design/intc/clic.html` — CLIC 中断控制器（LUMI-SYS-002, SYS-003）
  - `docs/design/intc/plic.html` — PLIC 中断控制器（LUMI-SYS-001）
  - `docs/design/bus/axi.html` — AXI4 主总线（LUMI-IF-001）
  - `docs/design/bus/ffp.html` — FFP 外设接口（LUMI-IF-002）
  - `docs/design/debug/debug.html` — 调试模块（LUMI-FEAT-001）
  - `docs/design/debug/trace.html` — Nexus Trace（LUMI-FEAT-002~003）
  - `docs/design/power/lpm.html` — 低功耗管理（LUMI-SYS-004~005, SYS-008）
  - `docs/design/safety/ecc.html` — ECC 安全机制（LUMI-SAFE-001~003）
  - `docs/design/safety/lockstep.html` — 双核异步互锁（LUMI-SAFE-002）
- **交付物：** 模块设计文档集（HTML 格式）
- **关联规则：** [08] 编码前写文档（critical）、[14] HTML 格式

**3.4 验证方案框架定版**（角色：hw-ver）
- 完善 `docs/verification/verification-plan.html` 至 v1.0
- 定义验证用例到需求的覆盖率矩阵
- 验证环境架构设计（UVM/SV 方法论选型）
- 约束随机验证策略
- 形式验证适用范围定义
- **交付物：** verification-plan.html v1.0、覆盖率矩阵
- **关联规则：** [09] 验证方案框架（critical）

**3.5 RTL 骨架搭建**（角色：hw-design）
- 建立 `src/` 目录结构（按模块划分）
- 定义模块接口（信号级），与设计文档一致
- 建立 RTL lint 检查配置
- **交付物：** src/ 目录结构、模块接口定义
- **关联规则：** HD-1 迭代前全量审查

**M2 门禁检查项：**
- [ ] GEM5+ 性能模型可运行（perf/gem5-model/ 有可运行模型）（规则 [06]）
- [ ] CoreMark 等基准测试可运行且参数完整记录（规则 [12]）
- [ ] 每个计划 src/ 子模块在 docs/design/ 下有设计文档（规则 [08]）
- [ ] 设计文档中的需求可追溯到 platform-spec.html（规则 [08]）
- [ ] docs/verification/ 有验证方案文档（规则 [09]）
- [ ] 验证用例到需求的覆盖率矩阵存在（规则 [09]）
- [ ] 里程碑文档时效检查通过（规则 [19]）
- [ ] QA 隔离审计通过（规则 QA-1）
- [ ] 人类项目负责人签署确认（规则 [10]）
- **门禁报告路径：** `audit/compliance-reports/M2-202612.yaml`

---

### Task 4: RTL 实现与单元验证阶段（~12 周）

**目标：** 逐模块完成 RTL 编码和单元验证，每日集成回归

**4.1 RTL 逐模块实现**（角色：hw-design）
- 按设计文档实现各模块 RTL（Verilog）
- 实现顺序（按依赖关系）：
  1. core/pipeline — 流水线主体
  2. isa/decoder — 指令解码器
  3. mem/pmp — PMP 内存保护
  4. mem/tcm — TCM 控制器
  5. mem/cache — L1 Cache 控制器
  6. intc/clic — CLIC 中断控制器
  7. intc/plic — PLIC 适配
  8. bus/axi — AXI 总线接口
  9. bus/ffp — FFP 接口
  10. debug — 调试与跟踪模块
  11. power — 低功耗管理
  12. safety — ECC/双锁步
- 每个模块实现前确认对应设计文档已评审（规则 [08]）
- **关联规则：** HD-1 迭代前审查、HD-2 两天预警、[08] 编码前写文档

**4.2 单元验证**（角色：hw-ver）
- 每个模块完成 RTL 后立即进行单元验证
- 验证前检查 change-notices/ 设计变更通知（规则 HV-1）
- 验证报错处理：先排查自身环境，调试修改须回退，问题汇总提交 hw-design（规则 HV-2）
- 发现 Bug 发送变更通知给 hw-design
- **关联规则：** HV-1、HV-2、[18] 问题不跳过

**4.3 每日集成回归**（角色：hw-ver + pm-infra）
- CI 每日运行回归测试（规则 [11]）
- 回归通过率必须 100%
- 失败用例立即排查并登记 errata（规则 [20]）
- **关联规则：** [11] 每日集成回归、[20] Errata 维护

**4.4 GEM5+ 模型交叉校准**（角色：hw-design）
- 对比 GEM5+ 模型与 RTL 仿真结果（CPI、中断延迟、缓存命中率）
- 记录偏差并分析原因
- 更新 MinorCPU 参数匹配 RTL 行为
- **交付物：** 模型校准报告
- **关联规则：** [06] 性能评估模型

---

### Task 5: 集成验证与 RTL 冻结阶段（~12 周，→ M3 门禁）

**目标：** 系统级集成验证通过，RTL 冻结，交付物就绪

**5.1 系统级集成验证**（角色：hw-ver）
- 全模块集成，系统级测试
- ISA 合规测试（全部 Mandatory 扩展通过）
- 中断系统端到端测试（PLIC + CLIC + NMI）
- 总线接口协议合规测试（AXI4/FFP）
- 调试跟踪功能测试
- 低功耗模式测试
- 安全机制测试（ECC/双锁步/Parity）
- **交付物：** 系统级验证报告
- **关联规则：** [09] 验证方案框架、[18] 问题不跳过

**5.2 回归测试与 Bug 回归用例**（角色：hw-ver）
- 确保回归测试 100% 通过（规则 [11]）
- RTL Freeze 后每个 Bug 必须增加回归测试用例（规则 [21]）
- 回归测试用例可追溯至对应 Bug/Errata 记录
- **关联规则：** [21] Bug 回归测试用例（critical）、[20] Errata 维护

**5.3 GEM5+ 阶段 5：RTL 协同仿真**（角色：hw-design）
- 将 CPU core RTL 通过 Verilator 转换为 C++ 模型
- 集成到 gem5 全系统仿真环境
- 建立 gem5 模型与 RTL 仿真结果交叉验证机制
- 验收标准：CPI、中断延迟偏差 < 10%
- **交付物：** gem5+rtl 协同仿真原型、校准报告
- **关联规则：** [06] 性能评估模型

**5.4 交付物准备**（角色：hw-design + hw-ver）
- RTL 源码（Verilog）— lint 检查无 warning（LUMI-DEL-001）
- 验证测试台 — 回归测试 100% 通过（LUMI-DEL-002）
- Cycle Accurate Model — GEM5+rtl 模型可用（LUMI-DEL-003）
- 完整设计文档集
- 验证报告与覆盖率报告
- **关联规则：** [14] HTML 文档格式

**M3 门禁检查项：**
- [ ] RTL 通过 lint 检查无 warning（LUMI-DEL-001）
- [ ] 验证测试台回归测试 100% 通过（LUMI-DEL-002）
- [ ] Cycle Accurate Model 可用（LUMI-DEL-003）
- [ ] ISA 合规测试全部 Mandatory 扩展通过（LUMI-PROF-001）
- [ ] CoreMark >=5.5 CM/MHz 性能达标（LUMI-IPC-001）
- [ ] 中断延迟 <=16 周期达标（LUMI-SYS-003）
- [ ] 回归通过率 100%（规则 [11]）
- [ ] errata 中无未解决 critical 问题（规则 [20]）
- [ ] 每个已修复 Bug 有回归测试用例（规则 [21]）
- [ ] risk-register 中无 skipped 项（规则 [18]）
- [ ] 里程碑文档时效检查通过（规则 [19]）
- [ ] QA 隔离审计通过（规则 QA-1）
- [ ] 人类项目负责人签署确认（规则 [10]）
- **门禁报告路径：** `audit/compliance-reports/M3-202706.yaml`

---

### 横切关注点：贯穿全生命周期

#### A. 风险识别与应对策略

| 风险 ID | 风险描述 | 严重度 | 概率 | 应对策略 | 触发条件 | 关联规则 |
|---------|---------|--------|------|---------|---------|---------|
| RISK-001 | CLIC 中断控制器建模超预期 | 高 | 中 | 参考 QEMU/Renode 实现；分阶段（先功能后时序）；HD-2 两天预警 | 阶段 2 进展滞后 | HD-2, [18] |
| RISK-002 | CoreMark 性能不达标 (<5.5 CM/MHz) | 高 | 中 | 微架构参数调优；流水线优化；GEM5+ 早期发现 | M2 性能评估 | [06] |
| RISK-003 | 中断延迟不达标 (>16 周期) | 高 | 中 | CLIC 硬件向量化优化；流水线冲刷优化 | M3 集成验证 | [18] |
| RISK-004 | RTL 面积超标 (>0.32 mm²) | 中 | 中 | 面积优化迭代；可配置项裁剪 | M3 后端评估 | [18] |
| RISK-005 | 需求变更频繁影响基线稳定性 | 中 | 低 | 基线管理机制；变更影响分析 | M1 后任意时间 | [16] |
| RISK-006 | gem5 版本升级导致补丁冲突 | 中 | 低 | 版本锁定；补丁管理机制 | 阶段 2-3 | [13] |
| RISK-007 | ISO 26262 ASIL-B 合规障碍 | 高 | 低 | 早期引入安全分析；ECC/双锁步设计预留 | M2 架构评审 | [07] |

所有风险登记到 `audit/risk-register.yaml`，不允许 status: skipped（规则 [18]）。

#### B. 资源配置与时间规划

| 阶段 | 时间范围 | 主要角色 | 关键资源 |
|------|---------|---------|---------|
| M0 启动 | 2026-06 ~ 2026-07 | pm-infra + hw-design | PRD 工具链、gem5 环境 |
| M1 需求评审 | 2026-07 ~ 2026-09 | pm-infra(主) + hw-design | PRD 评审、架构文档 |
| M2 架构评审 | 2026-10 ~ 2026-12 | hw-design(主) + hw-ver + pm-infra | GEM5+ 模型、设计文档 |
| RTL 实现 | 2027-01 ~ 2027-03 | hw-design(主) + hw-ver | RTL 工具链、验证环境 |
| M3 RTL 冻结 | 2027-04 ~ 2027-06 | hw-ver(主) + hw-design | 验证集群、形式验证工具 |
| M4 交付 | 2027-07 ~ 2027-09 | 全角色 | 交付物整理、文档定稿 |

#### C. 质量保证与合规检查机制

**里程碑门禁流程（规则 [10] + QA-1）：**
1. 自动化检查 — 运行 `rules/scripts/check_compliance.py` 生成合规报告 → `audit/compliance-reports/`
2. 角色 Sign-off — 各角色子代理串行执行检查
3. QA 隔离审计 — qa-audit 子代理独立上下文执行（不可在主会话）
4. 汇总确认 — 主调度汇总报告，请求人类最终签署

**持续质量机制：**
- 每日指令日志：`audit/instruction-log/YYYY-MM-DD.yaml`（规则 [03][16]）
- 每日 git 提交（规则 [03]）
- 每日 CI 回归测试（规则 [11]）
- Errata 持续维护（规则 [20]）
- 知识库持续迭代，条目 <=256（规则 IT-1）
- 里程碑流程总结（规则 IT-2）

**文档质量（规则 [14][19]）：**
- 人类参考文档使用 HTML 格式
- docs/index.html 包含到所有子文档的超链接
- docs/project/master-plan.html 包含里程碑索引（本计划定稿后创建）
- 每个里程碑达成时做文档时效全局检查

#### D. 技术路线选择论证

**关键决策点与论证：**

1. **性能模型选型：GEM5+ vs Spike/QEMU**
   - 选择 GEM5+ — 唯一支持微架构级性能建模的开源方案
   - MinorCPU 可参数化匹配 8 级 in-order 流水线
   - 渐进式精度提升路径（功能 → 时序 → RTL 协同）

2. **中断架构：PLIC + CLIC 双层方案**
   - 基于项目记忆中的中断架构决策：CLIC 处理核内快速中断（1~240），PLIC 处理平台级中断（32~960）
   - 满足 <=16 周期快速中断延迟需求
   - 符合 RT-Europa Profile 要求

3. **验证方法：UVM/SV + 形式验证 + GEM5+ 交叉校准**
   - UVM/SV 用于定向和约束随机验证
   - 形式验证用于关键模块属性验证
   - GEM5+ 提供系统级参考模型

4. **开发流程：文档先行 + 增量迭代 + 门禁驱动**
   - 规则 [08] 要求编码前写文档，设计文档承接架构需求
   - HD-1 要求迭代前全量审查
   - 规则 [10] 门禁驱动确保质量关卡

---

### 计划实施的第一步（用户确认后执行）

1. 创建 `docs/project/master-plan.html`（规则 [14] 要求的项目管理主文件）
2. 创建 `docs/index.html`（规则 [14] 要求的文档地图）
3. 记录本次计划制定指令到 `audit/instruction-log/2026-06-29.yaml`（规则 [16]）
4. 将 GEM5+ 评估结论更新到 `docs/architecture/gem5-modeling-feasibility-analysis.md`
5. 初始化 risk-register.yaml 中的 7 项已识别风险（规则 [18]）
6. 开始 Task 1 的各项子任务执行