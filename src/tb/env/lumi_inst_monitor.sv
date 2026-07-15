// =================================================================
// LUMI-V1 | 指令监视器 — 多槽 W 级 commit 监视 (ISSUE_WIDTH slots)
// 捕获每条 retired 指令的 PC / 指令字 / rd / rd_value。
// =================================================================

module lumi_inst_monitor #(
    parameter int ISSUE_WIDTH = 3
) (
    input logic        clk_core,
    input logic        reset_n,

    // ─── W 级 commit 信号 (多槽) ────────────────────────────
    input logic [ISSUE_WIDTH-1:0]        commit_valid,
    input logic [ISSUE_WIDTH-1:0][31:0]  commit_pc,
    input logic [ISSUE_WIDTH-1:0][31:0]  commit_inst,
    input logic [ISSUE_WIDTH-1:0][4:0]   commit_rd,
    input logic [ISSUE_WIDTH-1:0][31:0]  commit_rd_data,
    input logic                          commit_trap,
    input logic                          commit_irq
);

  // ─── 指令跟踪记录 ──────────────────────────────────────────
  typedef struct {
    logic [31:0] pc;
    logic [31:0] inst;
    logic [4:0]  rd;
    logic [31:0] rd_data;
    logic        is_trap;
    logic        is_irq;
    longint unsigned cycle;
  } inst_record_t;

  // ─── 记录缓冲 (环形) ───────────────────────────────────────
  parameter int BUF_DEPTH = 16384;
  inst_record_t trace_buf [0:BUF_DEPTH-1];
  int unsigned trace_wr_ptr;
  int unsigned trace_count;

  // ─── 统计计数器 ────────────────────────────────────────────
  longint unsigned total_retired;
  longint unsigned total_traps;
  longint unsigned total_irqs;
  longint unsigned total_branch_taken;

  // ─── 指令解码辅助 ─────────────────────────────────────────
  function automatic logic is_branch(input logic [31:0] inst);
    return (inst[1:0] == 2'b11 && inst[6:0] == 7'b1100011);
  endfunction

  function automatic logic is_jal(input logic [31:0] inst);
    return (inst[1:0] == 2'b11 && inst[6:0] == 7'b1101111);
  endfunction

  function automatic logic is_jalr(input logic [31:0] inst);
    return (inst[1:0] == 2'b11 && inst[6:0] == 7'b1100111);
  endfunction

  // ─── 初始化 ────────────────────────────────────────────────
  int realtime_fd;  // ERR-025 验证用: 实时写盘 fd
  initial begin
    trace_wr_ptr  = 0;
    trace_count   = 0;
    total_retired = 0;
    total_traps   = 0;
    total_irqs    = 0;
    total_branch_taken = 0;
    // ERR-025 验证: 实时 trace 写盘 (每次 commit 即写)
    realtime_fd = 0;
  end

  // ─── 主监视逻辑: 遍历所有发射槽 ────────────────────────────
  always_ff @(posedge clk_core) begin
    if (!reset_n) begin
      trace_wr_ptr  <= 0;
      trace_count   <= 0;
      total_retired <= 0;
      total_traps   <= 0;
      total_irqs    <= 0;
      total_branch_taken <= 0;
    end else begin
      for (int s = 0; s < ISSUE_WIDTH; s++) begin
        if (commit_valid[s]) begin
          trace_buf[trace_wr_ptr].pc      <= commit_pc[s];
          trace_buf[trace_wr_ptr].inst    <= commit_inst[s];
          trace_buf[trace_wr_ptr].rd      <= commit_rd[s];
          trace_buf[trace_wr_ptr].rd_data <= commit_rd_data[s];
          trace_buf[trace_wr_ptr].is_trap <= commit_trap;
          trace_buf[trace_wr_ptr].is_irq  <= commit_irq;
          trace_buf[trace_wr_ptr].cycle   <= trace_count;

          trace_wr_ptr  <= (trace_wr_ptr + 1) % BUF_DEPTH;
          trace_count   <= trace_count + 1;
          total_retired <= total_retired + 1;

          if (commit_trap) total_traps <= total_traps + 1;
          if (commit_irq)  total_irqs  <= total_irqs + 1;

          if (is_branch(commit_inst[s]) || is_jal(commit_inst[s]) || is_jalr(commit_inst[s]))
            total_branch_taken <= total_branch_taken + 1;

          // ERR-025 验证: 实时 trace 写盘 (debug only, 监控 stall)
          if (realtime_fd != 0) begin
            $fwrite(realtime_fd, "%08h %08h x%02d  %08h %0d\n",
                    commit_pc[s], commit_inst[s],
                    commit_rd[s], commit_rd_data[s],
                    trace_count);
          end
        end
      end
    end
  end

  // ─── 报告函数 ──────────────────────────────────────────────
  function automatic void report_stats();
    $display("===========================================");
    $display(" Instruction Monitor Statistics");
    $display("===========================================");
    $display(" Total Retired:        %0d", total_retired);
    $display(" Total Traps:          %0d", total_traps);
    $display(" Total IRQs Accepted:  %0d", total_irqs);
    $display(" Branch Taken:         %0d", total_branch_taken);
    $display("===========================================");
  endfunction

  // ─── 导出跟踪到文件 ────────────────────────────────────────
  task automatic dump_trace(input string filename);
    int fd;
    int i;
    int count;
    fd = $fopen(filename, "w");
    if (fd == 0) begin
      $display("[MON] ERROR: Cannot open trace file: %s", filename);
      return;
    end
    count = (trace_count < BUF_DEPTH) ? trace_count : BUF_DEPTH;
    $fwrite(fd, "# PC        INST        RD   RD_DATA      CYCLE\n");
    for (i = 0; i < count; i++) begin
      $fwrite(fd, "%08h %08h x%02d  %08h %0d\n",
              trace_buf[i].pc, trace_buf[i].inst,
              trace_buf[i].rd, trace_buf[i].rd_data,
              trace_buf[i].cycle);
    end
    $fclose(fd);
    $display("[MON] Dumped %0d trace records to %s", count, filename);
  endtask

  // ─── 实时 trace 任务 (ERR-025 验证) ────────────────────────
  task automatic enable_realtime_trace(input string filename);
    if (realtime_fd != 0) begin
      $fclose(realtime_fd);
    end
    realtime_fd = $fopen(filename, "w");
    if (realtime_fd == 0) begin
      $display("[MON] ERROR: Cannot open realtime trace: %s", filename);
    end else begin
      $fwrite(realtime_fd, "# PC        INST        RD   RD_DATA      CYCLE\n");
      $display("[MON] Realtime trace ENABLED: %s", filename);
    end
  endtask

  task automatic disable_realtime_trace();
    if (realtime_fd != 0) begin
      $fclose(realtime_fd);
      realtime_fd = 0;
      $display("[MON] Realtime trace DISABLED");
    end
  endtask

endmodule
