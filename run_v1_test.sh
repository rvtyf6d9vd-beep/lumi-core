#!/bin/bash
cd /Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/src/sim-v1/obj_dir
exec ./Vlumi_v1 "+itcm_file=../../tests/results/test_bgeu_taken_32.hex" "+dump_trace" 2>&1
