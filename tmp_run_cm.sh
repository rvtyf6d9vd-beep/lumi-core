#!/bin/bash
cd /Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core
echo "Starting CoreMark V1 simulation (no trace)..."
time ./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=perf/benchmarks/coremark-v1/coremark-v1_32.hex > /tmp/cm_notrace.log 2>&1
echo "EXIT=$?"
echo "--- Results ---"
grep -E 'SB|V1\]|TIMEOUT|Retired|INCOMPLETE|PASS|FAIL|Scoreboard' /tmp/cm_notrace.log
