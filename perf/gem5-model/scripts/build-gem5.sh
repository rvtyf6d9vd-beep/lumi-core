#!/usr/bin/env bash
# build-gem5.sh -- Build gem5 v24.1 for RISC-V on macOS
#
# 环境要求:
#   - macOS (Apple Silicon / arm64)
#   - Homebrew: python@3.12, m4 (keg-only), zlib
#   - Xcode Command Line Tools (clang 15+)
#
# 用法:
#   ./scripts/build-gem5.sh [--clean]
#
# 输出:
#   gem5/build/RISCV/gem5.opt
#
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
GEM5_DIR="$(cd "${SCRIPT_DIR}/../gem5" && pwd)"
PATCHES_DIR="$(cd "${SCRIPT_DIR}/../patches" && pwd)"
VENV_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)/.venv"

# ── gem5 源码准备 ────────────────────────────────────────────────────────
if [ ! -d "${GEM5_DIR}/.git" ]; then
    echo "[1/6] 克隆 gem5 v24.1..."
    git clone --depth 1 --branch v24.1 https://github.com/gem5/gem5.git "${GEM5_DIR}"
else
    echo "[1/6] gem5 源码已存在"
fi

# 应用 Lumi-Core 补丁 (MinorCPU 8 级流水线 + CLIC + LSQ 解歧等)
if [ -f "${PATCHES_DIR}/lumi-minorcpu-phase3-9.patch" ]; then
    cd "${GEM5_DIR}"
    if git diff --quiet HEAD 2>/dev/null; then
        echo "  应用 Lumi-Core 补丁..."
        git apply "${PATCHES_DIR}/lumi-minorcpu-phase3-9.patch"
        echo "  补丁应用成功 (41 个文件, +2948/-150 行)"
    else
        echo "  补丁已应用或源码已修改，跳过"
    fi
fi

# 部署 Lumi-Core 配置文件到 gem5/configs/
OVERLAY_DIR="$(cd "${SCRIPT_DIR}/../configs/gem5-overlay" && pwd)"
if [ -d "${OVERLAY_DIR}/configs" ]; then
    echo "  部署 Lumi-Core 配置文件..."
    cp -r "${OVERLAY_DIR}/configs/"* "${GEM5_DIR}/configs/"
    echo "  配置文件部署成功 (lumi-core.py + lumi-lib/)"
fi

# ── 依赖检查 ─────────────────────────────────────────────────────────────────
echo "[2/6] 检查依赖..."

# Python 3.12
if [ ! -x "${VENV_DIR}/bin/python3" ]; then
    echo "错误: Python venv 不存在，请先创建:"
    echo "  /opt/homebrew/opt/python@3.12/bin/python3.12 -m venv ${VENV_DIR}"
    exit 1
fi
echo "  Python: $( ${VENV_DIR}/bin/python3 --version )"

# m4 (keg-only, 需要手动加 PATH)
M4_BIN="/opt/homebrew/opt/m4/bin/m4"
if [ ! -x "${M4_BIN}" ]; then
    echo "错误: GNU m4 不存在，请运行: brew install m4"
    exit 1
fi
echo "  m4: $( ${M4_BIN} --version | head -1 )"

# zlib (homebrew keg-only)
if [ ! -f /opt/homebrew/opt/zlib/include/zlib.h ]; then
    echo "错误: zlib 未安装，请运行: brew install zlib"
    exit 1
fi
echo "  zlib: OK"

# scons
if [ ! -x "${VENV_DIR}/bin/scons" ]; then
    echo "[3/6] 安装 scons 及依赖..."
    "${VENV_DIR}/bin/pip" install scons==4.10.1 mako pydot protobuf numpy
else
    echo "[3/6] scons 已安装: $( ${VENV_DIR}/bin/scons --version | head -1 )"
fi

# ── 清理 (可选) ─────────────────────────────────────────────────────────────
if [ "${1:-}" = "--clean" ]; then
    echo "[4/6] 清理旧构建产物..."
    cd "${GEM5_DIR}"
    "${VENV_DIR}/bin/scons" -c build/RISCV/gem5.opt 2>/dev/null || true
else
    echo "[4/6] 跳过清理 (使用 --clean 强制清理)"
fi

# ── 编译 gem5 ────────────────────────────────────────────────────────────────
echo "[5/6] 编译 gem5 RISC-V (约 5-15 分钟)..."
cd "${GEM5_DIR}"

export PATH="/opt/homebrew/opt/m4/bin:${PATH}"

yes | "${VENV_DIR}/bin/scons" build/RISCV/gem5.opt -j"$(sysctl -n hw.ncpu)" 2>&1 \
    | tee /tmp/gem5-build-$(date +%Y%m%d).log

# ── 验证 ─────────────────────────────────────────────────────────────────────
echo "[6/6] 验证..."
if [ -x "${GEM5_DIR}/build/RISCV/gem5.opt" ]; then
    SIZE=$(du -h "${GEM5_DIR}/build/RISCV/gem5.opt" | cut -f1)
    echo "成功! gem5.opt 已生成 (${SIZE})"
    echo "路径: ${GEM5_DIR}/build/RISCV/gem5.opt"
else
    echo "错误: 编译失败，请检查日志 /tmp/gem5-build-*.log"
    exit 1
fi
