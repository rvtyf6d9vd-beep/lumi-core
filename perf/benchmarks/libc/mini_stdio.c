/* mini_stdio.c - Minimal printf for bare-metal RISC-V
 *
 * Supports: %d, %u, %x, %X, %o, %s, %c, %ld, %lu, %lx, %lX, %p, %%
 * Field width and zero-padding supported (e.g., %08x, %10d)
 */

#include "mini_libc.h"
#include <stdarg.h>

/* Linux RISC-V syscall numbers */
#define __NR_write 64
#define __NR_exit  93

static long sys_write(int fd, const void *buf, unsigned long count) {
    register long a0 __asm__("a0") = fd;
    register const void *a1 __asm__("a1") = buf;
    register unsigned long a2 __asm__("a2") = count;
    register long a7 __asm__("a7") = __NR_write;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a1), "r"(a2), "r"(a7) : "memory");
    return a0;
}

void _exit(int code) {
    register long a0 __asm__("a0") = code;
    register long a7 __asm__("a7") = __NR_exit;
    __asm__ volatile("ecall" : : "r"(a0), "r"(a7) : "memory");
    while (1) {}
}

int putchar(int c) {
    char ch = (char)c;
    sys_write(1, &ch, 1);
    return c;
}

int puts(const char *s) {
    unsigned long len = strlen(s);
    sys_write(1, s, len);
    putchar('\n');
    return (int)len + 1;
}

/* --- Internal formatting helpers --- */

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

    /* Padding (space) */
    if (!zero_pad) {
        while (pad-- > 0) out_char(buf, end, ' ');
    }
    /* Sign */
    if (neg) out_char(buf, end, '-');
    /* Zero padding */
    if (zero_pad) {
        while (pad-- > 0) out_char(buf, end, '0');
    }
    /* Digits (reverse order) */
    while (i-- > 0) out_char(buf, end, tmp[i]);

    return len + (zero_pad ? 0 : pad);
}

static int vformat(char *buf, int size, const char *fmt, va_list ap) {
    char *p = buf;
    char *end = buf + size;

    while (*fmt && p < end) {
        if (*fmt != '%') {
            out_char(&p, end, *fmt++);
            continue;
        }
        fmt++;  /* skip '%' */

        /* Flags */
        int zero_pad = 0, width = 0, is_long = 0;
        if (*fmt == '0') { zero_pad = 1; fmt++; }

        /* Width */
        while (*fmt >= '0' && *fmt <= '9') {
            width = width * 10 + (*fmt - '0');
            fmt++;
        }

        /* Length modifier */
        if (*fmt == 'l') { is_long = 1; fmt++; }
        if (*fmt == 'l') { is_long = 2; fmt++; } /* ll = same as l for 64-bit */

        /* Conversion */
        switch (*fmt) {
        case 'd':
        case 'i': {
            long val = is_long ? va_arg(ap, long) : (long)va_arg(ap, int);
            int neg = (val < 0);
            if (neg) val = -val;
            put_uint(&p, end, (unsigned long)val, 10, 0, width, zero_pad, neg);
            break;
        }
        case 'u': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, end, val, 10, 0, width, zero_pad, 0);
            break;
        }
        case 'x': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, end, val, 16, 0, width, zero_pad, 0);
            break;
        }
        case 'X': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, end, val, 16, 1, width, zero_pad, 0);
            break;
        }
        case 'o': {
            unsigned long val = is_long ? va_arg(ap, unsigned long)
                                        : (unsigned long)va_arg(ap, unsigned int);
            put_uint(&p, end, val, 8, 0, width, zero_pad, 0);
            break;
        }
        case 'p': {
            unsigned long val = (unsigned long)va_arg(ap, void *);
            out_char(&p, end, '0');
            out_char(&p, end, 'x');
            put_uint(&p, end, val, 16, 0, 16, 1, 0);
            break;
        }
        case 's': {
            const char *s = va_arg(ap, const char *);
            if (!s) s = "(null)";
            int slen = strlen(s);
            int pad = (width > slen) ? (width - slen) : 0;
            while (pad-- > 0) out_char(&p, end, ' ');
            while (*s && p < end) out_char(&p, end, *s++);
            break;
        }
        case 'c':
            out_char(&p, end, (char)va_arg(ap, int));
            break;
        case '%':
            out_char(&p, end, '%');
            break;
        default:
            out_char(&p, end, '%');
            out_char(&p, end, *fmt);
            break;
        }
        fmt++;
    }

    if (p < end) *p = '\0';
    else if (size > 0) buf[size - 1] = '\0';

    return (int)(p - buf);
}

int printf(const char *fmt, ...) {
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    int n = vformat(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    sys_write(1, buf, n);
    return n;
}

int sprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int n = vformat(buf, 4096, fmt, ap);  /* Assume max 4KB */
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
