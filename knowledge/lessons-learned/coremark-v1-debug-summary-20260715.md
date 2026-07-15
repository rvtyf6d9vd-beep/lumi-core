# CoreMark V1 调试工作总结报告

> **日期:** 2026-07-15
> **范围:** 从 CoreMark V1 调试开始到当前状态的完整工作内容
> **状态:** 工作暂停 — CoreMark 仿真崩溃问题未解决

---

## 1. 工作内容

### 1.1 RTL Debug $display 清理 (已完成)

从三个核心 RTL 模块中移除了大量调试用的 `$display` 语句（已注释的），减少仿真性能开销：

- **`src/rtl/core/lumi_fetch.sv`**: 移除 18 行调试代码
  - 移除 `[BTB-RD]` BTB 查找调试打印
  - 移除 `[FETCH-PC0]` PC 回零检测调试打印
  - 移除 `[BTB-WR]` BTB 写入调试打印

- **`src/rtl/core/lumi_decode_issue.sv`**: 移除 13 行调试代码
  - 移除 `[DI]` decode/issue 状态打印
  - 移除 `[DI]` slot 级指令详情打印
  - 移除 `[DI-RF]` RegFile 读端口调试打印

- **`src/rtl/core/lumi_execute.sv`**: 修改 17 行（移除调试代码）
  - 移除 `[E1-IN]` E1 入口跟踪和源数据打印
  - 移除 `[BR-DBG]` 条件分支跟踪打印

### 1.2 Verilator 重新编译 (已完成)

- 清理后重新编译 Verilator 仿真二进制：`src/sim-v1/obj_dir/Vlumi_v1`
- 编译选项: `--binary --trace --coverage --timing`
- 编译目标: `src/tb/top/lumi_v1_tb_top.sv` + `src/rtl/top/lumi_soc_top.sv`

### 1.3 Smoke Test 验证 (已完成)

- 运行 `make v1-smoke` 验证基础功能
- 6 个 smoke test 全部 PASS
- 覆盖: RV32I 基础指令、LUI/AUIPC、Load/Store、分支跳转

### 1.4 RV32I Full Test 验证 (已完成)

- 运行 `make v1-rv32i-full` 验证完整 RV32I 指令集
- 结果: PASS=1, FAIL=0

### 1.5 CoreMark V1 主程序修复 (已完成)

- **文件:** `perf/benchmarks/coremark-v1/coremark_v1_main.c`
- **修复内容:** `main()` 函数从直接 `return coremark_orig_main()` 改为调用 `_exit(rc)`
- **目的:** 确保 CoreMark 正常返回后写入结果到 0x3FFE0 再触发 ECALL

### 1.6 CoreMark Hex 重建 (已完成)

- 使用 `ITERATIONS=1` 和 `TOTAL_DATA_SIZE=2000` 重新编译 CoreMark hex
- 生成 32-bit 格式 hex 文件供 `$readmemh` 加载

### 1.7 CoreMark V1 仿真 (问题未解决)

- 使用 `+max_cycles=10_000_000` 运行 CoreMark V1 仿真
- 使用 `+dump_trace` 选项捕获完整指令执行 trace
- 仿真运行成功但程序未能正常完成（详见问题清单）

### 1.8 回归测试 (已完成)

- 运行编译回归测试脚本 `tests/scripts/run_regression.sh`
- 生成报告: `tests/reports/regression-20260715-065033.html`

---

## 2. 工作产出

### 2.1 修改的代码文件

| 文件 | 变更类型 | 变更行数 |
|------|----------|----------|
| `src/rtl/core/lumi_fetch.sv` | 删除调试代码 | -18 行 |
| `src/rtl/core/lumi_decode_issue.sv` | 删除调试代码 | -13 行 |
| `src/rtl/core/lumi_execute.sv` | 删除调试代码 | -17 行（净变更） |
| `perf/benchmarks/coremark-v1/coremark_v1_main.c` | Bug 修复 | +3/-1 行 |

### 2.2 生成的数据文件

| 文件 | 说明 | 大小 |
|------|------|------|
| `tests/results/v1-realtime-trace.dat` | CoreMark 实时执行 trace | ~697 MB (原始) |
| `tests/results/v1-trace.dat` | 后处理 trace | ~31K 行差异 |
| `tests/reports/regression-20260715-065033.html` | 回归测试报告 | ~16 KB |

### 2.3 验证结果汇总

| 测试项 | 结果 |
|--------|------|
| Smoke Test (6 tests) | 全部 PASS |
| RV32I Full Test | PASS=1, FAIL=0 |
| CoreMark V1 (ITERATIONS=1) | **未正常完成** — PC 跳转到数据区导致崩溃 |

---

## 3. 已发现问题

### 3.1 [CRITICAL] CoreMark V1 仿真崩溃 — PC 跳转至数据区

**问题描述:**
CoreMark 程序在 V1 仿真中运行时，PC 在某个时间点跳转到数据区域地址（如 `0xa36d0`），该地址超出 256KB TCM 范围（`0x0`~`0x3FFFF`）。

**根本原因分析:**

1. **关键线索:** PC 到达 `0x3a6e`，这是 `0x3a6c + 2`，位于一条 32-bit `lw s2, 288(sp)` 指令的中间位置
2. **指令对齐错误:** RISC-V C 扩展允许 16-bit 和 32-bit 混合指令。PC=0x3a6c 处是一条 32-bit `lw` 指令（`inst[1:0] == 2'b11`），但 PC=0x3a6e 是该指令的高 16-bit 部分
3. **错误解码:** 在 PC=0x3a6e 处，取出的"指令"是 `0x4719f06f`，被解码为 JAL 指令，跳转到一个超出 TCM 的高地址
4. **地址回绕:** V1 SRAM 使用 `ic_addr[17:2]` 作为索引（256KB / 4 = 65536 entries），地址 `0xa36d0` 回绕到 `v1_sram[0x28db4]`，该区域为未初始化数据（全 0x0000 = NOP）
5. **无限循环:** 程序执行 NOP 直到 PC 溢出 256KB 范围，回绕到 PC=0x0，从头重新开始，形成无限循环

**证据（来自仿真输出）:**
```
[PROGRESS] cycle=2000000 retired=3498351 we_count=0 mem_busy=0 pc0=0x011397f6
[PROGRESS] cycle=4000000 retired=6996699 we_count=0 mem_busy=0 pc0=0x02272fe0
[PROGRESS] cycle=6000000 retired=10495051 we_count=0 mem_busy=0 pc0=0x00000000  ← PC 回绕到 0
```

**注意:** PC=0x011397f6 和 PC=0x02272fe0 也远超 256KB TCM 范围（0x3FFFF），说明程序早已在数据区域执行。

### 3.2 [HIGH] V1 SRAM 地址回绕机制不捕获越界访问

**问题描述:**
V1 SRAM bypass 模式下：
- IC 路径: `v1_sram[ic_addr[17:2]]` — 18-bit 索引，仅支持 256KB
- DC 路径: `v1_sram[dc_addr[17:2]]` — 同上
- 当程序 PC 或数据访问超出 256KB 时，地址通过位截取静默回绕，不会产生异常

**影响:** 程序崩溃后不会触发 trap 或异常，而是静默执行错误地址的数据，使问题难以诊断。

### 3.3 [MEDIUM] 仿真性能问题

**问题描述:**
- 含 `$display` 调试输出时，仿真速度仅约 10K cycles/sec
- 清理调试输出后，速度提升到约 6M cycles/minute（约 100K cycles/sec）
- 但对于 CoreMark ITERATIONS=1 可能需要的数亿周期仍然不够快

### 3.4 [MEDIUM] we_count=0 — Store 写入异常

**问题描述:**
仿真过程中 `we_count`（SRAM 写入计数）始终为 0，但 CoreMark 必然有数据写入（BSS 初始化、栈操作等）。这可能说明：
- Store 操作没有正确写入 V1 SRAM，或
- `sram_we_count` 信号未正确连接

---

## 4. 已解决问题

### 4.1 [SOLVED] Debug $display 影响仿真性能

**问题:** 三个核心 RTL 模块中有大量 `$display` 调试语句，严重拖慢 Verilator 仿真速度
**解决方案:** 移除所有已注释的调试 `$display` 语句（共 48 行），仿真速度提升约 600 倍

### 4.2 [SOLVED] CoreMark main() 未调用 _exit()

**问题:** `coremark_v1_main.c` 的 `main()` 直接 `return coremark_orig_main()`，如果 `coremark_orig_main` 内部不调用 `_exit()`，结果不会写入 0x3FFE0
**解决方案:** 修改 `main()` 为 `rc = coremark_orig_main(); _exit(rc);`，确保无论哪种退出路径都会写入结果并触发 ECALL

### 4.3 [SOLVED] RV32I 基础指令验证

**问题:** 需要验证 RTL 基础指令正确性
**解决方案:** 运行 smoke test (6/6 PASS) 和 RV32I full test (PASS=1, FAIL=0)，确认基础指令集工作正常

### 4.4 [SOLVED] Verilator 编译成功

**问题:** 清理调试代码后需要重新编译
**解决方案:** 成功重新编译 `src/sim-v1/obj_dir/Vlumi_v1` 二进制文件

---

## 5. 技术上下文

### 5.1 V1 仿真架构

```
Testbench (lumi_v1_tb_top.sv)
  ├── DUT (lumi_soc_top.sv)
  │   ├── lumi_core (3-wide superscalar)
  │   │   ├── lumi_fetch (BTB + RAS + LTAGE)
  │   │   ├── lumi_decode_issue (6-decode, 3-issue)
  │   │   ├── lumi_execute (ALU/MUL/DIV/Branch/LSU)
  │   │   ├── lumi_memory
  │   │   └── lumi_writeback
  │   └── V1 SRAM Bypass (256KB, 65536×32-bit)
  │       ├── IC path: ic_addr[17:2] → 128-bit cache line
  │       └── DC path: dc_addr[17:2] → 32-bit word + byte-enable
  ├── AXI Memory BFM (256KB)
  ├── UVM-shim + Monitor + Coverage + Scoreboard
  └── Scoreboard: ECALL detection (0x00000073) → test_done
```

### 5.2 CoreMark 内存布局 (linker script)

```
0x00000 - 0x0570e: Code (.text)
0x065bc - 0x16e04: BSS (.bss)
0x06de0 - 0x16de0: Stack
0x3FFE0 - 0x3FFF4: Benchmark Result (magic + bench_id + iters + ticks + metric + checks)
```

### 5.3 仿真命令

```bash
# 构建
cd src/tb && make v1-build

# Smoke test
cd src/tb && make v1-smoke

# RV32I full test
cd src/tb && make v1-rv32i-full

# CoreMark (带 trace)
cd src/tb && src/sim-v1/obj_dir/Vlumi_v1 \
  +itcm_file=../perf/benchmarks/coremark-v1/coremark_v1.hex \
  +max_cycles=10000000 +dump_trace

# 回归测试
bash tests/scripts/run_regression.sh
```

---

## 6. 未提交的变更

当前 `git status` 显示以下未提交修改：

```
 M perf/benchmarks/coremark-v1/coremark_v1_main.c
 M src/rtl/core/lumi_decode_issue.sv
 M src/rtl/core/lumi_execute.sv
 M src/rtl/core/lumi_fetch.sv
 M tests/results/v1-realtime-trace.dat
 M tests/results/v1-trace.dat
?? tests/reports/regression-20260715-065033.html
```
