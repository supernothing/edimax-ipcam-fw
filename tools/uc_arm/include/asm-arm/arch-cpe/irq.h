/* asm/arch-cpe/irq.h */

#ifndef __ASM_ARCH_IRQ_H__
#define __ASM_ARCH_IRQ_H__

#include <asm/hardware.h>
#include <asm/io.h>
#include <asm/mach/irq.h>
#include <asm/arch/irqs.h>
#include <asm/arch/ftpci.h>
#include <asm/arch/ahb_dma.h>
#include <asm/arch/apb_dma.h>
#include <asm/arch/cpe/cpe.h>

extern void cpe_mask_irq(unsigned int irq);
extern void cpe_unmask_irq(unsigned int irq);
extern void cpe_mask_ack_irq(unsigned int irq);
extern void cpe_clear_irq(unsigned int intNum);
extern void cpe_int_init(void);

static inline void irq_init_irq(void)
{
	unsigned long flags;
	int irq;

	save_flags_cli(flags);
	cpe_int_init();
	restore_flags(flags);

	for (irq = 0; irq < NR_IRQS; irq++) 
	{
		irq_desc[irq].valid	= 1;
		irq_desc[irq].probe_ok	= 1;
		irq_desc[irq].mask_ack	= cpe_mask_ack_irq;
		irq_desc[irq].mask	= cpe_mask_irq;
		irq_desc[irq].unmask	= cpe_unmask_irq;
	}
}

static inline int fixup_irq(int irq)
{
	u32 temp;

#ifdef CONFIG_A320D_PLATFORM
    unsigned int status;
    unsigned int i;
    if(irq==IRQ_EXT_A321)
    {
        status=*(volatile unsigned int *)(CPE_A321_IC_VA_BASE+IRQ_STATUS_REG);
        if(status&(1<<(IRQ_A321_PCI-CPE_A321_IRQ_START)))  //pci irq
        {
#ifdef CONFIG_PCI
            switch(ftpci_get_irq())
            {
                case 0: return VIRQ_PCI_A;
                case 1: return VIRQ_PCI_B;
                case 2: return VIRQ_PCI_C;
                case 3: return VIRQ_PCI_D;
            }
#endif	    
        }

        for(i=0;i<32;i++)
            if (status&(1<<i))
                return (i+CPE_A321_IRQ_START);
    }
#endif

#ifdef CONFIG_FIE7100_PLATFORM
#ifdef CONFIG_PCI
    if(irq==IRQ_PCI)
    {
        switch(ftpci_get_irq())
        {
            case 0: return VIRQ_PCI_A;
            case 1: return VIRQ_PCI_B;
            case 2: return VIRQ_PCI_C;
            case 3: return VIRQ_PCI_D;
        }
    }
#endif
#endif

    if(irq==IRQ_CPE_AHB_DMA)
    {
		temp = ahbdma_get_irq(CPE_AHBDMA_VA_BASE);
        switch(temp)
        {
            case 0: return (CPE_VIRQ_AHBDMA_START+0);
            case 1: return (CPE_VIRQ_AHBDMA_START+1);
            case 2: return (CPE_VIRQ_AHBDMA_START+2);
            case 3: return (CPE_VIRQ_AHBDMA_START+3);
        }
    }

    if(irq==IRQ_CPE_APB_DMA)
    {
		temp = apbdma_get_irq(CPE_APBDMA_VA_BASE);
        switch(temp)
        {
            case 0: return (CPE_VIRQ_APBDMA_START+0);
            case 1: return (CPE_VIRQ_APBDMA_START+1);
            case 2: return (CPE_VIRQ_APBDMA_START+2);
            case 3: return (CPE_VIRQ_APBDMA_START+3);
        }
    }

    return irq;
}

#endif /* __ASM_ARCH_IRQ_H__ */
