cmd_drivers/cpuidle/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/cpuidle/built-in.o drivers/cpuidle/cpuidle.o drivers/cpuidle/driver.o drivers/cpuidle/governor.o drivers/cpuidle/sysfs.o drivers/cpuidle/governors/built-in.o drivers/cpuidle/lpm-levels.o drivers/cpuidle/lpm-levels-of.o drivers/cpuidle/lpm-workarounds.o ; scripts/mod/modpost drivers/cpuidle/built-in.o