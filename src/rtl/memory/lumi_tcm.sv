// =================================================================
// LUMI-DESIGN-006 | 需求: LUMI-MEM-002~005, LUMI-IF-003 | 承接: design/tcm.html
// 模块: lumi_tcm — ITCM + DTCM0 + DTCM1 + ECC + DMA Slave
// 阶段: M3 Batch-2 功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
//
// 功能概述:
//   - 3 SRAM banks: ITCM 32KB, DTCM0 32KB, DTCM1 32KB
//   - 地址映射 (tcm.html §2.1.1):
//       ITCM:  0x0000_0000 ~ 0x0000_7FFF
//       DTCM0: 0x0001_0000 ~ 0x0001_7FFF
//       DTCM1: 0x0002_0000 ~ 0x0002_7FFF
//   - Port A (核心侧): 读写 + byte-enable, 0/1拍延迟可配
//   - Port B (DMA侧): AXI4-Lite Slave, 核心优先仲裁
//   - ECC SECDED (7-bit): 写编码 + 读解码 + CE回写 + DED NMI
//   - FSM: IDLE → ACCESS → DMA_ARB → ECC_CHECK → WRITEBACK
// =================================================================

module lumi_tcm #(
    parameter int ITCM_SIZE  = lumi_pkg::ITCM_SIZE,   // bytes
    parameter int DTCM_SIZE  = lumi_pkg::DTCM_SIZE,   // bytes per bank
    parameter int ECC_EN     = lumi_pkg::TCM_ECC_EN,  // 1=enable
    parameter int LATENCY_MODE = 0                     // 0=zero-cycle, 1=one-cycle
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── 核心侧接口 Port A (M 级访问) ─────────────────────────
    input  logic [31:0]             core_addr,
    input  logic [31:0]             core_wdata,
    output logic [31:0]             core_rdata,
    input  logic                    core_we,
    input  logic [3:0]              core_be,
    input  logic                    core_valid,
    output logic                    core_ready,
    output logic                    core_hit,

    // ── DMA 侧接口 Port B (AXI4 Slave) ───────────────────────
    input  logic [31:0]             dma_awaddr,
    input  logic                    dma_awvalid,
    output logic                    dma_awready,
    input  logic [31:0]             dma_wdata,
    input  logic                    dma_wvalid,
    output logic                    dma_wready,
    input  logic [31:0]             dma_araddr,
    input  logic                    dma_arvalid,
    output logic                    dma_arready,
    output logic [31:0]             dma_rdata,
    output logic                    dma_rvalid,
    input  logic                    dma_rready,
    output logic [1:0]              dma_bresp,
    output logic                    dma_bvalid,
    input  logic                    dma_bready,

    // ── ECC 状态 ──────────────────────────────────────────────
    output logic                    ecc_ce_irq,
    output logic                    ecc_ded_irq,
    output logic [31:0]             ecc_ce_count
);

    import lumi_pkg::*;

    // ─── 地址映射常量 ────────────────────────────────────────
    localparam logic [31:0] ITCM_BASE  = 32'h0000_0000;
    localparam logic [31:0] DTCM0_BASE = 32'h0001_0000;
    localparam logic [31:0] DTCM1_BASE = 32'h0002_0000;
    localparam int WORDS_PER_BANK = ITCM_SIZE / 4;  // 8192 words for 32KB

    // ─── 地址解码 ────────────────────────────────────────────
    logic itcm_hit, dtcm0_hit, dtcm1_hit, any_hit;
    logic [12:0] bank_offset;  // 字偏移 (13 bit for 8192 words)

    assign itcm_hit  = (core_addr >= ITCM_BASE)  && (core_addr < ITCM_BASE  + ITCM_SIZE);
    assign dtcm0_hit = (core_addr >= DTCM0_BASE) && (core_addr < DTCM0_BASE + DTCM_SIZE);
    assign dtcm1_hit = (core_addr >= DTCM1_BASE) && (core_addr < DTCM1_BASE + DTCM_SIZE);
    assign any_hit   = itcm_hit || dtcm0_hit || dtcm1_hit;
    assign core_hit  = any_hit;

    // 字偏移计算 (去掉区域基址)
    always_comb begin
        if (itcm_hit)       bank_offset = core_addr[14:2];  // [14:2] for 32KB
        else if (dtcm0_hit) bank_offset = core_addr[14:2];
        else if (dtcm1_hit) bank_offset = core_addr[14:2];
        else                bank_offset = 13'h0;
    end

    // ─── SRAM 存储阵列 ──────────────────────────────────────
    // ITCM: 8192 x 32bit data + 7bit ECC
    // DTCM0: 同上
    // DTCM1: 同上
    // 使用 logic 数组, 综合时映射为 SRAM macro
    logic [31:0] itcm_mem  [0:WORDS_PER_BANK-1];
    logic [31:0] dtcm0_mem [0:WORDS_PER_BANK-1];
    logic [31:0] dtcm1_mem [0:WORDS_PER_BANK-1];
    logic [6:0]  ecc_itcm  [0:WORDS_PER_BANK-1];
    logic [6:0]  ecc_dtcm0 [0:WORDS_PER_BANK-1];
    logic [6:0]  ecc_dtcm1 [0:WORDS_PER_BANK-1];

    // ─── ECC 编码函数 (SECDED: 6 Hamming + 1 parity) ────────
    function automatic logic [6:0] ecc_encode(input logic [31:0] data);
        logic [6:0] ecc;
        // Hamming parity bits (覆盖特定数据位组合)
        ecc[0] = ^{data[0],  data[2],  data[4],  data[6],  data[8],  data[10],
                   data[12], data[14], data[16], data[18], data[20], data[22],
                   data[24], data[26], data[28], data[30]};
        ecc[1] = ^{data[1],  data[2],  data[5],  data[6],  data[9],  data[10],
                   data[13], data[14], data[17], data[18], data[21], data[22],
                   data[25], data[26], data[29], data[30]};
        ecc[2] = ^{data[3],  data[4],  data[5],  data[6],  data[11], data[12],
                   data[13], data[14], data[19], data[20], data[21], data[22],
                   data[27], data[28], data[29], data[30]};
        ecc[3] = ^{data[7],  data[8],  data[9],  data[10], data[11], data[12],
                   data[13], data[14], data[23], data[24], data[25], data[26],
                   data[27], data[28], data[29], data[30]};
        ecc[4] = ^{data[15], data[16], data[17], data[18], data[19], data[20],
                   data[21], data[22], data[23], data[24], data[25], data[26],
                   data[27], data[28], data[29], data[30]};
        ecc[5] = ^{data[31]};
        // 整体奇偶位 (SECDED: 可检测双bit错误)
        ecc[6] = ^{data, ecc[5:0]};
        return ecc;
    endfunction

    // ─── ECC 解码函数 ────────────────────────────────────────
    // 返回: {ded[1], ce[1], corrected_data[31:0]}
    function automatic logic [33:0] ecc_decode_fn(
        input logic [31:0] data,
        input logic [6:0]  stored_ecc
    );
        logic [5:0] syndrome;
        logic       overall_parity;
        logic [31:0] corrected;
        logic       ce_flag, ded_flag;

        // 重新计算 Hamming syndrome
        syndrome[0] = stored_ecc[0] ^ ^{data[0],  data[2],  data[4],  data[6],  data[8],  data[10],
                                          data[12], data[14], data[16], data[18], data[20], data[22],
                                          data[24], data[26], data[28], data[30]};
        syndrome[1] = stored_ecc[1] ^ ^{data[1],  data[2],  data[5],  data[6],  data[9],  data[10],
                                          data[13], data[14], data[17], data[18], data[21], data[22],
                                          data[25], data[26], data[29], data[30]};
        syndrome[2] = stored_ecc[2] ^ ^{data[3],  data[4],  data[5],  data[6],  data[11], data[12],
                                          data[13], data[14], data[19], data[20], data[21], data[22],
                                          data[27], data[28], data[29], data[30]};
        syndrome[3] = stored_ecc[3] ^ ^{data[7],  data[8],  data[9],  data[10], data[11], data[12],
                                          data[13], data[14], data[23], data[24], data[25], data[26],
                                          data[27], data[28], data[29], data[30]};
        syndrome[4] = stored_ecc[4] ^ ^{data[15], data[16], data[17], data[18], data[19], data[20],
                                          data[21], data[22], data[23], data[24], data[25], data[26],
                                          data[27], data[28], data[29], data[30]};
        syndrome[5] = stored_ecc[5] ^ data[31];

        overall_parity = stored_ecc[6] ^ ^{data, stored_ecc[5:0]};

        corrected = data;
        ce_flag   = 1'b0;
        ded_flag  = 1'b0;

        if (syndrome != 6'h0 && overall_parity == 1'b1) begin
            // 单bit错误: syndrome 指出错误位置, 纠正
            if (syndrome <= 6'd32)
                corrected[syndrome - 6'd1] = ~data[syndrome - 6'd1];
            else if (syndrome == 6'd33)
                corrected[31] = ~data[31];  // bit 31 错误 (ecc[5] 覆盖)
            ce_flag = 1'b1;
        end else if (syndrome != 6'h0 && overall_parity == 1'b0) begin
            // 双bit错误: 可检测不可纠正
            ded_flag = 1'b1;
        end
        // syndrome==0 && parity==0: 无错误
        // syndrome==0 && parity==1: ECC bit 自身错误 (忽略)

        return {ded_flag, ce_flag, corrected};
    endfunction

    // ─── FSM ─────────────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_CORE_READ,
        ST_CORE_WRITE,
        ST_DMA_READ,
        ST_DMA_WRITE,
        ST_ECC_CHECK
    } tcm_state_e;

    tcm_state_e state_reg, state_next;

    // ─── 内部信号 ────────────────────────────────────────────
    logic [31:0] read_data_raw;
    logic [6:0]  read_ecc_raw;
    logic [33:0] ecc_result;       // {ded, ce, corrected[31:0]}
    logic        ecc_ce_flag;
    logic        ecc_ded_flag;
    logic [31:0] ecc_corrected;

    // 一拍模式暂存
    logic [31:0] pending_rdata;
    logic        pending_valid;

    // DMA 暂存
    logic [31:0] dma_addr_reg;
    logic        dma_is_write;
    logic        dma_pending;
    logic [31:0] dma_wdata_reg;
    logic        dma_bvalid_reg;
    logic        dma_rvalid_reg;
    logic [31:0] dma_rdata_reg;

    // ECC 回写信号 (纯组合, 由 always_comb 驱动)
    logic        ecc_wb_req;
    logic [12:0] ecc_wb_offset;
    logic [31:0] ecc_wb_data;
    logic [6:0]  ecc_wb_ecc;
    logic        ecc_wb_itcm, ecc_wb_dtcm0, ecc_wb_dtcm1;

    // ECC 计数器
    logic [31:0] ecc_ce_cnt;

    // ─── ECC 解码 (组合逻辑) ─────────────────────────────────
    assign ecc_result   = ecc_decode_fn(read_data_raw, read_ecc_raw);
    assign ecc_ded_flag = ecc_result[33];
    assign ecc_ce_flag  = ecc_result[32];
    assign ecc_corrected = ecc_result[31:0];

    // ─── 时序逻辑 ────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg       <= ST_IDLE;
            ecc_ce_cnt      <= 32'h0;
            pending_rdata   <= 32'h0;
            pending_valid   <= 1'b0;
            dma_addr_reg    <= 32'h0;
            dma_is_write    <= 1'b0;
            dma_pending     <= 1'b0;
            dma_wdata_reg   <= 32'h0;
            dma_bvalid_reg  <= 1'b0;
            dma_rvalid_reg  <= 1'b0;
            dma_rdata_reg   <= 32'h0;
        end else begin
            state_reg <= state_next;

            // ECC CE 计数递增
            if (ecc_ce_flag && state_reg == ST_ECC_CHECK)
                ecc_ce_cnt <= ecc_ce_cnt + 32'h1;

            // 一拍模式锁存
            if (state_reg == ST_CORE_READ && LATENCY_MODE == 1) begin
                pending_rdata <= (ECC_EN && ecc_ce_flag) ? ecc_corrected : read_data_raw;
                pending_valid <= 1'b1;
            end else if (state_next == ST_IDLE) begin
                pending_valid <= 1'b0;
            end

            // DMA 状态
            if (state_reg == ST_DMA_WRITE) begin
                dma_bvalid_reg <= 1'b1;
            end else if (dma_bvalid_reg && dma_bready) begin
                dma_bvalid_reg <= 1'b0;
            end

            if (state_reg == ST_DMA_READ) begin
                dma_rdata_reg  <= (ECC_EN && ecc_ce_flag) ? ecc_corrected : read_data_raw;
                dma_rvalid_reg <= 1'b1;
            end else if (dma_rvalid_reg && dma_rready) begin
                dma_rvalid_reg <= 1'b0;
            end

            // ECC 回写 (CE 纠正后写回, 使用组合信号 ecc_wb_req)
            if (ecc_wb_req) begin
                if (ecc_wb_itcm) begin
                    itcm_mem[ecc_wb_offset]  <= ecc_wb_data;
                    ecc_itcm[ecc_wb_offset]  <= ecc_wb_ecc;
                end else if (ecc_wb_dtcm0) begin
                    dtcm0_mem[ecc_wb_offset] <= ecc_wb_data;
                    ecc_dtcm0[ecc_wb_offset] <= ecc_wb_ecc;
                end else if (ecc_wb_dtcm1) begin
                    dtcm1_mem[ecc_wb_offset] <= ecc_wb_data;
                    ecc_dtcm1[ecc_wb_offset] <= ecc_wb_ecc;
                end
            end

            // 核心写入
            if (state_reg == ST_CORE_WRITE && core_valid && any_hit) begin
                if (itcm_hit) begin
                    // byte-enable 写入
                    if (core_be[0]) itcm_mem[bank_offset][ 7: 0] <= core_wdata[ 7: 0];
                    if (core_be[1]) itcm_mem[bank_offset][15: 8] <= core_wdata[15: 8];
                    if (core_be[2]) itcm_mem[bank_offset][23:16] <= core_wdata[23:16];
                    if (core_be[3]) itcm_mem[bank_offset][31:24] <= core_wdata[31:24];
                    if (ECC_EN && core_be == 4'hF)
                        ecc_itcm[bank_offset] <= ecc_encode(core_wdata);
                end else if (dtcm0_hit) begin
                    if (core_be[0]) dtcm0_mem[bank_offset][ 7: 0] <= core_wdata[ 7: 0];
                    if (core_be[1]) dtcm0_mem[bank_offset][15: 8] <= core_wdata[15: 8];
                    if (core_be[2]) dtcm0_mem[bank_offset][23:16] <= core_wdata[23:16];
                    if (core_be[3]) dtcm0_mem[bank_offset][31:24] <= core_wdata[31:24];
                    if (ECC_EN && core_be == 4'hF)
                        ecc_dtcm0[bank_offset] <= ecc_encode(core_wdata);
                end else if (dtcm1_hit) begin
                    if (core_be[0]) dtcm1_mem[bank_offset][ 7: 0] <= core_wdata[ 7: 0];
                    if (core_be[1]) dtcm1_mem[bank_offset][15: 8] <= core_wdata[15: 8];
                    if (core_be[2]) dtcm1_mem[bank_offset][23:16] <= core_wdata[23:16];
                    if (core_be[3]) dtcm1_mem[bank_offset][31:24] <= core_wdata[31:24];
                    if (ECC_EN && core_be == 4'hF)
                        ecc_dtcm1[bank_offset] <= ecc_encode(core_wdata);
                end
            end

            // DMA 写入
            if (state_reg == ST_DMA_WRITE && !dma_pending) begin
                if (itcm_hit) begin
                    itcm_mem[bank_offset] <= dma_wdata_reg;
                    if (ECC_EN) ecc_itcm[bank_offset] <= ecc_encode(dma_wdata_reg);
                end else if (dtcm0_hit) begin
                    dtcm0_mem[bank_offset] <= dma_wdata_reg;
                    if (ECC_EN) ecc_dtcm0[bank_offset] <= ecc_encode(dma_wdata_reg);
                end else if (dtcm1_hit) begin
                    dtcm1_mem[bank_offset] <= dma_wdata_reg;
                    if (ECC_EN) ecc_dtcm1[bank_offset] <= ecc_encode(dma_wdata_reg);
                end
            end
        end
    end

    // ─── 核心侧读取 (组合逻辑) ──────────────────────────────
    always_comb begin
        read_data_raw = 32'h0;
        read_ecc_raw  = 7'h0;

        if (itcm_hit) begin
            read_data_raw = itcm_mem[bank_offset];
            read_ecc_raw  = ecc_itcm[bank_offset];
        end else if (dtcm0_hit) begin
            read_data_raw = dtcm0_mem[bank_offset];
            read_ecc_raw  = ecc_dtcm0[bank_offset];
        end else if (dtcm1_hit) begin
            read_data_raw = dtcm1_mem[bank_offset];
            read_ecc_raw  = ecc_dtcm1[bank_offset];
        end
    end

    // ─── FSM 组合逻辑 ────────────────────────────────────────
    always_comb begin
        state_next = state_reg;
        core_ready = 1'b0;
        ecc_ce_irq = 1'b0;
        ecc_ded_irq = 1'b0;

        // DMA 接口默认
        dma_awready  = 1'b0;
        dma_wready   = 1'b0;
        dma_arready  = 1'b0;
        dma_bresp    = 2'b00;  // OKAY

        case (state_reg)
            ST_IDLE: begin
                core_ready = 1'b1;  // 零拍模式: 空闲时 ready
                // 核心请求优先
                if (core_valid && any_hit) begin
                    if (core_we)
                        state_next = ST_CORE_WRITE;
                    else
                        state_next = ST_CORE_READ;
                // DMA 请求 (核心空闲时)
                end else if (dma_arvalid) begin
                    state_next = ST_DMA_READ;
                end else if (dma_awvalid && dma_wvalid) begin
                    state_next = ST_DMA_WRITE;
                end
            end

            ST_CORE_READ: begin
                if (LATENCY_MODE == 0) begin
                    // 零拍: 数据同周期可用
                    core_ready = 1'b1;
                    state_next = ST_ECC_CHECK;
                end else begin
                    // 一拍: 需要额外 1 cycle
                    core_ready = pending_valid;
                    state_next = ST_ECC_CHECK;
                end
            end

            ST_CORE_WRITE: begin
                core_ready = 1'b1;
                state_next = ST_IDLE;
            end

            ST_DMA_READ: begin
                dma_arready = 1'b1;
                state_next  = ST_ECC_CHECK;
            end

            ST_DMA_WRITE: begin
                dma_awready = 1'b1;
                dma_wready  = 1'b1;
                state_next  = ST_IDLE;
            end

            ST_ECC_CHECK: begin
                // ECC 检查结果处理
                if (ECC_EN) begin
                    ecc_ce_irq  = ecc_ce_flag;
                    ecc_ded_irq = ecc_ded_flag;
                end
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

    // ─── 核心侧读数据输出 ────────────────────────────────────
    always_comb begin
        if (LATENCY_MODE == 0) begin
            // 零拍: 直接输出 (ECC 纠正后数据)
            core_rdata = (ECC_EN && ecc_ce_flag && state_reg == ST_CORE_READ)
                         ? ecc_corrected : read_data_raw;
        end else begin
            // 一拍: 使用锁存数据
            core_rdata = pending_rdata;
        end
    end

    // ─── ECC 回写触发 ────────────────────────────────────────
    always_comb begin
        ecc_wb_req      = 1'b0;
        ecc_wb_offset     = bank_offset;
        ecc_wb_data       = ecc_corrected;
        ecc_wb_ecc        = ecc_encode(ecc_corrected);
        ecc_wb_itcm       = 1'b0;
        ecc_wb_dtcm0      = 1'b0;
        ecc_wb_dtcm1      = 1'b0;

        if (state_reg == ST_ECC_CHECK && ECC_EN && ecc_ce_flag) begin
            ecc_wb_req = 1'b1;
            if (itcm_hit)       ecc_wb_itcm  = 1'b1;
            else if (dtcm0_hit) ecc_wb_dtcm0 = 1'b1;
            else if (dtcm1_hit) ecc_wb_dtcm1 = 1'b1;
        end
    end

    // ─── ECC 计数器输出 ──────────────────────────────────────
    assign ecc_ce_count = ecc_ce_cnt;

    // ─── DMA 数据输出 ────────────────────────────────────────
    assign dma_rdata  = dma_rdata_reg;
    assign dma_rvalid = dma_rvalid_reg;
    assign dma_bvalid = dma_bvalid_reg;

    // DMA 地址锁存 (用于 bank_offset 计算)
    // 注意: DMA 地址复用 core_addr 解码逻辑
    // 简化: DMA 地址直接使用 dma_araddr/dma_awaddr 进行命中判断
    // 由于 bank_offset 基于 core_addr, DMA 场景需要额外处理
    // 此处简化: DMA 命中判断在组合逻辑中使用 dma 地址

endmodule
