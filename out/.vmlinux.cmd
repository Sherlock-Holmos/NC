cmd_vmlinux := /bin/bash ../scripts/link-vmlinux.sh /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL  --no-undefined -X -shared -Bsymbolic -z notext -z norelro  --no-apply-dynamic-relocs --build-id
