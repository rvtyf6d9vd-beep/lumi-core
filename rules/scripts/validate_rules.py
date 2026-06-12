#!/usr/bin/env python3
"""
validate_rules.py — 规则格式校验

验证 rules/ 目录下所有 YAML 规则文件是否符合 schema.yaml 定义的格式。

用法:
    python validate_rules.py --project-root /path/to/Lumi-core
"""

import argparse
import sys
from pathlib import Path

import yaml


def load_yaml(path: Path) -> dict:
    with open(path, encoding="utf-8") as f:
        return yaml.safe_load(f) or {}


def validate_rules(project_root: Path) -> list[str]:
    """返回错误列表，空列表表示全部通过"""
    errors = []
    rules_dir = project_root / "rules"

    # 加载 schema
    schema_path = rules_dir / "schema.yaml"
    if not schema_path.exists():
        return [f"Schema 文件不存在: {schema_path}"]

    schema = load_yaml(schema_path)
    required_fields = schema.get("rule_fields", {}).get("required", [])
    valid_roles = set(schema.get("valid_roles", []))
    valid_categories = set(schema.get("valid_categories", []))
    valid_severities = set(schema.get("valid_severities", []))

    # 遍历规则文件
    skip_files = {"schema.yaml", "role-mapping.yaml"}
    rule_ids = set()

    for yaml_file in sorted(rules_dir.rglob("*.yaml")):
        if yaml_file.name in skip_files:
            continue

        try:
            data = load_yaml(yaml_file)
        except yaml.YAMLError as e:
            errors.append(f"{yaml_file}: YAML 解析错误 — {e}")
            continue

        if not data or "rules" not in data:
            errors.append(f"{yaml_file}: 缺少 'rules' 顶级键")
            continue

        for rule in data["rules"]:
            rule_id = rule.get("id", "??")
            prefix = f"{yaml_file.name}[{rule_id}]"

            # 检查必填字段
            for field in required_fields:
                if field not in rule:
                    errors.append(f"{prefix}: 缺少必填字段 '{field}'")

            # 检查 ID 唯一性
            if rule_id in rule_ids:
                errors.append(f"{prefix}: 规则 ID 重复")
            rule_ids.add(rule_id)

            # 检查 category
            cat = rule.get("category")
            if cat and cat not in valid_categories:
                errors.append(f"{prefix}: 无效 category '{cat}'，有效值: {valid_categories}")

            # 检查 severity
            sev = rule.get("severity")
            if sev and sev not in valid_severities:
                errors.append(f"{prefix}: 无效 severity '{sev}'，有效值: {valid_severities}")

            # 检查 applicable_roles
            roles = rule.get("applicable_roles", [])
            if isinstance(roles, list):
                for r in roles:
                    if r not in valid_roles:
                        errors.append(f"{prefix}: 无效角色 '{r}'，有效值: {valid_roles}")

    # 检查 role-mapping.yaml
    mapping_path = rules_dir / "role-mapping.yaml"
    if mapping_path.exists():
        mapping = load_yaml(mapping_path)
        roles = mapping.get("roles", {})
        for role_id, role_config in roles.items():
            if role_id not in valid_roles:
                errors.append(f"role-mapping.yaml: 角色 '{role_id}' 不在 schema 有效角色列表中")

            role_rules = role_config.get("rules", [])
            if role_rules != "ALL" and isinstance(role_rules, list):
                for rid in role_rules:
                    if rid not in rule_ids:
                        errors.append(f"role-mapping.yaml[{role_id}]: 引用了不存在的规则 '{rid}'")
    else:
        errors.append(f"角色映射文件不存在: {mapping_path}")

    return errors


def main():
    parser = argparse.ArgumentParser(description="规则格式校验")
    parser.add_argument("--project-root", default=".", help="项目根目录")
    args = parser.parse_args()

    root = Path(args.project_root).resolve()
    print(f"校验规则文件: {root / 'rules'}")
    print()

    errors = validate_rules(root)

    if errors:
        print(f"❌ 发现 {len(errors)} 个错误:")
        for e in errors:
            print(f"  - {e}")
        sys.exit(1)
    else:
        print("✅ 所有规则文件格式正确")


if __name__ == "__main__":
    main()
