/*
 * asm/arch-cpe/dma.h
 * Mindspeed 2001
 */

#ifndef __ASM_ARCH_DMA_H
#define __ASM_ARCH_DMA_H

#define MAX_DMA_ADDRESS		0xffffffff
#define MAX_DMA_CHANNELS    0

/* added by chris lee */
#define CPE_APB_DMA_MAX_CHANNEL         4       //paul
#define CPE_AHB_DMA_MAX_CHANNEL         8       //paul
/* end */

#ifdef CONFIG_INTER_SRAM   //added by ivan
static inline void __arch_adjust_zones(int node, unsigned long *size, unsigned long *holes)
{
    if(node!=0)
        return;
    size[2]=CONFIG_SRAM_SIZE/PAGE_SIZE;
    size[0]=size[0]-size[2];
}
#define arch_adjust_zones(node,size,holes)    __arch_adjust_zones(node,size,holes)
#endif

#endif /* _ASM_ARCH_DMA_H */
