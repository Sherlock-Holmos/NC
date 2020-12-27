cmd_crypto/hash_info.o := ccache /home/sherlock/gcc64/bin/aarch64-linux-gnu-gcc -Wp,-MD,crypto/.hash_info.o.d  -nostdinc -isystem /home/sherlock/gcc64/bin/../lib/gcc/aarch64-linux-gnu/11.0.0/include -I../arch/arm64/include -Iarch/arm64/include/generated/uapi -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h  -I../crypto -Icrypto -D__KERNEL__ -mlittle-endian -w -W -Wunused-variable -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Wimplicit-function-declaration -Wno-format-security -Wno-unused-function -std=gnu89 -fno-PIE -march=armv8-a+crc+crypto -mcpu=cortex-a53 -Wno-unused-but-set-variable -mgeneral-regs-only -DCONFIG_AS_LSE=1 -DCONFIG_VDSO32=1 -fno-pic -mpc-relative-literal-loads -fno-asynchronous-unwind-tables -DCONFIG_ARCH_SUPPORTS_INT128 -DCONFIG_ARCH_SUPPORTS_INT128 -mabi=lp64 -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -Wno-address-of-packed-member -Wno-attribute-alias -fno-store-merging -fno-code-hoisting -fno-fp-int-builtin-inexact -fno-ipa-bit-cp -fno-ipa-icf-variables -fno-ipa-vrp -fno-printf-return-value -fno-shrink-wrap-separate -fno-peel-loops -fno-split-loops -Wno-misleading-indentation -Wno-incompatible-pointer-types -Wno-unused-const-variable -Wno-memset-elt-size -Wno-duplicate-decl-specifier -Wno-shift-overflow -Wno-discarded-array-qualifiers -Wno-switch-unreachable -Wno-int-in-bool-context -Wno-array-bounds -Wno-bool-operation -Wno-format-overflow -Wno-frame-address -Wno-maybe-uninitialized -Wno-packed-not-aligned -Os -fno-allow-store-data-races -DCC_HAVE_ASM_GOTO -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=date-time -Wno-packed-not-aligned -O3    -D"KBUILD_STR(s)=$(pound)s" -D"KBUILD_BASENAME=KBUILD_STR(hash_info)"  -D"KBUILD_MODNAME=KBUILD_STR(hash_info)" -c -o crypto/.tmp_hash_info.o ../crypto/hash_info.c

source_crypto/hash_info.o := ../crypto/hash_info.c

deps_crypto/hash_info.o := \
  ../include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  ../include/crypto/hash_info.h \
  ../include/crypto/sha.h \
  ../include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  ../include/uapi/linux/types.h \
  arch/arm64/include/generated/asm/types.h \
  ../include/uapi/asm-generic/types.h \
  ../include/asm-generic/int-ll64.h \
  ../include/uapi/asm-generic/int-ll64.h \
  ../arch/arm64/include/uapi/asm/bitsperlong.h \
  ../include/asm-generic/bitsperlong.h \
  ../include/uapi/asm-generic/bitsperlong.h \
  ../include/uapi/linux/posix_types.h \
  ../include/linux/stddef.h \
  ../include/uapi/linux/stddef.h \
  ../include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  ../include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  ../include/linux/kasan-checks.h \
  ../arch/arm64/include/uapi/asm/posix_types.h \
  ../include/uapi/asm-generic/posix_types.h \
  ../include/crypto/md5.h \
  ../include/uapi/linux/hash_info.h \

crypto/hash_info.o: $(deps_crypto/hash_info.o)

$(deps_crypto/hash_info.o):
