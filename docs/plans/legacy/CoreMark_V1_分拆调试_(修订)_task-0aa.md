# CoreMark V1 分拆调试计划 (二次修订)

## 根因分析 (完整代码评审结论)

通过独立审查 `lumi_core_top.sv` → `lumi_decode_issue.sv` → `lumi_execute.sv` → `lumi_memory_stage.sv` → `lumi_writeback.sv` → `lumi_soc_top.sv`, 发现 **5 个关键 RTL 缺陷** 共同导致 CoreMark 卡死:

### Bug 1: Store Buffer 无 Load Forwarding (核心正确性 bug)

- V1 SRAM load 是组合读: `assign dc_rdata = v1_sram[dc_addr[17:2]];`
- Store 先入 Store Buffer (SB), 再由 FSM 每 3-4 拍 commit 一个到 SRAM
- **load 不检查 SB 中 pending 的 store**, 直接读 SRAM 旧值
- CoreMark 链表操作 `finder->next = ...` 后立即读 `finder->next` 会拿到旧指针, 链表节点被污染 → 形成环 → `while (finder->next != NULL)` / `while (list)` 无限循环

### Bug 2: SB 满时 Store 静默丢失

- 入队条件: `if (lsu_valid[l] && lsu_we[l] && !sb_full)` —— 无 stall, 无异常, 直接丢弃
- 2 个 LSU 端口每拍最多入队 2 条 store, FSM 每 3-4 拍只出队 1 条
- SB_DEPTH=8, 持续 store 压力下 4 拍即可填满, 后续 store 丢失 → 链表字段写不全

### Bug 3: FSM 只处理 LSU 端口 0

- `ST_LOAD`/`ST_STORE` 仅检查 `lsu_valid[0]` / `lsu_we[0]`
- 端口 1 的 load/store 被忽略, 3 发射中同时出现的第 2 条内存操作结果错误/丢失

### Bug 4: `fu_busy[FU_MEM]` 硬编码为 0

- `lumi_core_top.sv:255`: `.fu_busy(10'h0), // TODO: 连接 FU pool`
- 发射级完全不知道 memory stage 是否饱和, 可以无限制地连续发射 MEM 指令
- 这是 Bug 2 和 Bug 3 被触发的直接原因

### Bug 5: Memory Stage 对流水线无 Backpressure

- `m_valid_out = m_pipe_valid` (延迟一拍的输入 valid)
- 内存操作是否真正完成不影响指令提交, W 级照样 commit
- load 在 FSM 尚未读取 SRAM 时就被 W 级捕获结果 (可能拿到旧值)

### 之前 `store_commit_ack=1'b1` 修复的局限

- 解决了 SB 永远排不出队导致的死锁
- 但没有解决上述 5 个 bug, 因此 mini-test (只写 0x3FFE0, 无 load-after-store) 能通过, CoreMark (大量 store-then-load 和密集链表操作) 会挂死

---

## 修复方案 (推荐)

**方案 A: V1 SRAM 旁路 Store Buffer + 单内存操作限制 (最小侵入式)**

1. 在 `lumi_memory_stage.sv` 增加参数 `BYPASS_SB`
2. 当 `BYPASS_SB=1` 时:
   - store 不进入 SB, 直接在 `ST_STORE` 状态通过 `mem_*_out` 输出到 SRAM
   - FSM 去掉 `ST_COMMIT` 状态: IDLE → LOAD → STORE → IDLE
   - `store_commit` / `store_commit_ack` 悬空或移除
3. 在 `lumi_core_top.sv` 中:
   - memory stage 例化 `BYPASS_SB(1)`
   - 将 `fu_busy[FU_MEM]` 连接到 memory stage 的 `mem_busy` 输出
   - `mem_busy` 在 FSM 处理 load/store 时置 1, 阻止下一拍再发射 MEM 指令
   - 这样每拍最多 1 个内存操作, FSM 可以正确串行化

**优点**: 改动小, 避免 SB 全部问题, 符合 V1 简单 SRAM 模型
**风险**: 同一周期内 store + 同地址 load 仍可能读到旧值, 但典型编译序列中 store 和依赖 load 至少相隔 1 拍, 可接受; 若仍失败, 再实现 load forwarding

**方案 B: 实现完整 Store Buffer + Load Forwarding + Backpressure (架构正确)**

1. 在 `lumi_memory_stage.sv` 增加 load forwarding 逻辑:
   - 对每次 load, 遍历所有 valid SB entry, 匹配地址/byte-enable
   - 返回最年轻匹配 entry 的数据
   - 无匹配时读 `mem_rdata_in`
2. 增加 `fu_busy` 输出: 当 SB 有效条目数 ≥ 6 时置 1, 阻止新 MEM 指令发射
3. 修复 FSM 处理 LSU 端口 1, 或限制每拍最多 1 条 MEM 指令

**优点**: 架构正确, 不限制 V1 性能
**缺点**: 改动大, 增加组合逻辑延迟

**本次建议先用方案 A 快速验证, 若方案 A 仍有 corner case 再升级到方案 B。**

---

## Task 1: TB 进度监控器

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
- PC 持续变化 + retired 增长 → 在推进, 只是慢 → Task 3A
- PC 不变 + retired 不增 → 死循环 → Task 3B
- PC 反复 0x0 → trap 循环 → Task 3C
- retired 增长但 PC 不变 → spin loop 误检 → Task 3B

## Task 2: 终止当前仿真, 重建, 运行诊断

1. `kill 30129`
2. 修改 TB 加监控
3. 重建: `cd src/sim-v1 && bash build_v1.sh`
4. 运行: `./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=tests/results/coremark-v1_32.hex 2>&1 | tee /tmp/cm_diag.log`
5. 等 1-2 分钟, 观察前几个 [PROGRESS] 输出

## Task 3: 分级验证与分支处理

### 3.0 新增最小测试集 (无论分支 A/B/C 都先跑)

在修改 RTL 之前, 先建立最小可复现测试:

**3.0-1 store-load 正确性测试**
- 文件: `perf/benchmarks/mini-test-v1/store_load_test.c`
- 内容:
```c
volatile unsigned int *p = (unsigned int *)0x10000;
*p = 0xAABBCCDD;
unsigned int val = *p;
v1_write_result(0xDEADBEEF, val, 0, 0, (val != 0xAABBCCDD));
```
- 预期: magic=0xDEADBEEF, checks=0
- 如果失败, 直接确认 load-after-store bug

**3.0-2 多 store 压力测试**
- 连续 16 条 `sw` 到不同地址, 然后逐条 `lw` 验证
- 确认 SB 不会溢出导致 store 丢失

**3.0-3 简单链表测试**
- 文件: `perf/benchmarks/mini-test-v1/linked_list_test.c`
- 创建 3 节点链表, 反转一次, 遍历验证
- 模拟 CoreMark 的 list_reverse / list_find 行为

### 分支 A: CPU 在推进 (PC 变化, retired 增长)

说明只是慢, 但功能可能仍有问题 (CRC 可能错误)。

**3A-1: 极小参数 CoreMark**
```bash
cd perf/benchmarks/coremark-v1
make clean && make hex ITERATIONS=1 TOTAL_DATA_SIZE=200
```
- size=200 → 每算法 66 字节, 链表仅 1 节点
- 应在 1 分钟内完成

**3A-2: 逐步增加并记录性能**
```
ITERATIONS=1  SIZE=200   → 验证 magic 和 CRC
ITERATIONS=1  SIZE=2000  → 验证 + 记录 ticks
ITERATIONS=5  SIZE=2000  → 验证
ITERATIONS=10 SIZE=2000  → 记录性能
```
- 每步对比 gem5 参考结果, 确认 CRC 正确

### 分支 B: PC 卡死 (死循环)

**3B-1: +dump_trace 精确定位**
```bash
./src/sim-v1/obj_dir/Vlumi_v1 +itcm_file=...hex +dump_trace 2>&1 | tail -200
```
找到卡死 PC, 反汇编确认函数。

**3B-2: 先跑 3.0 最小测试集**
- 如果 store-load / 链表测试已失败, 直接确认 RTL bug, 进入修复
- 如果最小测试通过, 说明是 CoreMark 特定代码模式触发, 需要更细 trace

**3B-3: 实施方案 A 修复**
- 修改 `lumi_memory_stage.sv`: 添加 `BYPASS_SB` 参数
- 修改 `lumi_core_top.sv`: `BYPASS_SB(1)`, 连接 `fu_busy[FU_MEM]`
- 重建, 重跑 3.0 测试集
- 若 3.0 通过, 重跑 CoreMark

### 分支 C: Trap 循环 (PC 反复 0x0)

**3C-1**: 反汇编确认异常指令
**3C-2**: 临时替换 `rdcycle` 为固定计数或添加 trap handler
**3C-3**: 确认不是 store 问题后, 再按分支 B 修复 memory stage

## Task 4: 修复后完整回归

1. mini-test-v1: magic=0xDEADBEEF, exit_code=0
2. store-load test: checks=0
3. linked_list test: 反转/遍历正确
4. CoreMark ITERATIONS=1 SIZE=200: magic 正确, CRC 正确
5. CoreMark ITERATIONS=1 SIZE=2000: 记录性能
6. CoreMark ITERATIONS=5/10 SIZE=2000: 记录性能

## Task 5: 性能数据记录与对比

记录内容:
1. SRAM 结果: magic, bench_id, iterations, ticks, metric_x100, checks
2. TB 统计: Total Retired, cycles, IPC
3. gem5 参考值 (同配置): iterations, ticks, CM/MHz
4. 编译器版本/参数, RTL 配置, 仿真参数

## Task 6: 文档与合规更新

1. `audit/errata/known-issues.yaml`:
   - ERR-026 标记 resolved (若 CoreMark 通过)
   - 新增条目记录 SB load forwarding / V1 bypass 修复
2. `audit/instruction-log/2026-07-11.yaml` (或当前日期)
3. `perf/benchmarks/coremark-v1/Makefile`: 更新默认 ITERATIONS 为验证通过的合理值
4. 创建 change-notice 通知 hw-ver

## 执行顺序

```
Task 1 (TB监控) → Task 2 (终止+重建+诊断)
  │
  ├─ 无论 A/B/C, 先建立 3.0 最小测试集
  │
  ├─ 分支A (在推进但慢) → 3A (极小参数) → Task 4/5/6
  │
  ├─ 分支B/C (死循环/trap) → 3B/C → 实施 方案A 修复
  │     → 重跑 3.0 测试集 → CoreMark 逐步增加 → Task 4/5/6
```

## 关键判断

基于完整代码评审, **分支 B (SB 相关 bug 导致死循环) 的概率 > 90%**。

`fu_busy` 硬编码为 0 + SB 无 forwarding + SB 满丢弃 + FSM 忽略 LSU 端口 1, 这四个因素叠加, 使得多发射的内存密集型代码 (CoreMark 链表) 必然出现数据损坏和死循环。TB 监控只是为了快速确认这一判断。

**建议直接按 "分支 B → 3.0 测试 → 方案 A 修复" 的主线推进, 不必在分支 A 上花费过多时间。**
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

说明 CoreMark 只是工作量太大 (ITERATIONS=50 x 102 次链表操作/迭代)。

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

**修复方案 (二选一)**:

**方案 1 (推荐, 最小改动)**: 在 `lumi_memory_stage.sv` 添加 `BYPASS_SB` 参数, 为 1 时 store 不入队 SB, 直接通过 `mem_*_out` 输出:
- FSM 简化为: IDLE → LOAD → STORE → IDLE (去掉 COMMIT 状态)
- `lumi_core_top.sv` 中 `BYPASS_SB(1)` 用于 V1 模式
- `store_commit_ack` 不再需要

**方案 2 (备选)**: 在 `lumi_soc_top.sv` 的 V1 SRAM 写入逻辑中, 同时检查 SB 入队信号实现立即写入, 但需要暴露内部信号, 改动更大。

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
