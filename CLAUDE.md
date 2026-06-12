# Lumi — 项目顶层指令

> 本文件在每次 Cowork 会话启动时自动加载。
> 包含角色切换协议、任务路由、qodercli 委派规则和文件操作规范。

## 项目信息

- **项目名称:** Lumi
- **项目类型:** RISC-V 处理器 IP
- **参考项目:** mvp-core, forge-core (reference/ 目录)
- **架构模式:** v2.1 双引擎 — Cowork 主会话 + qodercli

---

## 角色切换协议

当用户要求以某个角色工作，或者任务明确属于某个角色时，必须严格执行以下步骤：

### 1. Pre-Check（进入角色前）
1. 读取 `agents/{role}/role-prompt.md` — 获取该角色的规则绑定和行为约束
2. 读取 `agents/{role}/context/current-state.yaml` — 获取当前状态和未完成任务
3. 检查 `agents/{role}/inbox/` 目录 — 处理来自其他角色的未读消息
4. 按照 role-prompt.md 中的 Pre-Check 流程检查前置条件

### 2. Execution（执行任务）
5. 以该角色的身份执行任务，遵守 role-prompt.md 中列出的所有适用规则
6. 遵守角色的文件权限约束（可读/可写路径）

### 3. Post-Verify（退出角色前）
7. 更新 `agents/{role}/context/current-state.yaml` — 记录任务进度
8. 如有跨角色影响，写入目标角色的 `agents/{target}/inbox/` 目录
9. 追加记录到 `audit/instruction-log/YYYY-MM-DD.yaml`

---

## 可用角色

| 角色标识 | 显示名称 | 提示词文件 | 主要职责 |
|---------|---------|-----------|---------|
| pm | 项目经理 | agents/pm/role-prompt.md | 需求导入、项目计划、里程碑管控、商务 |
| hw-arch | 硬件架构 | agents/hw-arch/role-prompt.md | 架构设计、RTL、性能指标 |
| hw-ver | 硬件验证 | agents/hw-ver/role-prompt.md | 验证策略、FPGA 验证 |
| sw-arch | 软件架构 | agents/sw-arch/role-prompt.md | BSP、RTOS、工具链 |
| ai-infra | AI 基础设施 | agents/ai-infra/role-prompt.md | 环境搭建、版本管理、知识库 |
| qa-audit | QA 审计 | agents/qa-audit/role-prompt.md | 独立审计（qodercli 隔离执行） |

---

## 任务路由表

当用户下达任务时，根据关键词自动判断应该切换到哪个角色：

| 任务关键词/领域             | 目标角色          | 附加规则      |
|---------------------------|------------------|--------------|
| 架构设计, RTL, 模块设计     | hw-arch          | HD-1~3       |
| 验证, 测试, FPGA, 回归     | hw-ver           | HV-1~2       |
| BSP, 驱动, RTOS, 工具链    | sw-arch          | 无专属子规则   |
| 环境, CI/CD, 知识库, 版本  | ai-infra         | IT-1~3       |
| 审计, Sign-off, 合规检查   | qa-audit         | QA-1         |
| 需求, 计划, 里程碑, 商务    | pm               | B-1~7        |
| 门禁 (多角色)              | 串行切换+qodercli | 全部适用      |

---

## qodercli 委派规则

简单可控任务走 `qodercli --yolo`，复杂推理任务由主会话执行。

### 判断标准
- **用 qodercli:** 输入输出确定、可脚本化、无需多步推理或人类确认
- **用主会话:** 需要读取多个文件、多步推理、中间确认、方案选型

### 委派格式
```bash
qodercli --yolo -p "任务描述" --cwd ~/Workbench/FullAIFlowProjects/Lumi-core
```

### 典型委派场景
- 格式检查 / lint
- 文件整理 / 重命名
- 日志汇总 / inbox 消息分拣
- 运行合规检查脚本
- 知识库条目计数
- git 状态检查

### QA 审计（必须用 qodercli）
QA 审计始终通过 qodercli 在独立进程中执行，确保进程级上下文隔离。

---

## 文件操作规范

### 工作留痕 (规则 03)
- 老内容保留，不覆盖。新状态生成新文件（按日期递进）。
- 粒度：一天。一天内的内容可以覆盖。

### 指令记录 (规则 16)
- 每次操作追加到 `audit/instruction-log/YYYY-MM-DD.yaml`
- 选择类指令记录全部选项和最终选择

### 批量删除 (规则 17)
- 一次超过 3 个文件的删除操作必须询问用户
- 优先存档而非删除

### 问题不跳过 (规则 18)
- 遇到问题必须解决或记录为风险项
- 风险项写入 `audit/risk-register.yaml`

### 文档格式 (规则 14)
- 人类参考文件使用 HTML 格式
- 文档间使用超链接串联

---

## 里程碑门禁执行协议

1. qodercli 执行自动化检查脚本 → 输出到 `audit/compliance-reports/`
2. 主会话串行切换角色执行 Sign-off 检查
3. qodercli 执行 QA 独立审计（进程隔离）
4. 主会话汇总报告，请求人类最终确认

---

## inbox 消息格式

```yaml
# agents/{role}/inbox/{timestamp}_{type}.yaml
from: hw-arch
to: hw-ver
type: design-change  # design-change | bug-report | info | review-request
priority: high       # high | medium | low
status: unread
timestamp: "2026-06-10T16:30:00+08:00"
subject: "CSR 模块接口变更"
body: "..."
```
