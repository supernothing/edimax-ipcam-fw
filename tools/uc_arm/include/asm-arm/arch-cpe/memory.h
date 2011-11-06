
/*
 * linux/include/asm-armnommu/arch-p52/memory.h
 *
 * Copyright (c) 1999 Nicolas Pitre <nico@cam.org>
 * 2001 Mindspeed
 */

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

//#include <asm/page.h>


#define TASK_SIZE       (0xc0000000UL)
#define TASK_SIZE_26    (0x04000000UL)

#define DRAM_BASE       0x00000000
#define DRAM_SIZE       CONFIG_SDRAM_SIZE
#define MEM_SIZE        DRAM_SIZE

#define PHYS_OFFSET     (DRAM_BASE)
#define PAGE_OFFSET     (0xc0000000UL)
#define END_MEM         (DRAM_BASE + DRAM_SIZE)
#define DMA_SIZE        0xffffffff

#define __virt_to_phys__is_a_macro
#define __virt_to_phys(vpage) ((vpage) - PAGE_OFFSET)
#define __phys_to_virt__is_a_macro
#define __phys_to_virt(ppage) ((ppage) + PAGE_OFFSET)

#define __virt_to_bus__is_a_macro
#define __virt_to_bus(x)	(x - PAGE_OFFSET)
#define __bus_to_virt__is_a_macro
#define __bus_to_virt(x)	(x + PAGE_OFFSET)

#define TASK_UNMAPPED_BASE (TASK_SIZE / 3)
#endif
