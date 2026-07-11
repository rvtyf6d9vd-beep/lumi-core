#!/usr/bin/env python3
# =================================================================
# Lumi-Core 回归测试 HTML 报告生成器
# 规则 [11] 每日集成回归 | 规则 [14] HTML 文档格式与索引
# =================================================================
# 用法: python3 generate_report.py <results.yaml> <output.html>
# =================================================================

import sys
import os
import re
from datetime import datetime

def parse_yaml_simple(path):
    """轻量 YAML 解析 (不依赖 PyYAML)"""
    results = []
    summary = {}
    meta = {}
    current_result = None
    in_results = False
    in_summary = False

    with open(path, 'r') as f:
        for line in f:
            stripped = line.strip()
            if not stripped or stripped.startswith('#'):
                continue

            # Top-level meta
            if stripped.startswith('suite:') and not in_results and not in_summary:
                meta['suite'] = stripped.split(':', 1)[1].strip().strip('"')
            elif stripped.startswith('timestamp:') and not in_results and not in_summary:
                meta['timestamp'] = stripped.split(':', 1)[1].strip().strip('"')
            elif stripped.startswith('toolchain:') and not in_results and not in_summary:
                meta['toolchain'] = stripped.split(':', 1)[1].strip().strip('"')
            elif stripped.startswith('march:') and not in_results and not in_summary:
                meta['march'] = stripped.split(':', 1)[1].strip().strip('"')

            # Results section
            if stripped == 'results:':
                in_results = True
                in_summary = False
                continue

            if stripped == 'summary:':
                in_summary = True
                in_results = False
                continue

            if in_results:
                if stripped.startswith('- name:'):
                    if current_result:
                        results.append(current_result)
                    current_result = {'name': stripped.split(':', 1)[1].strip().strip('"')}
                elif current_result and ':' in stripped:
                    key, val = stripped.split(':', 1)
                    key = key.strip().lstrip('- ')
                    val = val.strip().strip('"')
                    current_result[key] = val

            if in_summary and ':' in stripped:
                key, val = stripped.split(':', 1)
                summary[key.strip()] = val.strip().strip('"')

        if current_result:
            results.append(current_result)

    return meta, results, summary


def generate_html(meta, results, summary, output_path):
    """生成 HTML 报告页面"""
    suite = meta.get('suite', 'unknown')
    timestamp = meta.get('timestamp', '')
    toolchain = meta.get('toolchain', '')
    march = meta.get('march', '')

    total = int(summary.get('total', len(results)))
    passed = int(summary.get('pass', sum(1 for r in results if r.get('status') == 'PASS')))
    failed = int(summary.get('fail', sum(1 for r in results if r.get('status') == 'FAIL')))
    skipped = int(summary.get('skip', sum(1 for r in results if r.get('status') == 'SKIP')))
    pass_rate = summary.get('pass_rate', f'{passed*100//max(total,1)}%')

    # 状态颜色
    status_colors = {'PASS': '#22c55e', 'FAIL': '#ef4444', 'SKIP': '#f59e0b'}
    status_bg = {'PASS': '#dcfce7', 'FAIL': '#fef2f2', 'SKIP': '#fefce8'}

    # 表格行
    rows_html = ''
    for i, r in enumerate(results, 1):
        name = r.get('name', f'test_{i}')
        status = r.get('status', 'UNKNOWN')
        color = status_colors.get(status, '#6b7280')
        bg = status_bg.get(status, '#f9fafb')
        elf_size = r.get('elf_size', '-')
        entry = r.get('entry_point', '-')
        reason = r.get('reason', '')
        error = r.get('error_tail', '').replace('|', '<br>')

        rows_html += f'''
        <tr style="background:{bg}">
            <td>{i}</td>
            <td><code>{name}</code></td>
            <td><span style="color:{color};font-weight:bold">{status}</span></td>
            <td>{elf_size}</td>
            <td><code>{entry}</code></td>
            <td style="font-size:0.85em;color:#666">{reason} {error}</td>
        </tr>'''

    # 进度条
    pass_pct = passed * 100 / max(total, 1)
    fail_pct = failed * 100 / max(total, 1)
    skip_pct = skipped * 100 / max(total, 1)

    html = f'''<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Lumi-Core 回归测试报告 — {suite} ({timestamp})</title>
<style>
    * {{ margin: 0; padding: 0; box-sizing: border-box; }}
    body {{ font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif; background: #f8fafc; color: #1e293b; padding: 2rem; }}
    .container {{ max-width: 1100px; margin: 0 auto; }}
    h1 {{ font-size: 1.5rem; margin-bottom: 0.5rem; color: #0f172a; }}
    h2 {{ font-size: 1.1rem; margin: 1.5rem 0 0.75rem; color: #334155; border-bottom: 2px solid #e2e8f0; padding-bottom: 0.3rem; }}
    .meta {{ display: flex; gap: 2rem; flex-wrap: wrap; margin: 1rem 0; font-size: 0.9rem; color: #64748b; }}
    .meta span {{ background: #f1f5f9; padding: 0.3rem 0.8rem; border-radius: 4px; }}
    .cards {{ display: grid; grid-template-columns: repeat(auto-fit, minmax(140px, 1fr)); gap: 1rem; margin: 1rem 0; }}
    .card {{ background: white; border-radius: 8px; padding: 1rem; text-align: center; box-shadow: 0 1px 3px rgba(0,0,0,0.1); }}
    .card .num {{ font-size: 2rem; font-weight: bold; }}
    .card .label {{ font-size: 0.8rem; color: #64748b; margin-top: 0.3rem; }}
    .bar {{ height: 24px; border-radius: 12px; overflow: hidden; display: flex; margin: 1rem 0; background: #e2e8f0; }}
    .bar .pass {{ background: #22c55e; }}
    .bar .fail {{ background: #ef4444; }}
    .bar .skip {{ background: #f59e0b; }}
    table {{ width: 100%; border-collapse: collapse; background: white; border-radius: 8px; overflow: hidden; box-shadow: 0 1px 3px rgba(0,0,0,0.1); font-size: 0.9rem; }}
    th {{ background: #f1f5f9; padding: 0.6rem 0.8rem; text-align: left; font-weight: 600; color: #475569; border-bottom: 2px solid #e2e8f0; }}
    td {{ padding: 0.5rem 0.8rem; border-bottom: 1px solid #f1f5f9; }}
    tr:hover {{ background: #f8fafc !important; }}
    code {{ background: #f1f5f9; padding: 0.1rem 0.4rem; border-radius: 3px; font-size: 0.85em; }}
    .footer {{ margin-top: 2rem; font-size: 0.8rem; color: #94a3b8; text-align: center; }}
    .badge {{ display: inline-block; padding: 0.2rem 0.6rem; border-radius: 10px; font-size: 0.75rem; font-weight: bold; color: white; }}
</style>
</head>
<body>
<div class="container">
    <h1>Lumi-Core 回归测试报告</h1>
    <div class="meta">
        <span>Suite: <b>{suite}</b></span>
        <span>日期: {timestamp[:8] if len(timestamp) > 8 else timestamp}</span>
        <span>工具链: <code>{toolchain}</code></span>
        <span>架构: <code>{march}</code></span>
    </div>

    <h2>概览</h2>
    <div class="cards">
        <div class="card"><div class="num" style="color:#0f172a">{total}</div><div class="label">总计</div></div>
        <div class="card"><div class="num" style="color:#22c55e">{passed}</div><div class="label">PASS</div></div>
        <div class="card"><div class="num" style="color:#ef4444">{failed}</div><div class="label">FAIL</div></div>
        <div class="card"><div class="num" style="color:#f59e0b">{skipped}</div><div class="label">SKIP</div></div>
        <div class="card"><div class="num" style="color:#3b82f6">{pass_rate}</div><div class="label">通过率</div></div>
    </div>

    <div class="bar">
        <div class="pass" style="width:{pass_pct}%"></div>
        <div class="fail" style="width:{fail_pct}%"></div>
        <div class="skip" style="width:{skip_pct}%"></div>
    </div>

    <h2>测试详情</h2>
    <table>
        <thead>
            <tr><th>#</th><th>测试名称</th><th>状态</th><th>ELF 大小</th><th>入口地址</th><th>备注</th></tr>
        </thead>
        <tbody>
            {rows_html}
        </tbody>
    </table>

    <h2>基准测试 (Dhrystone / CoreMark)</h2>
    <div style="background:white;border-radius:8px;padding:1rem;box-shadow:0 1px 3px rgba(0,0,0,0.1);margin-top:0.5rem">
        <p style="color:#64748b;font-size:0.9rem">
            基准测试通过 <code>make -C perf/benchmarks/coremark</code> 和
            <code>make -C perf/benchmarks/dhrystone</code> 独立编译运行。
            完整性能数据见 <a href="../../perf/benchmarks/perf-report.yaml">perf-report.yaml</a>。
        </p>
        <table style="margin-top:0.5rem;box-shadow:none">
            <tr><th>基准测试</th><th>架构</th><th>优化</th><th>目标</th><th>状态</th></tr>
            <tr><td>CoreMark</td><td><code>rv32imac</code></td><td>-O2 -funroll-loops</td><td>≥ 5.0 CM/MHz</td><td><span style="color:#f59e0b">PENDING (待运行)</span></td></tr>
            <tr><td>Dhrystone</td><td><code>rv32imac</code></td><td>-O2 -funroll-loops</td><td>≥ 1.5 DMIPS/MHz</td><td><span style="color:#f59e0b">PENDING (待运行)</span></td></tr>
        </table>
    </div>

    <div class="footer">
        <p>Lumi-Core Regression Report — Generated {datetime.utcnow().strftime('%Y-%m-%d %H:%M UTC')}</p>
        <p>规则 [11] 每日集成回归 | 规则 [14] HTML 文档格式与索引</p>
    </div>
</div>
</body>
</html>'''

    os.makedirs(os.path.dirname(output_path) or '.', exist_ok=True)
    with open(output_path, 'w') as f:
        f.write(html)
    print(f"[REPORT] HTML report generated: {output_path}")


def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <results.yaml> <output.html>")
        sys.exit(1)

    yaml_path = sys.argv[1]
    html_path = sys.argv[2]

    if not os.path.exists(yaml_path):
        print(f"[ERROR] Results file not found: {yaml_path}")
        sys.exit(1)

    meta, results, summary = parse_yaml_simple(yaml_path)
    generate_html(meta, results, summary, html_path)


if __name__ == '__main__':
    main()
