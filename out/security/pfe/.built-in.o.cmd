cmd_security/pfe/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o security/pfe/built-in.o security/pfe/pfk.o security/pfe/pfk_kc.o security/pfe/pfk_ice.o security/pfe/pfk_ext4.o security/pfe/pfk_ecryptfs.o ; scripts/mod/modpost security/pfe/built-in.o
