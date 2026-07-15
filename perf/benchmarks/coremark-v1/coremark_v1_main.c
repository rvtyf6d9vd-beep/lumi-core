/* coremark_v1_main.c — CoreMark V1 完整入口 (替换 core_main.c + ee_printf.c)
 *
 * 设计:
 *   1. 提供 ee_printf() — 解析关键输出行，捕获性能数据
 *   2. 提供 _exit() — 写入结果到 0x3FFE0 后 ECALL 退出
 *   3. #include 原版 core_main.c (重命名 main → coremark_orig_main)
 *   4. 提供 V1 main() 调用原版
 *
 * 编译时必须定义 GEM5_SIMULATION，使原版 core_main.c:
 *   - 计算 CM/MHz (cm_mhz_x100)
 *   - 输出 "CoreMark_CM_per_MHz_x100 : <val>" 等关键行
 *   - 调用 _exit(0) (被我们拦截)
 *
 * T-MS3-S1-7
 */

#include <stdarg.h>
#include "coremark.h"

/* ═══════════════════════════════════════════════
 * Result capture via ee_printf interception
 * ═══════════════════════════════════════════════ */

static unsigned long v1_cm_per_mhz_x100 = 0;
static unsigned long v1_sim_iters = 0;
static unsigned long v1_sim_ticks = 0;
static unsigned long v1_errors = 0;

/* 简易字符串数字解析 */
static unsigned long parse_ulong_after(const char *buf, const char *key) {
    const char *p = buf;
    const char *k = key;
    /* 简单子串匹配 */
    while (*p) {
        const char *pp = p, *kk = key;
        while (*kk && *pp == *kk) { pp++; kk++; }
        if (*kk == '\0') {
            /* found key, skip spaces and colon */
            while (*pp == ' ' || *pp == ':') pp++;
            unsigned long val = 0;
            while (*pp >= '0' && *pp <= '9') {
                val = val * 10 + (unsigned long)(*pp - '0');
                pp++;
            }
            return val;
        }
        p++;
    }
    return 0;
}

/* ee_printf: 捕获关键输出行，不执行实际 I/O */
int ee_printf(const char *fmt, ...) {
    char buf[256];
    va_list ap;
    va_start(ap, fmt);

    /* 简单格式化: 只处理 %lu, %u, %d, %s, %x, %% */
    char *p = buf;
    char *end = buf + sizeof(buf) - 1;
    const char *f = fmt;
    while (*f && p < end) {
        if (*f != '%') {
            *p++ = *f++;
            continue;
        }
        f++;
        /* skip flags/width */
        while (*f == '0' || *f == ' ' || *f == '+') f++;
        while (*f >= '0' && *f <= '9') f++;
        if (*f == 'l') f++;
        switch (*f) {
        case 'd': case 'i': {
            int val = va_arg(ap, int);
            if (val < 0) { *p++ = '-'; val = -val; }
            char tmp[12]; int i = 0;
            if (val == 0) tmp[i++] = '0';
            else while (val > 0) { tmp[i++] = '0' + val % 10; val /= 10; }
            while (i-- > 0 && p < end) *p++ = tmp[i];
            break;
        }
        case 'u': {
            unsigned long val = va_arg(ap, unsigned long);
            char tmp[12]; int i = 0;
            if (val == 0) tmp[i++] = '0';
            else while (val > 0) { tmp[i++] = '0' + val % 10; val /= 10; }
            while (i-- > 0 && p < end) *p++ = tmp[i];
            break;
        }
        case 'x': case 'X': {
            unsigned long val = va_arg(ap, unsigned long);
            char tmp[12]; int i = 0;
            const char *hex = (*f == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
            if (val == 0) tmp[i++] = '0';
            else while (val > 0) { tmp[i++] = hex[val & 0xf]; val >>= 4; }
            while (i-- > 0 && p < end) *p++ = tmp[i];
            break;
        }
        case 's': {
            const char *s = va_arg(ap, const char *);
            if (!s) s = "(null)";
            while (*s && p < end) *p++ = *s++;
            break;
        }
        case 'c':
            *p++ = (char)va_arg(ap, int);
            break;
        case '%':
            *p++ = '%';
            break;
        default:
            *p++ = '%'; *p++ = *f;
            break;
        }
        f++;
    }
    *p = '\0';
    va_end(ap);

    /* 捕获关键数据行 */
    unsigned long v;
    if ((v = parse_ulong_after(buf, "CoreMark_CM_per_MHz_x100")) && v > 0)
        v1_cm_per_mhz_x100 = v;
    if ((v = parse_ulong_after(buf, "CoreMark_sim_iters")) && v > 0)
        v1_sim_iters = v;
    if ((v = parse_ulong_after(buf, "CoreMark_sim_ticks")) && v > 0)
        v1_sim_ticks = v;
    if (parse_ulong_after(buf, "Errors detected") > 0)
        v1_errors = 1;

    return (int)(p - buf);
}

/* ═══════════════════════════════════════════════
 * _exit 拦截: 写结果 → ECALL
 * ═══════════════════════════════════════════════ */

extern void v1_write_result(unsigned long bench_id, unsigned long iterations,
                             unsigned long total_ticks, unsigned long metric_x100,
                             unsigned long checks);

void _exit(int code) {
    /* 写入 CoreMark 结果到 0x3FFE0 */
    v1_write_result(
        1,                      /* bench_id: CoreMark */
        v1_sim_iters,           /* iterations */
        v1_sim_ticks,           /* total_ticks */
        v1_cm_per_mhz_x100,     /* metric_x100: CM/MHz * 100 */
        v1_errors               /* checks: 0=pass */
    );

    /* 真正的 ECALL exit */
    register long a0 __asm__("a0") = code;
    register long a7 __asm__("a7") = 93;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while (1) {}
}

/* ═══════════════════════════════════════════════
 * Include original core_main.c (renamed main)
 * ═══════════════════════════════════════════════ */

#define main coremark_orig_main
#include "../coremark/core_main.c"
#undef main

/* V1 main: 调用原版 main，返回后调用 _exit(0) 触发 v1_write_result */
int main(int argc, char *argv[]) {
    int rc = coremark_orig_main(argc, argv);
    _exit(rc);
    return rc;  /* never reached */
}
