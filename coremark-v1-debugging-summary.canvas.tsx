import { Divider, Grid, H1, H2, H3, Stack, Stat, Table, Text } from 'qoder/canvas';

export default function CoreMarkV1DebuggingSummary() {
  return (
    <Stack gap={20}>
      <H1>CoreMark V1 长调试任务总结</H1>
      <Text tone="secondary">T-MS3-S1-7 | M3-S1 RTL实现与单元验证 | 2026-07-18 ~ 2026-07-19</Text>

      <Grid columns={5} gap={12}>
        <Stat value="16" label="发现Bug总数" />
        <Stat value="16" label="已修复" tone="success" />
        <Stat value="7" label="回归测试TC" />
        <Stat value="4" label="Checkpoint Tags" />
        <Stat value="Phase 4/12" label="当前进度" />
      </Grid>

      <Divider />

      <H2>1. 发现的问题 (ERR-115 ~ ERR-130)</H2>

      <H3>Critical 级别 (11个)</H3>
      <Table
        headers={['ID', '标题', '根因', '影响模块']}
        rows={[
          ['ERR-115', 'MUL/DIV E2 结果旁路时序错位', 'M级寄存器捕获占位值0', 'lumi_core_top.sv'],
          ['ERR-116', 'stall_port1 时 M 旁路提供旧值', 'bypass_valid 未排除 stall', 'lumi_memory_stage.sv'],
          ['ERR-117', 'E1 load-use 同周期发射', '依赖检测缺失', 'lumi_decode_issue.sv'],
          ['ERR-118', 'DIV 过早进入 M 级', 'e2_div_busy 延迟1周期', 'lumi_core_top.sv'],
          ['ERR-119', '误预测清除分支前指令', 'm_valid 全部清零', 'lumi_core_top.sv'],
          ['ERR-120', 'NT 误预测重定向错误PC', '重定向到 target 而非 PC+4', 'lumi_execute.sv'],
          ['ERR-123', '异常未传播到 W 级', 'm_pipe_exception 固定为0', 'lumi_memory_stage.sv'],
          ['ERR-124', 'trap 时 M->W 未清除', '缺少 trap_flush 输入', 'lumi_memory_stage.sv'],
          ['ERR-126', 'stall_port1 重复提交', 'M->W 保持旧值', 'lumi_memory_stage.sv'],
          ['ERR-129', 'trap 同批次 post-exception 提交', 'flush 未抑制后续 slot', 'lumi_memory_stage.sv'],
          ['ERR-130', '双 load port0 数据丢失', 'stall 阻止 always_ff 捕获', 'lumi_memory_stage.sv'],
        ]}
        rowTone={['danger','danger','danger','danger','danger','danger','danger','danger','danger','danger','danger']}
      />

      <H3>High/Low 级别 (5个)</H3>
      <Table
        headers={['ID', '标题', '严重度', '影响模块']}
        rows={[
          ['ERR-121', 'LTAGE not-taken 不更新', 'high', 'lumi_execute.sv'],
          ['ERR-122', 'BTB 组级查找污染', 'high', 'lumi_fetch.sv'],
          ['ERR-125', 'IRQ 未检查 MIE 位', 'high', 'lumi_writeback.sv'],
          ['ERR-127', 'post_flush_hold 冗余', 'low', 'lumi_fetch.sv'],
          ['ERR-128', 'REM 结果选择错误', 'critical', 'lumi_execute.sv'],
        ]}
      />

      <Divider />

      <H2>2. 解决方案与测试证明</H2>
      <Table
        headers={['Bug', '修复方式', '测试用例', '验证状态']}
        rows={[
          ['ERR-115/118', 'm_result_eff 组合逻辑 + e1_div_pending stall', 'TC-1 (MUL/DIV旁路)', 'PASS'],
          ['ERR-116/117', 'm_bypass_valid 条件修正 + e1_load_pending 阻止发射', 'TC-2 (stall+load-use)', 'PASS'],
          ['ERR-119/120/127', '保留分支前指令 + NT重定向PC+4 + 移除冗余逻辑', 'TC-3 (误预测保留)', 'PASS'],
          ['ERR-121/122', 'e1_br_executed 双向更新 + BTB 条件守卫', 'TC-4 (LTAGE+BTB)', 'PASS'],
          ['ERR-123/124/125', '异常传播 + trap_flush + MIE 检查', 'TC-5 (EBREAK/ECALL)', 'PASS'],
          ['ERR-126', 'stall_port1 时 m_pipe_valid<=0', 'TC-6 (双MEM不重复)', 'PASS'],
          ['ERR-129', 'trap_flush 抑制同批次后续 slot 写回', 'csrr_mcause.S', 'PASS'],
          ['ERR-130', 'stall_port1 分支专门捕获 port0 load 数据', 'TC-7 (双load串行化)', '待验证'],
        ]}
        rowTone={[undefined,undefined,undefined,undefined,undefined,undefined,undefined,'warning']}
      />

      <Divider />

      <H2>3. 当前进度 (里程碑映射)</H2>
      <Text>M3 (RTL冻结) &gt; M3-S1 (RTL实现与单元验证) &gt; T-MS3-S1-7 (CoreMark/Dhrystone V1 RTL仿真)</Text>
      <Table
        headers={['Phase', '内容', '状态', '证据']}
        rows={[
          ['Phase 0', '固化成果 (errata+回归+commit)', 'DONE', 'commit 4840c9f + tag checkpoint/post-bug5b-fix'],
          ['Phase 1', 'mcause=0 CSR 问题', 'DONE', 'commit 3c3e6d1 (ERR-129 fix)'],
          ['Phase 2', 'CoreMark 链表损坏', 'DONE', 'commit a23d197 (ERR-130 fix)'],
          ['Phase 3', '取指流水线诊断', 'DONE', 'PC对齐断言无触发, boot code 验证通过'],
          ['Phase 4', '验证环境修复', 'DONE', 'scoreboard store检测 + 10M timeout'],
          ['Phase 5-9', 'CoreMark 端到端', 'PENDING', '目标: magic=0xDEADBEEF + PASS'],
          ['Phase 10', '性能分析', 'PENDING', '目标: >= 5.5 CM/MHz'],
          ['Phase 11', 'Dhrystone V1', 'PENDING', '目标: >= 3.8 DMIPS/MHz'],
          ['Phase 12', '回归归档', 'PENDING', '回归100% + errata闭环'],
        ]}
        rowTone={['success','success','success','success','success','warning','warning','warning','warning']}
      />

      <Divider />

      <H2>4. 接下来的计划</H2>
      <Table
        headers={['优先级', '任务', '目标']}
        rows={[
          ['立即', '运行 TC-7 回归测试验证 ERR-130 修复', '7/7 TC PASS'],
          ['短期', 'Phase 5-9: CoreMark 端到端仿真', 'magic=0xDEADBEEF, exit_code=0'],
          ['中期', 'Phase 10: 性能分析与优化', 'CM/MHz >= 5.5'],
          ['远期', 'Phase 11-12: Dhrystone + 归档', 'DMIPS/MHz >= 3.8, 回归100%'],
        ]}
      />

      <Divider />

      <H2>5. 关键文件索引</H2>
      <Table
        headers={['文件', '用途']}
        rows={[
          ['src/rtl/core/lumi_memory_stage.sv', 'ERR-116/123/124/126/129/130 修复'],
          ['src/rtl/core/lumi_core_top.sv', 'ERR-115/117/118/119 修复'],
          ['src/rtl/core/lumi_execute.sv', 'ERR-120/121/128 修复'],
          ['src/rtl/core/lumi_fetch.sv', 'ERR-122/127 修复'],
          ['tests/directed/rv32im_bug_regression.S', 'TC-1~TC-7 回归测试'],
          ['tests/directed/csrr_mcause.S', 'ERR-129 mcause 验证'],
          ['audit/errata/known-issues.yaml', 'ERR-115~130 登记'],
          ['.qoder/skills/long-task-summary/SKILL.md', '本总结的 Skill 模板'],
        ]}
      />

      <Text tone="secondary" size="small">
        Generated by /long-task-summary skill | Checkpoint: a23d197 (checkpoint/post-err130-phase4)
      </Text>
    </Stack>
  );
}
