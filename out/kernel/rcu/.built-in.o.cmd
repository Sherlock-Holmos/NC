cmd_kernel/rcu/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o kernel/rcu/built-in.o kernel/rcu/update.o kernel/rcu/sync.o kernel/rcu/srcu.o kernel/rcu/tree.o ; scripts/mod/modpost kernel/rcu/built-in.o