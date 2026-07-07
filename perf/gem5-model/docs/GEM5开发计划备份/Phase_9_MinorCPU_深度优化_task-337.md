# Phase 9: MinorCPU 深度优化

## 三视角分析总结

| 视角 | 发现 | 行动 |
|------|------|------|
| 编译器 | `-funroll-loops` 已发挥大部分收益，模调度/软件流水尚未尝试 | 测试更多 GCC 选项 |
| RTL 对标 | LSQ 过度保守 (L1035-1039)、load skip 被禁止 (L912)、FU 每周期 1 条限制 | 3 项源码修改 |
| 理论极限 | IPC 从 1.51 到 1.80 (+19%) 理论可行，需要多优化叠加 | 参数精调 + 源码改进 |

**当前状态**: CM/MHz = 4.62, IPC = 1.51, 目标 5.5, 差距 16%

---

## Task 1: 参数快速扫描 (预期 +2-5%)

无需重编译，最低成本验证。

### 1.1 `fetch1ToFetch2BackwardDelay = 0`
**文件**: `configs/lumi-lib/lumi_cpu.py`

[pipeline.cc L64-65](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/perf/gem5-model/gem5/src/cpu/minor/pipeline.cc#L64-L65) 中 `f2ToF1` TimeBuffer 构造时传入 `true`，允许 0 delay。设为 0 意味着分支预测反馈与取指同周期完成，减少 1 周期分支惩罚。

### 1.2 `executeLoadAssumedLatency` 精调
**文件**: `configs/lumi-lib/lumi_cpu.py`

当前值 2。测试 1 (更激进) 和 3 (更保守):
- 值=1: 依赖指令更快发射，但 L1D miss 时惩罚更大
- 值=3: 减少 miss 惩罚，但增加 hit 时的不必要等待

### 1.3 `executeMaxAccessesInMemory` 测试
**文件**: `configs/lumi-lib/lumi_cpu.py`

当前默认 2 ([lsq.cc L1428](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/perf/gem5-model/gem5/src/cpu/minor/lsq.cc#L1428))。测试 4/8 以增加并发 cache 访问。

### 1.4 验证
每项测试独立运行 CoreMark + Dhrystone，记录 CM/MHz、IPC、CRC 校验。

---

## Task 2: 编译器进一步优化 (预期 +0-5%)

### 2.1 测试编译器选项组合
**文件**: `perf/benchmarks/coremark/Makefile`

在 `-O2 -funroll-loops` 基础上逐项测试:
- `-fmodulo-sched`: 模调度 (软件流水)，跨迭代重排指令
- `-fpeel-loops`: 循环剥离
- `-faggressive-loop-optimizations`: 激进循环优化
- `-fschedule-insns2`: 寄存器分配后调度

### 2.2 验证
确保 CoreMark CRC = 0x0158。保留最优组合。

---

## Task 3: LSQ 内存解歧 (预期 +3-8%)

这是最有价值的源码修改。当前 [lsq.cc L1035-1039](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/perf/gem5-model/gem5/src/cpu/minor/lsq.cc#L1035-L1039) 要求所有 load 等待 transfers 队列中的 **所有 store** 排空，即使地址不冲突。

### 3.1 修改方案
**文件**: `src/cpu/minor/lsq.cc` L1035-1039

将无条件阻塞改为地址冲突检查:

```cpp
if (is_load) {
    if (numStoresInTransfers != 0) {
        // Check if any store in transfers has conflicting address
        bool has_conflict = false;
        for (auto it = transfers.begin(); it != transfers.end(); ++it) {
            LSQRequestPtr store_req = *it;
            if (store_req->isLoad) continue;  // skip loads in transfers
            // If store address is not yet known (still translating),
            // must conservatively wait
            if (!store_req->hasAddress()) {
                has_conflict = true;
                break;
            }
            // Check address overlap
            if (store_req->request->hasPaddr() &&
                request->request->hasPaddr()) {
                Addr store_addr = store_req->request->getPaddr();
                Addr load_addr = request->request->getPaddr();
                unsigned store_size = store_req->request->getSize();
                unsigned load_size = request->request->getSize();
                if (load_addr < store_addr + store_size &&
                    store_addr < load_addr + load_size) {
                    has_conflict = true;
                    break;
                }
            } else {
                // Address not resolved yet, conservatively wait
                has_conflict = true;
                break;
            }
        }
        if (has_conflict) {
            DPRINTF(MinorMem, "Load stalled: address conflict with"
                " store in transfers\n");
            return;
        }
        // No conflict - load can proceed past non-conflicting stores
        DPRINTF(MinorMem, "Load bypassing non-conflicting stores"
            " in transfers queue\n");
    }
}
```

### 3.2 关键注意事项
- 需要检查 `LSQRequest` 是否有 `hasAddress()` 方法，如果没有需要添加
- Store-to-load forwarding 仍然通过 store buffer 处理 ([L1095-1123](file:///Users/chenjiangshan/Workbench/FullAIFlowProjects/Lumi-core/perf/gem5-model/gem5/src/cpu/minor/lsq.cc#L1095-L1123))，不受此修改影响
- 必须确保 store 的 commit 顺序不被破坏 (store 必须在 load 之后 commit 到缓存)

### 3.3 验证
- Hello world 双/三发射: PASS
- CoreMark CRC: 0x0158
- 对比修改前后的 stall 分布和 mem_blocked 计数

---

## Task 4: Load Skip WAR 安全修复 (预期 +3-6%)

### 4.1 问题分析
Phase 8 将 `!isMemRef()` 改为 `!isStore()` 后 crash。根因: load 被 skip 后，窗口外 (MAX_WIDTH 以外) 的指令修改了 load 的地址源寄存器，导致 load 重试时使用了错误地址。

### 4.2 修复方案
**文件**: `src/cpu/minor/dyn_inst.hh`

在 `MinorDynInst` 类中添加:
```cpp
uint64_t savedSrcRegValues[4];
bool hasSavedSrcValues = false;
```

**文件**: `src/cpu/minor/execute.cc` L906-1027

1. 修改 skip 条件 (L912): 禁止 store skip，允许 load skip
```cpp
!inst->staticInst->isStore() &&  // was: !inst->staticInst->isMemRef()
```

2. Skip 时保存源寄存器值 (L1005 附近):
```cpp
if (inst->isMemRef()) {
    auto *isa = cpu.getContext(thread_id)->getIsaPtr();
    for (unsigned s = 0; s < inst->staticInst->numSrcRegs()
         && s < 4; s++) {
        RegId reg = inst->staticInst->srcRegIdx(s).flatten(*isa);
        inst->savedSrcRegValues[s] =
            cpu.getContext(thread_id)->readReg(reg);
    }
    inst->hasSavedSrcValues = true;
}
```

3. Issue 时验证源寄存器值 (issue() 函数开头):
```cpp
if (inst->hasSavedSrcValues && !inst->issued) {
    auto *isa = cpu.getContext(thread_id)->getIsaPtr();
    for (unsigned s = 0; s < inst->staticInst->numSrcRegs()
         && s < 4; s++) {
        RegId reg = inst->staticInst->srcRegIdx(s).flatten(*isa);
        if ((uint64_t)cpu.getContext(thread_id)->readReg(reg)
            != inst->savedSrcRegValues[s]) {
            inst->hasSavedSrcValues = false;
            break;  // force re-issue, not skipped
        }
    }
}
```

### 4.3 验证
- Hello world 双/三发射: PASS (首先验证正确性)
- CoreMark CRC: 0x0158
- Dhrystone: 与 baseline 对比
- 统计 skip-stalled 事件数是否显著增加

---

## Task 5: 回归测试与报告

### 5.1 完整回归测试
6 项测试 (2 hello + 2 coremark + 2 dhrystone)，全部必须 PASS。

### 5.2 更新 perf-report.yaml
**文件**: `perf/benchmarks/perf-report.yaml`

记录:
- 每项优化的独立效果 (ablation)
- 最佳组合的最终性能
- 三视角分析结论
- 与 N900/R908 的对比分析
- 模型精度边界文档化

---

## 执行顺序

1. **Task 1** (参数扫描) -- 最低成本，立即验证，不需要重编译
2. **Task 2** (编译器优化) -- 低成本，重编译基准测试即可
3. **Task 3** (LSQ 内存解歧) -- 高价值源码修改，需要重编译 gem5
4. **Task 4** (Load Skip WAR 修复) -- 中等复杂度，需要重编译 gem5
5. **Task 5** (回归 + 报告) -- 汇总所有结果

每完成一个 Task 都运行 CoreMark 验证，叠加收益。

## 预期收益

| 优化 | 预期收益 | 累计 |
|------|:-------:|:----:|
| Baseline | 4.62 | - |
| Task 1: 参数扫描 | +2-5% | 4.85 |
| Task 2: 编译器 | +0-5% | 4.95 |
| Task 3: LSQ 解歧 | +3-8% | 5.15 |
| Task 4: Load skip | +3-6% | 5.35 |
| **乐观估计** | | **~5.3-5.5** |

每项优化的效果独立且可叠加。如果所有优化都生效，有望接近或达到 5.5 目标。
