/*
 * Lumi-Core PLIC (Platform-Level Interrupt Controller) Test
 * Tests PLIC register model: priority, pending, enable, threshold, claim/complete.
 * Software simulation of PLIC for gem5 SE mode.
 *
 * Compile: riscv32-unknown-elf-gcc -march=rv32imac_zicsr -mabi=ilp32 \
 *          -nostdlib -T freestanding.ld -o test_plic.riscv test_plic.c
 */

#include <stdint.h>

extern void m5_exit(uint64_t code);

static int tests_run = 0;
static int tests_passed = 0;
static int tests_failed = 0;

#define TEST_ASSERT(cond, msg) do { \
    tests_run++; \
    if (cond) { tests_passed++; } \
    else { tests_failed++; } \
} while(0)

/* ── PLIC Configuration ── */
#define PLIC_MAX_SOURCES  960
#define PLIC_NUM_SOURCES  32   /* Default config */
#define PLIC_NUM_CONTEXTS 2    /* M-mode + S-mode per hart */
#define PLIC_MAX_PRIORITY 7

/* ── PLIC Register Model (software simulation) ── */
typedef struct {
    uint32_t num_sources;
    uint32_t num_contexts;
    uint8_t  priority[PLIC_MAX_SOURCES + 1];  /* 0=disabled, 1-7 */
    uint32_t pending[PLIC_MAX_SOURCES / 32 + 1];
    uint32_t enable[PLIC_NUM_CONTEXTS][PLIC_MAX_SOURCES / 32 + 1];
    uint8_t  threshold[PLIC_NUM_CONTEXTS];
    uint32_t claim_complete[PLIC_NUM_CONTEXTS]; /* last claimed IRQ */
} plic_state_t;

static plic_state_t plic;

/* ── PLIC Operations ── */

void plic_init(uint32_t sources, uint32_t contexts) {
    plic.num_sources = sources;
    plic.num_contexts = contexts;

    for (int i = 0; i <= PLIC_MAX_SOURCES; i++)
        plic.priority[i] = 0;

    for (int i = 0; i < PLIC_MAX_SOURCES / 32 + 1; i++)
        plic.pending[i] = 0;

    for (int c = 0; c < PLIC_NUM_CONTEXTS; c++) {
        plic.threshold[c] = 0;
        plic.claim_complete[c] = 0;
        for (int i = 0; i < PLIC_MAX_SOURCES / 32 + 1; i++)
            plic.enable[c][i] = 0;
    }
}

void plic_set_priority(uint32_t source, uint8_t pri) {
    if (source > 0 && source <= plic.num_sources && pri <= PLIC_MAX_PRIORITY)
        plic.priority[source] = pri;
}

void plic_set_pending(uint32_t source) {
    if (source > 0 && source <= plic.num_sources)
        plic.pending[source / 32] |= (1 << (source % 32));
}

void plic_set_enable(uint32_t context, uint32_t source, int enable) {
    if (context < plic.num_contexts && source > 0 && source <= plic.num_sources) {
        if (enable)
            plic.enable[context][source / 32] |= (1 << (source % 32));
        else
            plic.enable[context][source / 32] &= ~(1 << (source % 32));
    }
}

/* Find highest priority pending+enabled interrupt for a context, above threshold */
uint32_t plic_claim(uint32_t context) {
    if (context >= plic.num_contexts) return 0;

    uint32_t best_id = 0;
    uint8_t best_pri = plic.threshold[context];

    for (uint32_t i = 1; i <= plic.num_sources; i++) {
        if ((plic.pending[i / 32] & (1 << (i % 32))) &&
            (plic.enable[context][i / 32] & (1 << (i % 32)))) {
            if (plic.priority[i] > best_pri) {
                best_pri = plic.priority[i];
                best_id = i;
            }
        }
    }

    if (best_id > 0) {
        plic.pending[best_id / 32] &= ~(1 << (best_id % 32));
        plic.claim_complete[context] = best_id;
    }
    return best_id;
}

void plic_complete(uint32_t context, uint32_t source) {
    if (context < plic.num_contexts && plic.claim_complete[context] == source) {
        plic.claim_complete[context] = 0;
    }
}

/* ── Test Cases ── */

void test_plic_init(void) {
    plic_init(32, 2);
    TEST_ASSERT(plic.num_sources == 32, "PLIC init: 32 sources");
    TEST_ASSERT(plic.num_contexts == 2, "PLIC init: 2 contexts");
}

void test_plic_priority(void) {
    plic_init(32, 2);

    plic_set_priority(1, 3);
    plic_set_priority(5, 7);
    plic_set_priority(10, 1);

    TEST_ASSERT(plic.priority[1] == 3, "Source 1 priority=3");
    TEST_ASSERT(plic.priority[5] == 7, "Source 5 priority=7 (max)");
    TEST_ASSERT(plic.priority[10] == 1, "Source 10 priority=1 (min active)");
}

void test_plic_claim_basic(void) {
    plic_init(32, 2);

    /* Enable and trigger sources 1, 5, 10 for context 0 (M-mode) */
    plic_set_priority(1, 3);
    plic_set_priority(5, 7);
    plic_set_priority(10, 5);

    plic_set_enable(0, 1, 1);
    plic_set_enable(0, 5, 1);
    plic_set_enable(0, 10, 1);

    plic_set_pending(1);
    plic_set_pending(5);
    plic_set_pending(10);

    /* Claim should return source 5 (highest priority) */
    uint32_t claimed = plic_claim(0);
    TEST_ASSERT(claimed == 5, "PLIC claim: source 5 (pri=7) wins");

    /* Complete */
    plic_complete(0, 5);
    TEST_ASSERT(plic.claim_complete[0] == 0, "PLIC complete: cleared");

    /* Next claim should return source 10 (pri=5) */
    claimed = plic_claim(0);
    TEST_ASSERT(claimed == 10, "PLIC next claim: source 10 (pri=5)");
}

void test_plic_threshold(void) {
    plic_init(32, 2);

    plic_set_priority(1, 2);
    plic_set_priority(5, 5);
    plic_set_enable(0, 1, 1);
    plic_set_enable(0, 5, 1);
    plic_set_pending(1);
    plic_set_pending(5);

    /* Set threshold to 3 */
    plic.threshold[0] = 3;

    uint32_t claimed = plic_claim(0);
    TEST_ASSERT(claimed == 5, "Threshold=3: only source 5 (pri=5) claimed");

    /* Raise threshold to 5 */
    plic.threshold[0] = 5;
    plic_set_pending(5);  /* Re-pending since it was cleared */
    claimed = plic_claim(0);
    TEST_ASSERT(claimed == 0, "Threshold=5: no source above threshold");
}

void test_plic_multi_context(void) {
    plic_init(32, 2);

    plic_set_priority(3, 4);
    plic_set_enable(0, 3, 1);  /* Enable for M-mode only */
    plic_set_pending(3);

    /* M-mode should claim */
    uint32_t m_claimed = plic_claim(0);
    TEST_ASSERT(m_claimed == 3, "M-mode context claims source 3");

    /* Re-pend, but S-mode doesn't have it enabled */
    plic_set_pending(3);
    uint32_t s_claimed = plic_claim(1);
    TEST_ASSERT(s_claimed == 0, "S-mode context: source 3 not enabled");

    /* Enable for S-mode */
    plic_set_enable(1, 3, 1);
    plic_set_pending(3);
    s_claimed = plic_claim(1);
    TEST_ASSERT(s_claimed == 3, "S-mode context claims source 3 after enable");
}

void test_plic_source_range(void) {
    /* Test various valid source counts */
    plic_init(32, 2);
    TEST_ASSERT(plic.num_sources == 32, "Min config: 32 sources");

    plic_init(960, 2);
    TEST_ASSERT(plic.num_sources == 960, "Max config: 960 sources");

    /* Source 0 is reserved (no interrupt) */
    plic_init(32, 2);
    plic_set_priority(0, 7);  /* Should be ignored */
    TEST_ASSERT(plic.priority[0] == 0, "Source 0 reserved (priority unchanged)");
}

void test_plic_priority_zero_disabled(void) {
    plic_init(32, 2);

    /* Priority 0 means disabled */
    plic_set_priority(5, 0);
    plic_set_enable(0, 5, 1);
    plic_set_pending(5);

    uint32_t claimed = plic_claim(0);
    TEST_ASSERT(claimed == 0, "Priority 0 = disabled, not claimed");
}

/* ── Main ── */
void _start(void) {
    test_plic_init();
    test_plic_priority();
    test_plic_claim_basic();
    test_plic_threshold();
    test_plic_multi_context();
    test_plic_source_range();
    test_plic_priority_zero_disabled();

    if (tests_failed == 0) {
        m5_exit(0);
    } else {
        m5_exit(1);
    }

    while(1) {}
}
