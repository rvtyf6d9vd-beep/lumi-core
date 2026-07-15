#!/bin/bash
cd /Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core

echo "=== CoreMark ITERATIONS=1 ==="
time ./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=perf/benchmarks/coremark-v1/coremark-v1_32.hex > /tmp/cm1.log 2>&1
echo "EXIT=$?"
grep -E 'SB\]|V1\]|TIMEOUT|Retired|INCOMPLETE|PASS|FAIL|ECALL|Spin' /tmp/cm1.log

echo ""
echo "=== Dhrystone NUMBER_OF_RUNS=1 ==="
time ./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=perf/benchmarks/dhrystone-v1/dhrystone-v1_32.hex > /tmp/dh1.log 2>&1
echo "EXIT=$?"
grep -E 'SB\]|V1\]|TIMEOUT|Retired|INCOMPLETE|PASS|FAIL|ECALL|Spin' /tmp/dh1.log
