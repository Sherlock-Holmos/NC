cmd_fs/fuse/fuse.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o fs/fuse/fuse.o fs/fuse/dev.o fs/fuse/dir.o fs/fuse/file.o fs/fuse/inode.o fs/fuse/control.o fs/fuse/passthrough.o ; scripts/mod/modpost fs/fuse/fuse.o
