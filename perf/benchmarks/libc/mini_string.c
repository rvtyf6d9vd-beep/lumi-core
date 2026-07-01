/* mini_string.c - String functions for bare-metal RISC-V */

#include "mini_libc.h"

void *memset(void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) *p++ = (unsigned char)c;
    return s;
}

void *memcpy(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *sp = (const unsigned char *)src;
    while (n--) *d++ = *sp++;
    return dst;
}

void *memmove(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *sp = (const unsigned char *)src;
    if (d < sp) {
        while (n--) *d++ = *sp++;
    } else {
        d += n; sp += n;
        while (n--) *--d = *--sp;
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

size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1 == *s2) { s1++; s2++; }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    while (n && *s1 && *s1 == *s2) { s1++; s2++; n--; }
    return n ? ((unsigned char)*s1 - (unsigned char)*s2) : 0;
}

char *strcpy(char *dst, const char *src) {
    char *p = dst;
    while ((*p++ = *src++));
    return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
    char *p = dst;
    while (n && (*p++ = *src++)) n--;
    while (n--) *p++ = '\0';
    return dst;
}

char *strcat(char *dst, const char *src) {
    char *p = dst;
    while (*p) p++;
    while ((*p++ = *src++));
    return dst;
}
