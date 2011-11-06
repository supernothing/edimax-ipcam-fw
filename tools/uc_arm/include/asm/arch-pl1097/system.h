/*
 * linux/include/asm-arm/arch-pl1097/system.h
 * 2001 Mindspeed
 */

#ifndef __ASM_ARCH_SYSTEM_H__
#define __ASM_ARCH_SYSTEM_H__

static inline void arch_idle(void)
{
	  cpu_do_idle();
}

extern inline void arch_reset(char mode)
{
    switch(mode) {
    case 's':   /* Software reset (jump to address 0) */
        cpu_reset(0);
        break;
    case 'h':   /* hardware reset */
        /* TBD */
    }
}

#endif /* __ASM_ARCH_SYSTEM_H__ */

