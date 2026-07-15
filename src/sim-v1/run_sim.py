#!/usr/bin/env python3
"""Run Verilator simulation with PTY to force line-buffered output."""
import subprocess, pty, os, sys, select, time

os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'obj_dir_fast'))

master, slave = pty.openpty()
proc = subprocess.Popen(
    ['./Vlumi_v1', '+itcm_file=../../../tests/results/coremark-v1_32.hex'],
    stdin=slave, stdout=slave, stderr=slave, close_fds=True
)
os.close(slave)

log = open('../sim_output.log', 'w')
buf = b''
start = time.time()

while True:
    r, _, _ = select.select([master], [], [], 1.0)
    if r:
        try:
            data = os.read(master, 65536)
        except OSError:
            break
        if not data:
            break
        buf += data
        while b'\n' in buf:
            line, buf = buf.split(b'\n', 1)
            decoded = line.decode('utf-8', errors='replace')
            log.write(decoded + '\n')
            log.flush()
            # Print PROGRESS and important lines to our stdout
            if 'PROGRESS' in decoded or 'PASS' in decoded or 'FAIL' in decoded or 'ECALL' in decoded or 'SCOREBOARD' in decoded or 'Benchmark' in decoded or 'CoreMark' in decoded or 'V1' in decoded:
                print(decoded, flush=True)
    ret = proc.poll()
    if ret is not None:
        # Drain remaining
        try:
            while True:
                r2, _, _ = select.select([master], [], [], 0.1)
                if not r2:
                    break
                data = os.read(master, 65536)
                if not data:
                    break
                buf += data
        except:
            pass
        if buf:
            decoded = buf.decode('utf-8', errors='replace')
            log.write(decoded + '\n')
            log.flush()
            print(decoded, flush=True)
        elapsed = time.time() - start
        print(f"\n[run_sim] Process exited with code {ret} after {elapsed:.1f}s", flush=True)
        log.write(f"\n[run_sim] Exit code: {ret}, Wall time: {elapsed:.1f}s\n")
        break

log.close()
os.close(master)
sys.exit(proc.returncode or 0)
