# Lumi -- QoderWork 顶层指令

> 会话启动时自动加载。定义角色路由、子代理协议、文件规范和门禁流程。
> 详细规则见 `agents/{role}/role-prompt.md` 及 `rules/*.yaml`。

## 1. 项目信息

- **项目:** Lumi -- RISC-V 处理器 IP
- **参考项目:** mvp-core, forge-core (`reference/` 目录)
- **架构模式:** Qoder 主调度 + Task 子代理

## 2. 角色路由表

根据任务关键词自动路由，主调度执行 Pre-Check 后分派。

| 关键词 | 角色 | 提示词 | 附加规则 |
|--------|------|--------|----------|
| 需求, 计划, 里程碑, 商务, 环境, CI/CD, 知识库 | pm-infra | agents/pm-infra/role-prompt.md | B-1, B-2, B-5, IT-1, IT-2 |
| 架构设计, RTL, 模块设计, BSP, 驱动, RTOS, 工具链 | hw-design | agents/hw-design/role-prompt.md | HD-1 ~ HD-3 |
| 验证, 测试, FPGA, 回归 | hw-ver | agents/hw-ver/role-prompt.md | HV-1 ~ HV-2 |
| 审计, Sign-off, 合规检查 | qa-audit | agents/qa-audit/role-prompt.md | QA-1 |

多角色门禁: 串行调度各角色子代理 + qa-audit 隔离审计。

## 3. Task 子代理协议

**使用子代理:** 任务属于特定角色职责 / 多角色并行 / QA 审计 (必须隔离)
**使用主会话:** 跨角色综合分析 / 多轮人类确认 / 简单查询

子代理 Prompt 必须包含:
```
角色身份 -> 角色专属规则(不含通用规则) -> 文件权限 -> Pre-Check结果 -> 具体任务
```

## 4. 文件操作规范

- **03 工作留痕:** 老内容保留不覆盖，新状态按日期生成新文件，粒度一天
- **16 指令记录:** 每次操作追加到 `audit/instruction-log/YYYY-MM-DD.yaml`，选择类记录全部选项与最终选择
- **17 批量删除须确认:** >3 文件删除须询问用户，优先存档
- **18 问题不跳过:** 解决问题或登记为风险项写入 `audit/risk-register.yaml`
- **20 Errata 维护:** 所有已知问题记录到 `audit/errata/known-issues.yaml`，解决后保留记录
- **21 Bug 回归:** RTL Freeze 后每个 Bug 必须有回归测试用例
- **22 Skill 复用:** 任务执行前检查 `skills/` 目录是否有可用 Skill
- **23 三层进度:** Milestone/Stage/Phase 结构管理，进度计划定义在 `docs/project/milestone-plan.yaml`

## 5. 里程碑门禁协议

1. **自动化检查** -- 主调度运行检查脚本 -> `audit/compliance-reports/`
2. **角色 Sign-off** -- 各角色子代理串行执行
3. **QA 隔离审计** -- qa-audit 子代理独立上下文执行 (不可在主会话)
4. **汇总确认** -- 主调度汇总报告，请求人类最终确认

## 6. 变更通知格式

路径: `agents/{target}/change-notices/YYYY-MM-DD.yaml`

```yaml
id: "CN-20260615-001"
from: hw-design
to: hw-ver
type: design-change      # design-change | bug-report | info | review-request
priority: high           # high | medium | low
timestamp: "2026-06-15T10:00:00+08:00"
subject: "CSR 模块接口变更"
summary: "修改了 CSR 读写时序，影响验证测试台"
related_rules: [HD-2]
files_changed: [rtl/csr/csr_ctrl.v]
action_required: "更新验证用例，回归测试"
status: unread           # unread | acknowledged | resolved
```

## 7. 通用规则（全量）

> 以下规则对所有角色生效，role-prompt.md 中不再重复。子代理执行任务时自动继承本节约束。

### [03] 工作留痕 — critical
所有工作必须留痕，以备未来的跟踪和审查。原则上老的内容必须保留而不是被覆盖，最新状态可以根据日期生成新的文件递进更新。粒度暂定一天（一天内的内容可以覆盖而不是拆分成多个文件，Agent 自行判断）。
- 每个工作日必须有对应的 audit/instruction-log/YYYY-MM-DD.yaml
- git 提交记录每天至少一条

### [05] RISC-V Profile 与文档 — critical
基于 RISC-V 准文档制定属于整个项目的 Profile（可使用或参考 RVM23）。标准文档定期更新，但 Profile 只考虑已被 Ratified 的更新。提醒用户决定是否要接受更改的新标准，让用户决定。RISC-V 相关文档必须本地化（选择合适的本地文件夹放置），定期更新。
- docs/standards/riscv-profile.html 存在
- Profile 中仅包含 Ratified 状态的扩展
- docs/standards/riscv-specs/ 目录下有最新版本的 RISC-V 标准文档

### [06] 性能评估模型 — high
进入实际项目之前，需要先建立性能评估模型（例如基于 GEM5+ 的 Cycle Model）。
- perf/gem5-model/ 目录下有可运行的性能模型

### [07] 平台架构说明书 — critical
平台架构说明书起到总揽全局的作用，应包含处理器架构相关的全局内容和详细的硬件需求清单。
- docs/architecture/platform-spec.html 存在
- 包含完整的硬件需求清单

### [08] 编码前写文档 — critical
进入 RTL 设计阶段，所有编码工作必须先写文档，承接平台架构的硬件需求（要求每个需求都有承接），文档内容必须细化到具体的设计或验证的详细设计。
- 每个 src/ 子模块在 docs/design/ 下有对应的设计文档
- 设计文档中的需求可追溯到 platform-spec.html

### [09] 验证方案框架 — critical
建立完整的验证方案框架设计，生成完整的验证策略。验证案例必须证明能完整覆盖设计的所有需求和接口。
- docs/verification/ 目录下有验证方案文档
- 验证用例到需求的覆盖率矩阵存在

### [10] 里程碑门禁 — critical
所有里程碑必须有强制门禁，必须完成全面核查才能进入下一步。
- audit/compliance-reports/ 下有每个里程碑的门禁报告
- 门禁报告中所有检查项状态为 PASS
- 人类项目负责人已签署确认

### [11] 每日集成回归 — high
每个比较大的进展（以天为单位甚至更短）都必须完成集成和回归测试。
- CI 回归测试每日运行
- 回归通过率 100%

### [12] 基准测试统一化 — medium
基准测试平台（如 CoreMark）必须统一化，相关参数必须统一管理。
- perf/benchmarks/ 目录下有统一的配置文件
- 基准测试参数有统一的 YAML 配置

### [13] GitHub 版本管理 — high
使用 GitHub 进行版本管理，建立一套明确的版本管理机制。
- .git 目录存在
- 远程仓库已配置
- 分支保护策略已启用

### [14] HTML 文档格式与索引 — medium
供人类参考的文件应尽可能使用 HTML 格式，并用图文和超链接的方式串联形成文档地图。项目管理用单一文件，但可以索引到其他文件（如子里程碑的执行计划），来完成扩展。
- docs/ 目录下人类参考文件使用 .html 格式
- docs/index.html 存在且包含到所有子文档的超链接
- docs/project/master-plan.html 存在且包含里程碑索引

### [16] 指令记录 — critical
建立一个机制，把每条指令都存下来。如果是选择类的，把所有选项和我的选择都记录下来。
- audit/instruction-log/ 目录下每天有对应日志文件
- 选择类指令需记录全部选项和最终选择

### [17] 批量删除须确认 — high
批量（一次超过三个文件）删除任何大于 1MB 的文件都需要询问用户，更好的办法是存档而不是删除。
- audit/instruction-log/ 中批量删除操作有用户确认记录

### [18] 问题不允许跳过 — critical
每次测试或验证遇到问题不允许回避，需要尽可能解决。如果问题无法解决，记录一个项目风险项等后来解决，不允许跳过。
- audit/risk-register.yaml 中无 status: skipped 的项目
- 所有已知问题有对应的风险条目

### [19] 里程碑文档检查 — high
每次里程碑达成时必须对相关文档做一轮全局检查，确认是否需要更新，可制定相关策略。
- 里程碑门禁报告中包含文档时效检查项
- 所有文档的最后更新日期在里程碑周期内

### [20] Errata/Known Issue 维护 — high
维护一份 Errata/Known Issue 文档，专门记录所有已知问题（Known Issue / Errata），直到该问题被彻底解决。Errata 条目应包含：问题标识、简要描述、发现日期、影响范围、当前状态（open/resolved）、临时规避方案（如有）等。问题解决后更新状态为 resolved 并注明解决日期和方式，但保留记录不删除。
- audit/errata/known-issues.yaml 存在且格式合规
- 所有已知问题在 errata 中有对应条目
- 已解决问题保留记录且标注 resolved

### [21] Bug 回归测试用例 — critical
在达到 RTL Freeze 里程碑之后，每个发现的 Bug 必须增加对应的回归测试用例，以保证后续修改不会导致相同问题重现。回归测试用例随项目持续维护，直到该回归测试用例因设计变更不再适用（此时应更新或废弃该用例并记录原因）。
- 每个已修复 Bug 有对应的回归测试用例
- 回归测试用例可追溯至对应的 Bug/Errata 记录
- 废弃的回归测试用例有废弃原因记录

### [22] Skill 优先复用 — high
在项目根目录维护一个 skills/ 目录作为项目 Skill 列表，收录经过验证的可用 Skill（如 GEM5 建模、CLIC 验证、回归测试运行等可复用能力）。每当执行任务时，应优先从 skills/ 列表中查找是否已有可用 Skill，或能否通过轻量修改后复用，避免重复造轮。新 Skill 收录需经过 review，确保质量。
- skills/ 目录存在且包含 index.yaml 索引
- 每个 Skill 文件含 name、description、usage 和 files_required 字段
- 任务执行前检查 skills/ 目录是否有匹配 Skill
- 审计周期内重复造轮次数为 0

### [23] Milestone/Stage/Phase 层级定义 — high
项目进度采用三层结构管理：Milestone (MS) 为项目级大里程碑（M0, M1, M2...），Stage (S) 为 Milestone 内部的工作阶段（MS-序号-S阶段号），Phase (P) 为具体任务的工序阶段（setup/requirements/architecture/design/implementation/verification/delivery）。
- docs/project/milestone-plan.yaml 存在且定义所有 MS 和 S
- 每个任务有明确的 Phase 标记
- Milestone 门禁报告引用 MS 编号（规则 10）
- role-mapping.yaml 中 applicable_phases 与 schema.yaml 一致
