import { Divider, Grid, H1, H2, H3, Stack, Stat, Table, Text, Callout } from 'qoder/canvas';

export default function Err131FinalReport() {
  return (
    <Stack gap={20}>
      <H1>ERR-131 调试最终报告</H1>
      <Text tone="secondary">CoreMark V1 CODE-WR 根因分析 | T-MS3-S1-7 | checkpoint: 9a69dcc</Text>

      <Grid columns={4} gap={12}>
        <Stat value="16" label="ERR-115~130 已修复" tone="success" />
        <Stat value="7/7" label="回归测试 PASS" tone="success" />
        <Stat value="1" label="剩余架构问题" tone="danger" />
        <Stat value="5" label="修复尝试(失败)" tone="warning" />
      </Grid>

      <Callout tone="warning" title="剩余问题: 需要序列号 Squash 机制">
        所有简单修复已穷尽。CoreMark CODE-WR 的根因是 DIB 全量 flush 清除正确路径指令。
        需要实现序列号 squash: 每个 DIB 条目带序列号，flush 只清除序列号大于 mispredicted branch 的条目。
      </Callout>

      <Divider />

      <H2>完整根因链</H2>
      <Table
        headers={['步骤', '事件', '影响']}
        rows={[
          ['1', '前向分支 0x4AA0 冷启动误预测 (BTB miss, predicted not-taken, actually taken)', '触发 flush'],
          ['2', 'Flush 清除 DIB 全部条目 (包括指针计算指令)', '指针计算指令丢失'],
          ['3', 'Redirect 到 0x4DD8, lw a1,12(s0) 从内存加载', '加载到错误值 0x02'],
          ['4', '内存中指针值为 0x02 (pointer store 被更早的 flush 丢弃)', '指针未正确初始化'],
          ['5', 'core_list_init 用 a1=0x02 调用', '错误 memblock 指针'],
          ['6', 'sw zero,0(a1) at 0xBC8 写地址 0x02 (misaligned word)', '拆分为 0x00+0x04'],
          ['7', 'CODE-WR 破坏 boot code at 0x00', '程序崩溃/重启'],
        ]}
        rowTone={['danger','danger','warning','warning','warning','danger','danger']}
      />

      <Divider />

      <H2>已尝试的修复方案</H2>
      <Table
        headers={['方案', '描述', '结果', '失败原因']}
        rows={[
          ['ERR-131a~j', 'pipe_stall/BTB/预测优化 (6个commit)', '部分有效', '减少误预测频率但不消除'],
          ['路径 C: 移除 mem_busy', 'stall_port1 不阻塞 issue', '回归失败', 'pending_port1_r 冲突'],
          ['路径 E: DIB epoch', 'epoch 标记区分正确/错误路径', '不可行', '所有 DIB 条目都在 branch 之后'],
          ['DIB flush cooldown', 'flush 后 N cycle 不再 flush', '无效', '第一次 flush 已造成损害'],
          ['DIB depth 64', '增大 DIB 减少溢出', '无效', '问题非 DIB 溢出'],
        ]}
        rowTone={['warning','danger','danger','danger','danger']}
      />

      <Divider />

      <H2>下一步: 序列号 Squash 机制</H2>
      <Table
        headers={['组件', '变更', '复杂度']}
        rows={[
          ['lumi_decode_issue.sv', 'DIB entry 增加 seq_num 字段 (8-bit)', '中'],
          ['lumi_core_top.sv', 'issue 时分配递增序列号', '低'],
          ['lumi_core_top.sv', 'mispredict 时传递 branch_seq_num', '低'],
          ['lumi_decode_issue.sv', 'flush 只清除 seq > branch_seq 的条目', '中'],
          ['验证', 'rv32i-misalign + bug-regression + CoreMark', '低'],
        ]}
      />

      <Divider />

      <H2>Git 历史 (ERR-131 相关)</H2>
      <Table
        headers={['Commit', '内容']}
        rows={[
          ['9a69dcc', 'debug: root cause confirmed - cascading flush'],
          ['21a7def', 'fix(ERR-131j): remove e1_has_branch from pipe_stall'],
          ['40877f6', 'fix(ERR-131i): backward-branch-taken heuristic'],
          ['8362a3c', 'fix(ERR-131h): F1 direct JAL detection'],
          ['e165a07', 'fix(ERR-131g): protect JAL/JALR BTB entries'],
          ['0b89838', 'refactor: simplify DIB flush + flush_taken port'],
        ]}
      />

      <Text tone="secondary" size="small">
        架构约束: 8级流水线不变 | Gem5 MinorCPU 对齐 | 序列号 squash 在 D/I 级内部实现
      </Text>
    </Stack>
  );
}
