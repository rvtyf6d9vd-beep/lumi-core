# Lumi-Core Phase 3/4 Regression Test
# Tests the 8-stage MinorCPU with various configurations.
# Phase 4: Added CoreMark and Dhrystone benchmark tests.

import os
import re
import sys
import subprocess

GEM5 = "build/RISCV/gem5.opt"
LUMI_CORE = "configs/lumi-core.py"

# Test binary
thispath = os.path.dirname(os.path.realpath(__file__))
BINARY = os.path.join(
    thispath, "../../tests/test-progs/hello/bin/riscv/linux/hello"
)

# Benchmark binaries (Phase 4)
BENCH_DIR = os.path.join(thispath, "../../../benchmarks")
COREMARK_BIN = os.path.join(BENCH_DIR, "coremark/coremark.riscv")
DHRYSTONE_BIN = os.path.join(BENCH_DIR, "dhrystone/dhrystone.riscv")

results = []


def run_test(name, extra_args):
    """Run a single regression test."""
    cmd = [GEM5, LUMI_CORE] + extra_args
    print(f"\n{'='*60}")
    print(f"TEST: {name}")
    print(f"CMD:  {' '.join(cmd)}")
    print(f"{'='*60}")

    try:
        proc = subprocess.run(
            cmd,
            capture_output=True,
            timeout=120,
            cwd=os.path.join(thispath, "../.."),
        )
        output = proc.stdout.decode('utf-8', errors='replace') + \
            proc.stderr.decode('utf-8', errors='replace')
        if "Hello world!" in output and proc.returncode == 0:
            # Extract tick count
            tick_str = ""
            for line in output.split("\n"):
                if "exited at tick" in line:
                    tick_str = line.strip()
                    break
            results.append((name, "PASS", tick_str))
            print(f"  PASS - {tick_str}")
        else:
            error_msg = output[-500:] if len(output) > 500 else output
            results.append((name, "FAIL", error_msg[:200]))
            print(f"  FAIL - returncode={proc.returncode}")
            print(f"  Last output: {error_msg[:200]}")
    except subprocess.TimeoutExpired:
        results.append((name, "TIMEOUT", "Exceeded 120s"))
        print(f"  TIMEOUT")
    except Exception as e:
        results.append((name, "ERROR", str(e)))
        print(f"  ERROR: {e}")


def run_benchmark_test(name, binary, issue_width, metric_key, timeout=300):
    """Run a benchmark test and verify metric output."""
    if not os.path.exists(binary):
        results.append((name, "SKIP", f"Binary not found: {binary}"))
        print(f"  SKIP - {binary} not found")
        return

    cmd = [GEM5, "--outdir", f"m5out_regress_{name}",
           LUMI_CORE, "--issue-width", str(issue_width),
           "--binary", binary]
    print(f"\n{'='*60}")
    print(f"BENCHMARK: {name}")
    print(f"CMD:  {' '.join(cmd)}")
    print(f"{'='*60}")

    try:
        proc = subprocess.run(
            cmd, capture_output=True, timeout=timeout,
            cwd=os.path.join(thispath, "../.."),
        )
        output = proc.stdout.decode('utf-8', errors='replace') + \
            proc.stderr.decode('utf-8', errors='replace')

        # Check for successful exit
        if proc.returncode != 0:
            results.append((name, "FAIL", f"gem5 exit={proc.returncode}"))
            print(f"  FAIL - gem5 exit code: {proc.returncode}")
            return

        # Parse metric
        metric_val = None
        for line in output.split("\n"):
            if metric_key in line:
                m = re.search(r":\s*(\d+)", line)
                if m:
                    metric_val = int(m.group(1)) / 100.0

        # Check for correct operation (CoreMark) or valid output (Dhrystone)
        has_correct = "Correct operation validated" in output
        has_dmips = "Dhrystone_DMIPS_per_MHz_x100" in output

        if metric_val is not None and metric_val > 0:
            if has_correct or has_dmips:
                results.append((name, "PASS", f"{metric_key}={metric_val:.2f}"))
                print(f"  PASS - {metric_key} = {metric_val:.2f}")
            else:
                results.append((name, "PASS", f"{metric_key}={metric_val:.2f} (no CRC check)"))
                print(f"  PASS - {metric_key} = {metric_val:.2f} (no CRC check)")
        else:
            results.append((name, "FAIL", "No valid metric output"))
            print(f"  FAIL - No valid metric output")

    except subprocess.TimeoutExpired:
        results.append((name, "TIMEOUT", f"Exceeded {timeout}s"))
        print(f"  TIMEOUT")
    except Exception as e:
        results.append((name, "ERROR", str(e)))
        print(f"  ERROR: {e}")


# --- Phase 3 Test Cases (hello world) ---

# 1. Triple-issue (default)
run_test("8-stage triple-issue", [])

# 2. Dual-issue
run_test("8-stage dual-issue", ["--issue-width", "2"])

# 3. Triple-issue with TCM
run_test("8-stage triple+TCM", ["--enable-tcm"])

# 4. Triple-issue with CLIC
run_test("8-stage triple+CLIC", ["--enable-clic"])

# 5. Dual-issue with all features
run_test("8-stage dual+TCM+CLIC", [
    "--issue-width", "2", "--enable-tcm", "--enable-clic"
])

# --- Phase 4 Benchmark Tests ---

# 6. CoreMark triple-issue
run_benchmark_test(
    "coremark-triple", COREMARK_BIN, 3,
    "CoreMark_CM_per_MHz_x100"
)

# 7. CoreMark dual-issue
run_benchmark_test(
    "coremark-dual", COREMARK_BIN, 2,
    "CoreMark_CM_per_MHz_x100"
)

# 8. Dhrystone triple-issue
run_benchmark_test(
    "dhrystone-triple", DHRYSTONE_BIN, 3,
    "Dhrystone_DMIPS_per_MHz_x100"
)

# --- M2-S1 Test Cases ---

# 9. PMA enabled
run_test("M2-S1 PMA enabled", ["--enable-pma"])

# 10. PMA + CLIC with latency model
run_test("M2-S1 PMA+CLIC", [
    "--enable-pma", "--enable-clic", "--clic-latency", "16"
])

# 11. Vector extension enabled
run_test("M2-S1 Vector enabled", ["--enable-vector"])

# 12. HPM export enabled
run_test("M2-S1 HPM export", ["--enable-hpm", "--max-ticks", "10000000"])

# 13. BTB/RAS sizing
run_test("M2-S1 BTB+RAS sizing", [
    "--btb-entries", "4096", "--ras-entries", "16"
])

# 14. Full M2-S1 feature set
run_test("M2-S1 full features", [
    "--enable-pma", "--enable-clic", "--clic-latency", "16",
    "--enable-vector", "--enable-hpm",
    "--btb-entries", "8192", "--ras-entries", "32",
])

# --- Summary ---
print(f"\n{'='*60}")
print("REGRESSION TEST SUMMARY")
print(f"{'='*60}")

passed = sum(1 for _, status, _ in results if status == "PASS")
skipped = sum(1 for _, status, _ in results if status == "SKIP")
failed = sum(1 for _, status, _ in results if status not in ("PASS", "SKIP"))
total = len(results)

for name, status, detail in results:
    if status == "PASS":
        icon = "\u2713"
    elif status == "SKIP":
        icon = "-"
    else:
        icon = "\u2717"
    print(f"  {icon} {name}: {status}")

print(f"\nResult: {passed}/{total} passed, {skipped} skipped, {failed} failed")
if failed == 0:
    print("ALL TESTS PASSED" if skipped == 0 else "ALL TESTS PASSED (with skips)")
else:
    print("SOME TESTS FAILED")
    sys.exit(1)
