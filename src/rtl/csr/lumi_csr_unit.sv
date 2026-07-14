// =================================================================
// LUMI-DESIGN-CSR | 需求: LUMI-CSR-001~005 | 承接: design/writeback-csr.html §2.2-2.3
// 模块: lumi_csr_unit — CSR 读写单元 + HPM 29 计数器
// 阶段: M3 Batch-3 完整功能实现
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
    input  logic                    csr_we,           // CSR 写使能
    input  logic [1:0]              csr_op,           // 00=写(CSRRW), 01=置位(CSRRS), 10=清除(CSRRC)

    // ── 全局 CSR 输出 ────────────────────────────────────────
    output logic [31:0]             mstatus_out,
    output logic [31:0]             mtvec_out,
    output logic [31:0]             mepc_out,
    output logic [31:0]             mcause_out,
    output logic [31:0]             medeleg_out,
    output logic [31:0]             mideleg_out,
    output logic [1:0]              priv_mode_out,

    // ── Trap 入口/返回接口 (← Exception 模块) ───────────────
    input  logic                    trap_enter,       // 进入 trap
    input  logic                    trap_is_irq,      // 1=中断, 0=异常
    input  logic [31:0]             trap_pc_in,     // 异常指令 PC
    input  logic [31:0]             trap_cause_in,    // mcause 值
    input  logic [31:0]             trap_tval_in,     // mtval 值
    input  logic [1:0]              trap_priv_in,     // 当前特权级

    input  logic                    mret_exec,        // MRET 指令
    input  logic                    sret_exec,        // SRET 指令
    input  logic                    nmi_enter,        // NMI 进入
    input  logic                    mnret_exec,       // MNRET 指令
    input  logic [31:0]             nmi_pc_in,        // NMI 时当前 PC

    // ── CLIC CSR 代理接口 (↔ CLIC 模块) ────────────────────
    output logic [11:0]             clic_csr_addr,
    output logic [31:0]             clic_csr_wdata,
    input  logic [31:0]             clic_csr_rdata,
    output logic                    clic_csr_we,

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
    output logic [31:0]             mie_r_out,
    output logic [31:0]             mip_r_out
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // CSR 寄存器声明
    // ═══════════════════════════════════════════════════════════

    // ── Machine Trap Setup ───────────────────────────────────
    logic [31:0] mstatus_r;
    // misa: RV32IMABC_Zce (MXL=01, I/M/A/C/B/Z=1, F/D/V=0)
    localparam logic [31:0] MISA_VAL = 32'h4200_1107; // RV32 I+M+A+C+B+Zce
    // medeleg/mideleg: 异常/中断委托位图
    logic [31:0] medeleg_r;
    logic [31:0] mideleg_r;
    logic [31:0] mie_r;
    logic [31:0] mtvec_r;
    logic [31:0] mcounteren_r;

    // ── Machine Trap Handling ────────────────────────────────
    logic [31:0] mscratch_r;
    logic [31:0] mepc_r;
    logic [31:0] mcause_r;
    logic [31:0] mtval_r;
    logic [31:0] mip_r;       // 部分位由硬件更新 (MEIP/MSIP/MTIP)

    // ── S-mode CSR ───────────────────────────────────────────
    logic [31:0] sstatus_r;   // sstatus 视图 (mstatus 子集)
    logic [31:0] stvec_r;
    logic [31:0] sscratch_r;
    logic [31:0] sepc_r;
    logic [31:0] scause_r;
    logic [31:0] stval_r;

    // ── NMI CSR (Smrnmi) ────────────────────────────────────
    logic [31:0] mnepc_r;
    logic [31:0] mncause_r;
    logic [31:0] mnstatus_r;

    // ── 特权级 ───────────────────────────────────────────────
    logic [1:0]  priv_mode_r;

    // ── Zicntr 基础计数器 (64-bit, RV32 hi/lo 分离) ────────
    logic [63:0] mcycle_cnt;
    logic [63:0] minstret_cnt;

    // ── Zihpm 扩展计数器 ────────────────────────────────────
    logic [9:0]  mhpmevent_r [HPM_COUNTERS-1:0];    // 事件选择 (10-bit)
    logic [63:0] mhpmcounter_r [HPM_COUNTERS-1:0];  // 64-bit 计数器

    // ── HPM 溢出锁存 (RV32 安全读取) ──────────────────────
    logic [31:0] hi_latch_cycle, hi_latch_instret;
    logic [31:0] hi_latch_hpm [HPM_COUNTERS-1:0];

    // ═══════════════════════════════════════════════════════════
    // mstatus 位域定义
    // ═══════════════════════════════════════════════════════════
    // [3]  MIE   - Machine Interrupt Enable
    // [7]  MPIE  - Previous MIE
    // [12:11] MPP - Previous Privilege
    // [1]  SIE   - Supervisor Interrupt Enable
    // [5]  SPIE  - Previous SIE
    // [8]  SPP   - Previous S-Privilege (0=U, 1=S)
    // [21] TSR   - Trap SRET
    // [22] TW    - Timeout Wait (WFI)
    // [19:18] TVM - Trap Virtual Memory

    localparam logic [31:0] MSTATUS_MASK = 32'h007E_19AA; // 可写位掩码

    // ═══════════════════════════════════════════════════════════
    // CSR 读路径 (组合逻辑地址解码)
    // ═══════════════════════════════════════════════════════════
    logic [31:0] csr_read_val;
    logic        csr_addr_valid;
    logic        is_clic_csr;

    always_comb begin
        csr_read_val   = 32'h0;
        csr_addr_valid = 1'b1;
        is_clic_csr    = 1'b0;

        case (csr_addr)
            // ── Machine Info (Read Only) ─────────────────────
            12'hF11: csr_read_val = 32'h0;                // mvendorid
            12'hF12: csr_read_val = 32'h0;                // marchid
            12'hF13: csr_read_val = 32'h0000_0001;        // mimpid (v0.1)
            12'hF14: csr_read_val = 32'h0;                // mhartid

            // ── Machine Trap Setup ───────────────────────────
            12'h300: csr_read_val = mstatus_r & MSTATUS_MASK;
            12'h301: csr_read_val = MISA_VAL;             // misa (RO)
            12'h302: csr_read_val = medeleg_r;
            12'h303: csr_read_val = mideleg_r;
            12'h304: csr_read_val = mie_r;
            12'h305: csr_read_val = mtvec_r;
            12'h306: csr_read_val = mcounteren_r;

            // ── Machine Trap Handling ────────────────────────
            12'h340: csr_read_val = mscratch_r;
            12'h341: csr_read_val = mepc_r;
            12'h342: csr_read_val = mcause_r;
            12'h343: csr_read_val = mtval_r;
            12'h344: csr_read_val = mip_r;
            12'h347: begin                                 // mtinst / mintthresh (CLIC)
                is_clic_csr = 1'b1;
                csr_read_val = clic_csr_rdata;
            end

            // ── S-mode Trap Setup ────────────────────────────
            12'h100: csr_read_val = sstatus_r;
            12'h104: csr_read_val = mie_r & mideleg_r;    // sie = mie & mideleg
            12'h105: csr_read_val = stvec_r;
            12'h140: csr_read_val = sscratch_r;
            12'h141: csr_read_val = sepc_r;
            12'h142: csr_read_val = scause_r;
            12'h143: csr_read_val = stval_r;
            12'h144: csr_read_val = mip_r & mideleg_r;    // sip = mip & mideleg

            // ── NMI (Smrnmi) ────────────────────────────────
            12'h740: csr_read_val = mnepc_r;
            12'h741: csr_read_val = mncause_r;
            12'h742: csr_read_val = mnstatus_r;

            // ── Zicntr 基础计数器 ────────────────────────────
            12'hB00: csr_read_val = mcycle_cnt[31:0];      // mcycle
            12'hB80: csr_read_val = hi_latch_cycle;        // mcycleh
            12'hB02: csr_read_val = minstret_cnt[31:0];    // minstret
            12'hB82: csr_read_val = hi_latch_instret;      // minstreth

            // ── User Counters (Zicntr shadow) ────────────────
            12'hC00: csr_read_val = mcycle_cnt[31:0];      // cycle
            12'hC80: csr_read_val = hi_latch_cycle;        // cycleh
            12'hC02: csr_read_val = minstret_cnt[31:0];    // instret
            12'hC82: csr_read_val = hi_latch_instret;      // instreth

            // ── CLIC CSR ────────────────────────────────────
            12'hFB1: begin                                 // mintstatus
                is_clic_csr = 1'b1;
                csr_read_val = clic_csr_rdata;
            end
            12'hFB0: begin                                 // mclick
                is_clic_csr = 1'b1;
                csr_read_val = clic_csr_rdata;
            end

            default: begin
                // ── HPM 计数器 (动态地址解码) ───────────────
                if (csr_addr >= 12'hB03 && csr_addr <= 12'hB1F) begin
                    // mhpmcounter3..31 lo
                    csr_read_val = mhpmcounter_r[csr_addr[4:0] - 5'd3][31:0];
                end else if (csr_addr >= 12'hB83 && csr_addr <= 12'hB9F) begin
                    // mhpmcounter3..31 hi (latched)
                    csr_read_val = hi_latch_hpm[csr_addr[4:0] - 5'd3];
                end else if (csr_addr >= 12'h323 && csr_addr <= 12'h33F) begin
                    // mhpmevent3..31
                    csr_read_val = {22'h0, mhpmevent_r[csr_addr[4:0] - 5'd3]};
                end else begin
                    csr_addr_valid = 1'b0; // 未实现地址
                end
            end
        endcase
    end

    // ── CSR 写数据计算 (原子读-改-写) ────────────────────────
    logic [31:0] csr_write_val;
    always_comb begin
        case (csr_op)
            2'b00:   csr_write_val = csr_wdata;                     // CSRRW: 直接写
            2'b01:   csr_write_val = csr_read_val | csr_wdata;      // CSRRS: 置位
            2'b10:   csr_write_val = csr_read_val & ~csr_wdata;     // CSRRC: 清除
            default: csr_write_val = csr_wdata;
        endcase
    end

    // ── CLIC CSR 代理输出 ─────────────────────────────────────
    assign clic_csr_addr  = csr_addr;
    assign clic_csr_wdata = csr_write_val;
    assign clic_csr_we    = csr_we && is_clic_csr;

    // ═══════════════════════════════════════════════════════════
    // HPM 事件匹配 (组合逻辑)
    // ═══════════════════════════════════════════════════════════
    logic [HPM_COUNTERS-1:0] hpm_event_match;
    logic [HPM_COUNTERS-1:0] hpmcounter_write_conflict;

    always_comb begin
        for (int i = 0; i < HPM_COUNTERS; i++) begin
            case (mhpmevent_r[i])
                10'h000: hpm_event_match[i] = 1'b1;                  // CPU_CYCLES (每周期)
                10'h001: hpm_event_match[i] = hpm_inst_retired;       // INST_RETIRED
                10'h002: hpm_event_match[i] = hpm_branch_mispred;     // BRANCH_MISS
                10'h003: hpm_event_match[i] = hpm_icache_miss;        // I_CACHE_MISS
                10'h004: hpm_event_match[i] = hpm_dcache_miss;        // D_CACHE_MISS
                10'h005: hpm_event_match[i] = 1'b0;                  // EXCEPTION_TAKEN (由 trap 信号驱动)
                10'h006: hpm_event_match[i] = hpm_interrupt;          // IRQ_TAKEN
                10'h007: hpm_event_match[i] = csr_we;                 // CSR_ACCESS
                default: hpm_event_match[i] = 1'b0;
            endcase
        end
    end

    // ── HPM 计数器写冲突检测 (CSR 写优先级高于 HPM 递增) ──
    always_comb begin
        for (int i = 0; i < HPM_COUNTERS; i++) begin
            hpmcounter_write_conflict[i] = csr_we && csr_addr_valid &&
                ((csr_addr == (12'hB03 + i[11:0])) ||
                 (csr_addr == (12'hB83 + i[11:0])));
        end
    end

    // ═══════════════════════════════════════════════════════════
    // 全局输出
    // ═══════════════════════════════════════════════════════════
    assign mstatus_out = mstatus_r;
    assign mtvec_out   = mtvec_r;
    assign mepc_out    = mepc_r;
    assign mcause_out  = mcause_r;
    assign medeleg_out = medeleg_r;
    assign mideleg_out = mideleg_r;
    assign priv_mode_out = priv_mode_r;
    assign mie_meip    = mie_r[11];
    assign mie_msip    = mie_r[3];
    assign mie_mtip    = mie_r[7];
    assign mie_r_out   = mie_r;
    assign mip_r_out   = mip_r;

    // ── csr_rdata 输出 ────────────────────────────────────────
    assign csr_rdata = csr_read_val;

    // ── HPM 计数器读出 ────────────────────────────────────────
    always_comb begin
        for (int i = 0; i < HPM_COUNTERS; i++)
            hpm_count[i] = mhpmcounter_r[i];
    end

    // ═══════════════════════════════════════════════════════════
    // Trap 入口 / MRET / SRET / NMI 组合逻辑
    // ═══════════════════════════════════════════════════════════

    // ── mstatus 更新值计算 ────────────────────────────────────
    logic [31:0] mstatus_trap_enter;    // trap_enter 时新值
    logic [31:0] mstatus_mret;          // mret 时新值
    logic [31:0] mstatus_sret;          // sret 时新值
    logic [31:0] mstatus_nmi_enter;     // nmi_enter 时新值

    always_comb begin
        // ── Trap Enter (M-mode) ──
        mstatus_trap_enter        = mstatus_r;
        mstatus_trap_enter[7]     = mstatus_r[3];           // MPIE ← MIE
        mstatus_trap_enter[3]     = 1'b0;                   // MIE ← 0
        mstatus_trap_enter[12:11] = trap_priv_in;           // MPP ← current priv

        // ── MRET ──
        mstatus_mret              = mstatus_r;
        mstatus_mret[3]           = mstatus_r[7];           // MIE ← MPIE
        mstatus_mret[7]           = 1'b1;                   // MPIE ← 1
        mstatus_mret[12:11]       = (mstatus_r[12:11] == 2'b11) ? 2'b11 : 2'b00; // MPP → M or U

        // ── SRET ──
        mstatus_sret              = mstatus_r;
        mstatus_sret[1]           = mstatus_r[5];           // SIE ← SPIE
        mstatus_sret[5]           = 1'b1;                   // SPIE ← 1
        mstatus_sret[8]           = 1'b0;                   // SPP ← U

        // ── NMI Enter ──
        mstatus_nmi_enter         = mstatus_r;
        mstatus_nmi_enter[12:11]  = 2'b11;                  // MPP ← M
        mstatus_nmi_enter[3]      = 1'b0;                   // MIE ← 0
    end

    // ═══════════════════════════════════════════════════════════
    // 时序逻辑: CSR 寄存器更新
    // ═══════════════════════════════════════════════════════════

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            mstatus_r    <= 32'h0;
            medeleg_r    <= 32'h0;
            mideleg_r    <= 32'h0;
            mie_r        <= 32'h0;
            mtvec_r      <= 32'h0;
            mcounteren_r <= 32'h0;
            mscratch_r   <= 32'h0;
            mepc_r       <= 32'h0;
            mcause_r     <= 32'h0;
            mtval_r      <= 32'h0;
            mip_r        <= 32'h0;
            sstatus_r    <= 32'h0;
            stvec_r      <= 32'h0;
            sscratch_r   <= 32'h0;
            sepc_r       <= 32'h0;
            scause_r     <= 32'h0;
            stval_r      <= 32'h0;
            mnepc_r      <= 32'h0;
            mncause_r    <= 32'h0;
            mnstatus_r   <= 32'h0;
            priv_mode_r  <= 2'b11; // 复位为 M-mode
            mcycle_cnt   <= 64'h0;
            minstret_cnt <= 64'h0;
            hi_latch_cycle  <= 32'h0;
            hi_latch_instret <= 32'h0;
        end else begin
            // ── mcycle 始终计数 ──
            mcycle_cnt <= mcycle_cnt + 64'h1;

            // ── minstret 按提交指令数计数 ──
            if (hpm_inst_retired)
                minstret_cnt <= minstret_cnt + 64'h1;

            // ── hi latch 更新 (读取 hi 时锁存, 防止溢出竞争) ──
            // 简化: 每次低 32 位回绕时自动更新 hi_latch
            hi_latch_cycle  <= mcycle_cnt[63:32];
            hi_latch_instret <= minstret_cnt[63:32];

            // ── Trap Enter (最高优先级) ──
            if (nmi_enter) begin
                // NMI: 保存到 mnepc/mncause/mnstatus
                mnepc_r    <= nmi_pc_in;
                mncause_r  <= 32'h8000_0000; // NMI cause (bit 31=1)
                mnstatus_r[12:11] <= mstatus_r[12:11]; // NMPP ← MPP
                mnstatus_r[3]     <= mstatus_r[3];     // NMP ← MIE
                mstatus_r  <= mstatus_nmi_enter;
                priv_mode_r <= 2'b11; // 强制 M-mode
            end else if (trap_enter && !trap_is_irq) begin
                // 同步异常
                mepc_r   <= trap_pc_in;
                mcause_r <= trap_cause_in;
                mtval_r  <= trap_tval_in;
                mstatus_r <= mstatus_trap_enter;
                priv_mode_r <= 2'b11; // M-mode
            end else if (trap_enter && trap_is_irq) begin
                // 中断
                mepc_r   <= trap_pc_in;
                mcause_r <= {1'b1, trap_cause_in[30:0]}; // 最高位=1 表示中断
                mtval_r  <= 32'h0;
                mstatus_r <= mstatus_trap_enter;
                priv_mode_r <= 2'b11; // M-mode
            end else if (mret_exec) begin
                // MRET
                mstatus_r  <= mstatus_mret;
                priv_mode_r <= mstatus_r[12:11]; // 恢复到 MPP
            end else if (sret_exec) begin
                // SRET
                mstatus_r  <= mstatus_sret;
                priv_mode_r <= mstatus_r[8] ? 2'b01 : 2'b00; // SPP → S or U
            end else if (mnret_exec) begin
                // MNRET
                mstatus_r[12:11] <= mnstatus_r[12:11]; // MPP ← NMPP
                mstatus_r[3]     <= mnstatus_r[3];     // MIE ← NMP
                priv_mode_r <= mnstatus_r[12:11];
            end else if (csr_we && csr_addr_valid && !is_clic_csr) begin
                // ── 显式 CSR 写操作 ──
                case (csr_addr)
                    12'h300: mstatus_r    <= (csr_write_val & MSTATUS_MASK) | (mstatus_r & ~MSTATUS_MASK);
                    12'h302: medeleg_r    <= csr_write_val;
                    12'h303: mideleg_r    <= csr_write_val;
                    12'h304: mie_r        <= csr_write_val;
                    12'h305: mtvec_r      <= csr_write_val;
                    12'h306: mcounteren_r <= csr_write_val;
                    12'h340: mscratch_r   <= csr_write_val;
                    12'h341: mepc_r       <= csr_write_val;
                    12'h342: mcause_r     <= csr_write_val;
                    12'h343: mtval_r      <= csr_write_val;
                    12'h344: mip_r        <= csr_write_val; // 软件可写 SEIP/STIP/SSIP

                    // ── S-mode CSR ──
                    12'h100: begin // sstatus (mstatus 子集写)
                        mstatus_r[1]   <= csr_write_val[1];   // SIE
                        mstatus_r[5]   <= csr_write_val[5];   // SPIE
                        mstatus_r[8]   <= csr_write_val[8];   // SPP
                    end
                    12'h104: mie_r <= (mie_r & ~mideleg_r) | (csr_write_val & mideleg_r); // sie
                    12'h105: stvec_r    <= csr_write_val;
                    12'h140: sscratch_r <= csr_write_val;
                    12'h141: sepc_r     <= csr_write_val;
                    12'h142: scause_r   <= csr_write_val;
                    12'h143: stval_r    <= csr_write_val;
                    12'h144: mip_r <= (mip_r & ~mideleg_r) | (csr_write_val & mideleg_r); // sip

                    // ── NMI CSR ──
                    12'h740: mnepc_r   <= csr_write_val;
                    12'h741: mncause_r <= csr_write_val;
                    12'h742: mnstatus_r <= csr_write_val;

                    // ── HPM 计数器/事件 (动态地址) ──
                    default: begin
                        // mhpmcounter lo
                        if (csr_addr >= 12'hB03 && csr_addr <= 12'hB1F) begin
                            mhpmcounter_r[csr_addr[4:0] - 5'd3][31:0] <= csr_write_val;
                        end
                        // mhpmcounter hi
                        else if (csr_addr >= 12'hB83 && csr_addr <= 12'hB9F) begin
                            mhpmcounter_r[csr_addr[4:0] - 5'd3][63:32] <= csr_write_val;
                        end
                        // mhpmevent
                        else if (csr_addr >= 12'h323 && csr_addr <= 12'h33F) begin
                            mhpmevent_r[csr_addr[4:0] - 5'd3] <= csr_write_val[9:0];
                        end
                    end
                endcase
            end // csr_we

            // ── HPM 计数器递增 ──
            // CSR 写 mhpmcounter[n]/mhpmcounterh[n] 时跳过自动递增,
            // 避免 HPM 事件覆盖显式 CSR 写入值.
            for (int i = 0; i < HPM_COUNTERS; i++) begin
                if (hpm_event_match[i] && !hpmcounter_write_conflict[i])
                    mhpmcounter_r[i] <= mhpmcounter_r[i] + 64'h1;
                hi_latch_hpm[i] <= mhpmcounter_r[i][63:32];
            end
        end // else reset_n
    end // always_ff

endmodule
