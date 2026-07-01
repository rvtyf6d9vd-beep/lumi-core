#!/bin/bash
# ─────────────────────────────────────────────────────────────
# setup_hooks.sh — 安装 Git 钩子
#
# 用法:
#   cd /path/to/Lumi-core
#   bash hooks/setup_hooks.sh
# ─────────────────────────────────────────────────────────────

set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
GIT_HOOKS_DIR="$REPO_ROOT/.git/hooks"

echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "  Lumi-Core Git 钩子安装"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo ""

# 检查 .git 目录
if [ ! -d "$REPO_ROOT/.git" ]; then
    echo "错误: 未找到 .git 目录 ($REPO_ROOT/.git)"
    echo "请确认在 Git 仓库根目录下运行此脚本。"
    exit 1
fi

# 确保 hooks 目录存在
mkdir -p "$GIT_HOOKS_DIR"

# 安装 post-commit 钩子
HOOK_SRC="$SCRIPT_DIR/post-commit"
HOOK_DST="$GIT_HOOKS_DIR/post-commit"

if [ -f "$HOOK_SRC" ]; then
    cp "$HOOK_SRC" "$HOOK_DST"
    chmod +x "$HOOK_DST"
    echo "  [OK] post-commit 钩子已安装"
else
    echo "  [!!] 源文件不存在: $HOOK_SRC"
fi

echo ""

# 创建 archive 目录
ARCHIVE_DIR="$REPO_ROOT/docs/project/baselines/archive"
if [ ! -d "$ARCHIVE_DIR" ]; then
    mkdir -p "$ARCHIVE_DIR"
    echo "  [OK] 创建归档目录: docs/project/baselines/archive/"
fi

echo ""
echo "安装完成。"
echo ""
echo "钩子说明:"
echo "  - post-commit: 每次 git commit 后，自动检测 baseline-*.yaml 变更"
echo "    并重新生成对应的 HTML 报告。旧 HTML 文件自动归档到 archive/ 目录。"
echo ""
echo "文件结构:"
echo "  docs/project/baselines/"
echo "  ├── baseline-BL-1.0.yaml      # 基线快照（权威来源）"
echo "  ├── baseline-BL-1.0.html      # 最新 HTML 报告"
echo "  ├── generate_baseline_html.py # 转换脚本"
echo "  └── archive/                  # 历史 HTML 版本"
echo "      ├── baseline-BL-1.0_20260626_140000.html"
echo "      └── baseline-BL-1.0_20260627_100000.html"
