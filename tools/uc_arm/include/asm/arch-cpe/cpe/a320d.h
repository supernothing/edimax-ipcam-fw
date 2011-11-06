/* 
    cpe.h 
    maintened by ivan wang 2004/8/18 11:25 
*/

#ifndef     _A320D_H_
#define     _A320D_H_

/******************************************************************
    AHB/APB device register mapping 
 *****************************************************************/
#define CPE_AHB_BASE                    0x90100000
#define CPE_SRAMC_BASE                  0x90200000
#define CPE_SDRAMC_BASE                 0x90300000
#define CPE_AHBDMA_BASE                 0x90400000
#define CPE_APBDMA_BASE                 0x90500000
#define CPE_LCD_BASE                    0x90600000
#define CPE_PMU_BASE                    0x98100000
#define CPE_UART1_BASE                  0x98200000
#define CPE_UART2_BASE                  0x98300000
#define CPE_TIMER1_BASE                 0x98400000
#define CPE_TIMER2_BASE                 0x98400010
#define CPE_TIMER3_BASE                 0x98400020
#define CPE_WDT_BASE		        	0x98500000
#define CPE_RTC_BASE		        	0x98600000
#define CPE_GPIO_BASE                   0x98700000
#define CPE_IC_BASE                     0x98800000
#define CPE_SSP1_BASE                   0x98b00000
#define CPE_SSP2_BASE                   0x99400000
#define CPE_FTMAC_BASE                  0x90900000
#define CPE_HOST11_BASE                 0x90A00000    //USB Host 1.1
#define CPE_PCI_BASE                    0x90c00000
#define CPE_PCI_MEM                     0xa0000000
#define CPE_A321_IC_BASE                0xb0800000
#define CPE_HOST20_BASE                 0x92000000
#define CPE_FTMAC2_BASE                 0x92000000    //2nd MAC
#define CPE_FOTG200_BASE                0x92000000    //FOTG200
#define CPE_KBD_BASE                    0xb1300000
#define CPE_MOUSE_BASE                  0xb1700000   
#define CPE_USBDEV_BASE                 0x90b00000   //USB device

#define CPE_CF_BASE                    	0x98D00000   //CF  
#define CPE_SMMC_BASE                   0x98F00000   //SMMC 
#define CPE_MMSC_BASE                   0x99900000	 //Memory Stick
#define CPE_SD_BASE                    	0x98e00000   //SD
#define CPE_IDE_BASE                    0x92000000   //IDE

#define CPE_SECU_BASE                   0x90E00000   // security AES/DES/3DES

#define CPE_A321_APBDMA_BASE            0x90e00000
#define CPE_A321_SSP_BASE               0xb1400000

//80 port real addr is 0x902ffffc, so later will need this addr to add 0xffc
// 80 port's base addr is not like other ip, so must not use PHY_ADDRESS(x) to count it's 
// phycial address
#define CPE_80PORT_BASE            0x902ff000	 

//virtual address
#define CPE_AHB_VA_BASE                 IO_ADDRESS(CPE_AHB_BASE)
#define CPE_AHBDMA_VA_BASE              IO_ADDRESS(CPE_AHBDMA_BASE)
#define CPE_APBDMA_VA_BASE              IO_ADDRESS(CPE_APBDMA_BASE)
#define CPE_PMU_VA_BASE                 IO_ADDRESS(CPE_PMU_BASE)
#define CPE_UART1_VA_BASE               IO_ADDRESS(CPE_UART1_BASE)
#define CPE_UART2_VA_BASE               IO_ADDRESS(CPE_UART2_BASE)
#define CPE_TIMER1_VA_BASE              IO_ADDRESS(CPE_TIMER1_BASE)
#define CPE_TIMER2_VA_BASE              IO_ADDRESS(CPE_TIMER2_BASE)
#define CPE_TIMER3_VA_BASE              IO_ADDRESS(CPE_TIMER3_BASE)
#define CPE_WDT_VA_BASE		        	IO_ADDRESS(CPE_WDT_BASE)
#define CPE_RTC_VA_BASE		        	IO_ADDRESS(CPE_RTC_BASE)
#define CPE_GPIO_VA_BASE                IO_ADDRESS(CPE_GPIO_BASE)
#define CPE_IC_VA_BASE                  IO_ADDRESS(CPE_IC_BASE)
#define CPE_FTMAC_VA_BASE               IO_ADDRESS(CPE_FTMAC_BASE)
#define CPE_FTMAC2_VA_BASE              IO_ADDRESS(CPE_FTMAC2_BASE)  //2nd MAC
#define CPE_HOST11_VA_BASE              IO_ADDRESS(CPE_HOST11_BASE)  //Host1.1
#define CPE_SSP1_VA_BASE                IO_ADDRESS(CPE_SSP1_BASE)
#define CPE_A321_IC_VA_BASE             IO_ADDRESS(CPE_A321_IC_BASE)
#define CPE_PCI_VA_BASE                 IO_ADDRESS(CPE_PCI_BASE)
#define CPE_PCI_VA_MEM                  IO_ADDRESS(CPE_PCI_MEM)
#define CPE_HOST20_VA_BASE              IO_ADDRESS(CPE_HOST20_BASE)
#define CPE_KBD_VA_BASE                 IO_ADDRESS(CPE_KBD_BASE)
#define CPE_USBDEV_VA_BASE              IO_ADDRESS(CPE_USBDEV_BASE)
#define CPE_FOTG200_VA_BASE             IO_ADDRESS(CPE_FOTG200_BASE) //FOTG200
#define CPE_MOUSE_VA_BASE               IO_ADDRESS(CPE_MOUSE_BASE)
#define CPE_SSP2_VA_BASE                IO_ADDRESS(CPE_SSP2_BASE)
#define CPE_LCD_VA_BASE                 IO_ADDRESS(CPE_LCD_BASE)

#define CPE_CF_VA_BASE                  IO_ADDRESS(CPE_CF_BASE)   	//CF 
#define CPE_SD_VA_BASE                  IO_ADDRESS(CPE_SD_BASE)     //SD
#define CPE_SMMC_VA_BASE                IO_ADDRESS(CPE_SMMC_BASE) 	//SMMC 
#define CPE_MMSC_VA_BASE                IO_ADDRESS(CPE_MMSC_BASE) 	//Memory Stick
#define CPE_IDE_VA_BASE                 IO_ADDRESS(CPE_IDE_BASE)   	//IDE

#define CPE_SECU_VA_BASE                IO_ADDRESS(CPE_SECU_BASE)   // security AES/DES/3DES

#define CPE_A321_APBDMA_VA_BASE         IO_ADDRESS(CPE_A321_APBDMA_BASE) 
#define CPE_A321_SSP_VA_BASE            IO_ADDRESS(CPE_A321_SSP_BASE)

#define CPE_80PORT_VA_BASE              IO_ADDRESS(CPE_80PORT_BASE)

/*****************************************************************
    80 port
*****************************************************************/
#define Show_80(x)                  (*((volatile u32 *) ( CPE_80PORT_VA_BASE | (0xffc)))= x)

/*****************************************************************
    Clock Setting
*****************************************************************/
#define CONFIG_SYS_CLK			        (cpe_get_ahb_clk())
#define AHB_CLK                     	CONFIG_SYS_CLK
#define APB_CLK                     	(CONFIG_SYS_CLK/2)	

#define CPE_BAUD_115200                 (CONFIG_UART_CLK / 1843200)
#define CPE_BAUD_57600                  (CONFIG_UART_CLK / 921600) 
#define CPE_BAUD_38400			        (CONFIG_UART_CLK / 614400)
#define CPE_BAUD_19200                  (CONFIG_UART_CLK / 307200)
#define CPE_BAUD_14400                  (CONFIG_UART_CLK / 230400)
#define CPE_BAUD_9600                   (CONFIG_UART_CLK / 153600)
#define CPE_BAUD_4800                   (CONFIG_UART_CLK / 76800)
#define CPE_BAUD_2400                   (CONFIG_UART_CLK / 38400)
#define CPE_BAUD_1200                   (CONFIG_UART_CLK / 19200)


/*****************************************************************
    IRQ
*****************************************************************/
/*
interrupt:
 0-31       A320 irq
 32-63      A320 fiq
 64-95      A321 irq
 96-127     A321 fiq
 150-160    Virtual IRQ (PCI)
 160-199    Virtual IRQ (reserved)
 */
#define NR_IRQS                         200
#define CPE_NR_IRQS                     32
#define CPE_NR_FIQS                     32
#define CPE_A321_IRQ_START              64

//#define CPE_VIRQ_START                  150
#define CPE_VIRQ_PCI_START              150
#define CPE_VIRQ_PCI_END                159
#define CPE_VIRQ_AHBDMA_START           160
#define CPE_VIRQ_AHBDMA_END             164
#define CPE_VIRQ_APBDMA_START           165
#define CPE_VIRQ_APBDMA_END             169

//irq number
#define IRQ_CFC_CD                      0
#define IRQ_CFC_DMA                     1
#define IRQ_SSP1                        2
#define IRQ_I2C                         3
#define IRQ_SDC							5
#define IRQ_SSP2                        6
#define IRQ_UART1                       10
#define IRQ_UART2                       11
#define IRQ_GPIO                        13
#define IRQ_TIMER2                      14 
#define IRQ_TIMER3                      15
#define IRQ_TIMER1                      19
#define IRQ_APB_BRIDGE                  24
#define IRQ_CPE_AHB_DMA                 21
#define IRQ_CPE_APB_DMA                 24
#define IRQ_MAC                         25
#define IRQ_TOUCH                       28
#define IRQ_EXT_A321                    30
#define IRQ_USBDEV                      26   // USB device
#define IRQ_FOTG200                     29   // FOTG200 device
//#define IRQ_USB_HOST11                  27   // USB Host 1.1
#define IRQ_SECU                        29   // security AES/DES/3DES
#define IRQ_USB_HOST20                  29   // USB Host 200

#define IRQ_A321_KBD                    (4+CPE_A321_IRQ_START)
#define IRQ_A321_MOUSE                  (9+CPE_A321_IRQ_START)
#define IRQ_A321_SMMC                   (12+CPE_A321_IRQ_START)  // SMMC
#define IRQ_A321_MAC2                   (25+CPE_A321_IRQ_START)  //2nd MAC
#define IRQ_A321_MMSC					(26+CPE_A321_IRQ_START)  // Memory stick
#define IRQ_USB_HOST11                  (27+CPE_A321_IRQ_START)  //USB host 1.1
#define IRQ_A321_PCI                    (28+CPE_A321_IRQ_START)
#define IRQ_A321_IDE 					(29+CPE_A321_IRQ_START)  // IDE

#define IRQ_A321_I2S                    (6+CPE_A321_IRQ_START)
#define IRQ_A321_APB_DMA                (24+CPE_A321_IRQ_START)

#define VIRQ_PCI_A                      (0+CPE_VIRQ_PCI_START)
#define VIRQ_PCI_B                      (1+CPE_VIRQ_PCI_START)
#define VIRQ_PCI_C                      (2+CPE_VIRQ_PCI_START)
#define VIRQ_PCI_D                      (3+CPE_VIRQ_PCI_START)
////////////////////////////
//#define VIRQ_PCI_A                      (0+CPE_VIRQ_START)
//#define VIRQ_PCI_B                      (1+CPE_VIRQ_START)
//#define VIRQ_PCI_C                      (2+CPE_VIRQ_START)
//#define VIRQ_PCI_D                      (3+CPE_VIRQ_START)
//////////////////////////

#define LEVEL                           0
#define EDGE                            1
#define H_ACTIVE                        0
#define L_ACTIVE                        1

#define IRQ_SOURCE_REG                  0
#define IRQ_MASK_REG                    0x04
#define IRQ_CLEAR_REG                   0x08
#define IRQ_MODE_REG                    0x0c
#define IRQ_LEVEL_REG                   0x10
#define IRQ_STATUS_REG                  0x14

#define FIQ_SOURCE_REG                  0x20
#define FIQ_MASK_REG                    0x24
#define FIQ_CLEAR_REG                   0x28
#define FIQ_MODE_REG                    0x2c
#define FIQ_LEVEL_REG                   0x30
#define FIQ_STATUS_REG                  0x34


/*****************************************************************
    Flash
*****************************************************************/
#define CPE_FLASH_BASE                  0x80400000
#define CPE_FLASH_SZ                    0x02000000
#define CPE_FLASH_VA_BASE               MEM_ADDRESS(CPE_FLASH_BASE)


/*****************************************************************
    IO Mapping
*****************************************************************/
#define IO_BASE	                        0xf0000000
#define MEM_ADDRESS(x)                  ((x&0x0fffffff)+IO_BASE)
#define IO_ADDRESS(x)                   (((x>>4)&0xffff0000)+(x&0xffff)+IO_BASE) 
#define PHY_ADDRESS(x)                  (((x<<4)&0xfff00000)+(x&0xffff))


/*****************************************************************
    PCI
*****************************************************************/
#define PCI_IO_VA_BASE                  (CPE_PCI_VA_BASE+SZ_4K)
#define PCI_IO_VA_SIZE                  (SZ_1M-SZ_4K)
#define PCI_IO_VA_END                   (CPE_PCI_VA_BASE+SZ_1M)
#define PCI_MEM_BASE                    CPE_PCI_MEM
//#define PCI_MEM_SIZE                    SZ_1M
#define PCI_MEM_SIZE                    SZ_64K //should not more than 64K size
#define PCI_MEM_END                     (CPE_PCI_MEM+SZ_1M)

#define PCI_BRIDGE_DEVID                0x4321
#define PCI_BRIDGE_VENID                0x159b

/*****************************************************************
    APB DMA channel assignment
*****************************************************************/
#define CFC_APBDMA_CHAL       1
#define SSP1_APBDMA_CHAL      2
#define UART1_TX_APBDMA_CHAL  3
#define UART1_RX_APBDMA_CHAL  3
#define UART2_TX_APBDMA_CHAL  4
#define UART2_RX_APBDMA_CHAL  4
#define SDC_APBDMA_CHAL       5
#define AC97_APBDMA_CHAL      6
#define UART3_TX_APBDMA_CHAL  11
#define UART3_RX_APBDMA_CHAL  11
#define USB220_APBDMA_CHAL    14
#define IRDA_APBDMA_CHAL      11
#define EXTREQ0_APBDMA_CHAL   12
#define EXTREQ1_APBDMA_CHAL   15


/*****************************************************************
    PMU
*****************************************************************/
#define PMU_SSP_DMA_CHANNEL             0x2
#define PMU_USBDEV_DMA_CHANNEL			0x3
#define VIRQ_SSP_AHB_DMA                (CPE_VIRQ_AHBDMA_START+PMU_SSP_DMA_CHANNEL)
#define VIRQ_USBDEV_AHB_DMA             (CPE_VIRQ_AHBDMA_START+PMU_USBDEV_DMA_CHANNEL)

#define PMU_CF_APBDMA_CHANNEL           0
//#define PMU_SSP1_APBDMA_CHANNEL         1
#define PMU_SD_APBDMA_CHANNEL           2
//#define PMU_AC97_APBDMA_CHANNEL         3
#define VIRQ_CF_APB_DMA                 (CPE_VIRQ_APBDMA_START+PMU_CF_APBDMA_CHANNEL)
//#define VIRQ_SSP1_APB_DMA               (CPE_VIRQ_APBDMA_START+PMU_SSP1_APBDMA_CHANNEL)
#define VIRQ_SD_APB_DMA                 (CPE_VIRQ_APBDMA_START+PMU_SD_APBDMA_CHANNEL)
//#define VIRQ_AC97_APB_DMA               (CPE_VIRQ_APBDMA_START+PMU_AC97_APBDMA_CHANNEL)

// with A320 board
#define CONFIG_A321_BOARD

#endif
