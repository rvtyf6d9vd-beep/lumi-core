/* core_portme_v1.c — CoreMark V1 timing + portable functions
 *
 * 提供: seeds, start_time, stop_time, get_time, time_in_secs,
 *       portable_init, portable_fini, default_num_contexts
 *
 * 与原版 core_portme.c 的区别:
 *   - portable_fini 为纯 no-op (结果由 coremark_v1_main.c 的 _exit 拦截写入)
 *
 * T-MS3-S1-7
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
    /* ERR-131L DEBUG: 临时返回固定值，排除 CSR 读取问题 */
    static unsigned long fake_cycle = 0;
    fake_cycle += 1000;
    return fake_cycle;
}

static CORETIMETYPE barebones_clock(void) {
    return (CORETIMETYPE)_rdcycle();
}

#define GETMYTIME(_t)              (*_t = barebones_clock())
#define MYTIMEDIFF(fin, ini)       ((fin) - (ini))
#define TIMER_RES_DIVIDER          1
#define SAMPLE_TIME_IMPLEMENTATION 1

/*
 * EE_TICKS_PER_SEC: rdcycle 返回 CPU 周期数。
 * 名义 1GHz → 1e9 ticks/sec。CM/MHz 计算不依赖绝对频率。
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
    return (CORE_TICKS)(MYTIMEDIFF(stop_time_val, start_time_val));
}

secs_ret time_in_secs(CORE_TICKS ticks) {
    return ((secs_ret)ticks) / (secs_ret)EE_TICKS_PER_SEC;
}

ee_u32 default_num_contexts = 1;

/* --- Portable init/fini --- */

void portable_init(core_portable *p, int *argc, char *argv[]) {
    (void)argc;
    (void)argv;
    if (sizeof(ee_ptr_int) != sizeof(ee_u8 *)) {
        /* pointer size mismatch — no-op output for V1 */
    }
    if (sizeof(ee_u32) != 4) {
        /* type size mismatch */
    }
    p->portable_id = 1;
}

void portable_fini(core_portable *p) {
    p->portable_id = 0;
    /* Result extraction handled by _exit() in coremark_v1_main.c */
}
