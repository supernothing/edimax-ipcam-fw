/*
 * asm/arch-p52/irqs.h:
 * 2001 Mindspeed
 *
 */
#ifndef __ASM_ARCH_IRQS_H__
#define __ASM_ARCH_IRQS_H__

#include <linux/config.h>

#define NR_IRQS		32

/* INTc Level-2 IRQ */
#define IRQ_PL_TIMER        0
#define IRQ_PL_ALARM        1
#define IRQ_PL_CONSOLE      2
#define IRQ_PL_PW           3
#define IRQ_PL_PCI_DEV0     4
#define IRQ_PL_PCI_DEV1     5
#define IRQ_PL_PCI_DEV2     6
#define IRQ_PL_PCI_DEV3     7
#define IRQ_PL_USB_0        8
#define IRQ_PL_USB_1        9
#define IRQ_PL_CMC          10
#define IRQ_PL_RES11        11
#define IRQ_PL_RES12        12
#define IRQ_PL_DMAC0        13
#define IRQ_PL_RES14        14
#define IRQ_PL_LCD          15

/* DMAc0 Level-3 IRQ */
#define IRQ_PL_SM           16
#define IRQ_PL_I2C          17
#define IRQ_PL_AC970        18
#define IRQ_PL_PWM          19
#define IRQ_PL_IDE          20
#define IRQ_PL_SD           21
#define IRQ_PL_CF           22
#define IRQ_PL_GPIO2        23
#define IRQ_PL_UART         24
#define IRQ_PL_MS           25
#define IRQ_PL_REV26        26
#define IRQ_PL_MMX          27
#define IRQ_PL_IDE2         28
#define IRQ_PL_USB20        29
#define IRQ_PL_MMX2         30
#define IRQ_PL_MMX3         31


#endif /* __ASM_ARCH_IRQS_H__ */
