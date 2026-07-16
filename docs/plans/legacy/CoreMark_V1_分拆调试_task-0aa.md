# CoreMark V1 分拆调试计划 (修订版)

## 根因分析 (代码审查新增)

通过审查 `lumi_memory_stage.sv` + `lumi_soc_top.sv` + `lumi_core_top.sv`, 发现 **3 个关键 RTL bug**, 很可能是 CoreMark 卡死的根因:

### Bug 1: Store Buffer 无 Load Forwarding (最可能根因)

- V1 SRAM 的 load 路径是组合逻辑: `assign dc_rdata = v1_sram[dc_addr[17:2]];`
- Store 路径是同步写入: `always_ff @(posedge clk_core)` 中写 v1_sram
- Store 先进入 Store Buffer (SB), 再由 FSM 在 ST_COMMIT 状态下写入 SRAM
- **FSM 周期为 4 拍**: IDLE→LOAD→STORE→COMMIT→IDLE, 即 SB 中 store 最少等 3 拍才写入 SRAM
- **没有 SB forwarding**: load 直接读 SRAM, 不检查 SB 中是否有 pending store
- 后果: CoreMark 的 `core_list_reverse` 做 `node->next = prev; prev = node->next;` 时, load 读到旧值 → 链表指针错误 → 无限循环

### Bug 2: SB 满时 Store 静默丢弃

- 入队条件: `if (lsu_valid[l] && lsu_we[l] && !sb_full)` — SB 满时直接跳过, 无 stall
- 2 个 LSU 端口每拍最多入队 2 个 store, 但 FSM 每 3-4 拍只 commit 1 个
- SB_DEPTH=8, 连续 4 拍 store 即可填满 SB → 后续 store 丢失 → 链表节点丢失

### Bug 3: FSM 只处理 LSU 端口 0

- `ST_LOAD` 和 `ST_STORE` 只检查 `lsu_valid[0]` / `lsu_we[0]`
- LSU 端口 1 的 load/store 操作被完全忽略

### 之前的 `store_commit_ack=1'b1` 修复的影响

- 这个修复让 SB 在 ST_COMMIT 时立即出队, 解决了 SB 永远满的问题
- 但没有解决 load forwarding 和 SB 满丢弃问题
- mini-test 通过是因为它只写 0x3FFE0 (5 个连续 sw), 不做 store-then-load

---

## Task 1: TB 进度监控器 (快速诊断)

**目标**: 1-2 分钟内判断 CPU 是死循环还是在推进。

**文件**: `src/tb/top/lumi_v1_tb_top.sv`

添加 initial block, 每 2M 周期打印:
```systemverilog
initial begin
  wait (reset_n);
  forever begin
    repeat (2_000_000) @(posedge clk_core);
    $display("[PROGRESS] cyc=%0d retired=%0d pc0=0x%08h pc1=0x%08h pc2=0x%08h valid=%b we=%0d",
             cycle_count, u_sb.total_retired, commit_pc_0, commit_pc_1, commit_pc_2,
             commit_valid_all, v1_we_count);
  end
end
```

**诊断逻辑**:
- PC 变化 + retired 增长 → CPU 在推进, 只是慢 → 跳到 Task 3A
- PC 不变 + retired 不增 → 死循环 → 跳到 Task 3B
- PC 反复 0x0 → trap 循环 → 跳到 Task 3C
- retired 增长但 PC 不变 → spin loop → 跳到 Task 3B

## Task 2: 终止当前仿真, 重建, 运行诊断

1. `kill 30129`
2. 重建: `cd src/sim-v1 && bash build_v1.sh`
3. 运行: `./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=tests/results/coremark-v1_32.hex 2>&1 | tee /tmp/cm_diag.log`
4. 等 1-2 分钟, 观察前几个 [PROGRESS] 输出

## Task 3: 根据诊断结果分支

### 分支 A: CPU 在推进 (PC 变化, retired 增长)

说明 CoreMark 只是工作量太大 (ITERATIONS=50 × 102 次链表操作/迭代)。

**3A-1: 极小参数验证**
```bash
cd perf/benchmarks/coremark-v1
make clean && make hex ITERATIONS=1 TOTAL_DATA_SIZE=200
```
- size=200 → 每个算法 66 字节 → 链表仅 1 节点, 矩阵 1x1
- 应在 1 分钟内完成

**3A-2: 逐步增加**
```
ITERATIONS=1  SIZE=200  → 验证 magic=0xDEADBEEF
ITERATIONS=1  SIZE=2000 → 验证 + 记录 ticks
ITERATIONS=5  SIZE=2000 → 验证
ITERATIONS=10 SIZE=2000 → 记录性能数据
```

### 分支 B: PC 卡死 (死循环)

**3B-1: +dump_trace 精确定位**
```bash
./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=...hex +dump_trace 2>&1 | tail -200
```
找到卡死 PC, 反汇编确认对应函数。

**3B-2: 验证是否是 SB forwarding bug**

编写专门的 store-then-load 测试:
- 文件: `perf/benchmarks/mini-test-v1/store_load_test.c`
- 测试模式:
```c
volatile int *p = (int *)0x10000;
p[0] = 0xAABBCCDD;  // store
int val = p[0];      // load — 应读到 0xAABBCCDD
v1_write_result(0xDEADBEEF, val, 0, 0, (val != 0xAABBCCDD));
```
如果 val != 0xAABBCCDD, 确认 SB forwarding bug。

**3B-3: 修复 SB forwarding (核心修复)**

**方案**: V1 模式下旁路 Store Buffer, store 直接写 SRAM。

在 `lumi_core_top.sv` 中, memory stage 的 store 路径已经通过 `mem_we_out` / `mem_valid_out` 连接到 `dc_we` / `dc_valid`。问题是 SB 的 FSM 延迟了 store 到达 SRAM 的时间。

**修复方案 (二选一)**:

**方案 1 (推荐, 最小改动)**: 在 `lumi_soc_top.sv` 的 V1 SRAM 写入逻辑中, 同时检查 SB 入队信号, 实现立即写入:
- 在 `lumi_memory_stage.sv` 中暴露 SB 入队信号 (lsu_valid, lsu_we, lsu_addr, lsu_aligned_data, lsu_be)
- 在 `lumi_soc_top.sv` 中, 当 `dc_valid && dc_we` 时写 SRAM (已有), 同时确保 FSM 的 ST_STORE 状态直接输出 store 到 `mem_*_out` 而不经过 SB

**方案 2 (更彻底)**: 在 V1 模式下完全旁路 SB:
- 在 `lumi_memory_stage.sv` 中添加参数 `BYPASS_SB`, 为 1 时 store 不入队 SB, 直接通过 `mem_*_out` 输出
- FSM 简化为: IDLE → LOAD → STORE → IDLE (去掉 COMMIT 状态)
- `lumi_core_top.sv` 中 `BYPASS_SB(1)` 用于 V1 模式

### 分支 C: Trap 循环 (PC 反复 0x0)

**3C-1**: 反汇编确认触发异常的指令 (rdcycle CSR 等)
**3C-2**: 添加 trap handler 或临时替换 rdcycle

## Task 4: 修复后回归验证

1. mini-test-v1: 确认 magic=0xDEADBEEF 仍然通过
2. store-load test: 确认 forwarding 正确
3. CoreMark ITERATIONS=1 SIZE=200: 确认完成
4. 逐步增加到 ITERATIONS=10 SIZE=2000

## Task 5: 记录性能数据

1. SRAM 结果: magic, bench_id, iterations, ticks, metric_x100
2. TB 统计: Total Retired, cycles, IPC
3. 更新 `audit/errata/known-issues.yaml` — ERR-026 标记 resolved
4. 记录新发现的 SB forwarding bug 到 errata

## Task 6: 更新文档

1. `audit/instruction-log/2026-07-11.yaml` (或当天日期)
2. `perf/benchmarks/coremark-v1/Makefile` 默认 ITERATIONS
3. change-notice 通知 hw-ver

## 执行顺序

```
Task 1 (TB监控) → Task 2 (终止+重建+诊断) → 观察输出
  ├─ 分支A (慢但正常) → 3A (极小参数) → 逐步增加 → Task 5/6
  ├─ 分支B (死循环) → 3B-1 (trace) → 3B-2 (store-load test)
  │    → 3B-3 (修复SB) → Task 4 (回归) → Task 5/6
  └─ 分支C (trap) → 3C (trap handler) → Task 4 → Task 5/6
```

**关键判断**: 基于代码审查, 分支 B (SB forwarding bug 导致死循环) 的可能性最高 (>80%)。CoreMark 的 `core_list_reverse` 函数做 `node->next = prev; prev_node = node->next;` 这种 store-then-load 模式, 如果 load 读到旧值, 链表指针会形成环, 导致 `while (finder->next != NULL)` 无限循环。
# CoreMark V1 分拆调试计划

## 背景分析

当前仿真 (PID 30129) 跑了 36+ 分钟,log 文件 0 字节 (CoreMark 的 ee_printf 是纯内存操作,不产生 stdout 输出)。800M cycle 超时阈值在 Verilator 4.567us/s 速度下约需 53 分钟真实时间。

可能的卡死原因:
1. **CPU 在执行但太慢** -- ITERATIONS=50, 每个 core_bench_list 调用做 102 次链表遍历/反转/排序, 工作量巨大
2. **Store 丢失导致数据结构损坏** -- 已知的 3-issue carry-over bug 导致部分 sw 被吞, 链表 next 指针写坏 → 无限循环
3. **异常/Trap 循环** -- rdcycle CSR 或其他指令触发非法指令异常, trap handler 循环

## Task 1: 添加 TB 进度监控器

**目标**: 在不修改 RTL 的前提下, 在 TB 中添加周期性进度打印, 观察 CPU 是否在推进。

**文件**: `src/tb/top/lumi_v1_tb_top.sv`

添加一个 initial block, 每 5M 周期打印:
```systemverilog
initial begin
  wait (reset_n);
  forever begin
    repeat (5_000_000) @(posedge clk_core);
    $display("[PROGRESS] cyc=%0d retired=%0d pc0=0x%08h pc1=0x%08h pc2=0x%08h valid=%b we_count=%0d",
             cycle_count, u_sb.total_retired, commit_pc_0, commit_pc_1, commit_pc_2,
             commit_valid_all, v1_we_count);
  end
end
```

**诊断逻辑**:
- PC 持续变化 → CPU 在推进, 只是慢 → 需要减少工作量
- PC 不变 + retired 不增 → 死锁/挂死 → 需要 +dump_trace 精确诊断
- PC 反复回到 0x0 → trap 循环 → restart_count 会显示
- retired 增长但 PC 不变 → spin loop 误检问题

## Task 2: 终止当前仿真, 重建并运行

1. `kill 30129` 终止当前仿真
2. 重建: `cd src/sim-v1 && bash build_v1.sh`
3. 运行 CoreMark: `./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=tests/results/coremark-v1_32.hex`
4. 观察前几个 [PROGRESS] 输出 (等 1-2 分钟), 判断 CPU 状态

## Task 3: 根据诊断结果分支

### 分支 A: CPU 在推进 (PC 变化, retired 增长)

说明 CoreMark 只是工作量太大。采用渐进式最小化:

**3A-1: 创建 mini-coremark-v1 (最小骨架)**
- 文件: `perf/benchmarks/mini-coremark-v1/mini_coremark.c`
- 只做: `portable_init` → `v1_write_result(magic)` → `ecall`
- 验证: 基本启动-写结果-退出流程

**3A-2: 用极小参数重编译 CoreMark**
```bash
cd perf/benchmarks/coremark-v1
make clean && make hex ITERATIONS=1 TOTAL_DATA_SIZE=200
```
- TOTAL_DATA_SIZE=200 → 每个算法 66 字节 → 链表仅 1 个节点, 矩阵 1x1, 状态机 1 字符
- ITERATIONS=1 → 只跑一轮
- 这应该在几分钟内完成

**3A-3: 逐步增加参数**
```
ITERATIONS=1  TOTAL_DATA_SIZE=200   → 验证通过
ITERATIONS=1  TOTAL_DATA_SIZE=2000  → 验证通过
ITERATIONS=5  TOTAL_DATA_SIZE=2000  → 验证通过
ITERATIONS=10 TOTAL_DATA_SIZE=2000  → 记录耗时
```
每步检查 magic=0xDEADBEEF + exit_code=0。

### 分支 B: PC 卡死 (retired 不增长或 PC 不变)

**3B-1: 启用 +dump_trace 精确定位**
```bash
./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=...hex +dump_trace 2>&1 | head -5000
```
分析卡死点的具体 PC 和指令。

**3B-2: 检查是否是 store 丢失导致链表损坏**
- 反汇编 ELF: `riscv64-unknown-elf-objdump -d coremark-v1.riscv`
- 找到卡死 PC 对应的函数和源码行
- 如果是链表遍历循环 (如 `while (finder->next)`) → 确认是 store 丢失 bug

**3B-3: 如果是 store 丢失, 临时绕过**
- 在 Makefile 添加 `-DISSUE_WIDTH=1` 或修改编译选项降低指令并行度
- 或者在 coremark_v1_main.c 中用 `__attribute__((optimize("O0")))` 降低发射率

### 分支 C: Trap 循环 (PC 反复回到 0x0)

**3C-1: 检查 trap handler**
- crt0_v1.S 没有 trap handler, 异常会跳到 mtvec (默认 0x0)
- 这导致 PC restart, restart_count 会递增
- 反汇编确认哪条指令触发异常 (最可能是 rdcycle CSR 访问)

**3C-2: 添加 trap handler 或替换 rdcycle**
- 在 crt0_v1.S 添加简单 trap handler (跳过触发异常的指令)
- 或在 core_portme_v1.c 中用固定值替代 rdcycle (用于测试)

## Task 4: 记录性能数据

当 CoreMark 成功完成后:
1. 记录 SRAM 中的结果: magic, bench_id, iterations, ticks, metric_x100
2. 记录 TB 统计: Total Retired, cycles, IPC
3. 更新 `audit/errata/known-issues.yaml` -- ERR-026 标记为 resolved
4. 更新 benchmark regression 报告

## Task 5: 更新文档和指令记录

1. 更新 `audit/instruction-log/2026-07-11.yaml` (或 07-13)
2. 更新 `perf/benchmarks/coremark-v1/Makefile` 中的默认 ITERATIONS 参数
3. 创建 change-notice 通知 hw-ver 关于 CoreMark V1 跑通的结果

## 执行顺序

Task 1 (添加监控) → Task 2 (终止+重建+运行) → 观察输出 → 选择分支 A/B/C → Task 4/5 (记录+更新)
