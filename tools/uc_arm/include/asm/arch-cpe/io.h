#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT      0xffffffff
#define __io(a)             (a)
#define __mem_pci(a)        ((unsigned long)(a))

#define __arch_getw(a) 	    (*(volatile unsigned short *)(a))
#define __arch_putw(v,a)    (*(volatile unsigned short *)(a) = (v))

#define iomem_valid_addr(iomem,sz)  (1)
#define iomem_to_phys(iomem)        (iomem)

#endif
