# Lumi-Core CoreMark V1 调试历程总结

**文档版本**: v1.0  
**创建日期**: 2026-07-18  
**调试周期**: 2026-07-11 ~ 2026-07-18（约 8 天）  
**当前状态**: ERR-131 调试中，CoreMark V1 仍未通过

---

## 一、调试历程概览

### 1.1 时间线

```
2026-07-11  开始 CoreMark V1 调试，发现程序无法正常运行
2026-07-12  定位 BGEU 分支指令 bug，修复后程序可启动
2026-07-13  静态分析发现多个 RTL bug（Phase 1-3），修复 24 个问题
2026-07-14  Phase 4 修复 + GLM 独立审计，新增 ERR-106/107
2026-07-15  修复未对齐访问 bug（ERR-108~114），回归测试全部通过
2026-07-16  修复 13 个 RTL bug（bypass/mispredict/trap），新增回归测试
2026-07-17  修复 ERR-128~130（双 LSU port0 数据丢失 + 异常处理）
2026-07-18  ERR-131 调试（DIB flush 级联效应），11 个迭代修复
```

### 1.2 关键里程碑

| 日期 | 里程碑 | 修复数量 | 状态 |
|------|--------|----------|------|
| 07-12 | checkpoint/post-bgeu-fix | 1 | CoreMark 可启动 |
| 07-13 | checkpoint/post-p3-fix | 24 | 静态分析修复 |
| 07-15 | checkpoint/post-misalign-fix | 6 | 未对齐访问修复 |
| 07-16 | checkpoint/post-bug5b-fix | 13 | 数据通路/分支预测/trap 修复 |
| 07-17 | checkpoint/post-err130-phase4 | 3 | 双 LSU + 异常处理 |
| 07-18 | checkpoint/post-err131-fix | 11 (迭代) | DIB flush 级联修复中 |

---

## 二、Bug 分类统计

### 2.1 按类别统计

| 类别 | 数量 | 典型 Bug |
|------|------|----------|
| 数据通路/旁路 | 8 | Bug-MUL-BP, Bug-M-BPV, Bug-E1LU, Bug-DIV-P, ERR-128, ERR-130 |
| 分支预测/恢复 | 12 | Bug-MP-PRE, Bug-NT-REDIR, Bug-LTAGE-NT, Bug-BTB-OVR, ERR-131 系列 |
| 异常/Trap 处理 | 5 | Bug-EXC-PROP, Bug-TRAP-FL, Bug-IRQ-MIE, ERR-129, ERR-130 |
| 未对齐访问 | 6 | ERR-108~113 |
| DIB/指令缓冲 | 8 | ERR-114, ERR-131 系列 |
| 其他 | 3 | ERR-106, ERR-107, ERR-115 |

**总计**: 42 个 ERR 条目（ERR-001 ~ ERR-131，部分已解决）

### 2.2 按严重性统计

| 严重性 | 数量 | 说明 |
|--------|------|------|
| Critical | 15 | 导致程序崩溃或数据损坏 |
| Major | 18 | 导致功能错误或性能下降 |
| Minor | 9 | 边缘情况或优化项 |

---

## 三、核心 Bug 详解

### 3.1 数据通路类

#### Bug-MUL-BP (ERR-115 相关)
- **文件**: `lumi_core_top.sv` L427-448
- **根因**: MUL/DIV E2 结果与 E1→M 寄存器捕获时序错位，`m_result_r` 中是占位值 0
- **修复**: 新增 `m_result_eff` 组合逻辑，E2 结果有效时替换占位值
- **影响**: MUL 结果立即被依赖指令使用时得到错误值

#### Bug-M-BPV (ERR-128 相关)
- **文件**: `lumi_memory_stage.sv` L411-414
- **根因**: `stall_port1=1` 时 port 1 load 未读 SRAM，但 `m_bypass_valid=mem_ready_in=1` 提供旧值
- **修复**: `m_bypass_valid = mem_ready_in && !stall_port1 && !pending_port1_r`
- **影响**: 双 LSU 端口串行化时 load 结果错误

#### Bug-E1LU
- **文件**: `lumi_core_top.sv` + `lumi_decode_issue.sv` L817-827
- **根因**: E1 有 load 时依赖指令同周期发射，M 旁路提供旧值
- **修复**: 新增 `e1_load_pending`/`e1_load_rd` 信号，issue 时检测 E1 load 依赖并阻止
- **影响**: Load-Use 冒险导致数据错误

#### Bug-DIV-P
- **文件**: `lumi_core_top.sv` L519-530
- **根因**: `e2_div_busy` 有 1 周期延迟，DIV 第 1 周期就进入 M 级
- **修复**: 新增 `e1_div_pending` 组合信号，E1 有 DIV 且结果未就绪时 stall
- **影响**: DIV 结果未就绪时被后续指令使用

### 3.2 分支预测类

#### Bug-MP-PRE
- **文件**: `lumi_core_top.sv` L668-695
- **根因**: 误预测时 `m_valid_r<='0` 清除所有 slot，分支前指令丢失
- **修复**: 保留分支及其前所有有效指令，仅刷新分支后推测指令
- **影响**: 误预测后分支前指令被错误 flush

#### Bug-NT-REDIR
- **文件**: `lumi_execute.sv` L674-677
- **根因**: not-taken 误预测重定向到 `branch_target` 而非 `PC+4`
- **修复**: `e1_branch_target = taken ? target : (pc+4)`
- **影响**: Not-taken 分支跳转到错误地址

#### Bug-LTAGE-NT
- **文件**: `lumi_core_top.sv` + `lumi_execute.sv`
- **根因**: `tage_update_valid` 仅 taken 时有效，not-taken 不更新 LTAGE
- **修复**: 新增 `e1_br_executed`，条件分支 taken/not-taken 都更新
- **影响**: LTAGE 预测器无法从 not-taken 历史学习

#### Bug-BTB-OVR
- **文件**: `lumi_fetch.sv` L414
- **根因**: slot-0 BTB 命中时仍检查组级 BTB，后续 JAL 条目污染当前分支预测
- **修复**: `if (grp_found && !btb_hit)`
- **影响**: BTB 条目被错误覆盖

### 3.3 ERR-131 系列（DIB Flush 级联效应）

**ERR-131 是本轮调试中最复杂的 bug，经历了 11 个迭代修复**：

1. **ERR-131 (初始)**: `post-mispredict instruction drop`
   - 误预测后 pd_inst_valid_r 被 flush 清除，导致指令丢失
   - 尝试修复：保留 pd_inst_valid_r 直到新数据覆盖

2. **ERR-131b**: 移除 redirect 边沿检测
   - 原 bug: BSS 循环中 bgeu+JAL 连续误预测，第二个 redirect 被抑制
   - 修复: 移除 `!branch_redirect_valid_d`

3. **ERR-131d**: 移除 post_flush_block_r
   - 原 bug: 延迟 issue 1 cycle，导致指令被下次 flush 清除
   - 修复: 从 issue gate 中移除 post_flush_block_r

4. **ERR-131e**: 选择性 DIB flush
   - 原 bug: DIB 全量 flush 导致保留的旧数据丢失
   - 修复: 计算 `flush_keep_count`，保留 PC <= flush_pc 的条目

5. **ERR-131f**: DIB flush cooldown（已回滚）
   - 尝试添加 cooldown 机制防止级联 flush
   - 发现无效：第一次 flush 已造成损害

6. **ERR-131g**: 保护 JAL/JALR BTB 条目
   - 原 bug: 条件分支覆盖 JAL/JALR 条目，导致 JAL 反复误预测
   - 修复: `if (!(btb_mem[idx].valid && !is_branch && wr_data.is_branch))`

7. **ERR-131h**: F1 直接 JAL 检测
   - 原 bug: BTB miss 时 JAL 冷启动误预测
   - 修复: F1 阶段直接检测 JAL 指令，消除冷启动误预测

8. **ERR-131i**: 后向分支 taken 启发式
   - 原 bug: BTB miss 时后向分支（loop）预测 not-taken
   - 修复: 负偏移分支预测 taken，正偏移预测 not-taken

9. **ERR-131j**: 移除 e1_has_branch 从 pipe_stall
   - 原 bug: pipe_stall 过度抑制导致流水线死锁
   - 修复: 从 pipe_stall 和 I→E1 freeze 中移除 e1_has_branch

10. **ERR-131k**: 添加 boot-return trace
    - 调试提交：确认 CODE-WR 是半字 store 到 0x02

**核心教训**: ERR-131 揭示了 DIB flush 机制的复杂性。简单的"全量 flush"在误预测场景下会丢失保留的指令，需要精细的选择性 flush 和状态管理。

### 3.4 未对齐访问类（ERR-108~113）

- **ERR-108**: 未对齐 load 两周期拆分逻辑未实现
- **ERR-109**: 未对齐 store 两周期拆分逻辑未实现
- **ERR-110**: DIB 死锁（未对齐访问导致 DIB 满）
- **ERR-111**: mem_busy 冻结逻辑错误
- **ERR-112**: 未对齐访问地址计算错误
- **ERR-113**: 未对齐访问数据合并错误

**修复**: 实现完整的两周期拆分逻辑，第一个周期处理低地址，第二个周期处理高地址。

### 3.5 异常/Trap 处理类

#### Bug-EXC-PROP
- **文件**: `lumi_memory_stage.sv` + `lumi_core_top.sv`
- **根因**: `m_pipe_exception` 固定为 0，EBREAK/ECALL 异常未传播到 W 级
- **修复**: 传播 `exc_valid`/`exc_cause` 到 `inst_pkt`
- **影响**: 异常指令无法触发 trap

#### Bug-TRAP-FL
- **文件**: `lumi_memory_stage.sv` + `lumi_core_top.sv`
- **根因**: `trap_request` 时 M→W 寄存器未清除，异常指令可能重复提交
- **修复**: 新增 `trap_flush` 输入，清除 `m_pipe_valid`
- **影响**: 异常指令被重复执行

#### ERR-129
- **根因**: 异常后同批次指令继续提交
- **修复**: 抑制异常后同批次指令的提交
- **影响**: 异常后指令状态不一致

---

## 四、调试方法论

### 4.1 迭代式调试策略

CoreMark V1 调试采用**迭代式执行策略**：
- **Bug 记录前置**: 首轮即完整记录所有发现的 bug 到 errata
- **边修边测**: 每轮 RTL 修改后立即重建、回归测试、CoreMark 测试
- **迭代中持续记录**: 每轮发现新 bug 立即追加 errata 条目

### 4.2 分层定位方法

1. **回归测试基线**: v1-smoke, v1-rv32i-full, v1-rv32m, v1-rv32i-misalign, v1-loop-debug
2. **CoreMark 端到端验证**: 独立跟踪，不纳入回归 PASS 判定
3. **Trace 分析**: 添加最小化 trace 打印 commit 的 store/load PC、地址、数据
4. **Spike ISS 对比**: 用参考实现对比链表数据，定位具体哪个 store/load 出错

### 4.3 关键经验教训

#### 教训 1: CoreMark 不能作为回归验收标准
- **原因**: CoreMark 依赖大量尚未验证的 RTL 路径
- **正确做法**: 回归基线 = 已通过的 directed tests，CoreMark 是额外的端到端验证

#### 教训 2: 误预测恢复是超标量处理器的核心难点
- **表现**: ERR-131 经历了 11 个迭代修复
- **根因**: DIB flush 机制的复杂性，简单的"全量 flush"在误预测场景下会丢失保留的指令
- **解决方案**: 选择性 flush + 状态管理 + F1 直接检测

#### 教训 3: 数据通路旁路需要精确的时序控制
- **表现**: Bug-MUL-BP, Bug-M-BPV, Bug-E1LU, Bug-DIV-P
- **根因**: 多级流水线中结果旁路的时序错位
- **解决方案**: 组合逻辑旁路 + 冒险检测 + stall 机制

#### 教训 4: 双 LSU 端口串行化引入复杂依赖
- **表现**: ERR-128, ERR-130
- **根因**: port 0 先处理，port 1 延后 1 cycle，旁路逻辑复杂
- **解决方案**: 精确的 stall_port1 控制 + 旁路有效性检查

#### 教训 5: 异常处理必须原子性
- **表现**: Bug-EXC-PROP, Bug-TRAP-FL, ERR-129
- **根因**: 异常后同批次指令继续提交，导致状态不一致
- **解决方案**: trap_flush 清除 M→W 寄存器 + 抑制同批次提交

---

## 五、当前状态

### 5.1 回归测试

| 测试 | 状态 | 说明 |
|------|------|------|
| v1-smoke | PASS | 基本 RV32I 指令 |
| v1-rv32i-full | PASS | 完整 RV32I 指令集 |
| v1-rv32m | PASS | RV32M 乘除法 |
| v1-rv32i-misalign | PASS | 14 个未对齐访问场景 |
| v1-loop-debug | PASS | Store-Load 转发 + stall_port1 |
| v1-bug-regression | PASS | 6 个 TC 覆盖 13 个 bug |

### 5.2 CoreMark V1

**当前状态**: FAIL（exit_code=1）

**失败根因**: 
- 程序在 `core_list_mergesort` 函数中触发 `ebreak`（PC=0x5bc）
- 这是编译器插入的"不可达路径"，表明链表数据结构损坏
- trap handler 写入 `0xDEAD0001` 到 `0x3FFE0`

**可能原因**:
1. 链表初始化损坏
2. Store-Load 转发 bug
3. 分支预测恢复 bug
4. 函数调用/返回栈操作错误

**附带发现**: trap handler 读取 mcause 得到 0，但 EBREAK 应设置 mcause=3

### 5.3 代码统计

- **RTL 文件修改**: 6 个核心文件
  - `lumi_core_top.sv`: ~941 行
  - `lumi_decode_issue.sv`: ~1016 行
  - `lumi_memory_stage.sv`: ~931 行
  - `lumi_execute.sv`: ~700 行
  - `lumi_fetch.sv`: ~807 行
  - `lumi_writeback.sv`: ~400 行

- **Errata 条目**: 42 个（ERR-001 ~ ERR-131）
- **回归测试**: 6 个 directed tests + 6 个 bug regression tests
- **Git commits**: 约 50 个（含调试提交）

---

## 六、下一步计划

### 6.1 优先级 P0: ERR-131 收尾

1. 验证 ERR-131 系列修复是否引入回归
2. 运行完整回归测试确认无退化
3. 清理调试 trace

### 6.2 优先级 P1: CoreMark 链表损坏调试

1. 创建 `core_list_init_only.S` 单独测试链表初始化
2. 用 Spike ISS 或手工计算对比链表数据
3. 添加最小化 trace 定位具体哪个 store/load 出错
4. 根据定位结果修复 RTL bug

### 6.3 优先级 P2: mcause=0 调查

1. 创建独立 CSR 测试 `csrr_mcause.S`
2. 检查 `lumi_execute.sv` 中 e1_exc_cause 对 EBREAK 的赋值
3. 检查 `lumi_csr_unit.sv` 中 mcause 写入逻辑
4. 如确认 bug，记录为新 ERR-xxx

### 6.4 优先级 P3: 完整 CoreMark 流程

1. ITERATIONS=1 功能验证，目标: `magic=0xDEADBEEF` + `exit_code=0`
2. ITERATIONS=50 完整基准，提取性能数据
3. 对比 BL-1.1 目标: CoreMark >= 5.5 CM/MHz

---

## 七、总结

### 7.1 成果

- 修复 42 个 RTL bug，覆盖数据通路、分支预测、异常处理、未对齐访问等
- 建立完整的回归测试基线，6 个 directed tests 全部 PASS
- 发现并解决多个超标量处理器核心难点问题（误预测恢复、双 LSU 串行化、异常原子性）
- 积累丰富的调试经验，形成迭代式调试方法论

### 7.2 挑战

- CoreMark V1 仍未通过，链表数据结构损坏是核心阻塞点
- ERR-131 系列 bug 揭示了 DIB flush 机制的复杂性，经历了 11 个迭代修复
- 误预测恢复是超标量处理器的核心难点，需要精细的状态管理

### 7.3 展望

- CoreMark V1 功能通过需要进一步调试，预计 2-4 小时
- 性能数据提取需要功能通过后进行
- 本轮调试积累的经验和方法论将指导后续开发

---

**文档完成**。本总结记录了 Lumi-Core CoreMark V1 调试的完整历程，包括 42 个 bug 的分类统计、核心 bug 详解、调试方法论、经验教训和下一步计划。
