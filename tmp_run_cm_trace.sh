#!/bin/bash
cd /Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core
echo "Running CoreMark ITERATIONS=1 with trace..."
time ./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=perf/benchmarks/coremark-v1/coremark-v1_32.hex +dump_trace > /tmp/cm1_trace.log 2>&1
echo "EXIT=$?"
echo "--- Last 30 TRACE lines ---"
grep TRACE /tmp/cm1_trace.log | tail -30
echo "--- Summary ---"
grep -E 'SB|V1\]|TIMEOUT|Retired|PASS|FAIL|ECALL' /tmp/cm1_trace.log
