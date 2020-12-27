cmd_certs/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o certs/built-in.o certs/system_keyring.o certs/system_certificates.o ; scripts/mod/modpost certs/built-in.o
