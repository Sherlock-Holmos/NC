cmd_fs/fat/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o fs/fat/built-in.o fs/fat/fat.o fs/fat/msdos.o ; scripts/mod/modpost fs/fat/built-in.o
