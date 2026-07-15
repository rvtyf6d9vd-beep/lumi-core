#!/usr/bin/env python3
"""Short diagnostic run to capture WB-TRAP output."""
import subprocess, pty, os, sys, select, time

os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'obj_dir_fast'))

master, slave = pty.openpty()
proc = subprocess.Popen(
    ['./Vlumi_v1', '+itcm_file=../../../tests/results/coremark-v1_32.hex'],
    stdin=slave, stdout=slave, stderr=slave, close_fds=True
)
os.close(slave)

buf = b''
start = time.time()
trap_count = 0

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
            if 'WB-TRAP' in decoded or 'PROGRESS' in decoded or 'PASS' in decoded or 'FAIL' in decoded or 'TEST' in decoded:
                print(decoded, flush=True)
                if 'WB-TRAP' in decoded:
                    trap_count += 1
    elapsed = time.time() - start
    ret = proc.poll()
    if ret is not None:
        if buf:
            decoded = buf.decode('utf-8', errors='replace')
            print(decoded, flush=True)
        print(f"\n[diag] Exit={ret}, {elapsed:.1f}s, trap_lines={trap_count}", flush=True)
        break
    # Stop after 20M cycles (~20 seconds) or 60s wall time
    if elapsed > 60:
        proc.terminate()
        time.sleep(1)
        proc.kill()
        if buf:
            decoded = buf.decode('utf-8', errors='replace')
            print(decoded, flush=True)
        print(f"\n[diag] Killed after {elapsed:.1f}s, trap_lines={trap_count}", flush=True)
        break

os.close(master)
