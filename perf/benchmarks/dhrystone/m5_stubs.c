/* m5_stubs.c - Stub implementations of m5 pseudo-instructions for RV32
 * These are no-ops. In gem5 SE mode, stats boundaries are determined
 * by the full simulation tick range. For RV64 builds, link with libm5.a instead.
 */

void m5_reset_stats(unsigned long ns_delay, unsigned long ns_period) {
    (void)ns_delay;
    (void)ns_period;
}

void m5_dump_stats(unsigned long ns_delay, unsigned long ns_period) {
    (void)ns_delay;
    (void)ns_period;
}
