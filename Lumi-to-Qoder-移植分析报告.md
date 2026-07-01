## Lumi-core 工程规则框架 — Qoder 移植可行性分析报告

**项目:** Lumi RISC-V 处理器 IP
**调研日期:** 2026-06-15
**框架原平台:** Claude Cowork + qodercli
**目标平台:** QoderWork (Qoder Desktop)

---

### 一、框架全景概览

Lumi-core 是一套面向 RISC-V 处理器 IP 开发的**多角色协同工程规则框架**，设计目标是在 Claude Cowork 环境下实现"AI Agent 模拟芯片项目团队"的工作模式。整套框架包含 6 个虚拟角色、34 条结构化规则、审计追溯体系和自动化检查脚本，构成了一个完整的 IP 开发治理框架。

框架的核心理念可以概括为三个层次：**角色分工**（模拟 PM/架构/验证/软件/基础设施/QA 六类角色）、**规则驱动**（所有操作受 YAML 结构化规则约束）、**留痕审计**（每次操作可追溯、可回放）。

#### 1.1 目录结构一览

```
Lumi-core/
├── CLAUDE.md                      ← 顶层指令（每次会话自动加载）
├── agents/                        ← 6 个角色定义
│   ├── pm/                        ← 项目经理
│   ├── hw-arch/                   ← 硬件架构
│   ├── hw-ver/                    ← 硬件验证
│   ├── sw-arch/                   ← 软件架构
│   ├── ai-infra/                  ← AI 基础设施
│   └── qa-audit/                  ← QA 审计
│       ├── role-prompt.md         ← 角色提示词（自动生成）
│       ├── context/
│       │   └── current-state.yaml ← 角色当前状态
│       └── inbox/                 ← 跨角色消息
├── rules/                         ← 规则引擎
│   ├── schema.yaml                ← 规则元数据 Schema
│   ├── role-mapping.yaml          ← 角色-规则映射+文件权限
│   ├── top-rules.yaml             ← 17 条通用规则
│   ├── business-rules.yaml        ← 7 条商业规则 (B-1~B-7)
│   ├── sub-rules/                 ← 领域子规则
│   │   ├── hardware-design.yaml   ← HD-1~HD-4
│   │   ├── hardware-verify.yaml   ← HV-1~HV-2
│   │   ├── it-infra.yaml          ← IT-1~IT-3
│   │   └── qa-audit.yaml          ← QA-1
│   ├── scripts/                   ← 自动化脚本
│   │   ├── role_prompt_builder.py ← 角色提示词生成器
│   │   ├── check_compliance.py    ← 合规性检查引擎
│   │   ├── generate_report.py     ← HTML 报告生成器
│   │   └── validate_rules.py      ← 规则格式校验
│   └── changelog.md
├── audit/                         ← 审计追溯
│   ├── instruction-log/           ← 每日操作日志
│   ├── compliance-reports/        ← 合规报告
│   └── risk-register.yaml         ← 风险登记簿
├── knowledge/                     ← 知识库
│   └── index.yaml                 ← 条目索引（上限 256 条）
├── infra/                         ← 基础设施
│   ├── monitoring/                ← 运营指标
│   └── token-budget/              ← Token 成本预算
├── .github/                       ← GitHub Actions CI/CD
│   └── workflows/
│       ├── ci-regress.yml         ← 每日回归测试
│       ├── compliance-check.yml   ← 合规检查
│       └── milestone-gate.yml     ← 里程碑门禁
└── docs/                          ← 项目文档
```

#### 1.2 规则体系统计

| 类别 | 规则编号 | 数量 | 严重度分布 |
|------|---------|------|-----------|
| 通用规则 | 03-19 | 17 | 8 critical / 6 high / 3 medium |
| 硬件设计 | HD-1 ~ HD-4 | 4 | 1 critical / 2 high / 1 low |
| 硬件验证 | HV-1 ~ HV-2 | 2 | 1 critical / 1 high |
| IT 基础设施 | IT-1 ~ IT-3 | 3 | 1 high / 2 medium |
| QA 审计 | QA-1 | 1 | 1 critical |
| 商业规则 | B-1 ~ B-7 | 7 | 3 high / 2 medium / 2 low |
| **合计** | | **34** | |

---

### 二、Claude 专属机制深度分析

以下是 Lumi-core 框架中深度依赖 Claude 生态的关键机制，也是移植的核心难点。

#### 2.1 CLAUDE.md 自动加载

**机制：** Claude Cowork 每次启动新会话时自动读取项目根目录下的 `CLAUDE.md`，将其内容注入 Agent 的系统上下文。这个文件定义了角色切换协议、任务路由表、文件操作规范等所有顶层行为约束。

**Claude 生态特征：** 这是 Claude Code（Claude 的 CLI/Desktop 产品）的内置特性，文件名和加载行为是硬编码的。

#### 2.2 双引擎架构（Cowork + qodercli）

**机制：** 框架设计了"主会话 + 轻量进程"的双引擎模式：
- **Cowork 主会话**：处理复杂推理、多步任务、角色切换
- **qodercli --yolo**：处理简单脚本化任务（lint、文件整理、状态检查），走轻量模型，不消耗主会话上下文

**商业规则 B-7（模型调用分层）** 直接体现了这一设计："用最聪明的模型制定计划，用操作损耗最低的方式完成常规操作。"

#### 2.3 角色切换协议

**机制：** 当任务触发角色切换时，Agent 必须严格执行三步协议：
1. **Pre-Check**：读取 `role-prompt.md` + `current-state.yaml` + `inbox/`
2. **Execution**：以角色身份执行任务，遵守角色文件权限约束
3. **Post-Verify**：更新状态、投递跨角色消息、写审计日志

这个协议依赖 Claude 在单次会话中维持长上下文并严格遵守指令的能力。

#### 2.4 进程级审计隔离

**机制：** QA 审计角色必须通过 `qodercli` 在独立进程中执行，实现"进程级上下文隔离"——审计 Agent 只能看到文件系统中的产出物，不能看到主会话中的设计思路或调试过程。

**设计意图：** 模拟真实审计的独立性要求，防止"自己审自己"。

#### 2.5 inbox 跨角色通信

**机制：** 角色之间通过 YAML 格式的 inbox 文件进行异步通信（设计变更通知、Bug 报告、审查请求等）。这是一个完全基于文件系统的消息队列。

---

### 三、Qoder 能力评估与映射

#### 3.1 Qoder 原生能力盘点

基于对 QoderWork 的调研，以下是可用于移植的原生能力：

| Qoder 能力 | 说明 | 对应 Lumi 机制 |
|-----------|------|---------------|
| AGENTS.md | 项目级指令文件，每次会话自动加载 | CLAUDE.md |
| SOUL.md | 角色/人格定义文件，自动加载 | 角色身份 |
| USER.md | 用户偏好文件，自动加载 | 个人工作习惯 |
| MEMORY.md | 跨会话持久记忆，自动加载 | 知识库部分能力 |
| memory/*.md | 每日记忆日志 | audit/instruction-log 部分 |
| Task 子代理 | 并行/独立子任务 | qodercli 委派（部分） |
| 定时任务 (cron) | 定时/周期执行 | 每日集成回归（规则 11） |
| Skills 技能库 | 可复用的最佳实践 | rules/scripts 部分 |
| Bash 工具 | 执行任意命令和脚本 | 所有 Python 脚本 |
| 文件读写工具 | Read/Write/Edit | 文件操作体系 |

#### 3.2 逐项映射分析

**可以直接迁移的机制：**

1. **CLAUDE.md → AGENTS.md**：将 CLAUDE.md 的核心内容（项目信息、角色表、任务路由、文件操作规范）改写为 AGENTS.md 格式。两者都是"会话启动自动加载"的顶层指令文件，迁移成本最低。

2. **规则 YAML 体系 → 原样保留**：`rules/` 目录下的所有 YAML 文件（top-rules.yaml、role-mapping.yaml、schema.yaml、sub-rules/*.yaml、business-rules.yaml）是纯数据文件，不依赖任何 Claude 特性，可以完全保留。

3. **Python 脚本 → 原样保留 + 适配**：`role_prompt_builder.py`、`check_compliance.py`、`generate_report.py`、`validate_rules.py` 都是纯 Python 脚本，Qoder 的 Bash 工具可以直接执行。只需修改 `check_compliance.py` 中对 `CLAUDE.md` 的文件名检查，改为检查 `AGENTS.md`。

4. **审计文件体系 → 原样保留**：`audit/` 目录（instruction-log、compliance-reports、risk-register.yaml）是纯文件系统约定，完全兼容。

5. **知识库 → 原样保留 + 增强**：`knowledge/` 目录的 index.yaml 和结构化条目可以直接保留。同时可以利用 Qoder 的 MEMORY.md 机制做"热知识"的快速召回。

6. **current-state.yaml → 原样保留**：每个角色的状态文件是纯 YAML，不依赖 Claude。

**需要适配的机制：**

7. **角色切换协议 → AGENTS.md + Skill 组合方案**：这是最大的改造点。Claude 的角色切换是在单一长会话中"切换人格"，而 Qoder 更适合"主会话调度 + 子代理执行"的模式。建议的适配方案见第四章。

8. **双引擎架构 → Task 子代理替代**：Claude 的 `qodercli --yolo` 可以用 Qoder 的 Task 子代理替代。两者都能实现"独立上下文执行"，但 Qoder 的 Task 子代理是结构化调用而非命令行，需要改写委派语法。

9. **QA 审计隔离 → Task 子代理 + contextDirs**：Qoder 的 Task 子代理天然具有独立上下文（子代理不继承主会话的对话历史），可以实现类似"进程隔离"的效果。通过 `contextDirs` 参数限定子代理只能访问 `audit/` 和 `rules/` 目录，实现审计视角的约束。

**无法直接迁移的机制：**

10. **inbox 消息系统 → 弱化为文件约定**：Claude 的单会话角色切换模式下，inbox 是"切换角色时检查"的被动机制。在 Qoder 中，由于不存在真正的"角色切换"（而是子代理调度），inbox 的价值降低，可以简化为一种文件约定而非通信机制。

11. **Token 成本预算（B-2）→ 需要手动跟踪**：Claude 的 Token 计费体系与 Qoder 的 credit 计费体系不同。`infra/token-budget/tracker.py` 中的具体计算逻辑需要适配 Qoder 的计费模型，但框架可保留。

---

### 四、移植方案建议

#### 4.1 整体架构：从"角色切换"到"主调度+子代理"

Claude 模式的核心是"一个 Agent 扮演多个角色"，通过上下文切换实现。Qoder 更适合的模式是"一个主 Agent 做调度，多个子代理做执行"。

**建议的新架构：**

```
Qoder 主会话 (AGENTS.md 自动加载)
├── 角色路由（AGENTS.md 中的任务路由表）
├── 规则执行（读取 rules/ YAML，按角色筛选规则）
├── Task 子代理调度
│   ├── hw-arch 子代理（读取 hw-arch/role-prompt.md）
│   ├── hw-ver 子代理（读取 hw-ver/role-prompt.md）
│   ├── sw-arch 子代理
│   ├── pm 子代理
│   └── qa-audit 子代理（独立上下文，审计隔离）
├── 定时任务
│   ├── 每日合规检查（cron → check_compliance.py）
│   └── Token 成本监控（cron → tracker.py）
└── 持久记忆
    ├── MEMORY.md（跨会话知识）
    └── memory/YYYY-MM-DD.md（每日日志）
```

#### 4.2 AGENTS.md 改写方案

将 `CLAUDE.md` 改写为 `AGENTS.md`，核心变更如下：

1. **文件操作规范**：基本保留，与 Qoder 的文件保护策略天然兼容（Qoder 已有"不永久删除用户文件"的内置策略，与规则 17"批量删除须确认"一致）。

2. **角色切换协议 → 子代理调度协议**：
   - 当用户要求以某角色工作时，主会话使用 Task 子代理，在 prompt 中注入对应的 `role-prompt.md` 内容
   - Pre-Check 和 Post-Verify 由主会话执行（读取 current-state.yaml、更新状态、写审计日志）
   - Execution 由子代理执行

3. **qodercli 委派 → Task 子代理**：将所有 `qodercli --yolo` 的委派场景改写为 Task 子代理调用。判断标准保持不变（简单可控任务走子代理，复杂推理由主会话执行）。

4. **里程碑门禁执行协议 → 串行子代理调用**：
   - 子代理 1：执行自动化检查脚本 → 输出到 `audit/compliance-reports/`
   - 串行切换角色执行 Sign-off 检查
   - 子代理 2（qa-audit）：独立上下文审计
   - 主会话汇总报告，请求人类确认

#### 4.3 Skill 化改造

将部分重复性流程封装为 Qoder Skill：

| Skill 名称 | 触发场景 | 对应原机制 |
|------------|---------|-----------|
| lumi-role-switch | 用户要求切换角色或任务属于特定角色 | 角色切换协议 |
| lumi-compliance | 里程碑门禁 / 每日合规检查 | check_compliance.py |
| lumi-audit | QA 独立审计 | qa-audit 角色 |
| lumi-instruction-log | 每次操作后自动记录 | 规则 16 |

#### 4.4 定时任务改造

利用 Qoder 的 cron 能力替代部分手工触发：

| 定时任务 | 频率 | 执行内容 |
|---------|------|---------|
| 每日合规检查 | 每天 18:00 | 运行 check_compliance.py，报告发送到 IM 通道 |
| 知识库规模监控 | 每周一 9:00 | 检查 knowledge/index.yaml 条目数 |
| 风险项回顾 | 每周五 17:00 | 检查 risk-register.yaml 中 open 状态超过 7 天的条目 |

---

### 五、改造工作量评估

#### 5.1 分阶段实施计划

**Phase 1：基础迁移（预计 1-2 小时）**
- CLAUDE.md → AGENTS.md 改写
- check_compliance.py 中 `CLAUDE.md` 引用改为 `AGENTS.md`
- 确认所有 YAML 规则文件在 Qoder 下可正常读取
- 验证 Python 脚本在 Qoder Bash 环境下可执行

**Phase 2：角色系统适配（预计 2-3 小时）**
- 设计并实现"主调度+子代理"模式的 AGENTS.md 指令
- 测试每个角色的 Task 子代理调用流程
- 验证 Pre-Check / Post-Verify 流程的完整性
- 适配 inbox 机制为文件约定模式

**Phase 3：自动化改造（预计 2-3 小时）**
- 创建 Qoder Skills（lumi-role-switch、lumi-compliance 等）
- 配置定时任务（合规检查、知识库监控）
- 适配 Token 预算跟踪为 Qoder credit 模型
- 测试里程碑门禁全流程

**Phase 4：验证与优化（预计 1-2 小时）**
- 端到端测试：模拟一个完整的里程碑门禁流程
- 修复适配过程中发现的问题
- 优化 AGENTS.md 的指令密度（避免过长导致上下文浪费）

#### 5.2 风险与限制

| 风险 | 影响 | 缓解措施 |
|------|------|---------|
| 子代理上下文窗口有限 | 复杂角色的 role-prompt.md + 规则可能超过子代理的有效上下文 | 精简 role-prompt.md，只注入当前任务相关的规则子集 |
| 子代理无法"感知"自己是角色切换的一部分 | 子代理不知道 Pre-Check / Post-Verify 流程 | 在 Task prompt 中明确包含 Pre-Check 结果和 Post-Verify 要求 |
| AGENTS.md 过大 | 每次会话加载消耗上下文 | 将规则详情保留在 YAML 中，AGENTS.md 只包含路由和协议 |
| 无法完全模拟 Claude 的"角色人格" | Qoder 子代理是任务导向的，不会真正"变成"某个角色 | 通过详细的 prompt 约束行为，弱化"人格"概念，强化"规则遵守" |

---

### 六、结论与建议

Lumi-core 框架的设计质量很高——规则结构化程度好、YAML 数据与 Agent 指令分离清晰、自动化脚本独立可运行。这些优点使得移植工作主要集中在**指令层**（CLAUDE.md → AGENTS.md + 子代理调度协议），而**数据层**（rules/*.yaml、audit/、knowledge/）和**工具层**（Python 脚本）几乎可以原样复用。

核心建议：采用"AGENTS.md 做路由 + Task 子代理做执行 + cron 做周期任务 + Skill 做流程封装"的四层架构，以最小的改造成本实现框架在 Qoder 上的完整运行。最值得优先迁移的是规则引擎和合规检查体系——它们是框架的核心价值，且迁移成本最低。

---

### 附录：完整文件清单与迁移状态

| 文件/目录 | 类型 | 迁移状态 | 说明 |
|----------|------|---------|------|
| CLAUDE.md | 指令 | **改写** | → AGENTS.md |
| rules/top-rules.yaml | 数据 | 保留 | 无 Claude 依赖 |
| rules/role-mapping.yaml | 数据 | 保留 | 无 Claude 依赖 |
| rules/schema.yaml | 数据 | 保留 | 无 Claude 依赖 |
| rules/business-rules.yaml | 数据 | 保留 | 无 Claude 依赖 |
| rules/sub-rules/*.yaml | 数据 | 保留 | 无 Claude 依赖 |
| rules/changelog.md | 文档 | 保留 | 无 Claude 依赖 |
| rules/scripts/role_prompt_builder.py | 工具 | 保留 | 纯 Python |
| rules/scripts/check_compliance.py | 工具 | **微调** | 改 CLAUDE.md → AGENTS.md |
| rules/scripts/generate_report.py | 工具 | 保留 | 纯 Python |
| rules/scripts/validate_rules.py | 工具 | 保留 | 纯 Python |
| agents/*/role-prompt.md | 指令 | **适配** | 适配子代理 prompt 格式 |
| agents/*/context/current-state.yaml | 数据 | 保留 | 纯 YAML |
| agents/*/inbox/ | 数据 | **简化** | 保留文件结构，弱化通信机制 |
| audit/instruction-log/ | 数据 | 保留 | 纯文件系统 |
| audit/compliance-reports/ | 数据 | 保留 | 纯文件系统 |
| audit/risk-register.yaml | 数据 | 保留 | 纯 YAML |
| knowledge/index.yaml | 数据 | 保留 + 增强 | 结合 MEMORY.md |
| infra/monitoring/ | 数据 | 保留 | 纯文件系统 |
| infra/token-budget/ | 工具 | **适配** | 适配 Qoder credit 模型 |
| .github/workflows/*.yml | CI/CD | **适配** | 保留 GitHub Actions，按需调整触发条件 |
