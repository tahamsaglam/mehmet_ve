/*
 * relocate_kernel.S - put the kernel image in place to boot
 */

#include <asm/kexec.h>

#ifdef CONFIG_KEXEC_HARDBOOT
#include <asm/memory.h>
#ifdef CONFIG_ARCH_EXYNOS4
#include <mach/map.h>
#include <mach/regs-pmu.h>
#endif
#endif

	.globl relocate_new_kernel
relocate_new_kernel:

	ldr	r0,kexec_indirection_page
	ldr	r1,kexec_start_address

	/*
	 * If there is no indirection page (we are doing crashdumps)
	 * skip any relocation.
	 */
	cmp	r0, #0
	beq	2f

0:	/* top, read another word for the indirection page */
	ldr	r3, [r0],#4

	/* Is it a destination page. Put destination address to r4 */
	tst	r3,#1,0
	beq	1f
	bic	r4,r3,#1
	b	0b
1:
	/* Is it an indirection page */
	tst	r3,#2,0
	beq	1f
	bic	r0,r3,#2
	b	0b
1:

	/* are we done ? */
	tst	r3,#4,0
	beq	1f
	b	2f

1:
	/* is it source ? */
	tst	r3,#8,0
	beq	0b
	bic r3,r3,#8
	mov r6,#1024
9:
	ldr r5,[r3],#4
	str r5,[r4],#4
	subs r6,r6,#1
	bne 9b
	b 0b

2:
#ifdef CONFIG_KEXEC_HARDBOOT
	ldr	r0, kexec_hardboot
	teq	r0, #0
	bne	hardboot
#endif

	/* Jump to relocated kernel */
	mov lr,r1
	mov r0,#0
	ldr r1,kexec_mach_type
	ldr r2,kexec_boot_atags
	mov pc,lr
#ifdef CONFIG_KEXEC_HARDBOOT
	ldr	r0, kexec_hardboot
	teq	r0, #0
	bne	hardboot
#endif

	/* Jump to relocated kernel */
	mov lr,r1
	mov r0,#0
	ldr r1,kexec_mach_type
	ldr r2,kexec_boot_atags
	mov pc,lr

#ifdef CONFIG_KEXEC_HARDBOOT
hardboot:
	/* Stash boot arguments in hardboot page:
	 *  0: KEXEC_HB_PAGE_MAGIC
	 *  4: kexec_start_address
	 *  8: kexec_mach_type
	 * 12: kexec_boot_atags */
	ldr	r0, =KEXEC_HB_PAGE_ADDR
	str	r1, [r0, #4]
	ldr	r1, kexec_mach_type
	str	r1, [r0, #8]
	ldr	r1, kexec_boot_atags
	str	r1, [r0, #12]
	ldr	r1, =KEXEC_HB_PAGE_MAGIC
	str	r1, [r0]

#ifdef CONFIG_ARCH_EXYNOS4
	/* Hard reset via SWRESET, decompressor jumps to kernel.
	 * exynos4_sw_reset does this three times with a 500 ms delay.
	 * Hopefully one instance just works. */
	ldr	r0, =EXYNOS4_PA_PMU
	mov	r1, #1
	str	r1, [r0, #S5P_SWRESET-S5P_PMUREG(0)]
loop:	b	loop
#else
#error "No reboot method defined for hardboot."
#endif

	.ltorg
#endif
	.align

	.globl kexec_start_address
kexec_start_address:
	.long	0x0

	.globl kexec_indirection_page
kexec_indirection_page:
	.long	0x0

	.globl kexec_mach_type
kexec_mach_type:
	.long	0x0

	/* phy addr of the atags for the new kernel */
	.globl kexec_boot_atags
kexec_boot_atags:
	.long	0x0

#ifdef CONFIG_KEXEC_HARDBOOT
	.globl kexec_hardboot
kexec_hardboot:
	.long	0x0
#endif

relocate_new_kernel_end:

	.globl relocate_new_kernel_size
relocate_new_kernel_size:
	.long relocate_new_kernel_end - relocate_new_kernel


