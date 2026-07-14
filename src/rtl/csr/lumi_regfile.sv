// =================================================================
// LUMI-DESIGN-RF | 需求: LUMI-RF-001~003 | 承接: design/regfile.html §3.1~3.3
// 模块: lumi_regfile — IRF/FRF/VRF 三堆寄存器堆 (3R/2W + D-009 仲裁 + ECC)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// IRF: 32 x 32-bit, 6 物理读端口 (3×rs1 + 3×rs2), 2 写端口
// FRF: 32 x 64-bit, 2 读端口, 1 写端口 (FPU)
// VRF: 32 x VLEN-bit, 2 读端口, 1 写端口 (Vector)
// D-009 仲裁: 当读写端口冲突时, 写优先 (write-first, 读返回旧值)
// ECC: 可选 SECDED (Single-Error-Correct, Double-Error-Detect)

module lumi_regfile #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH,
    parameter int VLEN        = lumi_pkg::VLEN,
    parameter int ECC_EN      = lumi_pkg::TCM_ECC_EN   // ECC 使能 (复用全局开关)
) (
    input  logic clk_core, input  logic reset_n,

    // ── IRF 读端口 (3×rs1 + 3×rs2) ──────────────────────────
    input  logic [4:0]  irf_rs1_addr [ISSUE_WIDTH-1:0],
    input  logic [4:0]  irf_rs2_addr [ISSUE_WIDTH-1:0],
    output logic [31:0] irf_rs1_data [ISSUE_WIDTH-1:0],
    output logic [31:0] irf_rs2_data [ISSUE_WIDTH-1:0],

    // ── IRF 写端口 (2W) ─────────────────────────────────────
    input  logic [1:0]  irf_wr_en,
    input  logic [4:0]  irf_wr_addr [1:0],
    input  logic [31:0] irf_wr_data [1:0],
    output logic        irf_wr_stall,   // T-MS3-S3-BF.2.1 低优先级写冲突 stall

    // ── FRF 读/写端口 (FPU, 32 x 64-bit) ────────────────────
    input  logic [4:0]  frf_rs1_addr, input  logic [4:0]  frf_rs2_addr,
    output logic [63:0] frf_rs1_data, output logic [63:0] frf_rs2_data,
    input  logic        frf_wr_en,    input  logic [4:0]  frf_wr_addr,
    input  logic [63:0] frf_wr_data,

    // ── VRF 读/写端口 (Vector, 32 x VLEN-bit) ───────────────
    input  logic [4:0]  vrf_rs1_addr, input  logic [4:0]  vrf_rs2_addr,
    output logic [VLEN-1:0] vrf_rs1_data, output logic [VLEN-1:0] vrf_rs2_data,
    input  logic        vrf_wr_en,    input  logic [4:0]  vrf_wr_addr,
    input  logic [VLEN-1:0] vrf_wr_data,

    // ── ECC 状态 ─────────────────────────────────────────────
    output logic        ecc_ce_irq,   // 可纠正错误 (单 bit)
    output logic        ecc_ded_irq   // 不可纠正错误 (双 bit)
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // IRF: 整数寄存器堆 (32 x 32-bit)
    // ═══════════════════════════════════════════════════════════
    logic [31:0] irf_mem [31:0];

    // T-MS3-S3-BF.2.1: 双写端口冲突仲裁 (slot0 > slot1 > slot2)
    // 当两个写端口指向同一 rd 时，低优先级 port1 被 stall，数据在下一 cycle 补写
    logic        irf_wr0_req;
    logic        irf_wr1_req;
    logic        irf_wr_conflict;
    logic        irf_wr_pend_vld;
    logic [4:0]  irf_wr_pend_addr;
    logic [31:0] irf_wr_pend_data;
    logic        irf_wr0_grant;
    logic        irf_wr1_grant;
    logic [4:0]  irf_wr1_grant_addr;
    logic [31:0] irf_wr1_grant_data;

    always_comb begin
        irf_wr0_req     = irf_wr_en[0] && (irf_wr_addr[0] != 5'h0);
        irf_wr1_req     = irf_wr_en[1] && (irf_wr_addr[1] != 5'h0);
        irf_wr_conflict = irf_wr0_req && irf_wr1_req && (irf_wr_addr[0] == irf_wr_addr[1]);
        irf_wr_stall    = irf_wr_conflict;
    end

    // 低优先级写延迟寄存 (1-entry pending buffer)
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            irf_wr_pend_vld  <= 1'b0;
            irf_wr_pend_addr <= 5'h0;
            irf_wr_pend_data <= 32'h0;
        end else begin
            if (irf_wr_conflict) begin
                irf_wr_pend_vld  <= 1'b1;
                irf_wr_pend_addr <= irf_wr_addr[1];
                irf_wr_pend_data <= irf_wr_data[1];
            end else if (irf_wr_pend_vld) begin
                if (irf_wr0_req && (irf_wr_addr[0] == irf_wr_pend_addr)) begin
                    // 高优先级 port0 仍占用同一地址，保持 pending 不变
                    irf_wr_pend_vld  <= 1'b1;
                end else if (irf_wr1_req) begin
                    // port1 本周期用于 draining pending，新的 port1 写转为 pending
                    irf_wr_pend_vld  <= 1'b1;
                    irf_wr_pend_addr <= irf_wr_addr[1];
                    irf_wr_pend_data <= irf_wr_data[1];
                end else begin
                    irf_wr_pend_vld  <= 1'b0;
                end
            end else begin
                irf_wr_pend_vld <= 1'b0;
            end
        end
    end

    // 仲裁后 grant 生成
    always_comb begin
        irf_wr0_grant      = irf_wr0_req;
        irf_wr1_grant      = 1'b0;
        irf_wr1_grant_addr = 5'h0;
        irf_wr1_grant_data = 32'h0;

        if (irf_wr_pend_vld) begin
            // pending 写优先于新的 port1 写
            if (!(irf_wr0_req && (irf_wr_addr[0] == irf_wr_pend_addr))) begin
                irf_wr1_grant      = 1'b1;
                irf_wr1_grant_addr = irf_wr_pend_addr;
                irf_wr1_grant_data = irf_wr_pend_data;
            end
        end else if (irf_wr1_req && !irf_wr_conflict) begin
            irf_wr1_grant      = 1'b1;
            irf_wr1_grant_addr = irf_wr_addr[1];
            irf_wr1_grant_data = irf_wr_data[1];
        end
    end

    // ── IRF 写入 (2 端口, 写优先 + 冲突仲裁) ──
    always_ff @(posedge clk_core) begin
        if (irf_wr0_grant && (irf_wr_addr[0] != 5'h0))
            irf_mem[irf_wr_addr[0]] <= irf_wr_data[0];

        if (irf_wr1_grant && (irf_wr1_grant_addr != 5'h0))
            irf_mem[irf_wr1_grant_addr] <= irf_wr1_grant_data;
    end

    // ── IRF 读取 (6 端口: 3×rs1 + 3×rs2, D-009 读后写处理) ──
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            // x0 硬连线为 0
            irf_rs1_data[i] = (irf_rs1_addr[i] == 5'h0) ? 32'h0 : irf_mem[irf_rs1_addr[i]];
            irf_rs2_data[i] = (irf_rs2_addr[i] == 5'h0) ? 32'h0 : irf_mem[irf_rs2_addr[i]];

            // D-009: 写优先 (write-first) — 如果读地址与同周期写地址相同, 返回新值
            // (行为级: 由于 FF 写入在下个时钟沿生效, 组合逻辑读取的是旧值)
            // T-MS3-S3-BF.2.1: 使用仲裁后的 grant 信号, 被 stall 的低优先级写不转发
            if (irf_wr0_grant && irf_wr_addr[0] == irf_rs1_addr[i] && irf_wr_addr[0] != 5'h0)
                irf_rs1_data[i] = irf_wr_data[0];
            if (irf_wr1_grant && irf_wr1_grant_addr == irf_rs1_addr[i] && irf_wr1_grant_addr != 5'h0)
                irf_rs1_data[i] = irf_wr1_grant_data;

            if (irf_wr0_grant && irf_wr_addr[0] == irf_rs2_addr[i] && irf_wr_addr[0] != 5'h0)
                irf_rs2_data[i] = irf_wr_data[0];
            if (irf_wr1_grant && irf_wr1_grant_addr == irf_rs2_addr[i] && irf_wr1_grant_addr != 5'h0)
                irf_rs2_data[i] = irf_wr1_grant_data;

            // x0 覆盖 (最终保证)
            if (irf_rs1_addr[i] == 5'h0) irf_rs1_data[i] = 32'h0;
            if (irf_rs2_addr[i] == 5'h0) irf_rs2_data[i] = 32'h0;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // FRF: 浮点寄存器堆 (32 x 64-bit, regfile.html §3.2)
    // ═══════════════════════════════════════════════════════════
    logic [63:0] frf_mem [31:0];

    always_ff @(posedge clk_core) begin
        if (frf_wr_en)
            frf_mem[frf_wr_addr] <= frf_wr_data;
    end

    always_comb begin
        // Write-first 处理
        frf_rs1_data = frf_mem[frf_rs1_addr];
        frf_rs2_data = frf_mem[frf_rs2_addr];
        if (frf_wr_en && frf_wr_addr == frf_rs1_addr)
            frf_rs1_data = frf_wr_data;
        if (frf_wr_en && frf_wr_addr == frf_rs2_addr)
            frf_rs2_data = frf_wr_data;
    end

    // ═══════════════════════════════════════════════════════════
    // VRF: 向量寄存器堆 (32 x VLEN-bit, regfile.html §3.3)
    // ═══════════════════════════════════════════════════════════
    logic [VLEN-1:0] vrf_mem [31:0];

    always_ff @(posedge clk_core) begin
        if (vrf_wr_en)
            vrf_mem[vrf_wr_addr] <= vrf_wr_data;
    end

    always_comb begin
        vrf_rs1_data = vrf_mem[vrf_rs1_addr];
        vrf_rs2_data = vrf_mem[vrf_rs2_addr];
        if (vrf_wr_en && vrf_wr_addr == vrf_rs1_addr)
            vrf_rs1_data = vrf_wr_data;
        if (vrf_wr_en && vrf_wr_addr == vrf_rs2_addr)
            vrf_rs2_data = vrf_wr_data;
    end

    // ═══════════════════════════════════════════════════════════
    // ECC: SECDED 校验 (regfile.html §3.3)
    // ═══════════════════════════════════════════════════════════
    // 简化 ECC: 生成 7-bit SECDED 码用于 32-bit 数据
    // 实际实现中可用汉明码或专用 ECC IP

    generate
        if (ECC_EN) begin : gen_ecc
            // SECDED 编码函数 (7-bit ECC for 32-bit data)
            function automatic logic [6:0] ecc_encode(input logic [31:0] data);
                logic [6:0] ecc;
                ecc[0] = data[0] ^ data[1] ^ data[3] ^ data[4] ^ data[6] ^ data[8] ^
                         data[10] ^ data[11] ^ data[13] ^ data[15] ^ data[17] ^ data[19] ^
                         data[21] ^ data[23] ^ data[25] ^ data[26] ^ data[28] ^ data[30];
                ecc[1] = data[0] ^ data[2] ^ data[3] ^ data[5] ^ data[6] ^ data[9] ^
                         data[10] ^ data[12] ^ data[13] ^ data[16] ^ data[17] ^ data[20] ^
                         data[21] ^ data[24] ^ data[25] ^ data[27] ^ data[28] ^ data[31];
                ecc[2] = data[1] ^ data[2] ^ data[3] ^ data[7] ^ data[8] ^ data[9] ^
                         data[10] ^ data[14] ^ data[15] ^ data[16] ^ data[17] ^ data[22] ^
                         data[23] ^ data[24] ^ data[25] ^ data[29] ^ data[30] ^ data[31];
                ecc[3] = data[4] ^ data[5] ^ data[6] ^ data[7] ^ data[8] ^ data[9] ^
                         data[10] ^ data[18] ^ data[19] ^ data[20] ^ data[21] ^ data[22] ^
                         data[23] ^ data[24] ^ data[25];
                ecc[4] = data[11] ^ data[12] ^ data[13] ^ data[14] ^ data[15] ^ data[16] ^
                         data[17] ^ data[18] ^ data[19] ^ data[20] ^ data[21] ^ data[22] ^
                         data[23] ^ data[26] ^ data[27] ^ data[28] ^ data[29] ^ data[30] ^ data[31];
                ecc[5] = data[24] ^ data[25] ^ data[26] ^ data[27] ^ data[28] ^ data[29] ^
                         data[30] ^ data[31];
                ecc[6] = ecc[0] ^ ecc[1] ^ ecc[2] ^ ecc[3] ^ ecc[4] ^ ecc[5] ^
                         data[0] ^ data[1] ^ data[2] ^ data[3] ^ data[4] ^ data[5] ^
                         data[6] ^ data[7] ^ data[8] ^ data[9] ^ data[10] ^ data[11] ^
                         data[12] ^ data[13] ^ data[14] ^ data[15] ^ data[16] ^ data[17] ^
                         data[18] ^ data[19] ^ data[20] ^ data[21] ^ data[22] ^ data[23] ^
                         data[24] ^ data[25] ^ data[26] ^ data[27] ^ data[28] ^ data[29] ^
                         data[30] ^ data[31];
                return ecc;
            endfunction

            // ECC 存储 (每个寄存器 7-bit ECC)
            logic [6:0] irf_ecc [31:0];

            always_ff @(posedge clk_core) begin
                if (irf_wr0_grant && irf_wr_addr[0] != 5'h0)
                    irf_ecc[irf_wr_addr[0]] <= ecc_encode(irf_wr_data[0]);
                if (irf_wr1_grant && irf_wr1_grant_addr != 5'h0)
                    irf_ecc[irf_wr1_grant_addr] <= ecc_encode(irf_wr1_grant_data);
            end

            // ECC 检查 (读取时)
            logic [6:0] ecc_check [ISSUE_WIDTH*2-1:0];
            logic [6:0] ecc_syndrome;
            logic       ecc_err_1bit;
            logic       ecc_err_2bit;

            always_comb begin
                ecc_ce_irq  = 1'b0;
                ecc_ded_irq = 1'b0;

                for (int i = 0; i < ISSUE_WIDTH; i++) begin
                    // rs1 ECC 检查
                    ecc_check[i*2] = ecc_encode(irf_mem[irf_rs1_addr[i]]) ^ irf_ecc[irf_rs1_addr[i]];
                    // rs2 ECC 检查
                    ecc_check[i*2+1] = ecc_encode(irf_mem[irf_rs2_addr[i]]) ^ irf_ecc[irf_rs2_addr[i]];

                    // 简化: 如果 syndrome != 0 且有奇数个 bit 错误 → CE, 偶数个 → DED
                    if (ecc_check[i*2] != 7'h0 && irf_rs1_addr[i] != 5'h0) begin
                        if (^ecc_check[i*2]) ecc_ce_irq = 1'b1;
                        else ecc_ded_irq = 1'b1;
                    end
                    if (ecc_check[i*2+1] != 7'h0 && irf_rs2_addr[i] != 5'h0) begin
                        if (^ecc_check[i*2+1]) ecc_ce_irq = 1'b1;
                        else ecc_ded_irq = 1'b1;
                    end
                end
            end
        end else begin : gen_no_ecc
            assign ecc_ce_irq  = 1'b0;
            assign ecc_ded_irq = 1'b0;
        end
    endgenerate

endmodule
