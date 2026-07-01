#!/usr/bin/env python3
"""
role_prompt_builder.py — 根据角色映射和规则文件自动生成角色提示词（分层格式）

用法:
    python role_prompt_builder.py                    # 生成所有角色的 role-prompt.md
    python role_prompt_builder.py --role hw-design   # 只生成指定角色
    python role_prompt_builder.py --dry-run          # 只预览，不写入文件

输出:
    agents/{role}/role-prompt.md  (分层格式：角色专属规则 + AGENTS.md 通用规则引用)

通用规则（category: general）完整内容维护在 AGENTS.md 第 7 节，
role-prompt.md 中不再重复，只包含角色专属子规则和商业规则。
"""

import argparse
import sys
from datetime import datetime
from pathlib import Path

import yaml


def load_yaml(path: Path) -> dict:
    with open(path, encoding="utf-8") as f:
        return yaml.safe_load(f)


def collect_rules(rules_dir: Path) -> list[dict]:
    """从 rules/ 目录下所有 YAML 文件收集规则"""
    all_rules = []
    skip_files = {"schema.yaml", "role-mapping.yaml", "changelog.md"}

    for yaml_file in sorted(rules_dir.rglob("*.yaml")):
        if yaml_file.name in skip_files:
            continue
        data = load_yaml(yaml_file)
        if data and "rules" in data:
            all_rules.extend(data["rules"])

    return all_rules


def filter_rules_for_role(all_rules: list[dict], role_config: dict) -> list[dict]:
    """筛选出该角色适用的规则"""
    role_rules = role_config.get("rules", [])

    # QA-Audit 角色看到所有规则
    if role_rules == "ALL":
        return all_rules

    return [r for r in all_rules if r["id"] in role_rules]


def split_common_and_specific(applicable_rules: list[dict]) -> tuple[list[dict], list[dict]]:
    """将规则分为通用规则（category=general）和角色专属规则"""
    common = []
    specific = []
    for r in applicable_rules:
        if r.get("category") == "general":
            common.append(r)
        else:
            specific.append(r)
    return common, specific


def build_prompt(role_id: str, role_config: dict, applicable_rules: list[dict]) -> str:
    """组装分层格式角色提示词 Markdown"""
    now = datetime.now().strftime("%Y-%m-%d %H:%M")
    display_name = role_config["display_name"]
    description = role_config.get("description", "")
    permissions = role_config.get("permissions", {})

    common_rules, specific_rules = split_common_and_specific(applicable_rules)

    lines = []
    lines.append(f"# {display_name} — 角色提示词")
    lines.append("")
    lines.append(f"> 分层格式：角色专属规则 + AGENTS.md 通用规则引用。")
    lines.append(f"> 由 role_prompt_builder.py 生成，请勿手动编辑。")
    lines.append("")

    # 角色定义
    lines.append("## 角色定义")
    lines.append("")
    lines.append(f"你正在以 **{display_name}** ({role_id}) 角色执行任务。")
    lines.append("")
    lines.append(f"**职责范围：** {description}")
    lines.append("")

    # 文件权限
    lines.append("## 文件权限")
    lines.append("")
    read_perms = permissions.get("read", [])
    write_perms = permissions.get("write", [])
    lines.append("### 可读路径")
    for p in read_perms:
        lines.append(f"- `{p}`")
    lines.append("")
    lines.append("### 可写路径")
    for p in write_perms:
        lines.append(f"- `{p}`")
    lines.append("")
    lines.append("**重要：** 不在可写路径列表上的文件，本角色不应修改。如需修改，请通过变更通知告知对应角色。")
    lines.append("")

    # 角色专属规则
    if specific_rules:
        lines.append("## 角色专属规则")
        lines.append("")

        # 按 category 分组
        categories = {}
        for r in specific_rules:
            cat = r.get("category", "other")
            categories.setdefault(cat, []).append(r)

        cat_names = {
            "hardware-design": "硬件设计子规则",
            "hardware-verify": "硬件验证子规则",
            "it-infra": "IT 基础设施子规则",
            "qa-audit": "QA 审计子规则",
            "business": "商业规则",
        }

        for cat, rules in categories.items():
            cat_label = cat_names.get(cat, cat)
            if len(rules) > 1 or len(categories) > 1:
                lines.append(f"### {cat_label}")
                lines.append("")
            for r in rules:
                severity = r.get("severity", "medium")
                lines.append(f"### [{r['id']}] {r['title']} — {severity}")
                lines.append("")
                lines.append(r.get("description", "").strip())
                lines.append("")
                criteria = r.get("check_criteria", [])
                if criteria:
                    lines.append("**检查标准：**")
                    for c in criteria:
                        lines.append(f"- {c}")
                    lines.append("")

    # QA 审计特殊：全量审计权限说明
    if role_id == "qa-audit":
        lines.append("> **全量审计权限：** qa-audit 角色有权审计所有规则的执行情况，包括 AGENTS.md 第 7 节的通用规则和各角色专属规则。完整规则清单见 `rules/top-rules.yaml`、`rules/business-rules.yaml` 和 `rules/sub-rules/*.yaml`。")
        lines.append("")

    # 通用规则引用
    if common_rules:
        lines.append(f"> **通用规则：** 本角色同时受 AGENTS.md 第 7 节全部通用规则约束（共 {len(common_rules)} 条），此处不再重复。")
        lines.append("")

    # Pre-Check 流程
    lines.append("## Pre-Check 流程")
    lines.append("")
    lines.append("在开始任何任务之前，必须执行以下检查：")
    lines.append("")
    step = 1
    lines.append(f"{step}. **读取当前状态** — `agents/{role_id}/context/current-state.yaml`")
    step += 1
    lines.append(f"{step}. **检查变更通知** — `agents/{role_id}/change-notices/` 目录下是否有未处理通知")
    step += 1

    if role_id == "hw-design":
        lines.append(f"{step}. **检查 HD-2 时间预警** — 确认 active_tasks 中是否有超过 2 天的任务，如有则评估是否需要回退方案")
        step += 1

    if role_id == "hw-ver":
        lines.append(f"{step}. **检查设计变更 (HV-1)** — 确认 change-notices 中是否有来自 hw-design 的设计变更通知，确保验证用例匹配最新设计")
        step += 1

    if role_id == "qa-audit":
        lines.append(f"{step}. **确认审计范围** — 根据任务内容确认需要审计的规则列表")
    else:
        lines.append(f"{step}. **确认规则适用** — 根据任务内容确认需要遵守的规则列表")
    lines.append("")

    # Post-Verify 流程
    lines.append("## Post-Verify 流程")
    lines.append("")
    lines.append("任务完成后，必须执行以下步骤：")
    lines.append("")
    step = 1
    lines.append(f"{step}. **更新角色状态** — 更新 `agents/{role_id}/context/current-state.yaml`")
    step += 1

    if role_id == "qa-audit":
        lines.append(f"{step}. **写入审计报告** — 存入 `audit/compliance-reports/`")
        step += 1

    lines.append(f"{step}. **写入操作日志** — 追加到 `audit/instruction-log/YYYY-MM-DD.yaml`")
    step += 1

    if role_id != "qa-audit":
        lines.append(f"{step}. **投递变更通知** — 如果任务产出影响其他角色，写入 `agents/{{target}}/change-notices/` 目录")
        step += 1

    if role_id == "hw-ver":
        lines.append(f"{step}. **Bug 提交 (HV-2)** — 如果发现 Bug，写入 `agents/hw-design/change-notices/` 并确保源代码调试修改已回退")
        step += 1

    if role_id == "hw-design":
        lines.append(f"{step}. **失败记录 (HD-3)** — 如果设计思路被证明不正确，写入 `knowledge/lessons-learned/`")
        step += 1

    lines.append("")

    # QA 审计独立性要求
    if role_id == "qa-audit":
        lines.append("## QA 审计独立性要求")
        lines.append("")
        lines.append("作为 QA 审计角色，你必须遵守以下独立性要求：")
        lines.append("")
        lines.append("1. **只看产出物** — 只根据文件系统中的产出物（文档、代码、测试结果）进行审计")
        lines.append("2. **不看执行过程** — 不参考任何角色的执行细节（设计思路、调试过程）")
        lines.append("3. **基于标准化检查清单** — 审计基于 rules/ 中的结构化规则和可量化检查标准")
        lines.append("4. **报告可追溯** — 审计报告存入 audit/compliance-reports/，每条规则都有检查结果和证据引用")
        lines.append("5. **进程隔离执行** — 通过 Task 子代理独立上下文执行，天然隔离主会话上下文")
        lines.append("")

    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(description="生成分层格式角色提示词文件")
    parser.add_argument("--role", help="只生成指定角色（如 hw-design）")
    parser.add_argument("--dry-run", action="store_true", help="只预览不写入")
    parser.add_argument("--project-root", default=".", help="项目根目录")
    args = parser.parse_args()

    root = Path(args.project_root).resolve()
    rules_dir = root / "rules"
    mapping_file = rules_dir / "role-mapping.yaml"

    if not mapping_file.exists():
        print(f"错误: 找不到 {mapping_file}", file=sys.stderr)
        sys.exit(1)

    # 加载角色映射
    mapping = load_yaml(mapping_file)
    roles = mapping.get("roles", {})

    # 收集所有规则
    all_rules = collect_rules(rules_dir)
    print(f"共加载 {len(all_rules)} 条规则")

    # 确定要生成的角色
    target_roles = [args.role] if args.role else list(roles.keys())

    for role_id in target_roles:
        if role_id not in roles:
            print(f"警告: 角色 '{role_id}' 未在 role-mapping.yaml 中定义，跳过", file=sys.stderr)
            continue

        role_config = roles[role_id]
        applicable = filter_rules_for_role(all_rules, role_config)
        common, specific = split_common_and_specific(applicable)
        prompt = build_prompt(role_id, role_config, applicable)

        out_path = root / f"agents/{role_id}/role-prompt.md"

        if args.dry_run:
            print(f"\n{'='*60}")
            print(f"角色: {role_id} ({role_config['display_name']})")
            print(f"适用规则: 通用 {len(common)} 条 + 专属 {len(specific)} 条")
            print(f"输出路径: {out_path}")
            print(f"{'='*60}")
            print(prompt[:500] + "...\n")
        else:
            out_path.parent.mkdir(parents=True, exist_ok=True)
            out_path.write_text(prompt, encoding="utf-8")
            print(f"  {out_path} (通用 {len(common)} + 专属 {len(specific)})")

    print("\n完成！")


if __name__ == "__main__":
    main()
