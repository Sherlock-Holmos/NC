cmd_drivers/hwspinlock/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/hwspinlock/built-in.o drivers/hwspinlock/hwspinlock_core.o drivers/hwspinlock/msm_remote_spinlock.o ; scripts/mod/modpost drivers/hwspinlock/built-in.o
