#!/usr/bin/env python3
"""
generate_report.py — 合规报告生成器

将合规检查结果转换为人类可读的 HTML 报告。

用法:
    python generate_report.py --input audit/compliance-reports/daily-20260610.yaml
    python generate_report.py --input report.yaml --output report.html
"""

import argparse
import sys
from datetime import datetime
from pathlib import Path

import yaml


def load_yaml(path: Path) -> dict:
    with open(path, encoding="utf-8") as f:
        return yaml.safe_load(f) or {}


def generate_html_report(data: dict) -> str:
    """将合规检查结果转换为 HTML 报告"""
    timestamp = data.get("timestamp", datetime.now().isoformat())
    milestone = data.get("milestone", "N/A")
    summary = data.get("summary", {})
    results = data.get("results", [])

    status_colors = {
        "PASS": "#10b981",
        "WARN": "#f59e0b",
        "FAIL": "#ef4444",
        "SKIP": "#6b7280",
    }

    rows = []
    for r in results:
        color = status_colors.get(r["status"], "#6b7280")
        rows.append(f"""
        <tr>
          <td><code>{r['id']}</code></td>
          <td>{r['title']}</td>
          <td style="color: {color}; font-weight: 600;">{r['status']}</td>
          <td>{r['detail']}</td>
        </tr>""")

    html = f"""<!DOCTYPE html>
<html lang="zh-CN">
<head>
  <meta charset="UTF-8">
  <title>Lumi 合规检查报告</title>
  <style>
    body {{ font-family: -apple-system, sans-serif; max-width: 900px; margin: 2em auto; padding: 0 1em; color: #1e293b; }}
    h1 {{ color: #0f172a; border-bottom: 2px solid #3b82f6; padding-bottom: 0.5em; }}
    table {{ width: 100%; border-collapse: collapse; margin: 1em 0; }}
    th, td {{ padding: 0.75em; text-align: left; border-bottom: 1px solid #e2e8f0; }}
    th {{ background: #f8fafc; font-weight: 600; }}
    .summary {{ display: flex; gap: 1em; margin: 1em 0; }}
    .stat {{ padding: 1em; border-radius: 8px; text-align: center; flex: 1; }}
    .stat-pass {{ background: #ecfdf5; color: #065f46; }}
    .stat-warn {{ background: #fffbeb; color: #92400e; }}
    .stat-fail {{ background: #fef2f2; color: #991b1b; }}
    code {{ background: #f1f5f9; padding: 0.15em 0.4em; border-radius: 3px; font-size: 0.9em; }}
  </style>
</head>
<body>
  <h1>Lumi 合规检查报告</h1>
  <p>生成时间: {timestamp} | 里程碑: {milestone}</p>

  <div class="summary">
    <div class="stat stat-pass"><strong>{summary.get('PASS', 0)}</strong><br>通过</div>
    <div class="stat stat-warn"><strong>{summary.get('WARN', 0)}</strong><br>警告</div>
    <div class="stat stat-fail"><strong>{summary.get('FAIL', 0)}</strong><br>失败</div>
  </div>

  <table>
    <tr><th>规则 ID</th><th>名称</th><th>状态</th><th>详情</th></tr>
    {''.join(rows)}
  </table>

  <p style="color: #64748b; font-size: 0.85em; margin-top: 2em;">
    由 generate_report.py 自动生成 | Lumi 项目合规检查引擎
  </p>
</body>
</html>"""
    return html


def main():
    parser = argparse.ArgumentParser(description="合规报告生成器")
    parser.add_argument("--input", required=True, help="合规检查结果 YAML 文件")
    parser.add_argument("--output", help="输出 HTML 文件路径（默认: 同名 .html）")
    args = parser.parse_args()

    input_path = Path(args.input)
    if not input_path.exists():
        print(f"错误: 输入文件不存在: {input_path}", file=sys.stderr)
        sys.exit(1)

    data = load_yaml(input_path)
    html = generate_html_report(data)

    output_path = Path(args.output) if args.output else input_path.with_suffix(".html")
    output_path.write_text(html, encoding="utf-8")
    print(f"✅ 报告已生成: {output_path}")


if __name__ == "__main__":
    main()
