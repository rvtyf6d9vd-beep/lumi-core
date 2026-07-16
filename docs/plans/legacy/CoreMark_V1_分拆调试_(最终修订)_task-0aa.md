# CoreMark V1 分拆调试计划 (缩小参数验证版)

## 当前状态

| 项目 | 状态 |
|------|------|
| ERR-027~032 Bug 记录 | DONE (已知 issues yaml) |
| BYPASS_SB=1 + mem_busy + fu_busy 修复 | DONE (RTL 已修改) |
| RTL 编译 | DONE (Verilator 构建成功) |
| CoreMark I=1 S=200 @ 800M cycles | TIMEOUT (ERR-033) |
| IPC=1.13, we_count=95M, mem_busy=0 | 正常 (RTL 执行正确) |
| PC 循环 0xd34~0xe74 (core_list_init/bench_list) | 未到达 ECALL |
| TB 超时 | 已扩大到 2B cycles |

**结论**: RTL 执行正确 (IPC/we_count 正常), 只是 800M cycles 不够 CoreMark 完成。需要缩小参数快速验证 ECALL 可达性。

---

## Task 1: 编译超小参数 CoreMark (I=1, SIZE=50)

目的: 用最少的 cycle 数验证 CoreMark 完整流程 (ECALL + 0x3FFE0 写入)。

```bash
cd perf/benchmarks/coremark-v1
make clean && make hex ITERATIONS=1 TOTAL_DATA_SIZE=50
```

预估: ~100M-200M cycles (约 10-25 min walltime @ 133K cyc/s)。

如果 SIZE=50 太小导致 CoreMark 报错 (每个算法仅 ~16 bytes), 回退到 SIZE=100。

## Task 2: 运行仿真 (I=1, SIZE=50)

```bash
cd ../../../src/sim-v1
./obj_dir/Vlumi_v1 +itcm_file=../../perf/benchmarks/coremark-v1/coremark-v1_32.hex 2>&1 | tee /tmp/cm-small.log
```

**判定标准**:
- `magic=0xDEADBEEF` + `checks=0` = PASS -> 进入 Task 3
- TIMEOUT (2B cycles) = 仍有 RTL bug -> 进入 Task 2-FIX
- ECALL detected 但 magic=0 = CoreMark 计算未完成 -> 检查 iterations 计算逻辑

**诊断手段** (如果失败):
- 在进度日志中跟踪 PC 范围, 确认是否到达 `coremark_orig_main` 后半段 (CRC 校验 + 结果写入)
- `+dump_trace` 抓最后 1000 条 commit, 分析 ECALL 之前卡在哪

## Task 2-FIX: 诊断 + 修复 (如果 Task 2 失败)

可能的诊断方向:

1. **如果 PC 永远循环在 core_list_init**: 检查链表初始化是否因内存不足 (SIZE=50) 导致空指针
2. **如果到达 iterate() 但不退出**: 检查 `get_seed_32(4)` 返回的 iterations 值 (v1_lib.c 中 SEED_METHOD=SEED_VOLATILE, 来自 `get_seed()`)
3. **如果 ECALL 被触发但 magic 不对**: 检查 `v1_write_result` 写入 0x3FFE0 是否正确到达 SRAM
4. **如果 iterations 自动计算死循环**: `core_main.c:244-266` 的 auto-detect 逻辑在 `iterations==0` 时会循环扩大, 检查 `ITERATIONS` 宏是否传入

## Task 3: 逐步扩大参数

| Step | ITERATIONS | TOTAL_DATA_SIZE | 预估 cycles | 预估 walltime |
|------|-----------|----------------|------------|--------------|
| 3a | 1 | 50 | ~200M | ~25 min |
| 3b | 1 | 100 | ~400M | ~50 min |
| 3c | 1 | 200 | ~800M+ | ~100 min |
| 3d | 1 | 2000 | ~8B+ | 可能需要优化 |

每步记录: magic, bench_id, iterations, ticks, metric_x100, checks, total cycles。

如果某一步 TIMEOUT, 分析 PC 停点并与前一步对比, 确定新增的工作量消耗在哪。

## Task 4: 性能分析 + 优化方向

如果 I=1 S=200 仍需要 >800M cycles, 分析瓶颈:

1. **分支误预测率**: 统计 commit PC 中 flush/redirect 的比例
2. **IPC 分析**: IPC=1.13 对 3-wide 发射偏低 (理论峰值 ~2.5+), 分析 stall 来源
3. **Memory stall**: mem_busy=0 说明 V1 SRAM 无等待, 瓶颈在发射/分支
4. **核心热点**: PC 循环在 core_list_init (0xd34-0xe74), 这是链表初始化, 涉及大量 load/store + 函数调用

潜在优化 (仅记录, 不在本轮执行):
- ERR-029 (双 LSU 端口): 目前串行化 MEM, IPC 损失 ~30%
- ERR-032 (bypass load 错误): 需要修复才能安全支持背靠背 load-use

## Task 5: 收尾更新

1. 更新 ERR-027~033 status (resolved 或注明限制)
2. 更新 `audit/instruction-log/2026-07-11.yaml`
3. 记录 CoreMark 性能数据到 `perf/benchmarks/perf-report.yaml`
4. 创建 `agents/hw-ver/change-notices/2026-07-11.yaml`

---

## 关键文件

| 文件 | 用途 |
|------|------|
| `src/rtl/core/lumi_memory_stage.sv` | BYPASS_SB=1 + mem_busy (已修改) |
| `src/rtl/core/lumi_core_top.sv` | fu_busy 连接 (已修改) |
| `src/tb/top/lumi_v1_tb_top.sv` | 进度监控 + 2B timeout (已修改) |
| `perf/benchmarks/coremark-v1/Makefile` | CoreMark 编译参数 |
| `perf/benchmarks/coremark-v1/coremark_v1_main.c` | ee_printf 拦截 + _exit |
| `perf/benchmarks/libc/v1_lib.c` | bump allocator + rdcycle |
| `perf/benchmarks/libc/crt0_v1.S` | 启动代码 + ECALL 退出 |
| `perf/benchmarks/coremark/core_main.c` | CoreMark 主逻辑 |
| `src/tb/env/lumi_scoreboard.sv` | ECALL/spin 检测 |
| `audit/errata/known-issues.yaml` | ERR-027~033 |

## 时间预估

- Task 1 (编译): ~5 min
- Task 2 (仿真 I=1 S=50): ~25 min
- Task 3 (逐步扩大): ~2-3 h
- Task 4 (分析): ~30 min
- Task 5 (收尾): ~15 min

总计: 顺利 ~3-4 小时, 含 1 轮诊断修复 ~5 小时