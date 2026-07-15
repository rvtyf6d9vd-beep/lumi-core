# Agent 任务转移 (Handoff) 清单

> **交接日期:** 2026-07-15
> **来源 Agent:** CoreMark V1 调试 Agent
> **目标 Agent:** 下一位接手 Agent
> **状态:** ⚠️ 工作暂停 — 关键 Bug 待解决

---

## 1. 当前工作状态

### 1.1 总体状态

CoreMark V1 仿真无法正常运行。程序在执行过程中 PC 跳转到数据区地址，导致无限循环重启。基础 RV32I 指令验证已通过（smoke test + full test），问题定位在 **指令对齐 / 取指逻辑** 层面。

### 1.2 已完成的阶段

| 阶段 | 状态 | 说明 |
|------|------|------|
| RTL Debug 代码清理 | ✅ 完成 | fetch/decode_issue/execute 三个模块的 $display 已移除 |
| Verilator 重新编译 | ✅ 完成 | `src/sim-v1/obj_dir/Vlumi_v1` 已更新 |
| Smoke Test 验证 | ✅ 完成 | 6/6 PASS |
| RV32I Full Test 验证 | ✅ 完成 | PASS=1, FAIL=0 |
| CoreMark main() 修复 | ✅ 完成 | 确保 _exit() 被调用 |
| CoreMark V1 仿真 | ❌ 未解决 | PC 跳转异常，程序崩溃 |
| Dhrystone V1 仿真 | ⏳ 未开始 | 依赖 CoreMark 问题解决 |
| 回归测试 | ✅ 编译回归通过 | 运行时回归未执行 |

### 1.3 未提交变更

以下文件已修改但未 git commit：
```
M perf/benchmarks/coremark-v1/coremark_v1_main.c  — main() 修复
M src/rtl/core/lumi_fetch.sv                       — 移除调试 $display
M src/rtl/core/lumi_decode_issue.sv                — 移除调试 $display
M src/rtl/core/lumi_execute.sv                     — 移除调试 $display
M tests/results/v1-realtime-trace.dat              — CoreMark trace (697MB)
M tests/results/v1-trace.dat                       — CoreMark trace
?? tests/reports/regression-20260715-065033.html   — 回归报告
```

---

## 2. 待完成的任务

### 2.1 [CRITICAL] 解决 CoreMark V1 仿真 PC 跳转异常

**问题核心:** PC 在某个时刻到达 `0x3a6e`（一条 32-bit 指令的中间位置），导致错误解码为 JAL，跳转到数据区。

**调查方向（按优先级）:**

1. **Fetch predecode 指令对齐逻辑**
   - 文件: `src/rtl/core/lumi_fetch.sv` 第 505-537 行（F2 级指令拆分）
   - 检查: `predecode_inst_count` 和 `predecode_bytes_consumed` 是否正确计算
   - 检查: `f2_start_offset_out = f2_pc_r[3:0]` 是否正确传递
   - 关键: 当 PC[3:0] != 0 时（非 16 字节对齐的 cache line 起始），指令拆分是否正确处理偏移

2. **压缩指令 PC 推进计算**
   - 文件: `src/rtl/core/lumi_fetch.sv` 第 577-580 行
   - 代码: `pc_next = (f2_valid_r ? f2_pc_r : pc_reg) + {27'h0, predecode_bytes_consumed}`
   - 检查: `predecode_bytes_consumed` 是否准确反映当前批次实际消费的字节数
   - 场景: 如果批次包含 4 条指令（2 条压缩 + 2 条 32-bit），bytes_consumed 应为 2+2+4+4=12

3. **Predecode 模块（外部）逻辑**
   - 查找: `lumi_predecode` 或类似模块，它接收 `f2_raw_data_out`/`f2_base_pc_out`/`f2_start_offset_out` 并输出 `predecode_bytes_consumed`/`predecode_inst_count`
   - 重点: 当 `f2_start_offset_out` 为奇数值（如 0xE）时，最后一条 32-bit 指令可能跨越 cache line 边界

4. **BTB 预测导致的 PC 错误跳转**
   - 文件: `src/rtl/core/lumi_fetch.sv` 第 272-311 行
   - 如果 BTB 误命中（tag 碰撞），`f1_pred_target_comb = btb_target` 可能指向错误地址
   - 检查: BTB tag 宽度 18-bit 是否足够，CoreMark 代码段是否存在 BTB 碰撞

5. **Scoreboard ECALL 检测**
   - 文件: `src/tb/env/lumi_scoreboard.sv`
   - 当前检测 `commit_inst[s] == 32'h00000073` 作为 ECALL
   - 如果 PC 跳转导致执行全 0 区域（NOP），ECALL 永远不会被触发
   - 考虑增加: 越界地址检测 trap（在 V1 SRAM bypass 中加入地址范围检查）

### 2.2 [HIGH] 修复 we_count=0 问题

**现象:** 仿真过程中 `sram_we_count` 始终为 0，意味着没有 Store 写入 SRAM。
**调查:**
- 检查 `lumi_soc_top.sv` 中 DC 写入路径：`if (dc_valid && dc_we)` 是否被正确触发
- 检查 `lumi_memory.sv` 中 LSU 写使能信号是否正确传播到 DC 接口
- 检查 Store 指令是否正确到达 Memory 级

### 2.3 [MEDIUM] 运行 Dhrystone V1 仿真

- 依赖 CoreMark 问题解决
- Dhrystone hex 编译: `perf/benchmarks/dhrystone/`
- 运行命令与 CoreMark 类似: `+itcm_file=dhrystone_v1.hex +max_cycles=N`

### 2.4 [LOW] 提交代码变更

- 已完成的 RTL 清理和 CoreMark main() 修复应提交
- 建议分两次提交:
  1. `chore: remove debug $display from fetch/decode_issue/execute`
  2. `fix(coremark-v1): ensure _exit() called after coremark_orig_main returns`

---

## 3. 重要注意事项

### 3.1 仿真环境

- **Verilator 版本:** 5.048
- **仿真二进制:** `src/sim-v1/obj_dir/Vlumi_v1`
- **编译命令:** `cd src/tb && make v1-build`
- **运行命令:** `src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=<hex> +max_cycles=<N> [+dump_trace]`

### 3.2 TCM 地址限制

- V1 SRAM 大小: 256KB (65536 × 32-bit)
- 有效地址范围: `0x00000` ~ `0x3FFFF`
- IC 索引: `ic_addr[17:2]`（18-bit → 65536 entries）
- DC 索引: `dc_addr[17:2]`（同上）
- **越界访问静默回绕，无异常**

### 3.3 CoreMark 编译参数

- 源目录: `perf/benchmarks/coremark-v1/`
- 编译: `make -C perf/benchmarks/coremark-v1 ITERATIONS=1 TOTAL_DATA_SIZE=2000`
- 生成 hex: `perf/benchmarks/coremark-v1/coremark_v1.hex`
- Linker script: `perf/benchmarks/libc/lumi-v1-bench.ld`
- 结果地址: `0x3FFE0`（magic=0xDEADBEEF, bench_id=1, iterations, ticks, metric_x100, checks）

### 3.4 Scoreboard 退出机制

- ECALL 检测: `commit_inst[s] == 32'h00000073`
- Spin loop 检测: 连续 3 次 JAL to self（同 PC）
- PC restart 检测: PC 回绕到 0x0

### 3.5 计划文件位置

- 执行计划: `/Users/chenjiangshan/Library/Application Support/Qoder/SharedClientCache/cache/plans/V1_Fetch_Timeout_Bug_修复_task-0aa.md`
- 本总结: `knowledge/lessons-learned/coremark-v1-debug-summary-20260715.md`

---

## 4. 推荐的接下来的步骤

### Step 1: 分析 Predecode 模块

1. 找到 predecode 模块源文件（搜索 `predecode_bytes_consumed` 的定义位置）
2. 分析其指令边界计算逻辑
3. 特别关注 PC[3:0] 非零时的 cache line 偏移处理

### Step 2: 添加诊断 $display

在以下位置临时添加 $display 用于诊断（仅限前 10000 周期）：

```systemverilog
// lumi_fetch.sv 的 PC 更新处（约第 577 行后）
if (cycle_count < 10000 && pc_next[3:0] != 2'b00 && pc_next[3:0] != pc_reg[3:0] + 4)
    $display("[ALIGN-DBG] cyc=%0d pc=0x%08h pc_next=0x%08h bytes_consumed=%0d inst_count=%0d",
             cycle_count, pc_reg, pc_next, predecode_bytes_consumed, predecode_inst_count);
```

### Step 3: 定位崩溃点

1. 使用 `+dump_trace` 运行仿真（短周期，如 `+max_cycles=100000`）
2. 在 trace 中找到最后一条正常 PC（在代码段 0x0~0x570e 范围内）
3. 分析该指令及其后续指令的对齐关系
4. 确定是哪个分支/跳转导致了 PC 到达 `0x3a6e`

### Step 4: 修复并验证

1. 根据诊断结果修复 fetch/predecode 逻辑
2. 重新编译 Verilator
3. 重新运行 CoreMark + Dhrystone V1 仿真
4. 确认 benchmark 结果写入 0x3FFE0

### Step 5: 提交和归档

1. 提交 RTL 清理和 bug fix
2. 运行完整回归测试
3. 更新 `audit/instruction-log/2026-07-15.yaml`

---

## 5. 关键文件索引

| 文件路径 | 用途 |
|----------|------|
| `src/rtl/core/lumi_fetch.sv` | 取指模块 — F1/F2 流水线 + BTB + RAS + LTAGE |
| `src/rtl/core/lumi_decode_issue.sv` | 解码/发射模块 — RV32 解码 + 冒险检测 |
| `src/rtl/core/lumi_execute.sv` | 执行模块 — ALU/MUL/DIV/Branch/LSU |
| `src/rtl/top/lumi_soc_top.sv` | SoC 顶层 — V1 SRAM bypass 实现 |
| `src/tb/top/lumi_v1_tb_top.sv` | V1 验证 testbench |
| `src/tb/env/lumi_scoreboard.sv` | Scoreboard — ECALL/spin 检测 |
| `src/tb/Makefile` | 构建和测试命令 |
| `perf/benchmarks/coremark-v1/` | CoreMark V1 benchmark 源码和 hex |
| `perf/benchmarks/libc/lumi-v1-bench.ld` | Linker script — 内存布局 |
| `perf/benchmarks/libc/v1_lib.c` | V1 库函数 — v1_write_result |
| `knowledge/lessons-learned/coremark-v1-debug-summary-20260715.md` | 本次工作总结报告 |
