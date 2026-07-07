#!/usr/bin/env python3
"""
generate_baseline_html.py — 将基线 YAML 快照转换为可读 HTML 报告

用法:
    python3 generate_baseline_html.py baseline-BL-1.0.yaml
    python3 generate_baseline_html.py --all

输出: 同目录下的 baseline-{version}.html
无需额外依赖，仅使用 Python 标准库。
"""

import sys
import os
import glob
import re
from datetime import datetime
from html import escape

# ── 分类名称映射 ──
CAT_NAMES = {
    'ISA': 'ISA 与架构需求',
    'PERF': '性能需求',
    'IF': '接口需求',
    'SAFE': '功能安全需求',
    'CFG': '可配置性需求',
    'SW': '软件生态需求',
    'VER': '验证与交付需求',
    'NFR': '非功能需求',
}

# ── 状态 CSS 类 ──
STATUS_CSS = {
    'Draft': 'draft', 'Proposed': 'proposed', 'Approved': 'approved',
    'In-Design': 'in-design', 'Implemented': 'implemented', 'Verified': 'verified',
    'Deferred': 'deferred', 'Rejected': 'rejected',
}
PRI_CSS = {
    'Must': 'must', 'Should': 'should', 'Could': 'could', "Won't": 'wont',
}


def parse_baseline_yaml(filepath):
    """解析基线 YAML 文件（仅处理本脚本生成的特定 schema）。"""
    with open(filepath, 'r', encoding='utf-8') as f:
        lines = f.readlines()

    baseline = {}
    statistics = {'by_category': {}, 'by_status': {}, 'by_priority': {}}
    requirements = []
    current_req = None
    section = None  # 'baseline', 'statistics', 'requirements'
    sub_section = None  # 'by_category', 'by_status', 'by_priority'

    for raw_line in lines:
        line = raw_line.rstrip('\n\r')
        stripped = line.strip()

        # Skip comments and empty lines
        if not stripped or stripped.startswith('#'):
            continue

        # Top-level sections
        if line.startswith('baseline:'):
            section = 'baseline'
            sub_section = None
            continue
        elif line.startswith('requirements:'):
            section = 'requirements'
            sub_section = None
            continue

        if section == 'baseline':
            # Parse baseline metadata
            if stripped.startswith('statistics:'):
                sub_section = 'statistics'
                continue

            if sub_section == 'statistics':
                # Parse statistics sub-sections
                m = re.match(r'^\s{4}(\w+):\s*$', stripped)
                if m:
                    sub_section = m.group(1)  # by_category, by_status, by_priority
                    continue

                m = re.match(r'^\s{6}(\w[\w-]*):\s*(.+)$', stripped)
                if m and sub_section in ('by_category', 'by_status', 'by_priority'):
                    key = m.group(1)
                    val = m.group(2).strip().strip('"').strip("'")
                    try:
                        val = int(val)
                    except ValueError:
                        pass
                    statistics[sub_section][key] = val
                continue

            m = re.match(r'^\s{2}(\w+):\s*(.+)$', stripped)
            if m:
                key = m.group(1)
                val = m.group(2).strip().strip('"').strip("'")
                if key == 'total':
                    try:
                        val = int(val)
                    except ValueError:
                        pass
                statistics[key] = val
                baseline[key] = val

        elif section == 'requirements':
            # Parse requirement entries
            if stripped.startswith('- category:'):
                if current_req:
                    requirements.append(current_req)
                current_req = {'category': stripped.split(':', 1)[1].strip().strip('"').strip("'")}
                continue

            if current_req is not None:
                m = re.match(r'^\s{4}(\w+):\s*(.+)$', stripped)
                if m:
                    key = m.group(1)
                    val = m.group(2).strip().strip('"').strip("'")
                    current_req[key] = val

    # Don't forget the last requirement
    if current_req:
        requirements.append(current_req)

    return baseline, statistics, requirements


def generate_html(filepath, baseline, statistics, requirements):
    """生成 HTML 报告。"""
    version = baseline.get('version', 'Unknown')
    frozen_at = baseline.get('frozen_at', '--')
    description = baseline.get('description', '--')
    approver = baseline.get('approver', '--')
    total = statistics.get('total', len(requirements))

    # Group requirements by category
    by_cat = {}
    for req in requirements:
        cat = req.get('category', 'OTHER')
        if cat not in by_cat:
            by_cat[cat] = []
        by_cat[cat].append(req)

    # Build category tables HTML
    cat_tables = ''
    cat_order = ['ISA', 'PERF', 'IF', 'SAFE', 'CFG', 'SW', 'VER', 'NFR']
    for cat in cat_order:
        if cat not in by_cat:
            continue
        cat_name = CAT_NAMES.get(cat, cat)
        rows = by_cat[cat]
        cat_tables += f'''
<h2>{escape(cat_name)} ({len(rows)} 条)</h2>
<div class="table-wrapper"><table>
<thead><tr>
    <th>REQ-ID</th><th>需求名称</th><th>优先级</th><th>状态</th><th>版本</th>
    <th>来源</th><th>关联文档</th><th>验收标准</th><th>变更日期</th><th>备注</th>
</tr></thead><tbody>
'''
        for req in rows:
            st = req.get('status', 'Draft')
            pr = req.get('priority', 'Must')
            st_cls = STATUS_CSS.get(st, 'draft')
            pr_cls = PRI_CSS.get(pr, 'must')
            cat_tables += f'''<tr>
    <td>{escape(req.get("req_id", ""))}</td>
    <td>{escape(req.get("name", ""))}</td>
    <td><span class="pri pri-{pr_cls}">{escape(pr)}</span></td>
    <td><span class="badge badge-{st_cls}">{escape(st)}</span></td>
    <td>{escape(req.get("version", ""))}</td>
    <td>{escape(req.get("source", ""))}</td>
    <td>{escape(req.get("ref_doc", "--"))}</td>
    <td>{escape(req.get("acceptance", ""))}</td>
    <td>{escape(req.get("change_date", "--"))}</td>
    <td>{escape(req.get("note", "--"))}</td>
</tr>
'''
        cat_tables += '</tbody></table></div>\n'

    # Statistics summary bars
    by_status = statistics.get('by_status', {})
    by_priority = statistics.get('by_priority', {})

    stat_html = '<div class="stat-grid">'
    stat_html += '<div class="stat-card"><h3>按状态分布</h3>'
    for st, cnt in sorted(by_status.items(), key=lambda x: -x[1]):
        pct = round(cnt / total * 100) if total else 0
        st_cls = STATUS_CSS.get(st, 'draft')
        stat_html += f'<div class="stat-row"><span class="badge badge-{st_cls}" style="min-width:90px;text-align:center;">{escape(st)}</span>'
        stat_html += f'<div class="stat-bar-bg"><div class="stat-bar" style="width:{pct}%"></div></div>'
        stat_html += f'<span class="stat-num">{cnt}</span></div>\n'
    stat_html += '</div>'

    stat_html += '<div class="stat-card"><h3>按优先级分布</h3>'
    for pr, cnt in sorted(by_priority.items(), key=lambda x: -x[1]):
        pct = round(cnt / total * 100) if total else 0
        pr_cls = PRI_CSS.get(pr, 'must')
        stat_html += f'<div class="stat-row"><span class="pri pri-{pr_cls}" style="min-width:70px;text-align:center;">{escape(pr)}</span>'
        stat_html += f'<div class="stat-bar-bg"><div class="stat-bar stat-bar-pri" style="width:{pct}%"></div></div>'
        stat_html += f'<span class="stat-num">{cnt}</span></div>\n'
    stat_html += '</div></div>\n'

    # Assemble full HTML
    html = f'''<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lumi-Core 基线报告 — {escape(version)}</title>
    <style>
        :root {{
            --bg: #ffffff; --text: #333333; --accent: #16213e;
            --border: #e0e0e0; --table-header: #16213e; --table-header-text: #ffffff;
            --table-stripe: #f8f9fa; --link: #0d47a1;
            --status-draft: #9e9e9e; --status-proposed: #ff9800; --status-approved: #1976d2;
            --status-in-design: #7b1fa2; --status-implemented: #388e3c; --status-verified: #2e7d32;
            --status-deferred: #f9a825; --status-rejected: #c62828;
            --priority-must: #c62828; --priority-should: #e65100;
            --priority-could: #1565c0; --priority-wont: #757575;
        }}
        * {{ margin: 0; padding: 0; box-sizing: border-box; }}
        body {{
            font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, sans-serif;
            font-size: 15px; line-height: 1.7; color: var(--text); background: var(--bg);
            max-width: 1100px; margin: 0 auto; padding: 2rem 2rem 4rem;
        }}
        .cover {{
            text-align: center; padding: 3rem 0; border-bottom: 3px solid var(--accent); margin-bottom: 2rem;
        }}
        .cover h1 {{ font-size: 2rem; color: var(--accent); margin-bottom: 0.5rem; }}
        .cover .bl-ver {{
            display: inline-block; background: #0d47a1; color: #fff;
            padding: 0.3rem 1.2rem; border-radius: 4px; font-size: 1.1rem; font-weight: 700; margin: 0.5rem 0;
        }}
        .cover .meta {{ font-size: 0.9rem; color: #78909c; line-height: 2; margin-top: 1rem; }}
        h1 {{ font-size: 1.6rem; color: var(--accent); margin: 2rem 0 1rem; padding-bottom: 0.5rem; border-bottom: 2px solid var(--border); }}
        h2 {{ font-size: 1.3rem; color: #1a3a5c; margin: 1.5rem 0 0.8rem; }}
        h3 {{ font-size: 1.1rem; color: #37474f; margin: 1rem 0 0.5rem; }}
        p {{ margin: 0.6rem 0; }}
        .table-wrapper {{ overflow-x: auto; margin: 1rem 0; }}
        table {{ width: 100%; border-collapse: collapse; font-size: 0.9rem; }}
        th {{
            background: var(--table-header); color: var(--table-header-text);
            padding: 0.5rem 0.7rem; text-align: left; font-weight: 600;
            font-size: 0.82rem; text-transform: uppercase; letter-spacing: 0.04em; white-space: nowrap;
        }}
        td {{ padding: 0.45rem 0.7rem; border-bottom: 1px solid var(--border); vertical-align: top; }}
        tr:nth-child(even) td {{ background: var(--table-stripe); }}
        .badge {{
            display: inline-block; padding: 0.12rem 0.5rem; border-radius: 3px;
            font-size: 0.78rem; font-weight: 600; color: #fff; white-space: nowrap;
        }}
        .badge-draft {{ background: var(--status-draft); }}
        .badge-proposed {{ background: var(--status-proposed); }}
        .badge-approved {{ background: var(--status-approved); }}
        .badge-in-design {{ background: var(--status-in-design); }}
        .badge-implemented {{ background: var(--status-implemented); }}
        .badge-verified {{ background: var(--status-verified); }}
        .badge-deferred {{ background: var(--status-deferred); color: #333; }}
        .badge-rejected {{ background: var(--status-rejected); }}
        .pri {{ display: inline-block; padding: 0.1rem 0.4rem; border-radius: 3px; font-size: 0.76rem; font-weight: 600; color: #fff; }}
        .pri-must {{ background: var(--priority-must); }}
        .pri-should {{ background: var(--priority-should); }}
        .pri-could {{ background: var(--priority-could); }}
        .pri-wont {{ background: var(--priority-wont); }}
        .stat-grid {{ display: flex; gap: 2rem; flex-wrap: wrap; margin: 1rem 0; }}
        .stat-card {{ flex: 1; min-width: 280px; background: #f8f9fa; border-radius: 8px; padding: 1.2rem; }}
        .stat-row {{ display: flex; align-items: center; gap: 0.6rem; margin: 0.4rem 0; }}
        .stat-bar-bg {{ flex: 1; height: 16px; background: #e0e0e0; border-radius: 3px; overflow: hidden; }}
        .stat-bar {{ height: 100%; background: #1976d2; border-radius: 3px; transition: width 0.3s; }}
        .stat-bar-pri {{ background: #e65100; }}
        .stat-num {{ min-width: 30px; text-align: right; font-weight: 600; font-size: 0.9rem; }}
        .nav-back {{
            display: inline-block; margin-bottom: 1.5rem; padding: 0.4rem 1rem;
            background: #f0f4f8; border: 1px solid var(--border); border-radius: 4px;
            color: var(--link); text-decoration: none; font-size: 0.9rem; font-weight: 500;
            transition: background 0.2s;
        }}
        .nav-back:hover {{ background: #e1e8f0; text-decoration: none; }}
        .footer {{
            margin-top: 3rem; padding-top: 1rem; border-top: 1px solid var(--border);
            text-align: center; color: #90a4ae; font-size: 0.82rem;
        }}
        blockquote {{
            background: #e8f4fd; border-left: 4px solid #2196F3;
            padding: 0.6rem 1rem; margin: 1rem 0; font-size: 0.9rem; border-radius: 0 6px 6px 0;
        }}
        @media print {{
            body {{ font-size: 11pt; max-width: none; }}
            table {{ page-break-inside: avoid; }}
        }}
    </style>
</head>
<body>

<a href="../../index.html" class="nav-back">&larr; 返回文档地图</a>

<div class="cover">
    <h1>Lumi-Core 需求基线报告</h1>
    <div class="bl-ver">{escape(version)}</div>
    <div class="meta">
        <p><strong>冻结时间:</strong> {escape(frozen_at)}</p>
        <p><strong>审批人:</strong> {escape(approver)}</p>
        <p><strong>需求总数:</strong> {total} 条</p>
    </div>
</div>

<h1>基线概要</h1>
<blockquote><strong>说明:</strong> {escape(description)}</blockquote>

<h2>统计摘要</h2>
{stat_html}

<h1>需求详情</h1>
{cat_tables}

<div class="footer">
    <p><a href="../../index.html" class="nav-back" style="margin-bottom:0.5rem;">&larr; 返回文档地图</a></p>
    <p>本文件由 <code>generate_baseline_html.py</code> 自动生成 &mdash; 权威来源为对应的 YAML 基线文件</p>
    <p>生成时间: {datetime.now().strftime("%Y-%m-%d %H:%M:%S")} &nbsp;|&nbsp; Lumi-Core Product Requirements Baseline</p>
    <p>CONFIDENTIAL &mdash; Lumi Project Internal</p>
</div>

</body>
</html>'''

    # Write output with versioning (archive old files)
    base = os.path.splitext(filepath)[0]
    out_path = base + '.html'
    archive_dir = os.path.join(os.path.dirname(base), 'archive')

    # Archive existing HTML if it exists (don't overwrite)
    if os.path.exists(out_path):
        os.makedirs(archive_dir, exist_ok=True)
        basename = os.path.basename(out_path)
        name, ext = os.path.splitext(basename)
        ts = datetime.now().strftime('%Y%m%d_%H%M%S')
        archived_name = f'{name}_{ts}{ext}'
        archived_path = os.path.join(archive_dir, archived_name)
        os.rename(out_path, archived_path)
        print(f'  归档旧文件: archive/{archived_name}')

    with open(out_path, 'w', encoding='utf-8') as f:
        f.write(html)
    return out_path


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))

    if len(sys.argv) < 2:
        print(f'用法: python3 {sys.argv[0]} <baseline.yaml> [--all]')
        print(f'示例: python3 {sys.argv[0]} baseline-BL-1.0.yaml')
        print(f'      python3 {sys.argv[0]} --all')
        sys.exit(1)

    files = []
    if sys.argv[1] == '--all':
        pattern = os.path.join(script_dir, 'baseline-*.yaml')
        files = sorted(glob.glob(pattern))
        if not files:
            print(f'未找到匹配的基线文件: {pattern}')
            sys.exit(1)
    else:
        for arg in sys.argv[1:]:
            if arg.startswith('--'):
                continue
            path = os.path.abspath(arg) if os.path.isabs(arg) else os.path.join(script_dir, arg)
            if os.path.exists(path):
                files.append(path)
            else:
                print(f'文件不存在: {path}')

    for fpath in files:
        fname = os.path.basename(fpath)
        print(f'处理: {fname}')
        try:
            baseline, statistics, requirements = parse_baseline_yaml(fpath)
            out = generate_html(fpath, baseline, statistics, requirements)
            print(f'  -> 生成: {os.path.basename(out)} ({len(requirements)} 条需求)')
        except Exception as e:
            print(f'  !! 错误: {e}', file=sys.stderr)
            import traceback
            traceback.print_exc()

    print(f'\n完成，共处理 {len(files)} 个文件。')


if __name__ == '__main__':
    main()
