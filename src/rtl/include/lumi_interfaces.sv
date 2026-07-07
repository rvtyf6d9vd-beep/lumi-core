// =================================================================
// LUMI-DESIGN-INFRA | 需求: LUMI-GLOBAL | 承接: design/*.html
// 模块: lumi_interfaces — SV Interface 定义
// 阶段: M2-S1 RTL 骨架 (Interface 端口定义)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

// ───────────────────────────────────────────────────────────────
// Pipeline Interface — 级间传递 (valid/stall/flush/inst_packet)
// 8 级各一实例 (F1→F2, F2→D, D→I, I→E1, E1→E2, E2→M, M→W, W→RF)
// ───────────────────────────────────────────────────────────────
interface pipeline_if;
  // 直接使用 lumi_pkg 全限定名 (避免 Yosys 不支持 interface 内 import)

  logic                     valid;      // 数据有效
  logic                     ready;      // 下游就绪 (back-pressure)
  logic                     stall;      // 全局 stall
  logic                     flush;      // flush 信号 (误预测/trap)

  lumi_pkg::inst_pkt_t [lumi_pkg::ISSUE_WIDTH-1:0] inst_pkt;  // 指令包数组 (最多 3 条)
  logic                [lumi_pkg::ISSUE_WIDTH-1:0] inst_valid; // 每条指令有效标志

  modport master (
    output valid, stall, flush, inst_pkt, inst_valid,
    input  ready
  );

  modport slave (
    input  valid, stall, flush, inst_pkt, inst_valid,
    output ready
  );
endinterface


// ───────────────────────────────────────────────────────────────
// AXI4 Master Interface — 主总线 (128bit data + 32bit addr, 5 通道)
// ───────────────────────────────────────────────────────────────
interface axi4_if #(
  parameter int ADDR_WIDTH = 32,
  parameter int DATA_WIDTH = 128,
  parameter int ID_WIDTH   = 4,
  parameter int USER_WIDTH = 1,
  parameter int STRB_WIDTH = DATA_WIDTH / 8
);
  // Write Address Channel
  logic [ID_WIDTH-1:0]   awid;
  logic [ADDR_WIDTH-1:0] awaddr;
  logic [7:0]            awlen;
  logic [2:0]            awsize;
  logic [1:0]            awburst;
  logic [1:0]            awlock;
  logic [3:0]            awcache;
  logic [2:0]            awprot;
  logic [USER_WIDTH-1:0] awuser;
  logic                  awvalid;
  logic                  awready;

  // Write Data Channel
  logic [DATA_WIDTH-1:0] wdata;
  logic [STRB_WIDTH-1:0] wstrb;
  logic                  wlast;
  logic [USER_WIDTH-1:0] wuser;
  logic                  wvalid;
  logic                  wready;

  // Write Response Channel
  logic [ID_WIDTH-1:0]   bid;
  logic [1:0]            bresp;
  logic [USER_WIDTH-1:0] buser;
  logic                  bvalid;
  logic                  bready;

  // Read Address Channel
  logic [ID_WIDTH-1:0]   arid;
  logic [ADDR_WIDTH-1:0] araddr;
  logic [7:0]            arlen;
  logic [2:0]            arsize;
  logic [1:0]            arburst;
  logic [1:0]            arlock;
  logic [3:0]            arcache;
  logic [2:0]            arprot;
  logic [USER_WIDTH-1:0] aruser;
  logic                  arvalid;
  logic                  arready;

  // Read Data Channel
  logic [ID_WIDTH-1:0]   rid;
  logic [DATA_WIDTH-1:0] rdata;
  logic [1:0]            rresp;
  logic                  rlast;
  logic [USER_WIDTH-1:0] ruser;
  logic                  rvalid;
  logic                  rready;

  modport master (
    output awid, awaddr, awlen, awsize, awburst, awlock, awcache, awprot,
           awuser, awvalid, wdata, wstrb, wlast, wuser, wvalid, bready,
           arid, araddr, arlen, arsize, arburst, arlock, arcache, arprot,
           aruser, arvalid, rready,
    input  awready, wready, bid, bresp, buser, bvalid,
           arready, rid, rdata, rresp, rlast, ruser, rvalid
  );

  modport slave (
    input  awid, awaddr, awlen, awsize, awburst, awlock, awcache, awprot,
           awuser, awvalid, wdata, wstrb, wlast, wuser, wvalid, bready,
           arid, araddr, arlen, arsize, arburst, arlock, arcache, arprot,
           aruser, arvalid, rready,
    output awready, wready, bid, bresp, buser, bvalid,
           arready, rid, rdata, rresp, rlast, ruser, rvalid
  );
endinterface


// ───────────────────────────────────────────────────────────────
// AXI4-Lite Interface — CSR/MMIO (32bit data + 32bit addr)
// ───────────────────────────────────────────────────────────────
interface axi4_lite_if #(
  parameter int ADDR_WIDTH = 32,
  parameter int DATA_WIDTH = 32
);
  logic [ADDR_WIDTH-1:0] awaddr;
  logic [2:0]            awprot;
  logic                  awvalid;
  logic                  awready;

  logic [DATA_WIDTH-1:0] wdata;
  logic [DATA_WIDTH/8-1:0] wstrb;
  logic                  wvalid;
  logic                  wready;

  logic [1:0]            bresp;
  logic                  bvalid;
  logic                  bready;

  logic [ADDR_WIDTH-1:0] araddr;
  logic [2:0]            arprot;
  logic                  arvalid;
  logic                  arready;

  logic [DATA_WIDTH-1:0] rdata;
  logic [1:0]            rresp;
  logic                  rvalid;
  logic                  rready;

  modport master (
    output awaddr, awprot, awvalid, wdata, wstrb, wvalid, bready,
           araddr, arprot, arvalid, rready,
    input  awready, wready, bresp, bvalid, arready, rdata, rresp, rvalid
  );

  modport slave (
    input  awaddr, awprot, awvalid, wdata, wstrb, wvalid, bready,
           araddr, arprot, arvalid, rready,
    output awready, wready, bresp, bvalid, arready, rdata, rresp, rvalid
  );
endinterface


// ───────────────────────────────────────────────────────────────
// Memory Request Interface — 内部内存请求 (TCM/Cache)
// ───────────────────────────────────────────────────────────────
interface mem_req_if;
  logic [31:0] addr;
  logic [31:0] wdata;
  logic [31:0] rdata;
  logic        we;         // 写使能 (1=write, 0=read)
  logic [3:0]  be;         // 字节使能
  logic        valid;      // 请求有效
  logic        ready;      // 就绪
  logic        hit;        // 命中 (TCM/Cache)

  modport requester (
    output addr, wdata, we, be, valid,
    input  rdata, ready, hit
  );

  modport responder (
    input  addr, wdata, we, be, valid,
    output rdata, ready, hit
  );
endinterface


// ───────────────────────────────────────────────────────────────
// Interrupt Interface — 中断信号集
// ───────────────────────────────────────────────────────────────
interface interrupt_if #(
  parameter int NUM_LOCAL_IRQ = 16
);
  logic                  meip;          // 外部中断 pending (PLIC)
  logic                  msip;          // 软件中断 pending
  logic                  mtip;          // 定时器中断 pending
  logic [NUM_LOCAL_IRQ-1:0] local_irq;  // CLIC 本地中断
  logic                  irq_valid;     // 中断请求有效
  logic [7:0]            irq_cause;     // 中断原因码
  logic                  irq_ack;       // 中断应答 (CPU 接受)

  modport source (
    output meip, msip, mtip, local_irq, irq_valid, irq_cause,
    input  irq_ack
  );

  modport sink (
    input  meip, msip, mtip, local_irq, irq_valid, irq_cause,
    output irq_ack
  );
endinterface


// ───────────────────────────────────────────────────────────────
// JTAG Interface — Debug/JTAG DMI
// ───────────────────────────────────────────────────────────────
interface jtag_if;
  logic        tck;       // JTAG 时钟
  logic        tms;       // Test Mode Select
  logic        tdi;       // Test Data In
  logic        tdo;       // Test Data Out
  logic        trst_n;    // Test Reset (active low)

  // DMI 层信号
  logic [6:0]  dmi_addr;
  logic [31:0] dmi_wdata;
  logic [31:0] dmi_rdata;
  logic [1:0]  dmi_op;    // 00=nop, 01=read, 10=write
  logic        dmi_valid;
  logic        dmi_ready;

  modport jtag_master (
    output tck, tms, tdi, trst_n, dmi_addr, dmi_wdata, dmi_op, dmi_valid,
    input  tdo, dmi_rdata, dmi_ready
  );

  modport jtag_slave (
    input  tck, tms, tdi, trst_n, dmi_addr, dmi_wdata, dmi_op, dmi_valid,
    output tdo, dmi_rdata, dmi_ready
  );
endinterface
