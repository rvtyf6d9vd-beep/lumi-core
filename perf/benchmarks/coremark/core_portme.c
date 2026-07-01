/* core_portme.c - CoreMark RISC-V bare-metal port for gem5 SE mode
 *
 * Timing: rdcycle CSR (cycle counter)
 * Memory: static allocation
 * Output: ee_printf (via barebones/ee_printf.c)
 */
#include "coremark.h"
#include "core_portme.h"

/* Seeds for different run types */
#if VALIDATION_RUN
volatile ee_s32 seed1_volatile = 0x3415;
volatile ee_s32 seed2_volatile = 0x3415;
volatile ee_s32 seed3_volatile = 0x66;
#endif
#if PERFORMANCE_RUN
volatile ee_s32 seed1_volatile = 0x0;
volatile ee_s32 seed2_volatile = 0x0;
volatile ee_s32 seed3_volatile = 0x66;
#endif
#if PROFILE_RUN
volatile ee_s32 seed1_volatile = 0x8;
volatile ee_s32 seed2_volatile = 0x8;
volatile ee_s32 seed3_volatile = 0x8;
#endif
volatile ee_s32 seed4_volatile = ITERATIONS;
volatile ee_s32 seed5_volatile = 0;

/* --- Timing: rdcycle CSR --- */

static inline unsigned long _rdcycle(void) {
    unsigned long val;
    __asm__ volatile("rdcycle %0" : "=r"(val));
    return val;
}

/* barebones_clock: return current cycle count (lower 32 bits) */
static CORETIMETYPE barebones_clock(void) {
    return (CORETIMETYPE)_rdcycle();
}

/* Timer macros */
#define GETMYTIME(_t)              (*_t = barebones_clock())
#define MYTIMEDIFF(fin, ini)       ((fin) - (ini))
#define TIMER_RES_DIVIDER          1
#define SAMPLE_TIME_IMPLEMENTATION 1

/*
 * EE_TICKS_PER_SEC: at 1GHz, 1 tick = 1ns, 1e9 ticks/sec.
 * But we use rdcycle which counts CPU cycles directly.
 * At 1GHz clock, cycles == nanoseconds.
 *
 * We report in terms of "timer ticks per second".
 * Since rdcycle gives us CPU cycles at 1GHz:
 *   EE_TICKS_PER_SEC = 1,000,000,000 (1e9 cycles per second at 1GHz)
 */
#define EE_TICKS_PER_SEC 1000000000UL

static CORETIMETYPE start_time_val, stop_time_val;

void start_time(void) {
    GETMYTIME(&start_time_val);
}

void stop_time(void) {
    GETMYTIME(&stop_time_val);
}

CORE_TICKS get_time(void) {
    CORE_TICKS elapsed = (CORE_TICKS)(MYTIMEDIFF(stop_time_val, start_time_val));
    return elapsed;
}

secs_ret time_in_secs(CORE_TICKS ticks) {
    secs_ret retval = ((secs_ret)ticks) / (secs_ret)EE_TICKS_PER_SEC;
    return retval;
}

ee_u32 default_num_contexts = 1;

/* --- Portable init/fini --- */

void portable_init(core_portable *p, int *argc, char *argv[]) {
    (void)argc;
    (void)argv;

    if (sizeof(ee_ptr_int) != sizeof(ee_u8 *)) {
        ee_printf(
            "ERROR! Please define ee_ptr_int to a type that holds a pointer!\n");
    }
    if (sizeof(ee_u32) != 4) {
        ee_printf("ERROR! Please define ee_u32 to a 32b unsigned type!\n");
    }
    p->portable_id = 1;
}

void portable_fini(core_portable *p) {
    p->portable_id = 0;
}
