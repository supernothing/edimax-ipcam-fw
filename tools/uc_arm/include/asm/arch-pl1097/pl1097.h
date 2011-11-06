/******************************************************************************
 * @(#)pl1097.h : generic register definitions for pl1097 arm based system
 *
 * Copyright (c) 2002 Prolific Technology Inc. All Rights Reserved.
 *
 * This software is the confidential and proprietary information of Prolific
 * Technology, Inc. ("Confidential Information").  You shall not
 * disclose such Confidential Information and shall use it only in
 * accordance with the terms of the license agreement you entered into
 * with Prolific.
 *
 * Modification History:
 *   #000 2005-12-21 jedy    revised
 *
 ******************************************************************************/
#ifndef _ASM_ARCH_PL1097
#define _ASM_ARCH_PL1097

#ifndef __ASM_ARCH_HARDWARE_H
#error "Do not include this file directly.  Instead include <asm/hardware.h>"
#endif

#include <linux/config.h>

/*
 * PL1097 Register Based defination
 */

/* System Management, SIO, Level 2 Interrupt control, System timer, Console */
#define rSYS_MANAGE_BASE        0xdb000000
#define rSYS_MANAGE_BASE_PHY    0x1b000000
#define rSYS_MANAGE_SIZE        0x1000

#define rINTERRUPT_CONTROLLER_BASE  0xdb000100
#define rTIMER_BASE                 0xdb000200
#define rCONSOLE_BASE               0xdb000400

/* Cache and memory controller */
#define rCMC_BASE                   0xdc000000
#define rCMC_BASE_PHY               0x1c000000
#define rCMC_SIZE                   0x1000

/* DMA & I/O Bridge & Level 3 Interrupt Controller */
#define rDMAC0_BASE                 0xd97c0000
#define rDMAC0_BASE_PHY             0x197c0000
#define rDMAC0_SIZE                 0x1000


/* PCI I/O Port Space */
#define rPCI_IOPORT_BASE            0xdb800000
#define rPCI_IOPORT_BASE_PHY        0x1b800000
#define rPCI_IOPORT_SIZE            0x1000

/* PCI Memory Space */
#define rPCI_MEM_BASE               0xda000000
#define rPCI_MEM_BASE_PHY           0x1a000000
#define rPCI_MEM_SIZE               0x1000000


/* Peripheral */
/* LCD Controller */
#define rLCD_BASE                   0xdb400000
#define rLCD_BASE_PHY               0x1b400000
#define rLCD_SIZE                   0x1000

/* USB 1.1 M/S */
#define rUSB11_BASE                 0xd8000000
#define rUSB11_BASE_PHY             0x18000000
#define rUSB11_SIZE                 0x1000

/* USB 2.0 Device */
#define rUSB20_BASE                 0xd9740000
#define rUSB20_BASE_PHY             0x19740000
#define rUSB20_SIZE                 0x1000

/* AC97 I2S SPDIF */
#define rAUDIO_OB_BASE              0xd9480000
#define rAUDIO_OB_BASE_PHY          0x19480000
#define rAUDIO_OB_SIZE              0x1000

#define rAUDIO_IB_BASE              0xd9490000
#define rAUDIO_IB_BASE_PHY          0x19490000
#define rAUDIO_IB_SIZE              0x1000

#define rAUDIO_CMD_BASE             0xd94a0000
#define rAUDIO_CMD_BASE_PHY         0x194a0000
#define rAUDIO_CMD_SIZE             0x1000

#define rAUDIO_STATUS_BASE          0xd94b0000
#define rAUDIO_STATUS_BASE_PHY      0x194b0000
#define rAUDIO_STATUS_SIZE          0x1000

/* I2C */
#define rI2C_BASE                   0xd9440000
#define rI2C_BASE_PHY               0x19440000
#define rI2C_SIZE                   0x1000

/* IDE */
#define rIDE2_BASE                  0xd9700000
#define rIDE2_BASE_PHY              0x19700000
#define rIDE2_SIZE                  0x1000

/* SmartMedia/Nand Flash/xD-Picture */
#define rNAND_BASE                  0xd9400000
#define rNAND_BASE_PHY              0x19400000
#define rNAND_SIZE                  0x1000

/* SD */
#define rSD_BASE                    0xd9540000
#define rSD_BASE_PHY                0x19540000
#define rSD_SIZE                    0x1000

/* Compact Flash Host Controller */
#define rCF_BASE                    0xd9580000
#define rCF_BASE_PHY                0x19580000
#define rCF_SIZE                    0x1000

/* Memory Stick / Memory Stick Pro Host Controller */
#define rMSPRO_BASE                 0xd9640000
#define rMSPRO_BASE_PHY             0x19640000
#define rMSPRO_SIZE                 0x1000

/* UART/IrDA */
#define rUART_BASE                  0xd9600000
#define rUART_BASE_PHY              0x19600000
#define rUART_SIZE                  0x1000

/* MMX */
#define rMMX_LFB2PHB_BASE           0xd96c0000
#define rMMX_LFB2PHB_BASE_PHY       0x196c0000
#define rMMX_LFB2PHB_SIZE           0x1000

#define rMMX_LMAPORT_BASE           0xd9780000
#define rMMX_LMAPORT_BASE_PHY       0x19780000
#define rMMX_LMAPORT_SIZE           0x1000


#define rMMX_VPP_BASE               0xd9790000
#define rMMX_VPP_BASE_PHY           0x19790000
#define rMMX_VPP_SIZE               0x1000

#define rMMX_PHP2LFB_BASE           0xd9798000
#define rMMX_PHP2LFB_BASE_PHY       0x19798000
#define rMMX_PHP2LFB_SIZE           0x1000

#define rMMX_VDE_BASE               0xd979f000
#define rMMX_VDE_BASE_PHY           0x1979f000
#define rMMX_VDE_SIZE               0x1000



#ifndef __ASSEMBLY__
/*
 * function prototypes in arch/arm/mach-pl1097/pl_proc.c
 */
unsigned int pl_get_pll_clock(void);
unsigned int pl_get_cpu_clock(void);
unsigned int pl_get_pci_clock(void);
unsigned int pl_get_dev_clock(void);
unsigned int pl_get_lcd_clock(void);
void pl_set_lcd_clock(unsigned int cd);
unsigned int pl_get_usb_clock(void);


/*
 * low level debugging function
 */
#if 1
extern void ll_puts(const char *s);
extern int ll_printk(const char *fmt, ...);
#endif

#endif /* __ASSEMBLY__ */


#endif /* _ASM_ARCH_PL1097 */
