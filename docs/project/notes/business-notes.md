# 已移除规则存档

> 以下规则在 v3.0 精简中被移除，保留于此以供参考。

## B-3 价值维度定义

- **类别**: business
- **严重度**: low
- **适用角色**: pm
- **适用阶段**: requirements, delivery
- **描述**:
  价值维度：① 已完成性能功能开发和验证的 IP；② 历史代码移植重构加固；
  ③ IP 的定制和自动化验证（FDE 介入）。
- **检查类型**: manual
- **检查标准**: (无)

## B-4 合作方私有算力部署

- **类别**: business
- **严重度**: low
- **适用角色**: pm
- **适用阶段**: delivery
- **描述**:
  合作方：私有算力部署。
- **检查类型**: manual
- **检查标准**: (无)

## B-6 持续运营指标

- **类别**: business
- **严重度**: medium
- **适用角色**: pm
- **适用阶段**: delivery
- **描述**:
  持续运营指标。
- **检查类型**: automated
- **检查标准**:
  - infra/monitoring/metrics.yaml 包含运营指标数据

## IT-3 持续运营指标监控

- **类别**: it-infra
- **严重度**: medium
- **适用角色**: ai-infra
- **适用阶段**: setup, requirements, architecture, design, implementation, verification, delivery
- **描述**:
  持续运营指标监控。
- **检查类型**: automated
- **检查标准**:
  - infra/monitoring/metrics.yaml 存在且定期更新
  - Token 用量、任务完成率、规则合规率等核心指标有记录
