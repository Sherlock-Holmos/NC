cmd_drivers/misc/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/misc/built-in.o drivers/misc/eeprom/built-in.o drivers/misc/cb710/built-in.o drivers/misc/ti-st/built-in.o drivers/misc/lis3lv02d/built-in.o drivers/misc/mic/built-in.o drivers/misc/qseecom.o drivers/misc/hdcp.o drivers/misc/compat_qseecom.o drivers/misc/uid_sys_stats.o drivers/misc/qcom/built-in.o drivers/misc/qpnp-misc.o drivers/misc/fastchg.o drivers/misc/memory_state_time.o drivers/misc/ant_check.o ; scripts/mod/modpost drivers/misc/built-in.o