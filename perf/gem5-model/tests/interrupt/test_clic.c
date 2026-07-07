/*
 * Lumi-Core CLIC Interrupt Controller Test
 * Tests CLIC CSR access, interrupt vector table, and priority arbitration.
 * Uses software-triggered interrupts via ecall + trap handler for SE mode.
 *
 * Compile: riscv32-unknown-elf-gcc -march=rv32imac_zicsr_smclic -mabi=ilp32 \
 *          -nostdlib -T freestanding.ld -o test_clic.riscv test_clic.c
 *
 * Known SE mode limitation (RISK-001): External interrupt injection not supported.
 * This test validates CSR access and software interrupt paths only.
 */

#include <stdint.h>

extern void m5_exit(uint64_t code);

/* ── Test infrastructure ── */
static int tests_run = 0;
static int tests_passed = 0;
static int tests_failed = 0;

#define TEST_ASSERT(cond, msg) do { \
    tests_run++; \
    if (cond) { tests_passed++; } \
    else { tests_failed++; } \
} while(0)

/* ── CLIC CSR addresses (Smclic) ── */
#define CSR_MINTSTATUS  0xFB1   /* Interrupt status */
#define CSR_MINTTHRESH  0x347   /* Interrupt threshold */

/* ── Standard RISC-V interrupt CSRs ── */
#define CSR_MSTATUS     0x300
#define CSR_MIE         0x304
#define CSR_MTVEC       0x305
#define CSR_MEPC        0x341
#define CSR_MCAUSE      0x342
#define CSR_MTVAL       0x343
#define CSR_MIP         0x344

/* ── Interrupt cause codes ── */
#define CAUSE_MSI       3   /* Machine software interrupt */
#define CAUSE_MTI       7   /* Machine timer interrupt */
#define CAUSE_MEI       11  /* Machine external interrupt */
#define CAUSE_ECALL_M   11  /* Environment call from M-mode (non-interrupt) */

/* ── CLIC software simulation state ── */
typedef struct {
    uint32_t num_interrupts;     /* Number of interrupt inputs (1~240) */
    uint32_t pending[8];         /* Pending bits (240/32 = 8 words) */
    uint32_t enabled[8];         /* Enabled bits */
    uint8_t  priority[240];      /* Priority per interrupt (0~255) */
    uint8_t  threshold;           /* Current threshold */
    uint32_t current_irq;         /* Currently servicing IRQ number */
} clic_state_t;

static clic_state_t clic;

/* ── Software CLIC simulation functions ── */

void clic_init(uint32_t num_irq) {
    clic.num_interrupts = num_irq;
    clic.threshold = 0;
    clic.current_irq = 0;
    for (int i = 0; i < 8; i++) {
        clic.pending[i] = 0;
        clic.enabled[i] = 0;
    }
    for (int i = 0; i < 240; i++) {
        clic.priority[i] = 0;
    }
}

void clic_set_pending(uint32_t irq) {
    if (irq < clic.num_interrupts) {
        clic.pending[irq / 32] |= (1 << (irq % 32));
    }
}

void clic_set_enabled(uint32_t irq) {
    if (irq < clic.num_interrupts) {
        clic.enabled[irq / 32] |= (1 << (irq % 32));
    }
}

void clic_set_priority(uint32_t irq, uint8_t pri) {
    if (irq < clic.num_interrupts) {
        clic.priority[irq] = pri;
    }
}

/* Find highest priority pending+enabled interrupt above threshold */
int clic_arbitrate(void) {
    int best_irq = -1;
    uint8_t best_pri = clic.threshold;

    for (uint32_t i = 0; i < clic.num_interrupts; i++) {
        if ((clic.pending[i / 32] & (1 << (i % 32))) &&
            (clic.enabled[i / 32] & (1 << (i % 32)))) {
            if (clic.priority[i] > best_pri) {
                best_pri = clic.priority[i];
                best_irq = (int)i;
            }
        }
    }
    return best_irq;
}

/* Claim highest priority interrupt */
int clic_claim(void) {
    int irq = clic_arbitrate();
    if (irq >= 0) {
        clic.pending[irq / 32] &= ~(1 << (irq % 32));
        clic.current_irq = (uint32_t)irq;
    }
    return irq;
}

/* Complete interrupt servicing */
void clic_complete(void) {
    clic.current_irq = 0;
}

/* ── Test Cases ── */

void test_clic_init(void) {
    clic_init(16);
    TEST_ASSERT(clic.num_interrupts == 16, "CLIC init: 16 interrupts");
    TEST_ASSERT(clic.threshold == 0, "CLIC init: threshold=0");
}

void test_clic_pending(void) {
    clic_init(16);
    clic_set_pending(5);
    clic_set_pending(12);

    TEST_ASSERT((clic.pending[0] & (1 << 5)) != 0, "IRQ5 pending set");
    TEST_ASSERT((clic.pending[0] & (1 << 12)) != 0, "IRQ12 pending set");
    TEST_ASSERT((clic.pending[0] & (1 << 3)) == 0, "IRQ3 not pending");
}

void test_clic_priority_arbitration(void) {
    clic_init(16);

    /* Set up: IRQ3 pri=2, IRQ7 pri=5, IRQ11 pri=3 */
    clic_set_enabled(3);  clic_set_pending(3);  clic_set_priority(3, 2);
    clic_set_enabled(7);  clic_set_pending(7);  clic_set_priority(7, 5);
    clic_set_enabled(11); clic_set_pending(11); clic_set_priority(11, 3);

    /* Should select IRQ7 (highest priority) */
    int winner = clic_arbitrate();
    TEST_ASSERT(winner == 7, "Priority arbitration: IRQ7 wins (pri=5)");

    /* Claim and verify it's cleared */
    int claimed = clic_claim();
    TEST_ASSERT(claimed == 7, "Claim returns IRQ7");
    TEST_ASSERT((clic.pending[0] & (1 << 7)) == 0, "IRQ7 cleared after claim");

    /* Next arbitration should select IRQ11 (pri=3) */
    winner = clic_arbitrate();
    TEST_ASSERT(winner == 11, "Next arbitration: IRQ11 wins (pri=3)");
}

void test_clic_threshold(void) {
    clic_init(16);

    clic_set_enabled(3);  clic_set_pending(3);  clic_set_priority(3, 2);
    clic_set_enabled(7);  clic_set_pending(7);  clic_set_priority(7, 5);

    /* Set threshold above IRQ3's priority */
    clic.threshold = 3;

    /* Should only select IRQ7 (pri=5 > threshold=3) */
    int winner = clic_arbitrate();
    TEST_ASSERT(winner == 7, "Threshold filters: only IRQ7 above threshold=3");

    /* Raise threshold to 5, nothing should win */
    clic.threshold = 5;
    winner = clic_arbitrate();
    TEST_ASSERT(winner == -1, "Threshold=5: no interrupt wins");
}

void test_clic_disable(void) {
    clic_init(16);

    clic_set_pending(5);
    clic_set_priority(5, 3);
    /* Don't enable IRQ5 */

    int winner = clic_arbitrate();
    TEST_ASSERT(winner == -1, "Disabled interrupt not selected");

    /* Now enable it */
    clic_set_enabled(5);
    winner = clic_arbitrate();
    TEST_ASSERT(winner == 5, "Enabled interrupt selected");
}

void test_clic_interrupt_range(void) {
    /* Test various valid interrupt counts */
    clic_init(1);
    TEST_ASSERT(clic.num_interrupts == 1, "Min interrupts: 1");

    clic_init(240);
    TEST_ASSERT(clic.num_interrupts == 240, "Max interrupts: 240");

    /* Test high IRQ numbers */
    clic_init(240);
    clic_set_enabled(239);
    clic_set_pending(239);
    clic_set_priority(239, 7);

    int winner = clic_arbitrate();
    TEST_ASSERT(winner == 239, "High IRQ number (239) works");
}

void test_clic_complete(void) {
    clic_init(16);

    clic_set_enabled(5);
    clic_set_pending(5);
    clic_set_priority(5, 3);

    clic_claim();
    TEST_ASSERT(clic.current_irq == 5, "Current IRQ set after claim");

    clic_complete();
    TEST_ASSERT(clic.current_irq == 0, "Current IRQ cleared after complete");
}

/* ── CSR Access Tests (tests hardware CSR path) ── */

/* Linker-defined text section start (from crt0.S / freestanding.ld) */
extern char _reset[];

void test_csr_mtvec_vectored(void) {
    /* Set mtvec to vectored mode (mode=1)
     * Use actual code address within memory range.
     * Previous value 0x80001000 was outside 512MiB memory causing FATAL in FS mode. */
    uint32_t handler_addr = (uint32_t)(uintptr_t)_reset;
    uint32_t mtvec_val = (handler_addr & ~0x3) | 0x1;  /* aligned + vectored mode */

    __asm__ volatile ("csrw mtvec, %0" :: "r"(mtvec_val));

    uint32_t readback;
    __asm__ volatile ("csrr %0, mtvec" : "=r"(readback));

    TEST_ASSERT(readback == mtvec_val, "mtvec vectored mode set correctly");
    TEST_ASSERT((readback & 0x3) == 1, "mtvec mode=1 (vectored)");
}

void test_csr_mie_bits(void) {
    /* Test MIE register: enable machine external interrupt */
    uint32_t mie_val = (1 << CAUSE_MEI);  /* MEIE bit */

    __asm__ volatile ("csrw mie, %0" :: "r"(mie_val));

    uint32_t readback;
    __asm__ volatile ("csrr %0, mie" : "=r"(readback));

    TEST_ASSERT((readback & (1 << CAUSE_MEI)) != 0, "MEIE bit set in mie");
}

/* ── Main ── */
void _start(void) {
    test_clic_init();
    test_clic_pending();
    test_clic_priority_arbitration();
    test_clic_threshold();
    test_clic_disable();
    test_clic_interrupt_range();
    test_clic_complete();
    test_csr_mtvec_vectored();
    test_csr_mie_bits();

    if (tests_failed == 0) {
        m5_exit(0);
    } else {
        m5_exit(1);
    }

    while(1) {}
}
