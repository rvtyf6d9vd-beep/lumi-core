#!/bin/bash
# gem5 python3-config wrapper for macOS
# Workaround: gem5's SConstruct flag_filter uses env.MergeFlags() which
# incorrectly handles macOS "-framework" flags from python3-config.
# This wrapper strips -framework flags and provides simplified output.
#
# Usage: scons build/RISCV/gem5.opt PYTHON_CONFIG=/path/to/this/script

REAL_CONFIG="python3-config"
ARGS="$@"

# Check if --embed is supported
if echo "$ARGS" | grep -q "\-\-embed"; then
    REAL_ARGS="--embed"
else
    REAL_ARGS=""
fi

if echo "$ARGS" | grep -q "\-\-ldflags"; then
    # Get the real ldflags, strip -framework and -framework args
    OUTPUT=$($REAL_CONFIG --ldflags $REAL_ARGS 2>/dev/null)
    CLEANED=""
    SKIP_NEXT=0
    for flag in $OUTPUT; do
        if [ "$SKIP_NEXT" = "1" ]; then
            SKIP_NEXT=0
            continue
        fi
        if [ "$flag" = "-framework" ]; then
            SKIP_NEXT=1
            continue
        fi
        CLEANED="$CLEANED $flag"
    done
    # If --includes is also requested, append it
    if echo "$ARGS" | grep -q "\-\-includes"; then
        CLEANED="$CLEANED $($REAL_CONFIG --includes $REAL_ARGS 2>/dev/null)"
    fi
    echo $CLEANED
elif echo "$ARGS" | grep -q "\-\-includes"; then
    $REAL_CONFIG --includes $REAL_ARGS 2>/dev/null
else
    $REAL_CONFIG $ARGS 2>/dev/null
fi
