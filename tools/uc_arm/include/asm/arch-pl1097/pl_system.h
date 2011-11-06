/******************************************************************************
 * @(#)pl_system.h : system registers (intc, dma, console, timer)
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
 *   #000 2005-12-24 jedy    create file
 *
 ******************************************************************************/

#ifndef __PL_SYSTEM_H
#define __PL_SYSTEM_H

/* Level 2 Interrupt controller registers */
#define PL_INT_BASE         (rINTERRUPT_CONTROLLER_BASE)
#define PL_INT_MASK         (PL_INT_BASE + 0)
#define PL_INT_STATUS       (PL_INT_BASE + 2)
#define PL_INT_VECTOR       (PL_INT_BASE + 4)

/* DMA controller registers */
#define PL_DMA_BASE         (rDMAC0_BASE)
#define PL_DMA_INT_MASK     (PL_DMA_BASE + 0x100)
#define PL_DMA_INT_STATUS   (PL_DMA_BASE + 0x102)
#define PL_DMA_INT_VECTOR   (PL_DMA_BASE + 0x104)

/* Console registers */
#define PL_CONSOLE_BASE     (rCONSOLE_BASE)
#define PL_CONSOLE_STATUS   (PL_CONSOLE_BASE + 0)
#define PL_CONSOLE_DATA     (PL_CONSOLE_BASE + 1)
#define PL_CONSOLE_RST      (PL_CONSOLE_BASE + 2)
#define PL_CONSOLE_SRB      (PL_CONSOLE_BASE + 3)
#define PL_CONSOLE_PERIOD_L (PL_CONSOLE_BASE + 4)
#define PL_CONSOLE_PERIOD_H (PL_CONSOLE_BASE + 5)
#define PL_CONSOLE_CMP      (PL_CONSOLE_BASE + 6)
#define PL_CONSOLE_BAUD_ST  (PL_CONSOLE_BASE + 7)

/* Timer and RTC registers */
#define PL_TIMER_BASE       (rTIMER_BASE)
#define PL_TIMER_STI_P      (PL_TIMER_BASE + 0)
#define PL_TIMER_STI_ENA    (PL_TIMER_BASE + 1)
#define PL_TIMER_STI_CLR    (PL_TIMER_BASE + 2)

/* PCI Configuartion Registers */
#define PL_PCI_IO_BASE      (rPCI_IOPORT_BASE)
#define PL_PCI0_CFGADDR_OFS (PL_PCI_IO_BASE + 0xCF8)
#define PL_PCI0_CFGDATA_OFS (PL_PCI_IO_BASE + 0xCFC)

/* Memory Configuration Registers */
#define PL_MEM_BASE         (rCMC_BASE)
#define PL_MEM_SIZE         (PL_MEM_BASE)

/* Clock Configuration Registers */
#define PL_SYS_BASE         (rSYS_MANAGE_BASE)
#define PL_CLK_CFG          (PL_SYS_BASE)
#define PL_SHUTDOWN_INFO    (PL_SYS_BASE + 0x04)
#define PL_OPMODE_SW        (PL_SYS_BASE + 0x08)
#define PL_OPMODE_SW2       (PL_SYS_BASE + 0x0C)
#define PL_CLK_CFG2         (PL_SYS_BASE + 0x10)
#define PL_CLK_CFG3         (PL_SYS_BASE + 0x14)

#define PL_CLK_NAND         (PL_SYS_BASE + 0x410)
#define PL_CLK_I2C          (PL_SYS_BASE + 0x411)
#define PL_CLK_AC97         (PL_SYS_BASE + 0x412)
#define PL_CLK_GPIO         (PL_SYS_BASE + 0x413)
#define PL_CLK_IDE1         (PL_SYS_BASE + 0x414)
#define PL_CLK_SD           (PL_SYS_BASE + 0x415)
#define PL_CLK_PCCARD       (PL_SYS_BASE + 0x416)
#define PL_CLK_GPIO2        (PL_SYS_BASE + 0x417)
#define PL_CLK_UART         (PL_SYS_BASE + 0x418)
#define PL_CLK_MS           (PL_SYS_BASE + 0x419)
#define PL_CLK_IDE2         (PL_SYS_BASE + 0x41C)


#endif /* __PL_SYSTEM_H */
