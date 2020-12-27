cmd_fs/ramfs/ramfs.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o fs/ramfs/ramfs.o fs/ramfs/inode.o fs/ramfs/file-mmu.o ; scripts/mod/modpost fs/ramfs/ramfs.o
