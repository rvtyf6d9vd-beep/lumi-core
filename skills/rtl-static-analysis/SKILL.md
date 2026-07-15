# Skill: RTL 静态分析 (rtl-static-analysis)

## 概述
Lumi-Core RTL 代码六维静态分析工具，可复用于每个开发周期。

## 适用场景
- 里程碑门禁前的 RTL 质量检查
- Bug 修复后的回归验证
- 新模块集成后的一致性检查

## 分析流程

### 输入文件
- `src/rtl/**/*.sv` — 全部 RTL 源文件
- `docs/design/*.html` — 设计文档（接口定义源）
- `audit/errata/known-issues.yaml` — Errata 登记簿
- `audit/compliance-reports/rtl-static-scan-*.html` — 历史报告（基线对比）
- `tests/` — 测试用例目录
- `docs/verification/coverage-plan.yaml` — 覆盖率计划

### 六维分析步骤

| 维度 | 检查内容 | 检查方法 |
|------|----------|----------|
| 1. 设计一致性 | 模块端口匹配、信号命名、CDC、硬编码检查 | 正则解析 .sv 端口列表，交叉比对 docs/design/ |
| 2. 逻辑缺陷 | 未初始化信号、FSM default 缺失、组合环路、竞争条件 | 正则扫描 always_comb/always_ff/case 语句 |
| 3. 验证环境 | Cover Group 覆盖率、测试用例映射、Scoreboard RM | 解析 coverage-plan.yaml + tests/ 目录 |
| 4. 需求追溯 | PRD→RTL→测试 追溯矩阵完整性 | 检查模块头注释中的需求标签 |
| 5. 架构合规 | ISA 扩展解码、微架构参数、编码规范 | 检查 decode_issue 中的 opcode 覆盖 |
| 6. 前期验证 | ERR-044~092 状态、修复代码验证、新问题检测 | 对比历史报告，验证修复模式 |

### 输出格式
- HTML 报告: `audit/compliance-reports/rtl-static-scan-YYYYMMDD.html`
- YAML 摘要: `audit/compliance-reports/rtl-static-scan-YYYYMMDD.yaml`
- Errata 更新: `audit/errata/known-issues.yaml` (新增条目)
- 风险更新: `audit/risk-register.yaml` (新增风险)

### 使用方法
```bash
# 运行完整分析
python3 skills/rtl-static-analysis/scan_rtl.py --project-root . --round 2

# 仅运行特定维度
python3 skills/rtl-static-analysis/scan_rtl.py --project-root . --dimension 6

# 对比基线
python3 skills/rtl-static-analysis/scan_rtl.py --project-root . --baseline audit/compliance-reports/rtl-static-scan-20260714.yaml
```

## files_required
- `skills/rtl-static-analysis/scan_rtl.py`
- `skills/rtl-static-analysis/SKILL.md`
- `src/rtl/**/*.sv`
- `docs/design/*.html`
- `audit/errata/known-issues.yaml`

## 验收标准
- 所有 Critical/High 发现已登记到 errata
- 所有 errata 状态与代码实际状态一致
- HTML 报告可归档到 compliance-reports/
- 与上一轮对比有差异分析
