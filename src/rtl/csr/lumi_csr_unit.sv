// =================================================================
// LUMI-DESIGN-CSR | 需求: LUMI-CSR-001~005 | 承接: design/writeback-csr.html §3.2
// 模块: lumi_csr_unit — CSR 读写单元 + HPM 29 计数器
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_csr_unit #(
    parameter int HPM_COUNTERS = lumi_pkg::HPM_COUNTERS
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── CSR 访问接口 (← Writeback W 级) ──────────────────────
    input  logic [11:0]             csr_addr,
    output logic [31:0]             csr_rdata,
    input  logic [31:0]             csr_wdata,
    input  logic                    csr_we,
    input  logic [1:0]              csr_op,           // 00=写, 01=置位, 10=清除

    // ── 全局 CSR 输出 ────────────────────────────────────────
    output logic [31:0]             mstatus_out,
    output logic [31:0]             mtvec_out,
    output logic [31:0]             mepc_out,
    output logic [31:0]             mcause_out,

    // ── HPM 事件输入 ─────────────────────────────────────────
    input  logic                    hpm_inst_retired,
    input  logic                    hpm_branch,
    input  logic                    hpm_branch_mispred,
    input  logic                    hpm_icache_miss,
    input  logic                    hpm_dcache_miss,
    input  logic                    hpm_tlb_miss,
    input  logic                    hpm_interrupt,

    // ── HPM 计数器读出 (→ 调试/统计) ────────────────────────
    output logic [63:0]             hpm_count [HPM_COUNTERS-1:0],

    // ── 中断可见性 (D-013) ────────────────────────────────────
    output logic                    mie_meip,
    output logic                    mie_msip,
    output logic                    mie_mtip,
    output logic [1:0]              mideleg
);

    import lumi_pkg::*;

    // ─── CSR 寄存器组 (骨架声明) ──────────────────────────────
    logic [31:0]                    mstatus_r;
    logic [31:0]                    misa_r;
    logic [31:0]                    mtvec_r;
    logic [31:0]                    mepc_r;
    logic [31:0]                    mcause_r;
    logic [31:0]                    mtval_r;
    logic [31:0]                    mie_r;
    logic [31:0]                    mip_r;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [1:0] {
        ST_IDLE,
        ST_READ,
        ST_WRITE,
        ST_ATOMIC
    } csr_state_e;

    csr_state_e state_reg, state_next;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg  <= ST_IDLE;
            mstatus_r  <= 32'h0;
            mtvec_r    <= 32'h0;
            mepc_r     <= 32'h0;
            mcause_r   <= 32'h0;
        end else begin
            state_reg <= state_next;
        end
    end

    always_comb begin
        state_next   = state_reg;
        csr_rdata    = 32'h0;
        mstatus_out  = mstatus_r;
        mtvec_out    = mtvec_r;
        mepc_out     = mepc_r;
        mcause_out   = mcause_r;
        mie_meip     = mie_r[11];
        mie_msip     = mie_r[3];
        mie_mtip     = mie_r[7];
        mideleg      = 2'b00;

        case (state_reg)
            ST_IDLE:   state_next = ST_READ;
            ST_READ:   ; // 骨架: TODO — CSR 读 (地址解码 + 返回)
            ST_WRITE:  ; // 骨架: TODO — CSR 写 (we + op)
            ST_ATOMIC: ; // 骨架: TODO — CSRRW/CSRRS/CSRRC
        endcase
    end

endmodule
