cmd_arch/arm64/crypto/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o arch/arm64/crypto/built-in.o arch/arm64/crypto/sha1-ce.o arch/arm64/crypto/sha2-ce.o arch/arm64/crypto/ghash-ce.o arch/arm64/crypto/poly-hash-ce.o arch/arm64/crypto/aes-ce-cipher.o arch/arm64/crypto/aes-ce-ccm.o arch/arm64/crypto/aes-ce-blk.o arch/arm64/crypto/aes-neon-blk.o arch/arm64/crypto/aes-arm64.o arch/arm64/crypto/crc32-arm64.o ; scripts/mod/modpost arch/arm64/crypto/built-in.o
