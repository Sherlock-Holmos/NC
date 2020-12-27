cmd_fs/pstore/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o fs/pstore/built-in.o fs/pstore/pstore.o fs/pstore/ramoops.o ; scripts/mod/modpost fs/pstore/built-in.o
