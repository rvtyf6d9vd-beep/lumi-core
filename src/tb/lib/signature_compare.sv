// =================================================================
// LUMI-V1 | 签名比较器 — riscv-arch-test 签名验证
// 从 AXI Memory BFM 读取签名段, 与参考文件逐 word 比较。
// =================================================================

module signature_compare #(
    parameter int MEM_DEPTH = 65536  // Memory 深度 (words)
);

  // ─── 比较状态 ──────────────────────────────────────────────
  typedef enum logic [1:0] {
    SC_IDLE, SC_READING, SC_COMPARE, SC_DONE
  } sc_state_e;

  sc_state_e state;

  // ─── 结果统计 ──────────────────────────────────────────────
  int unsigned total_words;
  int unsigned match_count;
  int unsigned mismatch_count;
  int unsigned sig_base_word;   // begin_signature / 4 (word offset)
  int unsigned sig_end_word;    // end_signature / 4

  // ─── 参考签名文件路径 (由 plusarg +sig_file= 指定) ────────
  string sig_ref_file;
  logic [31:0] ref_data [0:4095];  // 最大 4K words 签名
  int unsigned ref_word_count;

  // ─── 从文件加载参考签名 ────────────────────────────────────
  function automatic int load_reference(input string filename);
    int fd;
    int cnt;
    logic [31:0] word;
    fd = $fopen(filename, "r");
    if (fd == 0) begin
      $display("[SIG_CMP] ERROR: Cannot open reference file: %s", filename);
      return -1;
    end
    cnt = 0;
    while (!$feof(fd)) begin
      if ($fscanf(fd, "%h", word) == 1) begin
        if (cnt < 4096) begin
          ref_data[cnt] = word;
          cnt++;
        end
      end
    end
    $fclose(fd);
    $display("[SIG_CMP] Loaded %0d reference words from %s", cnt, filename);
    return cnt;
  endfunction

  // ─── 从 Memory BFM 读取签名并比较 ─────────────────────────
  // 需要外部在适当时候调用 compare_signature task
  task automatic compare_signature(
    input int unsigned sig_start_addr,  // byte address of begin_signature
    input int unsigned sig_end_addr,    // byte address of end_signature
    input string       ref_file         // reference signature file
  );
    int unsigned start_word, end_word;
    int unsigned i;
    logic [31:0] actual;

    $display("\n=== Signature Compare ===");
    $display("[SIG_CMP] Signature range: 0x%08h ~ 0x%08h", sig_start_addr, sig_end_addr);

    ref_word_count = load_reference(ref_file);
    if (ref_word_count < 0) begin
      $display("[SIG_CMP] FAIL: Could not load reference");
      return;
    end

    start_word = sig_start_addr >> 2;
    end_word   = sig_end_addr >> 2;
    total_words = end_word - start_word;

    if (total_words > 4096) begin
      $display("[SIG_CMP] WARN: Signature too large (%0d words), truncating", total_words);
      total_words = 4096;
    end

    match_count    = 0;
    mismatch_count = 0;

    // 比较通过 hierarchical access 读取 BFM 内存
    // 外部模块需要提供 read_word function
    for (i = 0; i < total_words; i++) begin
      // 通过 function call 读取 — 由顶层 TB 提供
      actual = read_mem_word(start_word + i);
      if (actual === ref_data[i]) begin
        match_count++;
      end else begin
        mismatch_count++;
        if (mismatch_count <= 10)  // 只打印前 10 个不匹配
          $display("[SIG_CMP] MISMATCH @ word[%0d] (0x%08h): actual=0x%08h expected=0x%08h",
                   i, (start_word + i) << 2, actual, ref_data[i]);
      end
    end

    $display("[SIG_CMP] Total: %0d, Match: %0d, Mismatch: %0d",
             total_words, match_count, mismatch_count);
    if (mismatch_count == 0)
      $display("[SIG_CMP] RESULT: PASS");
    else
      $display("[SIG_CMP] RESULT: FAIL (%0d mismatches)", mismatch_count);
  endtask

endmodule
