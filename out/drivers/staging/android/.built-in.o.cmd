cmd_drivers/staging/android/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/staging/android/built-in.o drivers/staging/android/ion/built-in.o drivers/staging/android/ashmem.o drivers/staging/android/timed_output.o drivers/staging/android/timed_gpio.o drivers/staging/android/sync.o drivers/staging/android/sync_debug.o drivers/staging/android/sw_sync.o drivers/staging/android/oneshot_sync.o drivers/staging/android/memsw_state.o ; scripts/mod/modpost drivers/staging/android/built-in.o
