cmd_drivers/md/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/md/built-in.o drivers/md/linear.o drivers/md/md-mod.o drivers/md/dm-mod.o drivers/md/dm-builtin.o drivers/md/dm-bufio.o drivers/md/dm-crypt.o drivers/md/dm-verity.o drivers/md/dm-req-crypt.o drivers/md/dm-android-verity.o ; scripts/mod/modpost drivers/md/built-in.o
