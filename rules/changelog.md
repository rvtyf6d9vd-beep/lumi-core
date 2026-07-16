# 规则变更日志

## 2026-07-01 — v3.2 文档一致性同步
- AGENTS.md 第 7 节补充规则 20-23（Errata/Bug回归/Skill复用/里程碑层级）
- AGENTS.md 第 4 节文件操作规范补充规则 20-23 引用
- top-rules.yaml 标题注释更新（15 条 → 19 条）
- 重新生成全部 4 个角色的 role-prompt.md（role_prompt_builder.py）
- Lumi_Deployment_Plan.html 升级至 v3.1（规则总数 26→30，评分模型更新）
- product-requirements.html 重新生成

## 2026-06-24 — v3.1 新增 Errata & Bug 回归 & Skill 复用 & 里程碑 & 门禁权限 & 交叉审查规则
- 新增规则 20: Errata/Known Issue 维护
- 新增规则 21: Bug 回归测试用例
- 新增规则 22: Skill 优先复用
- 新增规则 23: Milestone/Stage/Phase 层级定义
- 新增规则 24: 门禁不可自解释或降低
- 新增规则 25: 复杂计划交叉审查建议 — 高风险计划须建议多模型交叉验证
- 新增规则 26: 计划统一编码 — PLN-xxxx 全局编码体系，禁止局部重复起始编号
- 新增规则 27: 计划文档统一存档 — 所有计划集中归档至 docs/plans/
- 计划迁移: docs/project/ + docs/verification/ + Qoder cache → docs/plans/ 各子目录
- 创建 audit/errata/known-issues.yaml 模板
- 创建 docs/project/milestone-plan.yaml 里程碑计划定义文件
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
