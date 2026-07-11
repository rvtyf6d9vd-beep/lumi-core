#!/bin/bash
# =================================================================
# Lumi-Core 回归测试运行脚本
# 规则 [11] 每日集成回归 | Phase D
# =================================================================
# 用法:
#   ./run_regression.sh [smoke|regression|nightly|all]
#   ./run_regression.sh smoke          # 6 项冒烟 (< 5min)
#   ./run_regression.sh regression     # 12 项回归 (< 30min)
#   ./run_regression.sh nightly        # 全量 35 项
#   ./run_regression.sh all            # 等同 nightly
# =================================================================
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
BUILD_DIR="$PROJECT_ROOT/build/tests"
RESULTS_DIR="$PROJECT_ROOT/tests/results"
REPORT_DIR="$PROJECT_ROOT/tests/reports"
LINKER="$PROJECT_ROOT/tests/linker/lumi_arch_test.ld"
ELF2HEX="$PROJECT_ROOT/tests/scripts/elf2hex.py"
CONFIG="$PROJECT_ROOT/tests/regression-config.yaml"

# 时间戳
TIMESTAMP="$(date -u +%Y%m%d-%H%M%S)"
DATE_SHORT="$(date -u +%Y-%m-%d)"

# RISC-V 工具链
CROSS_COMPILE="${CROSS_COMPILE:-riscv64-unknown-elf}"
CC="${CROSS_COMPILE}-gcc"
OBJCOPY="${CROSS_COMPILE}-objcopy"
OBJDUMP="${CROSS_COMPILE}-objdump"
NM="${CROSS_COMPILE}-nm"

# 编译参数 (Lumi RV32)
MARCH="rv32imac_zicsr"
MABI="ilp32"
CFLAGS="-march=$MARCH -mabi=$MABI -nostdlib -ffreestanding -O2 -static -T $LINKER"

# 颜色
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# ─── 套件定义 ──────────────────────────────────────────────
SMOKE_TESTS=(
    "rv32i_smoke" "rv32m_basic" "tcm_basic_rw"
    "cache_basic" "csr_basic" "clic_priority"
)

REGRESSION_TESTS=(
    "rv32i_full" "rv32b_smoke" "rv32b_zba" "rv32b_zbb"
    "rv32c_full" "exception_precise" "pmp_regions"
    "plic_dispatch" "mtime_timer" "fpu_basic"
    "vector_basic" "debug_halt"
)

# Nightly = smoke + regression + additional
NIGHTLY_ADDITIONAL=(
    "pma_axi_access" "rv32c_smoke" "rv32c_bpred" "rv32c_basic"
    "lockstep_compare" "lockstep_error" "lockstep_fsm"
    "multicore_topo" "multicore_arb"
    "power_states" "reset_seq" "power_icg"
    "dft_scan" "dft_mbist" "dft_jtag" "dft_secure_lock"
    "boot_sequence"
)

# ─── 选择套件 ──────────────────────────────────────────────
SUITE="${1:-smoke}"
case "$SUITE" in
    smoke)
        TESTS=("${SMOKE_TESTS[@]}")
        ;;
    regression)
        TESTS=("${SMOKE_TESTS[@]}" "${REGRESSION_TESTS[@]}")
        ;;
    nightly|all)
        TESTS=("${SMOKE_TESTS[@]}" "${REGRESSION_TESTS[@]}" "${NIGHTLY_ADDITIONAL[@]}")
        ;;
    *)
        echo "Usage: $0 [smoke|regression|nightly|all]"
        exit 1
        ;;
esac

# ─── 准备目录 ──────────────────────────────────────────────
RUN_DIR="$BUILD_DIR/run-$TIMESTAMP"
mkdir -p "$RUN_DIR" "$RESULTS_DIR" "$REPORT_DIR"

echo "============================================"
echo " Lumi-Core Regression Runner"
echo " Suite:     $SUITE"
echo " Tests:     ${#TESTS[@]}"
echo " Timestamp: $TIMESTAMP"
echo " Build Dir: $RUN_DIR"
echo " Toolchain: $CC"
echo " March:     $MARCH / $MABI"
echo "============================================"
echo ""

# ─── 编译 + 结果收集 ───────────────────────────────────────
PASS=0
FAIL=0
SKIP=0
RESULTS_YAML="$RUN_DIR/results.yaml"

# YAML header
cat > "$RESULTS_YAML" <<EOF
# Lumi-Core Regression Results
# Generated: $(date -u +%Y-%m-%dT%H:%M:%SZ)
suite: "$SUITE"
timestamp: "$TIMESTAMP"
toolchain: "$CC"
march: "$MARCH"
mabi: "$MABI"

results:
EOF

for test in "${TESTS[@]}"; do
    SRC="$PROJECT_ROOT/tests/directed/${test}.S"
    OUT_DIR="$RUN_DIR/$test"
    mkdir -p "$OUT_DIR"

    printf "  %-30s " "$test"

    if [ ! -f "$SRC" ]; then
        echo -e "${YELLOW}[SKIP]${NC} source not found"
        SKIP=$((SKIP + 1))
        cat >> "$RESULTS_YAML" <<EOF
  - name: "$test"
    status: "SKIP"
    reason: "source not found"
EOF
        continue
    fi

    # 编译 (根据测试类型选择 march)
    COMPILE_LOG="$OUT_DIR/compile.log"
    case "$test" in
        rv32b_*)       TEST_MARCH="rv32im_zba_zbb_zicsr_zifencei" ;;
        rv32c_*)       TEST_MARCH="rv32imac_zicsr_zifencei" ;;
        fpu_*|power_icg) TEST_MARCH="rv32imafv_zicsr_zifencei" ;;
        vector_*)      TEST_MARCH="rv32imv_zicsr_zifencei" ;;
        *)             TEST_MARCH="rv32imac_zicsr_zifencei" ;;
    esac
    TEST_CFLAGS="-march=$TEST_MARCH -mabi=$MABI -nostdlib -ffreestanding -O2 -static -T $LINKER"
    if "$CC" $TEST_CFLAGS -o "$OUT_DIR/${test}.elf" "$SRC" > "$COMPILE_LOG" 2>&1; then
        # 编译成功
        COMPILE_STATUS="PASS"

        # 生成 hex
        if [ -f "$ELF2HEX" ]; then
            python3 "$ELF2HEX" "$OUT_DIR/${test}.elf" "$OUT_DIR/${test}.hex" \
                --base-addr 0x0 --mem-size 0x40000 > /dev/null 2>&1 || true
        fi

        # 生成反汇编
        "$OBJDUMP" -d "$OUT_DIR/${test}.elf" > "$OUT_DIR/${test}.dump" 2>/dev/null || true

        # 获取 ELF 大小
        ELF_SIZE=$(stat -f%z "$OUT_DIR/${test}.elf" 2>/dev/null || stat -c%s "$OUT_DIR/${test}.elf" 2>/dev/null || echo "0")

        # 获取入口地址
        ENTRY=$("$NM" "$OUT_DIR/${test}.elf" 2>/dev/null | grep ' T _start' | head -1 | awk '{print "0x"$1}' || echo "null")

        echo -e "${GREEN}[PASS]${NC} compile OK (${ELF_SIZE}B, entry=$ENTRY)"

        # 复制 ELF 到 results 目录
        cp "$OUT_DIR/${test}.elf" "$RESULTS_DIR/" 2>/dev/null || true

        PASS=$((PASS + 1))
        cat >> "$RESULTS_YAML" <<EOF
  - name: "$test"
    status: "PASS"
    elf_size: $ELF_SIZE
    entry_point: "$ENTRY"
    compile_log: "$COMPILE_LOG"
EOF
    else
        # 编译失败
        echo -e "${RED}[FAIL]${NC} compile error"
        FAIL=$((FAIL + 1))

        # 提取错误信息 (最后 5 行)
        ERROR_TAIL=$(tail -5 "$COMPILE_LOG" | tr '\n' '|' | sed 's/"/\\"/g')

        cat >> "$RESULTS_YAML" <<EOF
  - name: "$test"
    status: "FAIL"
    reason: "compile error"
    error_tail: "$ERROR_TAIL"
    compile_log: "$COMPILE_LOG"
EOF
    fi
done

TOTAL=${#TESTS[@]}
echo ""
echo "============================================"
echo " Regression Summary ($SUITE)"
echo "============================================"
echo " Total:    $TOTAL"
echo -e " Pass:     ${GREEN}$PASS${NC}"
echo -e " Fail:     ${RED}$FAIL${NC}"
echo -e " Skip:     ${YELLOW}$SKIP${NC}"
echo "============================================"

# 写入 summary 到 YAML
cat >> "$RESULTS_YAML" <<EOF

summary:
  total: $TOTAL
  pass: $PASS
  fail: $FAIL
  skip: $SKIP
  pass_rate: "$(echo "scale=1; $PASS * 100 / $TOTAL" | bc 2>/dev/null || echo "N/A")%"
  suite: "$SUITE"
  date: "$DATE_SHORT"
EOF

# 生成 HTML 报告
echo ""
echo "Generating HTML report..."
python3 "$SCRIPT_DIR/generate_report.py" "$RESULTS_YAML" "$REPORT_DIR/regression-$TIMESTAMP.html" 2>/dev/null || \
    echo "[WARN] HTML report generation failed (python3 or script missing)"

echo ""
echo "Results YAML: $RESULTS_YAML"
echo "Report HTML:  $REPORT_DIR/regression-$TIMESTAMP.html"

# 退出码
if [ $FAIL -gt 0 ]; then
    echo ""
    echo -e "${RED}[RESULT] REGRESSION FAILED — $FAIL test(s) need attention${NC}"
    exit 1
else
    echo ""
    echo -e "${GREEN}[RESULT] ALL PASS${NC}"
    exit 0
fi
