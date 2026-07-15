// =================================================================
// LUMI-DESIGN-CDC | 需求: T-MS3-S3-BF.1.4, LUMI-BUS-005 | 承接: design/pma-axi.html §4.1
// 模块: lumi_cdc_sync — 跨时钟域同步器集合
// 阶段: M3 Batch-2 CDC 修复
// 作者: Qoder Agent | 日期: 2026-07-14
// =================================================================
//
// 功能概述:
//   - lumi_cdc_2ff_sync: 单 bit 2-FF（可配级数）同步器
//   - lumi_cdc_async_fifo: 深度可配异步 FIFO（格雷码指针）
//
// 约束:
//   - 标准 SystemVerilog，无 vendor-specific IP
//   - 复位为异步低电平复位
// =================================================================

module lumi_cdc_2ff_sync #(
    parameter int STAGES = 2
) (
    input  logic clk_dst,
    input  logic rst_n,
    input  logic din,
    output logic dout
);

    logic [STAGES-1:0] sync_reg;

    always_ff @(posedge clk_dst or negedge rst_n) begin
        if (!rst_n) begin
            sync_reg <= '0;
        end else begin
            sync_reg <= {sync_reg[STAGES-2:0], din};
        end
    end

    assign dout = sync_reg[STAGES-1];

endmodule


module lumi_cdc_async_fifo #(
    parameter int DATA_WIDTH = 32,
    parameter int DEPTH      = 4,
    parameter int PTR_WIDTH  = $clog2(DEPTH)
) (
    // 写时钟域
    input  logic                  clk_wr,
    input  logic                  rst_n_wr,
    input  logic                  wr_en,
    input  logic [DATA_WIDTH-1:0] wr_data,
    output logic                  wr_full,

    // 读时钟域
    input  logic                  clk_rd,
    input  logic                  rst_n_rd,
    input  logic                  rd_en,
    output logic [DATA_WIDTH-1:0] rd_data,
    output logic                  rd_empty
);

    // -----------------------------------------------------------------
    // 存储器与指针
    // -----------------------------------------------------------------
    logic [DATA_WIDTH-1:0] mem [DEPTH];

    logic [PTR_WIDTH:0] wr_ptr_bin;
    logic [PTR_WIDTH:0] rd_ptr_bin;
    logic [PTR_WIDTH:0] wr_ptr_gray;
    logic [PTR_WIDTH:0] rd_ptr_gray;
    logic [PTR_WIDTH:0] wr_ptr_gray_sync0, wr_ptr_gray_sync1;
    logic [PTR_WIDTH:0] rd_ptr_gray_sync0, rd_ptr_gray_sync1;

    // -----------------------------------------------------------------
    // 格雷码 / 二进制转换函数
    // -----------------------------------------------------------------
    function automatic logic [PTR_WIDTH:0] bin2gray(logic [PTR_WIDTH:0] bin);
        return bin ^ (bin >> 1);
    endfunction

    function automatic logic [PTR_WIDTH:0] gray2bin(logic [PTR_WIDTH:0] gray);
        logic [PTR_WIDTH:0] bin;
        bin[PTR_WIDTH] = gray[PTR_WIDTH];
        for (int i = PTR_WIDTH - 1; i >= 0; i--) begin
            bin[i] = gray[i] ^ bin[i+1];
        end
        return bin;
    endfunction

    // -----------------------------------------------------------------
    // 写时钟域逻辑
    // -----------------------------------------------------------------
    always_ff @(posedge clk_wr or negedge rst_n_wr) begin
        if (!rst_n_wr) begin
            wr_ptr_bin <= '0;
        end else if (wr_en && !wr_full) begin
            mem[wr_ptr_bin[PTR_WIDTH-1:0]] <= wr_data;
            wr_ptr_bin <= wr_ptr_bin + 1'b1;
        end
    end

    assign wr_ptr_gray = bin2gray(wr_ptr_bin);

    // 读指针经 2-FF 同步到写时钟域
    always_ff @(posedge clk_wr or negedge rst_n_wr) begin
        if (!rst_n_wr) begin
            rd_ptr_gray_sync0 <= '0;
            rd_ptr_gray_sync1 <= '0;
        end else begin
            rd_ptr_gray_sync0 <= rd_ptr_gray;
            rd_ptr_gray_sync1 <= rd_ptr_gray_sync0;
        end
    end

    // 写满：最高位与次高位不同，其余位相同
    assign wr_full = (wr_ptr_gray == {~rd_ptr_gray_sync1[PTR_WIDTH:PTR_WIDTH-1],
                                        rd_ptr_gray_sync1[PTR_WIDTH-2:0]});

    // -----------------------------------------------------------------
    // 读时钟域逻辑
    // -----------------------------------------------------------------
    always_ff @(posedge clk_rd or negedge rst_n_rd) begin
        if (!rst_n_rd) begin
            rd_ptr_bin <= '0;
        end else if (rd_en && !rd_empty) begin
            rd_ptr_bin <= rd_ptr_bin + 1'b1;
        end
    end

    assign rd_data = mem[rd_ptr_bin[PTR_WIDTH-1:0]];
    assign rd_ptr_gray = bin2gray(rd_ptr_bin);

    // 写指针经 2-FF 同步到读时钟域
    always_ff @(posedge clk_rd or negedge rst_n_rd) begin
        if (!rst_n_rd) begin
            wr_ptr_gray_sync0 <= '0;
            wr_ptr_gray_sync1 <= '0;
        end else begin
            wr_ptr_gray_sync0 <= wr_ptr_gray;
            wr_ptr_gray_sync1 <= wr_ptr_gray_sync0;
        end
    end

    assign rd_empty = (rd_ptr_gray == wr_ptr_gray_sync1);

endmodule
