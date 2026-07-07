# M1 里程碑流程总结与经验教训
# Lumi-Core M1 架构与需求冻结 — Lessons Learned

date: "2026-07-03"
milestone: M1
type: lessons-learned
author: pm-infra
rule: IT-2 (里程碑流程总结)

# ════════════════════════════════════════════════
# 1. M1 里程碑目标回顾
# ════════════════════════════════════════════════
milestone_goal:
  id: M1
  name: "架构与需求冻结"
  target_date: "2026-09"
  actual_completion: "2026-07-03"
  advance_days: 60+  # 提前两个月完成

  four_gates:
    - GATE-1: PRD 评审定版 → PASS (BL-1.0 → BL-1.1 增强)
    - GATE-2: 架构说明书定版 → PASS (独立审查补强 6 章节)
    - GATE-3: 验证方案启动 → PASS (框架 + 命名规范)
    - GATE-4: GEM5+ 中断建模 → CONDITIONAL_PASS (FS 模式待 M2)

# ════════════════════════════════════════════════
# 2. 主要交付物
# ════════════════════════════════════════════════
deliverables:
  baseline:
    - BL-1.0: 91 条需求 (M1 门禁初始)
    - BL-1.1: 99 条需求 (独立审查补强, +8 需求)

  architecture:
    - platform-spec.html v1.0: 1128 行
    - 新增 6 章节: §1.5/§4.7/§4.8/§5.6/§7.8/§8.9
    - 修复 2 个 Bug: §10 配置表 #15/#16

  prd:
    - product-requirements.html: 12 章节, 31 分类表格
    - 03-hardware.yaml: 新增 RTL-CLK 分类 (3.2.10)
    - 04-deliverables.yaml: 新增 PRM + Compliance 报告 (LUMI-DEL-011/012)
    - 10-traceability.yaml: §10.8 统计校准 (90→99)

  audit:
    - 4 份门禁报告 (m1-20260702/m1-review-20260703/m1-signoff-20260703/m1-qa-isolation-20260703)
    - 1 份关闭汇总 (m1-closure-20260703)
    - 1 份 HTML 报告 (m1-review-20260703.html)

# ════════════════════════════════════════════════
# 3. 经验教训 (Lessons Learned)
# ════════════════════════════════════════════════
lessons_learned:
  positive:
    - id: L-001
      title: "独立审查机制有效发现 PRD 完整性缺口"
      detail: |
        M1 门禁通过后, 由用户从硬件 IP 产品完整性视角发起的独立审查, 发现了 4 项原门禁未覆盖的缺口:
        1. 缺少 PRM 程序员参考手册交付物
        2. 缺少 RISC-V 合规套件交付物
        3. 缺少时钟/复位架构描述
        4. 缺少 PMA/寄存器堆/异常处理/性能计数器/顶层框图详细描述
        全部 4 项缺口已在 M1 阶段补强, 避免进入 M2 后才发现。
      impact: HIGH
      recommendation: "M2 阶段前增加独立审查环节, 不仅是自动化检查, 还需第三方视角评估"
      rule_alignment: "QA-1 (第三方 Agent 审计)"

    - id: L-002
      title: "qa-audit 隔离子代理模式有效保证审计独立性"
      detail: |
        qa-audit 通过独立 Task 子代理执行, 不共享主会话状态, 基于 rules/ 中结构化规则逐项审计产出物。
        审计报告 965 行, 30 条规则 27 PASS / 3 WARN / 0 FAIL, 数字与文件证据完全一致。
        3 项 WARN 中 1 项是项目体量正常提示, 2 项是 M1 过渡期/收尾工作, 不构成实质性失败。
      impact: HIGH
      recommendation: "保持 qa-audit 隔离子代理模式, 在 M2/M3 门禁继续使用"
      rule_alignment: "QA-1 + IT-2"

    - id: L-003
      title: "BL-1.0 不删除与 BL-1.1 并存体现基线递进"
      detail: |
        按规则 03 工作留痕原则, BL-1.0 不删除, 与 BL-1.1 并存, 体现基线递进。
        同时 gen_baseline.py 增强为支持版本号参数, 可重复生成任意基线。
      impact: MEDIUM
      recommendation: "M2 阶段基线 BL-2.0 同样不删除, 三基线并存"
      rule_alignment: "03 (工作留痕)"

    - id: L-004
      title: "追溯矩阵统计校准发现并修复数据错误"
      detail: |
        追溯矩阵 §10.8 统计校准过程中, 发现原 90 条 (实际 99 条) 的错误, 体现 '不准跳过问题' 原则。
        错误原因: 硬件需求统计口径 (PPA 10 + RTL 56 = 66, 原误写 55) + 漏算 RTL-CLK 5 条。
      impact: MEDIUM
      recommendation: "M2 阶段追溯矩阵统计需从基线 YAML 自动化计算, 避免手算误差"
      rule_alignment: "18 (问题不允许跳过)"

    - id: L-005
      title: "M1 门禁报告分层结构清晰, 4 报告递进关系明确"
      detail: |
        m1-20260702 (BL-1.0 原始) → m1-review-20260703 (BL-1.1 补强) → m1-signoff-20260703 (主调度 Sign-off) → m1-qa-isolation-20260703 (QA 隔离审计) → m1-closure-20260703 (M1 关闭汇总)
        5 份报告形成完整证据链, 每份报告都可独立审计。
      impact: HIGH
      recommendation: "M2 阶段保持相同 5 份报告结构, 改为 m2-* 前缀"
      rule_alignment: "10 (里程碑门禁) + 03 (工作留痕)"

  improvements:
    - id: L-101
      title: "ERR-003 (check_compliance.py milestone-plan 格式兼容性) 待 M2 修复"
      detail: |
        M1 阶段发现 check_compliance.py 存在 milestone-plan.yaml 格式兼容性问题, 暂以 WARN 状态接受。
        根因是脚本对 current-state.yaml 中 active_tasks 期望为 dict, 而部分角色使用 str 格式。
        M1 已通过将所有角色 active_tasks 标准化为 dict + completed_tasks 字段修复了部分问题,
        但脚本本身的格式兼容性仍需加强 (应同时支持两种格式)。
      impact: LOW
      owner: pm-infra
      fix_milestone: M2-S1
      recommendation: "check_compliance.py 增加 schema 校验, 拒绝非 dict 的 task 条目"
      rule_alignment: "ERR-003"

    - id: L-102
      title: "QA 隔离审计 REC-001/003 需要在 M2 阶段实施"
      detail: |
        REC-001: platform-spec.html 缺少 Bug #15/#16 修复历史注释, 建议在 v1.0 基础上补充或维护 changelog
        REC-003: coverage-plan.yaml 需补充新增 8 条需求的 Cover Group 定义
        REC-005: ERR-003 修复
        REC-006: errata regression_test 字段补全
      impact: MEDIUM
      owner: hw-design + hw-ver + pm-infra
      fix_milestone: M2-S1
      rule_alignment: "qa-audit REC"

    - id: L-103
      title: "rules/ 规则分类与 role-mapping 不完全对齐"
      detail: |
        M1 阶段发现 rules/ 中有 30 条规则, role-mapping 中有 58 条规则引用 (含派生),
        当前未严格区分基础规则与派生规则, 审计时规则 ID 匹配存在歧义。
      impact: LOW
      owner: pm-infra
      fix_milestone: M3 流程优化
      recommendation: "M3 阶段重构 rules/ 分类, 明确 base_rule / derived_rule / instance_ref 三级"
      rule_alignment: "schema.yaml + role-mapping.yaml"

# ════════════════════════════════════════════════
# 4. 流程优化建议 (供下个项目参考)
# ════════════════════════════════════════════════
process_optimizations:
  - id: OPT-001
    title: "M2 阶段门禁结构保持 5 份报告递进"
    detail: "M2 阶段沿用 5 份报告结构: m2-baseline → m2-review → m2-signoff → m2-qa-isolation → m2-closure"

  - id: OPT-002
    title: "M2 阶段前增加独立审查环节"
    detail: "不仅是自动化检查, 还要从第三方视角 (如商业 IP 完整性 / 客户视角) 评估"

  - id: OPT-003
    title: "规则脚本加强健壮性"
    detail: "check_compliance.py 应支持 schema 校验, 减少对特定格式的强依赖"

  - id: OPT-004
    title: "基线生成脚本增强为通用版本"
    detail: "gen_baseline.py 已支持版本号参数, 可直接用于 M2 阶段 BL-2.0 生成"

  - id: OPT-005
    title: "追溯矩阵统计自动化"
    detail: "M2 阶段从基线 YAML 自动计算分类统计, 避免手算误差"

# ════════════════════════════════════════════════
# 5. 关键数据
# ════════════════════════════════════════════════
key_metrics:
  requirements:
    M1_baseline_BL_1_0: 91
    M1_baseline_BL_1_1: 99
    new_requirements: 8
    priority_Must: 84
    priority_Should: 12
    priority_Could: 3

  architecture:
    chapters_total: 60
    chapters_added: 6
    bugs_fixed: 2
    spec_lines: 1128

  audit:
    automated_checks: {PASS: 13, WARN: 2, FAIL: 0}
    rule_checks: {PASS: 27, WARN: 3, FAIL: 0}
    gates: {PASS: 3, CONDITIONAL_PASS: 1, FAIL: 0}
    audit_report_lines: 965
    role_sign_offs: 3

  effort:
    work_days: 3
    decisions: 4
    files_modified: 8
    files_created: 7

# ════════════════════════════════════════════════
# 6. 总结
# ════════════════════════════════════════════════
summary: |
  M1 里程碑 (架构与需求冻结) 提前两个月完成, 4 门禁 3 PASS + 1 CONDITIONAL_PASS。

  主要成就:
  1. 建立了完整的 RISC-V 处理器 IP 需求基线 (BL-1.1, 99 条)
  2. 平台架构说明书 v1.0 定版, 含 60+ 章节, 覆盖 PPA/ISA/微架构/中断/调试/内存/安全/多核/时钟复位
  3. 验证策略框架与覆盖率计划就位, M2 阶段直接填充用例
  4. 完整 QA 隔离审计机制, 30 条规则 27 PASS, 0 FAIL

  关键经验:
  1. 独立审查机制有效发现 PRD 完整性缺口
  2. qa-audit 隔离子代理模式保证审计独立性
  3. BL-1.0/1.1 并存体现基线递进
  4. 5 份报告递进结构形成完整证据链

  待 M2 收尾:
  1. GATE-4 (gem5 FS 模式 + CLIC 接线)
  2. ERR-003 (check_compliance.py 脚本格式兼容性)
  3. 8 条新增需求 RTL 实现与验证用例
  4. 14 份模块设计文档
  5. 6 条 QA 整改建议 (REC-001/002/003/004/005/006)
