cmd_sound/core/snd.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o sound/core/snd.o sound/core/sound.o sound/core/init.o sound/core/memory.o sound/core/control.o sound/core/misc.o sound/core/device.o sound/core/info.o sound/core/ctljack.o sound/core/jack.o ; scripts/mod/modpost sound/core/snd.o