cmd_drivers/block/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/block/built-in.o drivers/block/brd.o drivers/block/loop.o drivers/block/zram/built-in.o ; scripts/mod/modpost drivers/block/built-in.o