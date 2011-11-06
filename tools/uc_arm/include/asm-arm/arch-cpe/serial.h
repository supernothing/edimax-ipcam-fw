#ifndef CPE_SERIAL_H
#define CPE_SERIAL_H

#include <linux/config.h>
#include <asm/arch/cpe/cpe.h>
#include <asm/arch/hardware.h>

/* 38400 baud rate */
#define BASE_BAUD (CONFIG_UART_CLK/16)

/* Standard COM flags */
#define STD_COM_FLAGS (ASYNC_SKIP_TEST)
#define EXTRA_SERIAL_PORT_DEFNS
#define RS_TABLE_SIZE   2

#define STD_SERIAL_PORT_DEFNS			\
{0,BASE_BAUD,IO_ADDRESS(CPE_UART1_BASE),IRQ_UART1,STD_COM_FLAGS},	\
{0,BASE_BAUD,IO_ADDRESS(CPE_UART2_BASE),IRQ_UART2,STD_COM_FLAGS},

#endif

