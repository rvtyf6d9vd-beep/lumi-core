// =================================================================
// LUMI-TB-AGENT | 需求: LUMI-TB-001 | 承接: pma-axi.html
// 模块: axi_memory_bfm — AXI4 Slave Memory Model (Verilator 兼容)
// 阶段: M3-S1 Task 0 | 日期: 2026-07-07
// =================================================================
// 功能: 响应 AXI4 Master 读写请求, 模拟 128-bit 数据总线 SRAM
// 支持: INCR burst, byte strobe, 可配置延迟
// Verilator 兼容: 使用 task/function + 非 UVM class

module axi_memory_bfm #(
  parameter int MEM_SIZE   = 256 * 1024,  // 256 KiB default
  parameter int ADDR_WIDTH = 32,
  parameter int DATA_WIDTH = 128,
  parameter int ID_WIDTH   = 4,
  parameter int READ_LATENCY  = 3,    // 读响应延迟 (cycle)
  parameter int WRITE_LATENCY = 2     // 写响应延迟 (cycle)
)(
  input  logic                  clk,
  input  logic                  reset_n,

  // Write Address Channel
  input  logic [ID_WIDTH-1:0]   awid,
  input  logic [ADDR_WIDTH-1:0] awaddr,
  input  logic [7:0]            awlen,
  input  logic [2:0]            awsize,
  input  logic [1:0]            awburst,
  input  logic                  awvalid,
  output logic                  awready,

  // Write Data Channel
  input  logic [DATA_WIDTH-1:0] wdata,
  input  logic [DATA_WIDTH/8-1:0] wstrb,
  input  logic                  wlast,
  input  logic                  wvalid,
  output logic                  wready,

  // Write Response Channel
  output logic [ID_WIDTH-1:0]   bid,
  output logic [1:0]            bresp,
  output logic                  bvalid,
  input  logic                  bready,

  // Read Address Channel
  input  logic [ID_WIDTH-1:0]   arid,
  input  logic [ADDR_WIDTH-1:0] araddr,
  input  logic [7:0]            arlen,
  input  logic [2:0]            arsize,
  input  logic [1:0]            arburst,
  input  logic                  arvalid,
  output logic                  arready,

  // Read Data Channel
  output logic [ID_WIDTH-1:0]   rid,
  output logic [DATA_WIDTH-1:0] rdata,
  output logic [1:0]            rresp,
  output logic                  rlast,
  output logic                  rvalid,
  input  logic                  rready
);

  // ─── 内存数组 ──────────────────────────────────────────────
  localparam int BYTES_PER_LINE = DATA_WIDTH / 8;  // 16 bytes
  localparam int NUM_LINES = MEM_SIZE / BYTES_PER_LINE;

  logic [DATA_WIDTH-1:0] mem [0:NUM_LINES-1];

  // ─── 统计计数器 ────────────────────────────────────────────
  int unsigned read_count;
  int unsigned write_count;
  int unsigned error_count;

  // ─── 地址映射函数 ──────────────────────────────────────────
  function automatic int unsigned addr_to_line(logic [ADDR_WIDTH-1:0] addr);
    return (addr / BYTES_PER_LINE) % NUM_LINES;
  endfunction

  // ─── 内存初始化 ────────────────────────────────────────────
  initial begin
    for (int i = 0; i < NUM_LINES; i++) mem[i] = '0;
    read_count  = 0;
    write_count = 0;
    error_count = 0;
  end

  // ─── 内存加载 (ELF/Binary) ────────────────────────────────
  task automatic load_hex(input string filename);
    $readmemh(filename, mem);
    $display("[AXI-BFM] Loaded %s (%0d lines)", filename, NUM_LINES);
  endtask

  // ─── 内存直读直写 (测试程序用) ─────────────────────────────
  task automatic mem_write32(input logic [31:0] addr, input logic [31:0] data);
    int unsigned line = addr_to_line({addr[31:4], 4'b0000});
    int unsigned byte_offset = addr[3:0];
    logic [DATA_WIDTH-1:0] line_data;
    line_data = mem[line];
    case (byte_offset)
      4'h0: line_data[31:0]   = data;
      4'h4: line_data[63:32]  = data;
      4'h8: line_data[95:64]  = data;
      4'hC: line_data[127:96] = data;
      default: line_data[31:0] = data; // 对齐到 line 起始
    endcase
    mem[line] = line_data;
  endtask

  function automatic logic [31:0] mem_read32(input logic [31:0] addr);
    int unsigned line = addr_to_line({addr[31:4], 4'b0000});
    int unsigned byte_offset = addr[3:0];
    case (byte_offset)
      4'h0: return mem[line][31:0];
      4'h4: return mem[line][63:32];
      4'h8: return mem[line][95:64];
      4'hC: return mem[line][127:96];
      default: return mem[line][31:0];
    endcase
  endfunction

  // ─── 写通道状态机 ─────────────────────────────────────────
  typedef enum logic [1:0] {
    W_IDLE, W_DATA, W_RESP
  } wr_state_e;

  wr_state_e wr_state;
  logic [ID_WIDTH-1:0]   wr_id;
  logic [ADDR_WIDTH-1:0] wr_addr;
  logic [7:0]            wr_len;
  logic [2:0]            wr_size;
  int                    wr_beat;

  always_ff @(posedge clk or negedge reset_n) begin
    if (!reset_n) begin
      wr_state  <= W_IDLE;
      awready   <= 1'b1;
      wready    <= 1'b0;
      bvalid    <= 1'b0;
      bid       <= '0;
      bresp     <= 2'b00;
      wr_beat   <= 0;
    end else begin
      case (wr_state)
        W_IDLE: begin
          awready <= 1'b1;
          wready  <= 1'b0;
          bvalid  <= 1'b0;
          if (awvalid && awready) begin
            wr_id    <= awid;
            wr_addr  <= awaddr;
            wr_len   <= awlen;
            wr_size  <= awsize;
            wr_state <= W_DATA;
            awready  <= 1'b0;
            wready   <= 1'b1;
            wr_beat  <= 0;
          end
        end

        W_DATA: begin
          if (wvalid && wready) begin
            // 写入内存 (byte strobe)
            begin
              int unsigned line = addr_to_line(wr_addr);
              logic [DATA_WIDTH-1:0] mask;
              for (int b = 0; b < BYTES_PER_LINE; b++) begin
                mask[b*8 +: 8] = wstrb[b] ? 8'hFF : 8'h00;
              end
              mem[line] = (mem[line] & ~mask) | (wdata & mask);
            end
            wr_addr <= wr_addr + (1 << wr_size);
            wr_beat <= wr_beat + 1;
            if (wlast) begin
              wready   <= 1'b0;
              wr_state <= W_RESP;
              bid      <= wr_id;
              bresp    <= 2'b00; // OKAY
              bvalid   <= 1'b1;
              write_count++;
            end
          end
        end

        W_RESP: begin
          if (bvalid && bready) begin
            bvalid   <= 1'b0;
            wr_state <= W_IDLE;
            awready  <= 1'b1;
          end
        end
      endcase
    end
  end

  // ─── 读通道状态机 ─────────────────────────────────────────
  typedef enum logic [1:0] {
    R_IDLE, R_DATA
  } rd_state_e;

  rd_state_e rd_state;
  logic [ID_WIDTH-1:0]   rd_id;
  logic [ADDR_WIDTH-1:0] rd_addr;
  logic [7:0]            rd_len;
  logic [2:0]            rd_size;
  int                    rd_beat;

  always_ff @(posedge clk or negedge reset_n) begin
    if (!reset_n) begin
      rd_state <= R_IDLE;
      arready  <= 1'b1;
      rvalid   <= 1'b0;
      rid      <= '0;
      rdata    <= '0;
      rresp    <= 2'b00;
      rlast    <= 1'b0;
      rd_beat  <= 0;
    end else begin
      case (rd_state)
        R_IDLE: begin
          arready <= 1'b1;
          rvalid  <= 1'b0;
          if (arvalid && arready) begin
            rd_id    <= arid;
            rd_addr  <= araddr;
            rd_len   <= arlen;
            rd_size  <= arsize;
            rd_state <= R_DATA;
            arready  <= 1'b0;
            rd_beat  <= 0;
          end
        end

        R_DATA: begin
          if (!rvalid || rready) begin
            int unsigned line = addr_to_line(rd_addr);
            rid    <= rd_id;
            rdata  <= mem[line];
            rresp  <= 2'b00; // OKAY
            rlast  <= (rd_beat == rd_len) ? 1'b1 : 1'b0;
            rvalid <= 1'b1;
            rd_addr <= rd_addr + (1 << rd_size);
            rd_beat <= rd_beat + 1;
            if (rd_beat == rd_len) begin
              read_count++;
              // 最后一个 beat, rvalid 保持直到 rready
            end
          end
          // 最后一个 beat 被接受后回到 IDLE
          if (rd_state == R_DATA && rvalid && rready && rlast) begin
            rvalid   <= 1'b0;
            rd_state <= R_IDLE;
            arready  <= 1'b1;
          end
        end
      endcase
    end
  end

  // ─── 报告 ─────────────────────────────────────────────────
  function automatic void report_stats();
    $display("[AXI-BFM] Reads: %0d, Writes: %0d, Errors: %0d",
             read_count, write_count, error_count);
  endfunction

endmodule
