cmd_firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o := ccache /home/sherlock/gcc64/bin/aarch64-linux-gnu-gcc -Wp,-MD,firmware/novatek/.hx_nt36672_miui_e7s.bin.gen.o.d  -nostdinc -isystem /home/sherlock/gcc64/bin/../lib/gcc/aarch64-linux-gnu/11.0.0/include -I../arch/arm64/include -Iarch/arm64/include/generated/uapi -Iarch/arm64/include/generated  -I../include -Iinclude -I../arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I../include/uapi -Iinclude/generated/uapi -include ../include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -DCONFIG_AS_LSE=1 -DCONFIG_VDSO32=1 -mabi=lp64 -DCC_HAVE_ASM_GOTO   -c -o firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o firmware/novatek/hx_nt36672_miui_e7s.bin.gen.S

source_firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o := firmware/novatek/hx_nt36672_miui_e7s.bin.gen.S

deps_firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o := \

firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o: $(deps_firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o)

$(deps_firmware/novatek/hx_nt36672_miui_e7s.bin.gen.o):
