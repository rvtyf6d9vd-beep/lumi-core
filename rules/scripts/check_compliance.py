#!/usr/bin/env python3
"""
check_compliance.py — 三级合规性检查引擎

三级检查体系:
  Tier 1  结构检查  — 文件存在性、目录结构、格式合法性
  Tier 2  内容检查  — 解析文件内容，校验 check_criteria 中的自动化项
  Tier 3  交叉检查  — 角色映射↔规则文件一致性、变更通知↔current-state 一致性

用法:
    python check_compliance.py --project-root /path/to/Lumi-core
    python check_compliance.py --project-root . --milestone M1
    python check_compliance.py --project-root . --tier 1          # 只跑 Tier 1
    python check_compliance.py --project-root . --output report.yaml
"""

import argparse
import os
import sys
from datetime import datetime, timedelta
from pathlib import Path

import yaml


# ────────────────────────────────────────────────────────────────────────────
# 工具函数
# ────────────────────────────────────────────────────────────────────────────

def load_yaml(path: Path) -> dict:
    if not path.exists():
        return {}
    with open(path, encoding="utf-8") as f:
        return yaml.safe_load(f) or {}


def collect_rules(rules_dir: Path) -> list[dict]:
    all_rules = []
    skip_files = {"schema.yaml", "role-mapping.yaml", "changelog.md"}
    for yaml_file in sorted(rules_dir.rglob("*.yaml")):
        if yaml_file.name in skip_files:
            continue
        data = load_yaml(yaml_file)
        if data and "rules" in data:
            all_rules.extend(data["rules"])
    return all_rules


def make_result(rule_id: str, title: str, tier: int, status: str, detail: str, **extra) -> dict:
    r = {"id": rule_id, "title": title, "tier": tier, "status": status, "detail": detail}
    r.update(extra)
    return r


# ────────────────────────────────────────────────────────────────────────────
# Tier 1: 结构检查
# ────────────────────────────────────────────────────────────────────────────

def tier1_structure_checks(root: Path) -> list[dict]:
    results = []

    # 1a. 核心文件存在性
    required_files = {
        "AGENTS.md": "顶层指令文件",
        "rules/schema.yaml": "规则元数据 Schema",
        "rules/role-mapping.yaml": "角色映射",
        "rules/top-rules.yaml": "通用规则",
        "rules/business-rules.yaml": "商业规则",
        "rules/sub-rules/hardware-design.yaml": "硬件设计子规则",
        "rules/sub-rules/hardware-verify.yaml": "硬件验证子规则",
        "rules/sub-rules/it-infra.yaml": "IT 基础设施子规则",
        "rules/sub-rules/qa-audit.yaml": "QA 审计子规则",
    }
    missing = [f for f, desc in required_files.items() if not (root / f).exists()]
    results.append(make_result(
        "T1-FILES", "核心文件完整性", 1,
        "PASS" if not missing else "FAIL",
        f"缺失 {len(missing)} 个文件: {missing}" if missing else f"全部 {len(required_files)} 个核心文件存在",
    ))

    # 1b. 角色目录与 role-prompt.md
    roles = ["pm-infra", "hw-design", "hw-ver", "qa-audit"]
    role_issues = []
    for role in roles:
        rp = root / f"agents/{role}/role-prompt.md"
        cs = root / f"agents/{role}/context/current-state.yaml"
        if not rp.exists():
            role_issues.append(f"{role}: 缺少 role-prompt.md")
        if not cs.exists():
            role_issues.append(f"{role}: 缺少 current-state.yaml")
    results.append(make_result(
        "T1-ROLES", "角色目录完整性", 1,
        "PASS" if not role_issues else "FAIL",
        "; ".join(role_issues) if role_issues else f"全部 {len(roles)} 个角色目录结构完整",
    ))

    # 1c. 关键目录存在性
    key_dirs = ["audit", "audit/instruction-log", "audit/compliance-reports",
                 "knowledge", "docs", "rules/scripts"]
    missing_dirs = [d for d in key_dirs if not (root / d).is_dir()]
    results.append(make_result(
        "T1-DIRS", "关键目录结构", 1,
        "PASS" if not missing_dirs else "WARN",
        f"缺失目录: {missing_dirs}" if missing_dirs else f"全部 {len(key_dirs)} 个目录存在",
    ))

    # 1d. Git 版本管理
    git_exists = (root / ".git").exists()
    results.append(make_result(
        "13", "GitHub 版本管理", 1,
        "PASS" if git_exists else "WARN",
        ".git 目录存在" if git_exists else ".git 目录不存在",
    ))

    # 1e. 规则 YAML 格式合法性
    rules_dir = root / "rules"
    yaml_errors = []
    for yaml_file in rules_dir.rglob("*.yaml"):
        if yaml_file.name in {"schema.yaml", "role-mapping.yaml"}:
            continue
        try:
            with open(yaml_file, encoding="utf-8") as f:
                data = yaml.safe_load(f)
            if data and "rules" not in data:
                yaml_errors.append(f"{yaml_file.name}: 缺少 rules 字段")
        except yaml.YAMLError as e:
            yaml_errors.append(f"{yaml_file.name}: YAML 解析错误 — {e}")
    results.append(make_result(
        "T1-YAML", "规则文件格式", 1,
        "PASS" if not yaml_errors else "FAIL",
        "; ".join(yaml_errors) if yaml_errors else "所有规则 YAML 格式合法",
    ))

    return results


# ────────────────────────────────────────────────────────────────────────────
# Tier 2: 内容检查
# ────────────────────────────────────────────────────────────────────────────

def tier2_content_checks(root: Path) -> list[dict]:
    results = []

    # 2a. 规则 03: 工作留痕 — 今日日志
    today = datetime.now().strftime("%Y-%m-%d")
    log_file = root / "audit" / "instruction-log" / f"{today}.yaml"
    results.append(make_result(
        "03", "工作留痕", 2,
        "PASS" if log_file.exists() else "WARN",
        f"今日日志 {log_file.name} {'存在' if log_file.exists() else '不存在'}",
    ))

    # 2b. 规则 14: HTML 文档格式
    docs_dir = root / "docs"
    if docs_dir.exists():
        html_files = list(docs_dir.rglob("*.html"))
        non_html = [
            f for f in docs_dir.rglob("*")
            if f.is_file() and f.suffix not in (".html", ".md", ".yaml", ".yml", ".gitkeep", "")
            and not f.name.startswith(".")
        ]
        results.append(make_result(
            "14", "HTML 文档格式", 2,
            "PASS" if not non_html else "WARN",
            f"HTML: {len(html_files)} 个, 非 HTML: {len(non_html)} 个",
            non_html_files=[str(f.relative_to(root)) for f in non_html[:10]],
        ))
    else:
        results.append(make_result("14", "HTML 文档格式", 2, "SKIP", "docs/ 目录不存在"))

    # 2c. 规则 18: 问题不允许跳过
    rr = load_yaml(root / "audit" / "risk-register.yaml")
    risks = rr.get("risks", [])
    skipped = [r for r in risks if r.get("status") == "skipped"]
    results.append(make_result(
        "18", "问题不允许跳过", 2,
        "FAIL" if skipped else "PASS",
        f"跳过的风险项: {len(skipped)} — {[r.get('id') for r in skipped]}" if skipped else f"风险登记册共 {len(risks)} 项，无跳过",
    ))

    # 2d. IT-1: 知识库规模
    idx = load_yaml(root / "knowledge" / "index.yaml")
    entries = idx.get("entries", [])
    count = len(entries)
    if count > 256:
        kb_status = "FAIL"
    elif count > 240:
        kb_status = "WARN"
    else:
        kb_status = "PASS"
    results.append(make_result(
        "IT-1", "知识库规模", 2, kb_status,
        f"当前 {count}/256 条" + (" — 超限！" if count > 256 else " — 接近上限" if count > 240 else ""),
    ))

    # 2e. HD-2: 两天期限预警
    stale_tasks = []
    for role_dir in (root / "agents").iterdir():
        if not role_dir.is_dir():
            continue
        cs = load_yaml(role_dir / "context" / "current-state.yaml")
        for task in cs.get("active_tasks", []):
            started = task.get("started")
            if started:
                try:
                    start_date = datetime.fromisoformat(str(started)).date()
                    age = (datetime.now().date() - start_date).days
                    if age > 2:
                        stale_tasks.append(f"{role_dir.name}/{task.get('title', task.get('id', '?'))}: {age} 天")
                except (ValueError, TypeError):
                    pass
    results.append(make_result(
        "HD-2", "两天期限预警", 2,
        "FAIL" if stale_tasks else "PASS",
        f"{len(stale_tasks)} 个超期任务: {stale_tasks}" if stale_tasks else "所有活跃任务均在 2 天内",
    ))

    # 2f. 规则 16: 指令记录 — 检查日志目录有近期文件
    log_dir = root / "audit" / "instruction-log"
    if log_dir.exists():
        recent_logs = [f for f in log_dir.glob("*.yaml")
                       if f.stat().st_mtime > (datetime.now() - timedelta(days=7)).timestamp()]
        results.append(make_result(
            "16", "指令记录", 2,
            "PASS" if recent_logs else "WARN",
            f"近 7 天日志: {len(recent_logs)} 个" + ("" if recent_logs else " — 可能需要补录"),
        ))
    else:
        results.append(make_result("16", "指令记录", 2, "WARN", "instruction-log/ 目录不存在"))

    return results


# ────────────────────────────────────────────────────────────────────────────
# Tier 3: 交叉检查
# ────────────────────────────────────────────────────────────────────────────

def tier3_cross_checks(root: Path, all_rules: list[dict]) -> list[dict]:
    results = []
    rules_dir = root / "rules"

    # 3a. role-mapping.yaml 中引用的规则 ID 是否都存在于规则文件中
    mapping = load_yaml(rules_dir / "role-mapping.yaml")
    roles = mapping.get("roles", {})
    all_rule_ids = {r["id"] for r in all_rules}
    orphan_refs = []
    for role_id, role_cfg in roles.items():
        role_rules = role_cfg.get("rules", [])
        if role_rules == "ALL":
            continue
        for rid in role_rules:
            if rid not in all_rule_ids:
                orphan_refs.append(f"{role_id} → {rid}")
    results.append(make_result(
        "T3-MAPREF", "角色映射→规则引用一致性", 3,
        "PASS" if not orphan_refs else "FAIL",
        f"孤立引用: {orphan_refs}" if orphan_refs else f"角色映射中 {sum(1 for r in roles.values() if r.get('rules') != 'ALL' for _ in r.get('rules', []))} 条规则引用全部有效",
    ))

    # 3b. valid_roles in schema.yaml 与实际 applicable_roles 一致性
    schema = load_yaml(rules_dir / "schema.yaml")
    valid_roles = set(schema.get("valid_roles", []))
    role_violations = []
    for r in all_rules:
        for role in r.get("applicable_roles", []):
            if role not in valid_roles:
                role_violations.append(f"[{r['id']}] 包含无效角色: {role}")
    results.append(make_result(
        "T3-ROLES", "适用角色合法性", 3,
        "PASS" if not role_violations else "FAIL",
        "; ".join(role_violations) if role_violations else f"所有规则的 applicable_roles 均在有效角色列表 {sorted(valid_roles)} 内",
    ))

    # 3c. 变更通知一致性 — 检查各角色 change-notices 中的 to 字段是否指向有效角色
    notices_issues = []
    for role_dir in (root / "agents").iterdir():
        if not role_dir.is_dir():
            continue
        cn_dir = role_dir / "change-notices"
        if not cn_dir.exists():
            continue
        for nf in cn_dir.glob("*.yaml"):
            notice = load_yaml(nf)
            to_role = notice.get("to", "")
            if to_role and to_role not in valid_roles:
                notices_issues.append(f"{nf.name}: to={to_role} 不是有效角色")
            if notice.get("status") == "unread":
                pass  # 未读通知本身不算问题，只统计
    results.append(make_result(
        "T3-NOTICE", "变更通知一致性", 3,
        "PASS" if not notices_issues else "WARN",
        "; ".join(notices_issues) if notices_issues else "所有变更通知 to 字段指向有效角色",
    ))

    # 3d. 规则 ID 唯一性
    id_counts = {}
    for r in all_rules:
        rid = r["id"]
        id_counts[rid] = id_counts.get(rid, 0) + 1
    dup_ids = {rid: cnt for rid, cnt in id_counts.items() if cnt > 1}
    results.append(make_result(
        "T3-UNIQID", "规则 ID 唯一性", 3,
        "PASS" if not dup_ids else "FAIL",
        f"重复 ID: {dup_ids}" if dup_ids else f"共 {len(all_rules)} 条规则，ID 全部唯一",
    ))

    return results


# ────────────────────────────────────────────────────────────────────────────
# 主程序
# ────────────────────────────────────────────────────────────────────────────

def run_checks(root: Path, tier_filter: int | None = None) -> list[dict]:
    """运行所有检查，可选按 tier 过滤"""
    all_rules = collect_rules(root / "rules")

    results = []
    if tier_filter is None or tier_filter == 1:
        results.extend(tier1_structure_checks(root))
    if tier_filter is None or tier_filter == 2:
        results.extend(tier2_content_checks(root))
    if tier_filter is None or tier_filter == 3:
        results.extend(tier3_cross_checks(root, all_rules))

    return results


def main():
    parser = argparse.ArgumentParser(description="三级合规性检查引擎")
    parser.add_argument("--project-root", default=".", help="项目根目录")
    parser.add_argument("--milestone", help="里程碑编号（记录到报告中）")
    parser.add_argument("--tier", type=int, choices=[1, 2, 3], help="只运行指定层级")
    parser.add_argument("--output", help="输出报告文件路径 (YAML)")
    args = parser.parse_args()

    root = Path(args.project_root).resolve()
    tier_label = f"Tier {args.tier}" if args.tier else "全部三级"
    print(f"合规性检查 [{tier_label}]: {root}")
    if args.milestone:
        print(f"里程碑: {args.milestone}")
    print()

    results = run_checks(root, args.tier)

    # 统计
    stats = {"PASS": 0, "WARN": 0, "FAIL": 0, "SKIP": 0}
    for r in results:
        stats[r["status"]] = stats.get(r["status"], 0) + 1

    # 按 tier 分组打印
    for tier_num in [1, 2, 3]:
        tier_results = [r for r in results if r.get("tier") == tier_num]
        if not tier_results:
            continue
        tier_names = {1: "结构检查", 2: "内容检查", 3: "交叉检查"}
        print(f"  ── Tier {tier_num}: {tier_names[tier_num]} ──")
        for r in tier_results:
            icon = {"PASS": "  ", "WARN": "  ", "FAIL": "  ", "SKIP": "  "}.get(r["status"], "?")
            print(f"  {icon} [{r['id']}] {r['title']} — {r['detail']}")
        print()

    print(f"汇总: {stats['PASS']} 通过, {stats['WARN']} 警告, {stats['FAIL']} 失败, {stats['SKIP']} 跳过")

    # 输出报告
    if args.output:
        report = {
            "report_type": "compliance-check",
            "project_root": str(root),
            "milestone": args.milestone,
            "tier_filter": args.tier,
            "timestamp": datetime.now().isoformat(),
            "summary": stats,
            "results": results,
        }
        out_path = Path(args.output)
        out_path.parent.mkdir(parents=True, exist_ok=True)
        with open(out_path, "w", encoding="utf-8") as f:
            yaml.dump(report, f, allow_unicode=True, default_flow_style=False)
        print(f"\n报告已保存: {out_path}")

    if stats["FAIL"] > 0:
        sys.exit(1)


if __name__ == "__main__":
    main()
