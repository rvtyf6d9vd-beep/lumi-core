/* v1_lib.c — V1 Verilator 基准测试 I/O 库
 *
 * 核心设计: 所有 I/O 函数为 no-op (无 ECALL)，避免 scoreboard 误触发。
 * 仅 _exit() 保留 ECALL (a7=93) 用于通知 scoreboard test_done。
 *
 * 提供: string/memory/stdio(no-op)/timing/exit
 * 不依赖 libmini.a
 *
 * T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真
 */

#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>

/* ═══════════════════════════════════════════════
 * String functions
 * ═══════════════════════════════════════════════ */

size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1 == *s2) { s1++; s2++; }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    while (n && *s1 && *s1 == *s2) { s1++; s2++; n--; }
    return n ? (unsigned char)*s1 - (unsigned char)*s2 : 0;
}

char *strcpy(char *dst, const char *src) {
    char *d = dst;
    while ((*d++ = *src++));
    return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i]; i++) dst[i] = src[i];
    for (; i < n; i++) dst[i] = '\0';
    return dst;
}

char *strcat(char *dst, const char *src) {
    char *d = dst + strlen(dst);
    while ((*d++ = *src++));
    return dst;
}

/* ═══════════════════════════════════════════════
 * Memory functions
 * ═══════════════════════════════════════════════ */

void *memset(void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) *p++ = (unsigned char)c;
    return s;
}

void *memcpy(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    while (n--) *d++ = *s++;
    return dst;
}

void *memmove(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    if (d < s) {
        while (n--) *d++ = *s++;
    } else {
        d += n; s += n;
        while (n--) *--d = *--s;
    }
    return dst;
}

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    while (n--) {
        if (*p1 != *p2) return *p1 - *p2;
        p1++; p2++;
    }
    return 0;
}

/* ═══════════════════════════════════════════════
 * Heap (simple bump allocator, no free)
 * ═══════════════════════════════════════════════ */

extern char end;  /* provided by linker script */
static char *heap_ptr = &end;

void *malloc(size_t size) {
    /* align heap_ptr to 8 bytes first (SA-8: 修复未对齐指针) */
    heap_ptr = (char *)(((uintptr_t)heap_ptr + 7) & ~(uintptr_t)7);
    size = (size + 7) & ~(size_t)7;
    char *p = heap_ptr;
    heap_ptr += size;
    return p;
}

void free(void *ptr) {
    (void)ptr;  /* no-op: bump allocator */
}

void *calloc(size_t nmemb, size_t size) {
    size_t total = nmemb * size;
    void *p = malloc(total);
    if (p) memset(p, 0, total);
    return p;
}

/* ═══════════════════════════════════════════════
 * I/O functions — ALL NO-OP for V1 (no ECALL)
 * ═══════════════════════════════════════════════ */

int printf(const char *fmt, ...) {
    (void)fmt;
    return 0;
}

int putchar(int c) {
    (void)c;
    return c;
}

int puts(const char *s) {
    (void)s;
    return 0;
}

/* sprintf/snprintf: real formatting (used by CoreMark internally) */
static void out_char(char **buf, char *end, char c) {
    if (*buf < end) *(*buf)++ = c;
}

static int put_uint(char **buf, char *end, unsigned long val, int base,
                    int uppercase, int width, int zero_pad, int neg) {
    char tmp[24];
    int i = 0, len = 0, pad;
    const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

    if (val == 0) {
        tmp[i++] = '0';
    } else {
        while (val > 0) {
            tmp[i++] = digits[val % base];
            val /= base;
        }
    }

    len = i + (neg ? 1 : 0);
    pad = (width > len) ? (width - len) : 0;
    char pad_char = zero_pad ? '0' : ' ';

    if (!zero_pad) {
        while (pad-- > 0) out_char(buf, end, ' ');
    }
    if (neg) out_char(buf, end, '-');
    if (zero_pad) {
        while (pad-- > 0) out_char(buf, end, '0');
    }
    while (i-- > 0) out_char(buf, end, tmp[i]);

    return len + (zero_pad ? 0 : pad);
}

static int vformat(char *buf, int size, const char *fmt, va_list ap) {
    char *p = buf;
    char *e = buf + size;

    while (*fmt && p < e) {
        if (*fmt != '%') {
            out_char(&p, e, *fmt++);
            continue;
        }
        fmt++;

        int zero_pad = 0, width = 0, is_long = 0;
        if (*fmt == '0') { zero_pad = 1; fmt++; }

        while (*fmt >= '0' && *fmt <= '9') {
            width = width * 10 + (*fmt - '0');
            fmt++;
        }

        if (*fmt == 'l') { is_long = 1; fmt++; }
        if (*fmt == 'l') { is_long = 2; fmt++; }

        switch (*fmt) {
        case 'd': case 'i': {
            long val = is_long ? va_arg(ap, long) : (long)va_arg(ap, int);
            int neg = (val < 0);
            if (neg) val = -val;
            put_uint(&p, e, (unsigned long)val, 10, 0, width, zero_pad, neg);
            break;
        }
        case 'u': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, e, val, 10, 0, width, zero_pad, 0);
            break;
        }
        case 'x': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, e, val, 16, 0, width, zero_pad, 0);
            break;
        }
        case 'X': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, e, val, 16, 1, width, zero_pad, 0);
            break;
        }
        case 'o': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, e, val, 8, 0, width, zero_pad, 0);
            break;
        }
        case 'p': {
            unsigned long val = (unsigned long)va_arg(ap, void *);
            out_char(&p, e, '0'); out_char(&p, e, 'x');
            put_uint(&p, e, val, 16, 0, 16, 1, 0);
            break;
        }
        case 's': {
            const char *s = va_arg(ap, const char *);
            if (!s) s = "(null)";
            int slen = strlen(s);
            int spad = (width > slen) ? (width - slen) : 0;
            while (spad-- > 0) out_char(&p, e, ' ');
            while (*s && p < e) out_char(&p, e, *s++);
            break;
        }
        case 'c':
            out_char(&p, e, (char)va_arg(ap, int));
            break;
        case '%':
            out_char(&p, e, '%');
            break;
        default:
            out_char(&p, e, '%');
            out_char(&p, e, *fmt);
            break;
        }
        fmt++;
    }

    if (p < e) *p = '\0';
    else if (size > 0) buf[size - 1] = '\0';

    return (int)(p - buf);
}

int sprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int n = vformat(buf, 4096, fmt, ap);
    va_end(ap);
    return n;
}

int snprintf(char *buf, size_t size, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int n = vformat(buf, (int)size, fmt, ap);
    va_end(ap);
    return n;
}

/* ═══════════════════════════════════════════════
 * Timing — rdcycle CSR (mcycle, 0xC00)
 * ═══════════════════════════════════════════════ */

unsigned long rdcycle(void) {
    unsigned long val;
    __asm__ volatile(
        ".option push\n"
        ".option arch, +zicsr\n"
        "rdcycle %0\n"
        ".option pop\n"
        : "=r"(val));
    return val;
}

/* m5 stubs: no-op for V1 (no gem5 stats) */
void m5_reset_stats(unsigned long ns_delay, unsigned long ns_period) {
    (void)ns_delay; (void)ns_period;
}

void m5_dump_stats(unsigned long ns_delay, unsigned long ns_period) {
    (void)ns_delay; (void)ns_period;
}

/* ═══════════════════════════════════════════════
 * Exit — NOT provided here.
 * Each benchmark wrapper provides its own _exit() to intercept results.
 * crt0_v1.S does ECALL inline (doesn't call _exit function).
 * ═══════════════════════════════════════════════ */

/* ═══════════════════════════════════════════════
 * Benchmark result protocol
 * ═══════════════════════════════════════════════
 * Results written to 0x3FFE0, read by TB after ECALL detection.
 * Layout (8 × uint32):
 *   [0] magic:    0xDEADBEEF
 *   [1] bench_id: 1=CoreMark, 2=Dhrystone
 *   [2] iterations
 *   [3] total_ticks
 *   [4] metric_x100 (CM/MHz*100 or DMIPS/MHz*100)
 *   [5] checks (0=pass, >0=fail)
 *   [6-7] reserved
 */

#define V1_RESULT_BASE  ((volatile unsigned long *)0x3FFE0UL)

void v1_write_result(unsigned long bench_id, unsigned long iterations,
                      unsigned long total_ticks, unsigned long metric_x100,
                      unsigned long checks) {
    volatile unsigned long *r = V1_RESULT_BASE;
    r[0] = 0xDEADBEEFUL;  /* magic */
    r[1] = bench_id;
    r[2] = iterations;
    r[3] = total_ticks;
    r[4] = metric_x100;
    r[5] = checks;
    r[6] = 0;
    r[7] = 0;
}
