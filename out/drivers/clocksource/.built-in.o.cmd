cmd_drivers/clocksource/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/clocksource/built-in.o drivers/clocksource/clksrc-probe.o drivers/clocksource/arm_arch_timer.o drivers/clocksource/dummy_timer.o ; scripts/mod/modpost drivers/clocksource/built-in.o