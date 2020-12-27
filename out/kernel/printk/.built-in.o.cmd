cmd_kernel/printk/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o kernel/printk/built-in.o kernel/printk/printk.o ; scripts/mod/modpost kernel/printk/built-in.o
