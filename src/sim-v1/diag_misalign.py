#!/usr/bin/env python3
"""Short diagnostic run to capture MISALIGN-DBG output."""
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

while time.time() - start < 15:
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
            if 'MISALIGN' in decoded or 'WB-TRAP' in decoded[:50]:
                print(decoded, flush=True)
    if proc.poll() is not None:
        break

proc.terminate()
time.sleep(0.5)
proc.kill()
os.close(master)
