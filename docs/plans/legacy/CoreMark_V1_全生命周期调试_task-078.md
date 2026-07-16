# CoreMark V1 全生命周期调试执行计划

> **MS3 子里程碑:** T-MS3-S1-CM (CoreMark V1 完整调试验证)
> **目标需求:** LUMI-IPC-001 (CoreMark >= 5.5 CM/MHz) + LUMI-IPC-003 (基准测试覆盖)
> **当前状态:** ERR-PDREG 修复后程序可运行到 500K cycles, 但仅 156 条 commit, 卡在 trap 循环

---

## 阶段 0: 环境与基线确认 (Gate: 环境可重复)

**目标:** 确保调试环境一致、可重复，建立可追溯的基线快照

### Task 0.1: 仿真环境健康检查
- 确认 Verilator 版本 (5.048)、编译选项 (`--binary --trace --coverage --timing`)
- 运行 `cd src/tb && make v1-build` 确认干净编译通过
- **验收:** 编译无 Error/Warning (UNSIGNED 除外), 生成 `src/sim-v1/obj_dir/Vlumi_v1`

### Task 0.2: 基础指令回归确认
- 运行 `make v1-smoke` (6 tests) 和 `make v1-rv32i-full`
- **验收:** Smoke 6/6 PASS, RV32I Full Test PASS=1 FAIL=0

### Task 0.3: 调试代码清理
- 清理 `lumi_fetch.sv` / `lumi_predecode.sv` / `lumi_execute.sv` / `lumi_soc_top.sv` 中所有 `$display` 调试打印
- 确认 ERR-PDREG 寄存器代码在 `lumi_core_top.sv` 中的状态
- **验收:** 仿真输出干净 (无 [DBG] 前缀), 编译无 unused warning

### Task 0.4: 基线仿真快照
- 使用当前代码运行 CoreMark V1: `+itcm_file=coremark_v1.hex +max_cycles=500000`
- 记录基线指标: commit 数、SRAM writes、最高 PC、是否触发 ECALL
- **验收:** 基线数据写入 `tests/results/baseline-cm-v1-YYYYMMDD.yaml`

---

## 阶段 1: RTL 正确性缺陷修复 — P0 Critical (Gate: 计算正确)

**目标:** 修复直接影响 CoreMark 计算正确性的 RTL Bug (来自静态分析报告 SA-CM-*)

### Task 1.1: DIVU/REMU 符号错误修复 (SA-CM-001 + SA-CM-AUDIT-003)
- **文件:** `src/rtl/core/lumi_execute.sv` line 260-261
- **修复:** `div_signed <= (funct3 == MUL_DIV || funct3 == MUL_REM)` (去掉 `funct3[0] ^` 部分)
- **验收:** 新增 directed test `test_divu_remu.S`: DIVU(0x80000000/2)=0x40000000, REMU 无符号正确

### Task 1.2: DIV 余数符号修复 (SA-CM-002)
- **文件:** `src/rtl/core/lumi_execute.sv` line 307-313
- **修复:** 商符号 = `orig_dividend_sign ^ orig_divisor_sign`, 余数符号 = `orig_dividend_sign`
- 需要在 DIV_IDLE 保存原始符号位
- **验收:** `test_div_rem_sign.S`: -7/2 商=-3 余=-1; 7/-2 商=-3 余=1

### Task 1.3: MUL 单槽互斥修复 (SA-CM-003)
- **文件:** `src/rtl/core/lumi_decode_issue.sv` line 539-541 或 `lumi_core_top.sv` line 216-219
- **修复:** 方案 A: decode_issue 中同批次 MUL 互斥 (类似 branch stop_issue); 方案 B: 连接 MUL E2 busy 到 fu_busy[FU_MUL]
- **验收:** `test_dual_mul.S`: 同批次两条 MUL 结果均正确

### Task 1.4: LTAGE 分支历史污染修复 (SA-CM-004)
- **文件:** `src/rtl/core/lumi_fetch.sv` line 552-556
- **修复:** 移除 else 分支中的推测历史移位逻辑，分支历史仅由 execute 级实际结果更新
- **验收:** directed test 中分支预测准确率 > 85% (对比修复前)

### Task 1.5: P0 修复集成验证
- 运行 Task 1.1~1.4 修复后的 Verilator 重新编译
- 运行 Smoke + RV32I Full Test + RV32M test 确认无回归
- **验收:** 全部 PASS, 无新增 fail

---

## 阶段 2: RTL 正确性缺陷修复 — P1 High (Gate: 控制流正确)

**目标:** 修复影响 fetch/控制流/内存子系统的 RTL Bug

### Task 2.1: BTB Group Lookup 重新启用 (SA-CM-005)
- **文件:** `src/rtl/core/lumi_fetch.sv` line 309-398
- **问题:** ERR-GRP-FIX 禁用了 group-level BTB，非 fetch group 起点的分支无法预测
- **修复方案:** 评估三种方案 (group-level 查找 / PC[3:1] 索引 / 独立 BTB 条目) 的 IPC 影响和实现复杂度，选择最优方案
- **验收:** CoreMark 代码段中非起点分支能被 BTB 命中 (通过 BTB hit counter 或 trace 验证)

### Task 2.2: Fetch FSM 覆盖优先级修复 (SA-CM-007)
- **文件:** `src/rtl/core/lumi_fetch.sv` line 750-755
- **修复:** 覆盖块增加 `!trap_redirect_valid` 守卫，trap 优先级高于 branch redirect
- **验收:** ECALL 与 branch mispredict 同周期时，PC 跳转 mtvec (非 branch target)

### Task 2.3: LSU 端口分配地址 0 冲突修复 (SA-CM-006)
- **文件:** `src/rtl/core/lumi_execute.sv` line 731-754
- **修复:** 使用独立 `lsu0_occupied` 标志替代地址值判断
- **验收:** 地址 0x0 处 store 不被后续 store 覆盖

### Task 2.4: P1 修复集成验证
- Verilator 重新编译 + Smoke + RV32I + 新增 directed tests
- **验收:** 全部 PASS

---

## 阶段 3: 取指流水线诊断与修复 (Gate: PC 前进正确)

**目标:** 彻底解决 ERR-042/RISK-023 (PC 非对齐) 和当前 Thread 发现的 trap 循环问题

### Task 3.1: Boot Code (0x00-0x4F) 逐指令验证
- 使用 `+dump_trace +max_cycles=1000` 抓取前 1000 cycles
- 逐条验证: AUIPC/ADDI 设置 mtvec, BGEU 分支, JAL 跳转, ECALL trap
- 确认 PC 连续性: PC[n+1] == PC[n] + inst_bytes (2 or 4)
- **验收:** boot code 全部 commit 无 trap, PC 到达 main() 入口地址

### Task 3.2: ECALL/Trap/MRET 路径追踪
- 验证 ECALL → mtvec handler → MRET → ECALL+4 的完整路径
- 诊断 PC=0xfff40034 的来源 (mepc 被破坏? JALR 计算错误?)
- 检查 `crt0_v1.S` 的 mtvec 设置是否覆盖 boot code 的 mtvec
- **验收:** ECALL handler 执行 MRET 后 PC 回到 ECALL 下一条指令

### Task 3.3: PC 对齐断言与监控
- 在 `lumi_fetch.sv` 添加: `assert property (@(posedge clk) pc_next[0] == 0)`
- 在 commit 端添加: 如果 PC 非 2-byte 对齐则 `$error`
- **验收:** 10K cycles 内无 PC 对齐断言触发

### Task 3.4: 压缩指令 predecode 边界完整性
- 验证 `predecode_bytes_consumed` 在所有场景下正确:
  - 全 16-bit 指令 (8 条 = 16 bytes)
  - 全 32-bit 指令 (4 条 = 16 bytes)
  - 混合场景 (如 2+2+4+4 = 12 bytes)
  - PC[3:0] != 0 时的偏移处理
  - 32-bit 指令跨 cache line 边界 (PC[3:0] = 0xE)
- **验收:** 每种场景有 directed test 验证 bytes_consumed 正确

### Task 3.5: 分支预测目标对齐验证
- 检查 BTB 存储的 target 地址是否保证 bit[0]=0
- 检查 JAL/JALR 目标计算是否有偶数对齐保障
- 检查 RAS pop 返回地址是否对齐
- **验收:** 所有分支/跳转目标 PC[0]==0

---

## 阶段 4: 验证环境与软件层修复 (Gate: 仿真基础设施完备)

### Task 4.1: Scoreboard 退出检测修复 (SA-CM-011)
- **文件:** `src/tb/env/lumi_scoreboard.sv`
- **问题:** _exit 范围 0x3a8a-0x3aba 误检 (cyc=31 触发)
- **修复:** 根据实际 hex 中的 _exit 函数地址修正范围; 增加 store-to-tohost 检测 (监控 0x3FFE0 写入)
- **验收:** CoreMark 正常退出时 scoreboard 触发 test_done, 无误触发

### Task 4.2: TB 超时机制修复 (SA-CM-AUDIT-002 / ERR-043)
- **文件:** `src/tb/top/lumi_v1_tb_top.sv` line 433-440
- **修复:** 确认 `cycle_count` 递增逻辑; 增加 progress 停滞检测 (10M cycles 无 commit 则结束)
- **验收:** 仿真在 `max_cycles` 参数值到达时正确终止，输出 TIMEOUT 标记

### Task 4.3: V1 SRAM Store 写入路径验证 (SA-CM-012 部分)
- **问题:** `we_count=0` 但 CoreMark 必然有 store
- **检查:** `lumi_soc_top.sv` 中 `dc_valid && dc_we` 信号连接
- **检查:** `lumi_memory.sv` 中 LSU 写使能传播到 DC 接口
- **验收:** 运行 CoreMark 后 `sram_we_count > 0`, 且 0x3FFE0 有数据写入

### Task 4.4: CoreMark 软件层编译验证
- 确认 CoreMark V1 编译参数: `make -C perf/benchmarks/coremark-v1 ITERATIONS=1 TOTAL_DATA_SIZE=2000`
- 验证 `coremark_v1.hex` 生成正确: `elf2hex.py --word-width 32` (非默认 128)
- 反汇编验证: `riscv32-unknown-elf-objdump -d coremark_v1.elf` 确认代码段连续
- **验收:** hex 文件大小合理, objdump 代码段无 gap, _exit 函数地址与 scoreboard 匹配

---

## 阶段 5: CoreMark 端到端仿真 -- 启动引导层 (Gate: 程序正确进入 main)

> 对应 CoreMark 执行路径: `_start` (crt0_v1.S) -> `main` (coremark_v1_main.c)
> 这是最关键的攻坚阶段的入口，验证从第一条指令到 main() 函数入口的完整性。

### Task 5.1: crt0 启动代码逐指令验证
- 仿真 `+max_cycles=5000 +dump_trace`，聚焦 0x00-0x50 地址范围
- 逐条验证 crt0_v1.S 的 5 个步骤:
  1. `la gp` — global pointer 设置 (PC 0x00 附近)
  2. `la sp` — stack pointer 设置
  3. BSS 清零循环: `bgeu t0,t1` + `sw zero,0(t0)` + `addi t0,t0,4` + `j 1b`
  4. `csrw mtvec` — trap handler 设置
  5. `call main` — JAL 跳转到 main()
- 监控: SRAM we_count 在 BSS 清零阶段应 > 0
- **验收:** PC 连续到达 `call main` 指令; BSS 区域全部为 0; SRAM we_count > 0

### Task 5.2: Trap Handler 功能验证
- 在仿真中故意触发一次异常 (如写入非法地址)，验证 trap handler 行为:
  - PC 跳转到 mtvec 指定的 `_trap_handler`
  - 0x3FFE0 写入 0xDEAD0001
  - 0x3FFE4 写入 mcause
  - 0x3FFE8 写入 mepc
  - ECALL 退出
- 如果 Task 5.1 中已经触发 trap (PC 跑到无效地址), 则在此分析 trap 根因
- **验收:** trap handler 正确执行并退出; 或确认正常流程不触发 trap

### Task 5.3: main() 入口与 portable_init 验证
- 确认 PC 到达 coremark_v1_main.c 的 `main()` 函数
- 跟踪 `portable_init()` 调用 — 确认其不会陷入死循环或 crash
- 跟踪 `get_seed()` 系列调用 — 返回值合理
- 监控: `results[0].seed1/seed2/seed3` 写入正确值
- **验收:** portable_init 返回; seed 值被正确写入 results 结构体

---

## 阶段 6: CoreMark 端到端仿真 -- 数据初始化层 (Gate: benchmark 数据结构就绪)

> 对应 core_main.c line 165-243: 内存分配 + 数据初始化
> CoreMark 使用三种数据结构: linked list, matrix, state machine
> 数据初始化阶段的任何错误都会导致 benchmark 计算错误或崩溃

### Task 6.1: 内存分配路径验证
- 确认 MEM_METHOD 配置 (MEM_STATIC 或 MEM_MALLOC)
- 如果是 MEM_STATIC: 验证 `static_memblk` 地址对齐 (aligned(8))
- 如果是 MEM_MALLOC: 验证 malloc 返回指针正确 (对齐、非 NULL)
- 验证 `results[i].size / num_algorithms` 计算正确
- **验收:** memblock[1..3] 指针有效且互不重叠; size 值合理

### Task 6.2: Linked List 初始化验证 (core_list_init)
- `core_list_init()` 创建链表数据结构
- 验证: 链表节点通过 store 写入 SRAM; load 读回指针正确
- 关键风险: ERR-027 (无 load forwarding) 和 ERR-032 (M 级旁路传地址) 可能破坏链表指针
- **验收:** core_list_init 返回非 NULL; 链表 head 指针有效

### Task 6.3: Matrix 初始化验证 (core_init_matrix)
- 矩阵初始化涉及大量 MUL + store
- 关键风险: SA-CM-003 (MUL 单槽) 和 SA-CM-002 (DIV 符号)
- **验收:** 矩阵数据写入 SRAM; 连续两次 init 产生相同数据

### Task 6.4: State 初始化验证 (core_init_state)
- State machine 初始化
- **验收:** state 数据写入 SRAM; 初始化函数正常返回

---

## 阶段 7: CoreMark 端到端仿真 -- 计时与迭代控制层 (Gate: benchmark 开始运转)

> 对应 core_main.c line 245-289: 迭代次数自动确定 + start/stop time + iterate()
> 这是 benchmark 从"准备"切换到"执行"的关键转折点

### Task 7.1: 自动迭代次数确定逻辑
- 如果 iterations=0 (默认), CoreMark 会自动探测:
  - 循环: iterations *= 10, start_time -> iterate -> stop_time, 直到 time >= 1 sec
  - 然后: iterations *= 1 + 10/divisor
- 关键: `get_time()` / `time_in_secs()` 是否正确实现
- 如果 ITERATIONS=1 (我们编译参数), 此步骤跳过
- **验收:** iterations 值确定且 > 0

### Task 7.2: start_time / stop_time / get_time 实现验证
- 检查 `core_portme_v1.c` 中这三个函数的实现
- 常见实现: 读 mcycle CSR (Zicntr) 或内存映射 timer
- 验证: start_time 写入基准时间; stop_time 写入结束时间; get_time 返回差值 > 0
- **验收:** total_time = stop - start > 0; 多次调用返回单调递增值

### Task 7.3: iterate() 首轮执行跟踪
- `iterate()` 是 CoreMark 的主循环入口 (core_main.c line 54-76)
- 首轮 i=0 时执行:
  1. `core_bench_list(res, 1)` — linked list benchmark (正向)
  2. `core_bench_list(res, -1)` — linked list benchmark (反向)
  3. 保存 `crclist` 用于后续验证
- 监控: 每条 core_bench_list 调用后 `res->crc` 更新
- **验收:** 首轮 i=0 完整执行; crc 值非零

---

## 阶段 8: CoreMark 端到端仿真 -- 核心计算层 (Gate: benchmark 算法正确)

> 对应 CoreMark 的三个核心 benchmark 算法:
> - core_bench_list() — 链表操作 (insert/find/remove)
> - core_bench_matrix() — 矩阵运算 (addmul/mul/...)
> - core_bench_state() — 状态机 + CRC
> 这是性能贡献最大的部分，也是 RTL bug 最容易暴露的地方

### Task 8.1: core_bench_list 算法验证
- 链表操作: 遍历、插入、查找、删除
- 高频指令: LW/SW (指针操作)、BEQ/BNE (条件判断)、MUL (CRC16)
- 关键风险: Store Buffer 缺陷 (ERR-027/028/029) 直接破坏链表指针
- 验证策略: 对比 RTL 仿真 vs Spike ISS 的 crclist 值
- **验收:** crclist 与 known_crc 匹配 (seed 0x66 -> 0xe3c1)

### Task 8.2: core_bench_matrix 算法验证
- 矩阵运算: addmul, mul, matrix 变换
- 高频指令: MUL (矩阵乘法)、DIV/REM (索引计算)、LW/SW
- 关键风险: SA-CM-001/002 (DIV/REMU 符号)、SA-CM-003 (MUL 互斥)
- **验收:** crcmatrix 与 known_crc 匹配 (seed 0x66 -> 0x0747)

### Task 8.3: core_bench_state 算法验证
- 状态机: bit manipulation + CRC
- 高频指令: AND/OR/XOR/SLL/SRL (位操作)、ADDI (循环计数)
- 相对简单的整数运算，较少涉及 MUL/DIV/MEM
- **验收:** crcstate 与 known_crc 匹配 (seed 0x66 -> 0x8d84)

### Task 8.4: 全迭代完成验证
- 全部 iterations 轮循环完成
- 每轮的 crc 通过 `crcu16()` 累积到 `res->crc`
- 监控: commit 总数应与 iterations * (单次迭代指令数) 一致
- **验收:** 所有迭代完成; crcfinal 非零; 无 trap/异常

---

## 阶段 9: CoreMark 端到端仿真 -- 结果输出与退出层 (Gate: PASS + magic 有效)

> 对应 core_main.c line 291-513 + coremark_v1_main.c _exit()
> 这是最终冲刺: CRC 校验 -> 结果输出 -> 写入 0x3FFE0 -> ECALL 退出

### Task 9.1: CRC 校验逻辑验证
- seedcrc 计算: 由 seed1/seed2/seed3/size 产生
- 对比 known_crc: list/matrix/state 各自的 CRC 与 expected 匹配
- 如果 total_errors > 0: 输出 "Errors detected" -> _exit 不会写入正确结果
- **验收:** total_errors == 0; 输出 "Correct operation validated"

### Task 9.2: ee_printf 结果输出验证
- CoreMark 通过 ee_printf 输出: Total ticks, Iterations, seedcrc, crclist/crcmatrix/crcstate/crcfinal
- 在 GEM5_SIMULATION 模式下额外输出:
  - `CoreMark_CM_per_MHz_x100 : <val>`
  - `CoreMark_sim_iters : <val>`
  - `CoreMark_sim_ticks : <val>`
- 这些值被 v1_cm_per_mhz_x100 / v1_sim_iters / v1_sim_ticks 捕获
- **验收:** 三个捕获变量均非零

### Task 9.3: _exit -> v1_write_result -> ECALL 完整路径
- `_exit(0)` 被调用 (core_main.c line 461)
- `v1_write_result(1, iters, ticks, metric_x100, checks)` 写入 0x3FFE0-0x3FFF4
- 6 个 store 指令写入 SRAM: magic, bench_id, iterations, ticks, metric, checks
- ECALL (a7=93) 触发 scoreboard test_done
- **验收:** SRAM[65528]=0xDEADBEEF, SRAM[65529]=1, iterations>0, checks=0

### Task 9.4: Scoreboard 正确终止
- scoreboard 检测到 ECALL (0x00000073) 后设置 test_done=1
- TB 主循环退出, 打印 "V1 Result: PASS=1 FAIL=0"
- 验证: 仿真总 cycles 合理 (与 iterations * 单迭代 cycles 一致)
- **验收:** 仿真正常终止 (非 TIMEOUT); PASS=1 FAIL=0

### Task 9.5: 结果数据完整性交叉验证
- 从 SRAM 读取 6 个结果字, 验证一致性:
  - metric_x100 应等于 (iterations * 100000000) / ticks
  - iterations 应等于 ee_printf 输出中的值
  - checks 应为 0 (CRC 校验通过)
- **验收:** 数学一致性验证通过; metric_x100 可换算为 CM/MHz

---

## 阶段 10: 性能分析与优化 (Gate: 性能达标或差距分析完成)

### Task 10.1: IPC 统计与分析
- 从仿真输出提取: total cycles, total instructions retired, IPC
- 分析性能瓶颈: branch misprediction rate, memory stall cycles, issue slot utilization
- **验收:** IPC 分析报告, 识别 top-3 性能瓶颈

### Task 10.2: CoreMark/MHz 计算与达标验证
- 公式: CM/MHz = (CoreMark metric) / (CPU 频率 MHz)
- V1 仿真中 CPU 频率 = 仿真时钟频率 (通常 1 MHz 用于归一化)
- 与基线 BL-1.1 目标 >= 5.5 CM/MHz 对比
- **验收:** 记录实际 CM/MHz, 达标或标注差距原因及优化建议

### Task 10.3: 性能优化迭代 (如未达标)
- 根据 Task 10.1 的瓶颈分析, 按影响排序实施优化:
  - 分支预测准确率提升 (BTB group lookup, LTAGE 调参)
  - Memory stall 减少 (load forwarding, SB 容量, fu_busy 连接)
  - Issue 利用率提升 (MUL 多槽, fu_busy 正确连接)
- 每次优化后重新运行 CoreMark 对比
- **验收:** CM/MHz >= 5.5 或记录优化效果与剩余差距

---

## 阶段 11: Dhrystone V1 仿真 (Gate: 双基准测试 PASS)

### Task 11.1: Dhrystone V1 编译与 hex 生成
- `make -C perf/benchmarks/dhrystone-v1` (或 dhrystone)
- `elf2hex.py --word-width 32` 生成 32-bit hex
- **验收:** hex 生成成功, objdump 验证代码段

### Task 11.2: Dhrystone V1 仿真运行
- 复用 CoreMark 修复后的环境
- 运行至 ECALL 或 TIMEOUT
- 检查 0x3FFE0: magic + bench_id=2 + DMIPS 结果
- **验收:** PASS=1, magic 有效

### Task 11.3: DMIPS/MHz 达标验证
- 提取 DMIPS 分数
- 与基线 BL-1.1 目标 >= 3.8 DMIPS/MHz 对比
- **验收:** 记录实际 DMIPS/MHz, 达标或标注差距

---

## 阶段 12: 回归测试与归档 (Gate: 项目治理完备)

### Task 12.1: 全量回归测试
- 运行 `tests/scripts/run_regression.sh`
- 包含: Smoke tests + RV32I + RV32M + RV32C + 新增 directed tests
- **验收:** 通过率 100%

### Task 12.2: Bug 回归测试用例补充 (规则 21)
- 为本次调试中发现/修复的每个 Bug 编写回归测试
- 至少: DIVU/REMU 符号、DIV 余数符号、MUL 互斥、PC 对齐、Trap 优先级
- **验收:** 每个 test 在 bug 复现环境中 FAIL, 在修复后 PASS

### Task 12.3: Errata 更新 (规则 20)
- 更新 `audit/errata/known-issues.yaml`: 新发现问题登记, 已修复问题标记 resolved
- 确认所有 open 状态的 errata 有 workaround 或 risk-register 条目
- **验收:** errata 与 risk-register 一致性检查 PASS

### Task 12.4: 指令记录与审计日志 (规则 03/16)
- 更新 `audit/instruction-log/YYYY-MM-DD.yaml`
- 更新 `milestone-plan.yaml` 中 T-MS3-S1-CM 状态
- **验收:** 指令记录完整

### Task 12.5: Git 归档
- 分阶段 commit: 每个 Phase 的修复单独提交
- 打 checkpoint tag: `checkpoint/post-coremark-v1-pass`
- **验收:** git log 清晰, tag 可追溯

---

## 阶段间依赖与门禁总览

```
阶段 0 (环境基线)
  |
  v
阶段 1 (P0 RTL 修复) -- 门禁: Smoke + RV32I + RV32M 全 PASS
  |
  v
阶段 2 (P1 RTL 修复) -- 门禁: Smoke + 新增 directed tests 全 PASS
  |
  v
阶段 3 (取指流水线) -- 门禁: PC 对齐断言无触发, boot code 完整执行
  |
  v
阶段 4 (环境修复)  -- 门禁: Scoreboard/Timeout/Store 路径验证通过
  |
  v
阶段 5 (启动引导)  -- 门禁: crt0 完整执行, main() 入口到达, trap handler 正常
  |
  v
阶段 6 (数据初始化) -- 门禁: list/matrix/state 数据结构就绪, SRAM 有写入
  |
  v
阶段 7 (计时与迭代) -- 门禁: iterations 确定, start/stop time 正确, iterate() 首轮启动
  |
  v
阶段 8 (核心计算)  -- 门禁: 三个算法 CRC 匹配 known_crc, 全迭代完成
  |
  v
阶段 9 (结果输出)  -- 门禁: PASS=1, magic=0xDEADBEEF, metric 数学一致性验证
  |
  v
阶段 10 (性能分析)  -- 门禁: CM/MHz >= 5.5 或差距分析完成
  |
  v
阶段 11 (Dhrystone) -- 门禁: DMIPS/MHz >= 3.8 或差距分析完成
  |
  v
阶段 12 (归档)      -- 门禁: 回归 100%, errata 闭环, 审计完成
```

## 关键风险项

| 风险 | 影响 | 缓解策略 |
|------|------|----------|
| PC 非对齐问题根因复杂 | 阶段 3 可能反复迭代 | 分 Task 逐步验证, 每个 Task 有独立验收 |
| 性能不达标 | 阶段 6 可能需要多轮优化 | 先确保功能正确, 性能作为附加目标 |
| Memory 子系统缺陷 (ERR-027~032) | 数据完整性受损 | 已在阶段 1 覆盖 fu_busy/MUL 互斥, 其余按需追加 |
| 调试时间长, 上下文耗尽 | 多 Thread 接力 | 每个阶段完成后 commit + 写 handoff 文档 |

## 关键文件索引

| 文件 | 用途 |
|------|------|
| `src/rtl/core/lumi_fetch.sv` | 取指: BTB + RAS + LTAGE + predecode mux |
| `src/rtl/core/lumi_predecode.sv` | 指令边界扫描: 16/32-bit 识别 + bytes_consumed |
| `src/rtl/core/lumi_decode_issue.sv` | 解码发射: fu_busy + stop_issue + 冒险检测 |
| `src/rtl/core/lumi_execute.sv` | ALU/MUL/DIV/Branch/LSU 执行 |
| `src/rtl/core/lumi_core_top.sv` | 流水线级联: ERR-PDREG + bypass + fu_busy 连接 |
| `src/rtl/top/lumi_soc_top.sv` | SoC 顶层: V1 SRAM bypass + trap 接口 |
| `src/tb/top/lumi_v1_tb_top.sv` | V1 TB: hex 加载 + 超时 + 结果检查 |
| `src/tb/env/lumi_scoreboard.sv` | Scoreboard: ECALL/spin/_exit 检测 |
| `perf/benchmarks/coremark-v1/` | CoreMark 源码 + hex |
| `perf/benchmarks/libc/lumi-v1-bench.ld` | Linker script: 内存布局 |
| `audit/errata/known-issues.yaml` | Errata 登记簿 (规则 20) |
| `audit/compliance-reports/coremark-rtl-static-analysis-20260714.yaml` | 静态分析报告 |
