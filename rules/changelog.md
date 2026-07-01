# 规则变更日志

## 2026-06-24 — v3.1 新增 Errata & Bug 回归 & Skill 复用规则
- 新增规则 20: Errata/Known Issue 维护 — 记录所有已知问题直到解决
- 新增规则 21: Bug 回归测试用例 — RTL Freeze 后每个 Bug 增加回归测试用例
- 新增规则 22: Skill 优先复用 — 建立 skills/ 目录，任务优先查找复用现有 Skill
- 创建 audit/errata/known-issues.yaml 模板
- role-mapping.yaml 更新: 为相关角色添加新规则引用和文件权限

## 2026-06-15 — v3.0 Qoder 适配 + 架构优化
- 角色合并: 6→4 (hw-arch+sw-arch→hw-design, pm+ai-infra→pm-infra)
- 规则精简: 34→26 (移除 B-3/B-4/B-6/IT-3/HD-4, 合并 B-2+B-7/15→14/04→05)
- 分层加载: role-prompt 仅含专属规则
- 通信机制: inbox → change-notices
- 合规重设计: 三级检查 + 评分模型
- 知识库: LRU 淘汰机制
- schema/role-mapping 更新为 4 角色

## 2026-06-10 — 初始化
- 从 Top Rules_Optimized.md 导入全部 29 条规则
- 通用规则 17 条 (03-19)
- 硬件设计子规则 4 条 (HD-1 ~ HD-4)
- 硬件验证子规则 2 条 (HV-1 ~ HV-2)
- IT 基础设施子规则 3 条 (IT-1 ~ IT-3)
- QA 审计子规则 1 条 (QA-1)
- 商业规则 7 条 (B-1 ~ B-7)
- 创建 schema.yaml 和 role-mapping.yaml
- 6 个角色的规则映射已定义
