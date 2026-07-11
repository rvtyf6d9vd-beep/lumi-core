#!/bin/bash
# =================================================================
# Lumi V1 — riscv-arch-test 编译脚本
# 用法: ./build-arch-test.sh [test_dir] [--all]
# 示例: ./build-arch-test.sh rv32i            # 仅编译 RV32I
#       ./build-arch-test.sh --all            # 编译全部 V1 测试
# =================================================================
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
ARCH_TEST_DIR="$PROJECT_ROOT/tests/riscv-arch-test"
BUILD_DIR="$PROJECT_ROOT/tests/build"
LINKER="$PROJECT_ROOT/tests/linker/lumi_arch_test.ld"
ELF2HEX="$PROJECT_ROOT/tests/scripts/elf2hex.py"

# RISC-V 工具链
CROSS_COMPILE="${CROSS_COMPILE:-riscv64-unknown-elf}"
CC="${CROSS_COMPILE}-gcc"
AS="${CROSS_COMPILE}-as"
LD="${CROSS_COMPILE}-ld"
OBJCOPY="${CROSS_COMPILE}-objcopy"
NM="${CROSS_COMPILE}-nm"

# 编译参数
BASE_FLAGS="-mabi=ilp32 -nostdlib -nostartfiles -static -T $LINKER"

# V1 目标测试目录
V1_DIRS=(
    "riscv-test-suite/rv32i_m/I"       # RV32I 基础整数
    "riscv-test-suite/rv32i_m/M"       # M 扩展乘除法
    "riscv-test-suite/rv32i_m/B"       # B 位操作
    "riscv-test-suite/rv32i_m/C"       # C 压缩指令
)

# ─── 编译单个测试 ────────────────────────────────────────────
build_test() {
    local src="$1"
    local name="$(basename "$src" .S)"
    local out_dir="$BUILD_DIR/$name"
    mkdir -p "$out_dir"

    local march="rv32imafc_zba_zbb_zbc_zbs"

    echo "[BUILD] $name"

    # 预处理 + 汇编 + 链接
    "$CC" -march=$march $BASE_FLAGS \
        -I"$ARCH_TEST_DIR/riscv-test-suite/env" \
        -I"$ARCH_TEST_DIR/riscv-target/sail_c_model/env" \
        -o "$out_dir/${name}.elf" \
        "$src" 2>&1 || {
        echo "[BUILD] FAIL: $name (compile error)"
        echo "FAIL" > "$out_dir/status"
        return 1
    }

    # 生成反汇编 (调试用)
    "${CROSS_COMPILE}-objdump" -d "$out_dir/${name}.elf" > "$out_dir/${name}.dump" 2>/dev/null || true

    # 提取参考签名
    local sig_ref="$ARCH_TEST_DIR/${src%.S}.reference_output"
    if [ -f "$sig_ref" ]; then
        cp "$sig_ref" "$out_dir/${name}.ref"
    else
        echo "[BUILD] WARN: No reference signature for $name"
    fi

    # 提取签名地址
    local begin_sig=$("$NM" "$out_dir/${name}.elf" | grep begin_signature | awk '{print "0x"$1}')
    local end_sig=$("$NM" "$out_dir/${name}.elf" | grep end_signature | awk '{print "0x"$1}')

    # ELF → hex memory image
    python3 "$ELF2HEX" \
        "$out_dir/${name}.elf" \
        "$out_dir/${name}.hex" \
        --base-addr 0x0 \
        --mem-size 0x40000 2>&1

    # 写入元数据
    cat > "$out_dir/${name}.meta" <<EOF
name: $name
source: $src
entry: $("$NM" "$out_dir/${name}.elf" | grep ' T _start\| T rvtest_entry_point' | head -1 | awk '{print "0x"$1}')
begin_signature: ${begin_sig:-null}
end_signature: ${end_sig:-null}
hex_file: ${name}.hex
ref_file: ${name}.ref
status: compiled
EOF

    echo "OK" > "$out_dir/status"
    echo "[BUILD] OK: $name"
    return 0
}

# ─── 主逻辑 ──────────────────────────────────────────────────
main() {
    local target="${1:---all}"
    local pass=0
    local fail=0
    local total=0

    if [ ! -d "$ARCH_TEST_DIR" ]; then
        echo "[ERROR] riscv-arch-test not found at $ARCH_TEST_DIR"
        echo "Run: git clone --depth 1 https://github.com/riscv-non-isa/riscv-arch-test.git tests/riscv-arch-test"
        exit 1
    fi

    mkdir -p "$BUILD_DIR"

    # 确定要编译的目录
    local dirs=()
    if [ "$target" = "--all" ]; then
        dirs=("${V1_DIRS[@]}")
    else
        # 查找匹配的子目录
        for d in "${V1_DIRS[@]}"; do
            if echo "$d" | grep -qi "$target"; then
                dirs+=("$d")
            fi
        done
        if [ ${#dirs[@]} -eq 0 ]; then
            echo "[ERROR] No matching test directory for: $target"
            echo "Available: ${V1_DIRS[*]}"
            exit 1
        fi
    fi

    # 编译所有测试
    for dir in "${dirs[@]}"; do
        local full_dir="$ARCH_TEST_DIR/$dir"
        if [ ! -d "$full_dir" ]; then
            echo "[WARN] Directory not found: $full_dir (skipping)"
            continue
        fi
        echo ""
        echo "=== Building $dir ==="
        for src in "$full_dir"/*.S; do
            [ -f "$src" ] || continue
            total=$((total + 1))
            if build_test "$src"; then
                pass=$((pass + 1))
            else
                fail=$((fail + 1))
            fi
        done
    done

    echo ""
    echo "==========================================="
    echo " Build Summary"
    echo "==========================================="
    echo " Total: $total"
    echo " Pass:  $pass"
    echo " Fail:  $fail"
    echo "==========================================="

    # 写入构建报告
    cat > "$BUILD_DIR/build-report.yaml" <<EOF
build_date: "$(date -u +%Y-%m-%dT%H:%M:%SZ)"
total_tests: $total
compiled: $pass
failed: $fail
toolchain: "$CC"
march: "rv32imafc_zba_zbb_zbc_zbs"
mabi: "ilp32"
linker_script: "$LINKER"
EOF
}

main "$@"
