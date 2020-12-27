cmd_kernel/bpf/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o kernel/bpf/built-in.o kernel/bpf/core.o ; scripts/mod/modpost kernel/bpf/built-in.o
