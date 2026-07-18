#!/usr/bin/env python3
"""
lld_fsm_check.py — 检查 LLD 文档中 Mermaid 状态图与 RTL enum 定义的 FSM 覆盖一致性。

规则:
  R4 FSM 覆盖: LLD 状态图覆盖 RTL enum 全部状态 → WARNING

用法:
    python3 scripts/lld-check/lld_fsm_check.py --rtl src/rtl/ --lld docs/design/lld-cache.html
"""

import re
import sys
import json
import argparse
from pathlib import Path
from typing import Dict, List, Tuple

from lld_signal_extract import extract_enums_from_sv, scan_directory


def extract_mermaid_states(html_path: Path) -> List[Dict[str, str]]:
    """从 LLD HTML 中提取 Mermaid stateDiagram-v2 块及其状态名。"""
    content = html_path.read_text(encoding="utf-8", errors="replace")
    results = []

    # 找所有 mermaid 代码块
    mermaid_pattern = re.compile(
        r'<pre\s+class="mermaid">\s*(stateDiagram.*?)</pre>',
        re.DOTALL,
    )

    for mm in mermaid_pattern.finditer(content):
        block = mm.group(1)
        states = set()
        # 匹配状态定义: STATE_NAME --> 或 STATE_NAME : description
        for sm in re.finditer(r'(\w+)\s*(?:-->|\s*:)', block):
            name = sm.group(1)
            if name not in ('stateDiagram', 'v2', 'note', 'Note'):
                states.add(name)
        # [*] transitions
        for sm in re.finditer(r'\[\*\]\s*-->\s*(\w+)', block):
            states.add(sm.group(1))
        results.append({"block": block[:80], "states": sorted(states)})

    return results


def extract_lld_transitions(html_path: Path) -> List[Dict[str, str]]:
    """从 LLD HTML §4.3 状态转移条件表提取转移记录 (source/target/condition)。"""
    content = html_path.read_text(encoding="utf-8", errors="replace")
    transitions = []

    # 定位 §4.3 区域到下一个 <h2>/<h1>
    section_pattern = re.compile(
        r"4\.3\s*状态转移条件表.*?(?=<h2|<h1\s+id=|$)",
        re.DOTALL,
    )
    section = section_pattern.search(content)
    if not section:
        return transitions

    section_text = section.group(0)
    tr_pattern = re.compile(r"<tr>\s*(.*?)\s*</tr>", re.DOTALL)
    td_pattern = re.compile(r"<td[^>]*>(.*?)</td>", re.DOTALL)
    th_pattern = re.compile(r"<th[^>]*>", re.DOTALL)

    for tr_match in tr_pattern.finditer(section_text):
        row_html = tr_match.group(1)
        if th_pattern.search(row_html):
            continue
        cells = td_pattern.findall(row_html)
        if len(cells) < 3:
            continue
        source = re.sub(r"<[^>]+>", "", cells[0]).strip()
        target = re.sub(r"<[^>]+>", "", cells[1]).strip()
        condition = re.sub(r"<[^>]+>", "", cells[2]).strip()
        if source and target:
            transitions.append({
                "source": source,
                "target": target,
                "condition": condition,
            })

    return transitions


def extract_rtl_case_branches(root: Path) -> Dict[str, Dict[str, str]]:
    """扫描 RTL 目录，提取 case 块中每个状态标签对应的分支体文本。

    返回: {file_path: {state_label: branch_body_text}}
    """
    results: Dict[str, Dict[str, str]] = {}
    case_pattern = re.compile(r"case\s*\([^)]*\)\s*(.*?)\s*endcase", re.DOTALL)
    label_pattern = re.compile(r"^[ \t]*(\w+)\s*:", re.MULTILINE)

    for sv_file in sorted(root.rglob("*.sv")):
        content = sv_file.read_text(encoding="utf-8", errors="replace")
        # 去注释
        content = re.sub(r"//.*?$", "", content, flags=re.MULTILINE)
        content = re.sub(r"/\*.*?\*/", "", content, flags=re.DOTALL)

        file_map: Dict[str, str] = {}
        for cm in case_pattern.finditer(content):
            case_body = cm.group(1)
            labels = list(label_pattern.finditer(case_body))
            for i, lm in enumerate(labels):
                label = lm.group(1)
                if label == "default":
                    continue
                start = lm.end()
                end = labels[i + 1].start() if i + 1 < len(labels) else len(case_body)
                file_map[label] = case_body[start:end]
        if file_map:
            results[str(sv_file)] = file_map

    return results


def check_fsm_coverage(
    rtl_enums: List[Dict],
    lld_fsm_states: List[Dict],
    module_name: str,
) -> List[Tuple[str, str, str]]:
    """比较 RTL enum 状态与 LLD FSM 状态覆盖。

    小枚举不再忽略：len > 0 均检查，但对 ≤2 状态使用不同阈值。
    """
    issues = []

    # 汇总 LLD 所有 FSM 块的状态
    all_lld_states = set()
    for fsm in lld_fsm_states:
        all_lld_states.update(fsm["states"])

    for enum in rtl_enums:
        enum_name = enum["enum_name"]
        rtl_states = {s["name"] for s in enum["states"]}
        n = len(rtl_states)
        if n == 0:
            continue

        missing = rtl_states - all_lld_states
        extra = all_lld_states - rtl_states

        # 小枚举不再忽略：≤2 状态使用不同阈值
        if n <= 2:
            # 小枚举：仅当全部状态缺失时报 WARNING，部分缺失报 INFO
            if missing and len(missing) == n:
                issues.append(("WARNING", "R4",
                    f"[{module_name}] Enum '{enum_name}': all states {sorted(missing)} missing in LLD FSM"))
            elif missing:
                issues.append(("INFO", "R4",
                    f"[{module_name}] Enum '{enum_name}' (small): states {sorted(missing)} not in LLD FSM"))
        else:
            # 大枚举：任意缺失即 WARNING
            if missing:
                issues.append(("WARNING", "R4",
                    f"[{module_name}] Enum '{enum_name}': RTL states {sorted(missing)} not in LLD FSM"))

        # 额外状态
        if extra:
            for s in sorted(extra):
                if s not in ("IDLE", "DONE", "ERROR"):  # 常见抽象状态
                    issues.append(("INFO", "R4",
                        f"[{module_name}] LLD FSM state '{s}' not in RTL enum '{enum_name}'"))

    return issues


def check_transitions(
    lld_transitions: List[Dict],
    rtl_branches: Dict[str, Dict[str, str]],
    module_name: str,
) -> List[Tuple[str, str, str]]:
    """交叉验证 LLD §4.3 转移条件与 RTL case 分支。

    对每条 LLD 转移 (src→dst)，检查 RTL 中是否存在 src 的 case 分支，
    且该分支体中引用了 dst。无法找到对应时输出 WARNING。
    """
    issues = []
    # 汇总所有文件的 case 分支
    all_branches: Dict[str, str] = {}
    for file_map in rtl_branches.values():
        for label, body in file_map.items():
            all_branches.setdefault(label, "")
            all_branches[label] += " " + body

    for tr in lld_transitions:
        src = tr["source"]
        dst = tr["target"]
        cond = tr["condition"]
        # default 是 catch-all，非真实状态，跳过
        if src.lower() == "default":
            continue
        if src not in all_branches:
            issues.append(("WARNING", "R4",
                f"[{module_name}] LLD transition source '{src}' has no RTL case branch"))
            continue
        body = all_branches[src]
        # 检查目标状态是否在分支体中出现（词边界匹配）
        if not re.search(r"\b" + re.escape(dst) + r"\b", body):
            issues.append(("WARNING", "R4",
                f"[{module_name}] LLD transition '{src}→{dst}' ({cond}) not found in RTL case branch for '{src}'"))

    return issues


def main():
    parser = argparse.ArgumentParser(description="Check LLD-RTL FSM coverage")
    parser.add_argument("--rtl", required=True, help="RTL directory path")
    parser.add_argument("--lld", required=True, help="LLD HTML file path")
    parser.add_argument("--module", help="Filter by module name")
    args = parser.parse_args()

    data = scan_directory(Path(args.rtl))
    rtl_enums = data["enums"]
    if args.module:
        rtl_enums = [e for e in rtl_enums if args.module in e["file"]]

    lld_fsm = extract_mermaid_states(Path(args.lld))
    lld_transitions = extract_lld_transitions(Path(args.lld))
    rtl_branches = extract_rtl_case_branches(Path(args.rtl))

    mod_label = args.module or "all"
    issues = check_fsm_coverage(rtl_enums, lld_fsm, mod_label)
    issues.extend(check_transitions(lld_transitions, rtl_branches, mod_label))

    print(f"=== LLD FSM Check: {mod_label} ===")
    print(f"RTL enums: {len(rtl_enums)} | LLD FSM blocks: {len(lld_fsm)} | LLD transitions: {len(lld_transitions)}")

    for level, rule, msg in issues:
        icon = {"ERROR": "❌", "WARNING": "⚠️", "INFO": "ℹ️"}.get(level, "?")
        print(f"  {icon} [{rule}] {msg}")

    errors = [i for i in issues if i[0] == "ERROR"]
    sys.exit(1 if errors else 0)


if __name__ == "__main__":
    main()
