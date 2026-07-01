/* mini_libc - Minimal C library for bare-metal RISC-V in gem5 SE mode
 *
 * Provides just enough to run CoreMark and Dhrystone benchmarks.
 * Not a full POSIX-compliant libc.
 */
#ifndef __MINI_LIBC_H__
#define __MINI_LIBC_H__

#include <stddef.h>
#include <stdint.h>

/* --- String functions --- */
void *memset(void *s, int c, size_t n);
void *memcpy(void *dst, const void *src, size_t n);
void *memmove(void *dst, const void *src, size_t n);
int   memcmp(const void *s1, const void *s2, size_t n);
size_t strlen(const char *s);
int    strcmp(const char *s1, const char *s2);
int    strncmp(const char *s1, const char *s2, size_t n);
char  *strcpy(char *dst, const char *src);
char  *strncpy(char *dst, const char *src, size_t n);
char  *strcat(char *dst, const char *src);

/* --- Heap --- */
void *malloc(size_t size);
void  free(void *ptr);
void *calloc(size_t nmemb, size_t size);

/* --- I/O --- */
int   putchar(int c);
int   puts(const char *s);
int   printf(const char *fmt, ...);
int   sprintf(char *buf, const char *fmt, ...);

/* --- Timing (gem5 m5 instructions + rdcycle) --- */
unsigned long rdcycle(void);
void m5_reset_stats(unsigned long ns_delay, unsigned long ns_period);
void m5_dump_stats(unsigned long ns_delay, unsigned long ns_period);
void m5_exit(unsigned long ns_delay);

/* --- Syscalls (Linux ABI for gem5 SE) --- */
void _exit(int code);

#endif /* __MINI_LIBC_H__ */
