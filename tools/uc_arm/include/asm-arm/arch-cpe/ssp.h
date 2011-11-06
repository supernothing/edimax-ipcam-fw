#ifndef _SSP_H_
#define _SSP_H_
/***************************************************************************
    SSP Hardware function
**************************************************************************/
//register
#define SSP_CONTROL0                0x0
#define SSP_CONTROL1                0x4
#define SSP_CONTROL2                0x8
#define SSP_STATUS                  0xC
#define SSP_INT_CONTROL             0X10
#define SSP_INT_STATUS              0x14
#define SSP_DATA                    0x18
#define SSP_INFO					0x1C
#define SSP_ACLINK_SLOT_VALID		0x20

//control 0
#define SSP_FORMAT                 	0x0000
#define SPI_FORMAT              	0x1000
#define MICROWIRE_FORMAT            0x2000
#define I2S_FORMAT              	0x3000
#define AC97_FORMAT              	0x4000
#define SSP_FSDIST                  0x300
#define SSP_LBM                     0x80  /* loopback mode */
#define SSP_LSB                     0x40  /* LSB first */
#define SSP_FSPO_LOW                0x20  /* Frame sync atcive low */
#define SSP_FSPO_HIGH               0x0   /* Frame sync atcive high */
#define SSP_DATAJUSTIFY             0x10  /* data padding in front of serial data */
#define SSP_OPM_MSST                0xC  /* Master stereo mode */
#define SSP_OPM_MSMO                0x8  /* Master mono mode */
#define SSP_OPM_SLST                0x4  /* Slave stereo mode */
#define SSP_OPM_SLMO                0x0  /* Slave mono mode */


// interrupt control
#define SSP_TXDMAEN                 0x20	 /* TX DMA Enable */
#define SSP_RXDMAEN                 0x10	 /* RX DMA Enable */
#define SSP_TFIEN                   0x8		 /* TX FIFO Int Enable */
#define SSP_RFIEN                   0x4		 /* RX FIFO Int Enable */
#define SSP_TFURIEN                 0x2		 /* TX FIFO Underrun int enable */
#define SSP_RFURIEN                 0x1		 /* RX FIFO Underrun int enable */

//control2 register value
#define SSP_ACCRST                  0x20 	 /* AC-Link Cold Reset Enable */
#define SSP_ACWRST                  0x10 	 /* AC-Link Warm Reset Enable */
#define SSP_TXFCLR                  0x8	 	 /* TX FIFO Clear */
#define SSP_RXFCLR                  0x4	 	 /* RX FIFO Clear */
#define SSP_TXDOE                   0x2	 	 /* TX Data Output Enable */
#define SSP_SSPEN                   0x1		 /* SSP Enable */

#define SSP_TFVE                    0x1f000	 /* Tx FIFO Valid Entries */
#define SSP_RFVE                	0x1f0	 /* Rx FIFO Valid Entries */

#define SSP_FIFO_THOD               0xc400

#define SSP_BUSY                    0x4
#endif
