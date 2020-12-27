	.arch armv8-a+crypto+crc
	.file	"bounds.c"
// GNU C89 (GCC) version 11.0.0 20201219 (experimental) (aarch64-linux-gnu)
//	compiled by GNU C version 10.2.0, GMP version 6.2.0, MPFR version 4.1.0, MPC version 1.2.0, isl version none
// GGC heuristics: --param ggc-min-expand=30 --param ggc-min-heapsize=4096
// options passed: -dumpbase-ext .c -mlittle-endian -march=armv8-a+crc+crypto -mcpu=cortex-a53 -mgeneral-regs-only -mpc-relative-literal-loads -mabi=lp64 -Os -std=gnu90 -fno-strict-aliasing -fno-common -fno-pic -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks -fno-store-merging -fno-code-hoisting -fno-fp-int-builtin-inexact -fno-ipa-bit-cp -fno-ipa-icf-variables -fno-ipa-vrp -fno-printf-return-value -fno-shrink-wrap-separate -fno-peel-loops -fno-split-loops -fno-allow-store-data-races -fstack-protector-strong -fomit-frame-pointer -fno-var-tracking-assignments -fno-inline-functions-called-once -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fstack-check=no -fconserve-stack
	.text
#APP
	.irp	num,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
	.equ	.L__reg_num_x\num, \num
	.endr
	.equ	.L__reg_num_xzr, 31

	.macro	mrs_s, rt, sreg
	.inst	0xd5200000|(\sreg)|(.L__reg_num_\rt)
	.endm

	.macro	msr_s, sreg, rt
	.inst	0xd5000000|(\sreg)|(.L__reg_num_\rt)
	.endm

#NO_APP
	.section	.text.startup,"ax",@progbits
	.align	2
	.global	main
	.type	main, %function
main:
.LFB148:
	.cfi_startproc
// ../kernel/bounds.c:18: 	DEFINE(NR_PAGEFLAGS, __NR_PAGEFLAGS);
#APP
// 18 "../kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS 22 __NR_PAGEFLAGS"	//
// 0 "" 2
// ../kernel/bounds.c:19: 	DEFINE(MAX_NR_ZONES, __MAX_NR_ZONES);
// 19 "../kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES 3 __MAX_NR_ZONES"	//
// 0 "" 2
// ../kernel/bounds.c:21: 	DEFINE(NR_CPUS_BITS, ilog2(CONFIG_NR_CPUS));
// 21 "../kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS 3 ilog2(CONFIG_NR_CPUS)"	//
// 0 "" 2
// ../kernel/bounds.c:23: 	DEFINE(SPINLOCK_SIZE, sizeof(spinlock_t));
// 23 "../kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE 4 sizeof(spinlock_t)"	//
// 0 "" 2
// ../kernel/bounds.c:27: }
#NO_APP
	mov	w0, 0	//,
	ret	
	.cfi_endproc
.LFE148:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.0.0 20201219 (experimental)"
	.section	.note.GNU-stack,"",@progbits
