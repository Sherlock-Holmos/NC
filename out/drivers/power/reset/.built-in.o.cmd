cmd_drivers/power/reset/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/power/reset/built-in.o drivers/power/reset/msm-poweroff.o drivers/power/reset/xgene-reboot.o drivers/power/reset/syscon-reboot.o ; scripts/mod/modpost drivers/power/reset/built-in.o