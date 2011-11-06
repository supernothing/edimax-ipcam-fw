/*
 * Automatically generated by make menuconfig: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_ARM 1
#undef  CONFIG_EISA
#undef  CONFIG_SBUS
#undef  CONFIG_MCA
#define CONFIG_UID16 1
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#undef  CONFIG_RWSEM_XCHGADD_ALGORITHM
#undef  CONFIG_GENERIC_BUST_SPINLOCK
#undef  CONFIG_GENERIC_ISA_DMA

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#undef  CONFIG_OBSOLETE

/*
 * Loadable module support
 */
#define CONFIG_MODULES 1
#undef  CONFIG_MODVERSIONS
#define CONFIG_KMOD 1

/*
 * System Type
 */
#undef  CONFIG_ARCH_ANAKIN
#undef  CONFIG_ARCH_ARCA5K
#undef  CONFIG_ARCH_CLPS7500
#undef  CONFIG_ARCH_CLPS711X
#undef  CONFIG_ARCH_CO285
#undef  CONFIG_ARCH_EBSA110
#undef  CONFIG_ARCH_CAMELOT
#undef  CONFIG_ARCH_FOOTBRIDGE
#undef  CONFIG_ARCH_INTEGRATOR
#undef  CONFIG_ARCH_CPE
#undef  CONFIG_ARCH_OMAHA
#undef  CONFIG_ARCH_L7200
#undef  CONFIG_ARCH_MX1ADS
#undef  CONFIG_ARCH_PL1097
#define CONFIG_ARCH_PL1029 1
#undef  CONFIG_ARCH_RPC
#undef  CONFIG_ARCH_RISCSTATION
#undef  CONFIG_ARCH_SA1100
#undef  CONFIG_ARCH_SHARK

/*
 * Archimedes/A5000 Implementations
 */
#undef  CONFIG_ARCH_ARC
#undef  CONFIG_ARCH_A5K

/*
 * Footbridge Implementations
 */
#undef  CONFIG_ARCH_CATS
#undef  CONFIG_ARCH_PERSONAL_SERVER
#undef  CONFIG_ARCH_EBSA285_ADDIN
#undef  CONFIG_ARCH_EBSA285_HOST
#undef  CONFIG_ARCH_NETWINDER

/*
 * SA11x0 Implementations
 */
#undef  CONFIG_SA1100_ACCELENT
#undef  CONFIG_SA1100_ASSABET
#undef  CONFIG_ASSABET_NEPONSET
#undef  CONFIG_SA1100_ADSBITSY
#undef  CONFIG_SA1100_BRUTUS
#undef  CONFIG_SA1100_CEP
#undef  CONFIG_SA1100_CERF
#undef  CONFIG_SA1100_H3100
#undef  CONFIG_SA1100_H3600
#undef  CONFIG_SA1100_H3800
#undef  CONFIG_SA1100_H3XXX
#undef  CONFIG_SA1100_EXTENEX1
#undef  CONFIG_SA1100_FLEXANET
#undef  CONFIG_SA1100_FREEBIRD
#undef  CONFIG_SA1100_FRODO
#undef  CONFIG_SA1100_GRAPHICSCLIENT
#undef  CONFIG_SA1100_GRAPHICSMASTER
#undef  CONFIG_SA1100_BADGE4
#undef  CONFIG_SA1100_JORNADA720
#undef  CONFIG_SA1100_HUW_WEBPANEL
#undef  CONFIG_SA1100_ITSY
#undef  CONFIG_SA1100_LART
#undef  CONFIG_SA1100_NANOENGINE
#undef  CONFIG_SA1100_OMNIMETER
#undef  CONFIG_SA1100_PANGOLIN
#undef  CONFIG_SA1100_PLEB
#undef  CONFIG_SA1100_PT_SYSTEM3
#undef  CONFIG_SA1100_SHANNON
#undef  CONFIG_SA1100_SHERMAN
#undef  CONFIG_SA1100_SIMPAD
#undef  CONFIG_SA1100_SIMPUTER
#undef  CONFIG_SA1100_PFS168
#undef  CONFIG_SA1100_VICTOR
#undef  CONFIG_SA1100_XP860
#undef  CONFIG_SA1100_YOPY
#undef  CONFIG_SA1100_USB
#undef  CONFIG_SA1100_USB_NETLINK
#undef  CONFIG_SA1100_USB_CHAR
#undef  CONFIG_H3600_SLEEVE

/*
 * CLPS711X/EP721X Implementations
 */
#undef  CONFIG_ARCH_AUTCPU12
#undef  CONFIG_ARCH_CDB89712
#undef  CONFIG_ARCH_CLEP7312
#undef  CONFIG_ARCH_EDB7211
#undef  CONFIG_ARCH_P720T
#undef  CONFIG_ARCH_FORTUNET
#undef  CONFIG_ARCH_EP7211
#undef  CONFIG_ARCH_EP7212
#undef  CONFIG_ARCH_ACORN
#undef  CONFIG_FOOTBRIDGE
#undef  CONFIG_FOOTBRIDGE_HOST
#undef  CONFIG_FOOTBRIDGE_ADDIN
#define CONFIG_CPU_32 1
#undef  CONFIG_CPU_26
#undef  CONFIG_CPU_ARM610
#undef  CONFIG_CPU_ARM710
#undef  CONFIG_CPU_ARM720T
#undef  CONFIG_CPU_ARM920T
#undef  CONFIG_CPU_ARM922T
#undef  CONFIG_PLD
#define CONFIG_CPU_FA526 1
#define CONFIG_PROC_HARDWARE 1
#undef  CONFIG_CPU_ARM926T
#undef  CONFIG_CPU_ARM1020
#undef  CONFIG_CPU_ARM1026
#undef  CONFIG_CPU_SA110
#undef  CONFIG_CPU_SA1100
#undef  CONFIG_CPU_32v3
#define CONFIG_CPU_32v4 1
#undef  CONFIG_CPU_ICACHE_DISABLE
#undef  CONFIG_CPU_DCACHE_DISABLE
#undef  CONFIG_CPU_DCACHE_WRITETHROUGH
#define CONFIG_CPU_FA52x_IDLE 1
#define CONFIG_CPU_FA52x_BTB 1
#undef  CONFIG_DISCONTIGMEM
#undef  CONFIG_PL_CONSOLE

/*
 * General setup
 */
#define CONFIG_PCI 1
#undef  CONFIG_ISA
#undef  CONFIG_ISA_DMA
#undef  CONFIG_ZBOOT_ROM
#define CONFIG_ZBOOT_ROM_TEXT 0x0
#define CONFIG_ZBOOT_ROM_BSS 0x0
#undef  CONFIG_PCI_NAMES
#undef  CONFIG_HOTPLUG
#undef  CONFIG_PCMCIA
#define CONFIG_NET 1
#define CONFIG_SYSVIPC 1
#undef  CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
#undef  CONFIG_FPE_NWFPE
#define CONFIG_FPE_FASTFPE 1
#define CONFIG_KCORE_ELF 1
#undef  CONFIG_KCORE_AOUT
#define CONFIG_BINFMT_AOUT 1
#define CONFIG_BINFMT_ELF 1
#undef  CONFIG_BINFMT_MISC
#undef  CONFIG_PM
#undef  CONFIG_ARTHUR
#define CONFIG_CMDLINE "root=/dev/ram0 mem=64M"
#undef  CONFIG_ALIGNMENT_TRAP

/*
 * Parallel port support
 */
#undef  CONFIG_PARPORT
#undef  CONFIG_MTD

/*
 * Plug and Play configuration
 */
#undef  CONFIG_PNP
#undef  CONFIG_ISAPNP

/*
 * Block devices
 */
#undef  CONFIG_BLK_DEV_FD
#undef  CONFIG_BLK_DEV_XD
#undef  CONFIG_PARIDE
#undef  CONFIG_BLK_CPQ_DA
#undef  CONFIG_BLK_CPQ_CISS_DA
#undef  CONFIG_CISS_SCSI_TAPE
#undef  CONFIG_BLK_DEV_DAC960
#undef  CONFIG_BLK_DEV_UMEM
#undef  CONFIG_BLK_DEV_LOOP
#define CONFIG_BLK_DEV_LOOP_MODULE 1
#undef  CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_SIZE (4096)
#define CONFIG_BLK_DEV_INITRD 1
#define CONFIG_BLK_DEV_DYNAMIC 1
#undef  CONFIG_BLK_DEV_STATIC

/*
 * Multi-device support (RAID and LVM)
 */
#undef  CONFIG_MD
#undef  CONFIG_BLK_DEV_MD
#undef  CONFIG_MD_LINEAR
#undef  CONFIG_MD_RAID0
#undef  CONFIG_MD_RAID1
#undef  CONFIG_MD_RAID5
#undef  CONFIG_MD_MULTIPATH
#undef  CONFIG_BLK_DEV_LVM

/*
 * I2C support
 */
#define CONFIG_I2C 1
#undef  CONFIG_I2C_ALGOBIT
#define CONFIG_I2C_ALGO61 1
#define CONFIG_I2C_61PORT 1
#undef  CONFIG_I2C_ALGOPCF
#undef  CONFIG_I2C_MAINBOARD
#define CONFIG_I2C_CHARDEV 1
#define CONFIG_I2C_PROC 1

/*
 * Hardware sensors support
 */
#define CONFIG_SENSORS 1
#undef  CONFIG_SENSORS_ADM1021
#undef  CONFIG_SENSORS_ADM1024
#undef  CONFIG_SENSORS_ADM1025
#undef  CONFIG_SENSORS_ADM1026
#undef  CONFIG_SENSORS_ADM9240
#undef  CONFIG_SENSORS_DS1621
#undef  CONFIG_SENSORS_FSCPOS
#undef  CONFIG_SENSORS_FSCSCY
#undef  CONFIG_SENSORS_GL518SM
#undef  CONFIG_SENSORS_GL520SM
#undef  CONFIG_SENSORS_MAXILIFE
#undef  CONFIG_SENSORS_IT87
#undef  CONFIG_SENSORS_MTP008
#undef  CONFIG_SENSORS_LM75
#undef  CONFIG_SENSORS_LM78
#undef  CONFIG_SENSORS_LM80
#undef  CONFIG_SENSORS_LM85
#undef  CONFIG_SENSORS_LM87
#undef  CONFIG_SENSORS_LM92
#undef  CONFIG_SENSORS_SIS5595
#undef  CONFIG_SENSORS_SMSC47M1
#undef  CONFIG_SENSORS_THMC50
#undef  CONFIG_SENSORS_VIA686A
#undef  CONFIG_SENSORS_VT1211
#undef  CONFIG_SENSORS_VT8231
#undef  CONFIG_SENSORS_W83781D
#define CONFIG_SENSORS_OTHER 1
#undef  CONFIG_SENSORS_CH700X
#undef  CONFIG_SENSORS_VT1622
#undef  CONFIG_SENSORS_BT869
#undef  CONFIG_SENSORS_DDCMON
#define CONFIG_SENSORS_EEPROM 1
#undef  CONFIG_SENSORS_MATORB
#undef  CONFIG_SENSORS_PCF8574
#undef  CONFIG_SENSORS_PCF8591

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#undef  CONFIG_PACKET_MMAP
#undef  CONFIG_NETLINK_DEV
#define CONFIG_NETFILTER 1
#undef  CONFIG_NETFILTER_DEBUG
#undef  CONFIG_FILTER
#define CONFIG_UNIX 1
#define CONFIG_INET 1
#undef  CONFIG_IP_MULTICAST
#undef  CONFIG_IP_ADVANCED_ROUTER
#define CONFIG_IP_PNP 1
#undef  CONFIG_IP_PNP_DHCP
#undef  CONFIG_IP_PNP_BOOTP
#undef  CONFIG_IP_PNP_RARP
#undef  CONFIG_NET_IPIP
#undef  CONFIG_NET_IPGRE
#define CONFIG_ARPD 1
#undef  CONFIG_INET_ECN
#undef  CONFIG_SYN_COOKIES

/*
 *   IP: Netfilter Configuration
 */
#undef  CONFIG_IP_NF_CONNTRACK
#undef  CONFIG_IP_NF_QUEUE
#undef  CONFIG_IP_NF_IPTABLES
#undef  CONFIG_IP_NF_ARPTABLES
#undef  CONFIG_IP_NF_COMPAT_IPCHAINS
#undef  CONFIG_IP_NF_COMPAT_IPFWADM
#undef  CONFIG_IPV6
#undef  CONFIG_KHTTPD
#undef  CONFIG_ATM
#undef  CONFIG_VLAN_8021Q
#undef  CONFIG_IPX
#undef  CONFIG_ATALK

/*
 * Appletalk devices
 */
#undef  CONFIG_DEV_APPLETALK
#undef  CONFIG_DECNET
#undef  CONFIG_BRIDGE
#undef  CONFIG_X25
#undef  CONFIG_LAPB
#undef  CONFIG_LLC
#undef  CONFIG_NET_DIVERT
#undef  CONFIG_ECONET
#undef  CONFIG_WAN_ROUTER
#undef  CONFIG_NET_FASTROUTE
#undef  CONFIG_NET_HW_FLOWCONTROL

/*
 * QoS and/or fair queueing
 */
#undef  CONFIG_NET_SCHED

/*
 * Network testing
 */
#undef  CONFIG_NET_PKTGEN

/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1

/*
 * ARCnet devices
 */
#undef  CONFIG_ARCNET
#undef  CONFIG_DUMMY
#undef  CONFIG_BONDING
#undef  CONFIG_EQUALIZER
#undef  CONFIG_TUN
#undef  CONFIG_ETHERTAP

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#undef  CONFIG_ARM_AM79C961A
#undef  CONFIG_SUNLANCE
#undef  CONFIG_HAPPYMEAL
#undef  CONFIG_SUNBMAC
#undef  CONFIG_SUNQE
#undef  CONFIG_SUNGEM
#undef  CONFIG_NET_VENDOR_3COM
#undef  CONFIG_LANCE
#undef  CONFIG_NET_VENDOR_SMC
#undef  CONFIG_NET_VENDOR_RACAL
#undef  CONFIG_HP100
#undef  CONFIG_NET_ISA
#define CONFIG_NET_PCI 1
#undef  CONFIG_PCNET32
#undef  CONFIG_ADAPTEC_STARFIRE
#undef  CONFIG_APRICOT
#undef  CONFIG_CS89x0
#undef  CONFIG_TULIP
#undef  CONFIG_TC35815
#undef  CONFIG_DE4X5
#undef  CONFIG_DGRS
#undef  CONFIG_DM9102
#undef  CONFIG_EEPRO100
#undef  CONFIG_LNE390
#undef  CONFIG_FEALNX
#undef  CONFIG_NATSEMI
#undef  CONFIG_NE2K_PCI
#undef  CONFIG_NE3210
#undef  CONFIG_ES3210
#undef  CONFIG_8139CP
#define CONFIG_8139TOO 1
#undef  CONFIG_8139TOO_PIO
#undef  CONFIG_8139TOO_TUNE_TWISTER
#undef  CONFIG_8139TOO_8129
#undef  CONFIG_8139_NEW_RX_RESET
#undef  CONFIG_SIS900
#undef  CONFIG_EPIC100
#undef  CONFIG_SUNDANCE
#undef  CONFIG_TLAN
#undef  CONFIG_VIA_RHINE
#undef  CONFIG_VIA_RHINE_MMIO
#undef  CONFIG_WINBOND_840
#undef  CONFIG_NET_POCKET
#undef  CONFIG_FTMAC100

/*
 * Ethernet (1000 Mbit)
 */
#undef  CONFIG_ACENIC
#undef  CONFIG_DL2K
#undef  CONFIG_MYRI_SBUS
#undef  CONFIG_NS83820
#undef  CONFIG_HAMACHI
#undef  CONFIG_YELLOWFIN
#undef  CONFIG_SK98LIN
#undef  CONFIG_TIGON3
#undef  CONFIG_FDDI
#undef  CONFIG_HIPPI
#undef  CONFIG_PLIP
#undef  CONFIG_PPP
#undef  CONFIG_SLIP

/*
 * Wireless LAN (non-hamradio)
 */
#undef  CONFIG_NET_RADIO

/*
 * Token Ring devices
 */
#undef  CONFIG_TR
#undef  CONFIG_NET_FC
#undef  CONFIG_RCPCI
#undef  CONFIG_SHAPER

/*
 * Wan interfaces
 */
#undef  CONFIG_WAN

/*
 * Amateur Radio support
 */
#undef  CONFIG_HAMRADIO

/*
 * IrDA (infrared) support
 */
#undef  CONFIG_IRDA

/*
 * ATA/ATAPI/MFM/RLL support
 */
#undef  CONFIG_IDE
#undef  CONFIG_BLK_DEV_IDE_MODES
#undef  CONFIG_BLK_DEV_HD

/*
 * SCSI support
 */
#undef  CONFIG_SCSI

/*
 * IEEE 1394 (FireWire) support (EXPERIMENTAL)
 */
#undef  CONFIG_IEEE1394

/*
 * I2O device support
 */
#undef  CONFIG_I2O
#undef  CONFIG_I2O_PCI
#undef  CONFIG_I2O_BLOCK
#undef  CONFIG_I2O_LAN
#undef  CONFIG_I2O_SCSI
#undef  CONFIG_I2O_PROC

/*
 * ISDN subsystem
 */
#undef  CONFIG_ISDN

/*
 * Input core support
 */
#undef  CONFIG_INPUT
#undef  CONFIG_INPUT_KEYBDEV
#undef  CONFIG_INPUT_MOUSEDEV
#undef  CONFIG_INPUT_JOYDEV
#undef  CONFIG_INPUT_EVDEV

/*
 * Character devices
 */
#undef  CONFIG_VT
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#undef  CONFIG_SERIAL_EXTENDED
#undef  CONFIG_SERIAL_NONSTANDARD

/*
 * Serial drivers
 */
#undef  CONFIG_SERIAL_ANAKIN
#undef  CONFIG_SERIAL_ANAKIN_CONSOLE
#undef  CONFIG_SERIAL_AMBA
#undef  CONFIG_SERIAL_AMBA_CONSOLE
#undef  CONFIG_SERIAL_CLPS711X
#undef  CONFIG_SERIAL_CLPS711X_CONSOLE
#undef  CONFIG_SERIAL_21285
#undef  CONFIG_SERIAL_21285_OLD
#undef  CONFIG_SERIAL_21285_CONSOLE
#undef  CONFIG_SERIAL_UART00
#undef  CONFIG_SERIAL_UART00_CONSOLE
#undef  CONFIG_SERIAL_SA1100
#undef  CONFIG_SERIAL_SA1100_CONSOLE
#undef  CONFIG_SERIAL_OMAHA
#undef  CONFIG_SERIAL_OMAHA_CONSOLE
#undef  CONFIG_SERIAL_8250
#undef  CONFIG_SERIAL_8250_CONSOLE
#undef  CONFIG_SERIAL_8250_EXTENDED
#undef  CONFIG_SERIAL_8250_MANY_PORTS
#undef  CONFIG_SERIAL_8250_SHARE_IRQ
#undef  CONFIG_SERIAL_8250_DETECT_IRQ
#undef  CONFIG_SERIAL_8250_MULTIPORT
#undef  CONFIG_SERIAL_8250_HUB6
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_UNIX98_PTY_COUNT (256)

/*
 * I2C support
 */
#define CONFIG_I2C 1
#undef  CONFIG_I2C_ALGOBIT
#define CONFIG_I2C_ALGO61 1
#define CONFIG_I2C_61PORT 1
#undef  CONFIG_I2C_ALGOPCF
#undef  CONFIG_I2C_MAINBOARD
#define CONFIG_I2C_CHARDEV 1
#define CONFIG_I2C_PROC 1

/*
 * Hardware sensors support
 */
#define CONFIG_SENSORS 1
#undef  CONFIG_SENSORS_ADM1021
#undef  CONFIG_SENSORS_ADM1024
#undef  CONFIG_SENSORS_ADM1025
#undef  CONFIG_SENSORS_ADM1026
#undef  CONFIG_SENSORS_ADM9240
#undef  CONFIG_SENSORS_DS1621
#undef  CONFIG_SENSORS_FSCPOS
#undef  CONFIG_SENSORS_FSCSCY
#undef  CONFIG_SENSORS_GL518SM
#undef  CONFIG_SENSORS_GL520SM
#undef  CONFIG_SENSORS_MAXILIFE
#undef  CONFIG_SENSORS_IT87
#undef  CONFIG_SENSORS_MTP008
#undef  CONFIG_SENSORS_LM75
#undef  CONFIG_SENSORS_LM78
#undef  CONFIG_SENSORS_LM80
#undef  CONFIG_SENSORS_LM85
#undef  CONFIG_SENSORS_LM87
#undef  CONFIG_SENSORS_LM92
#undef  CONFIG_SENSORS_SIS5595
#undef  CONFIG_SENSORS_SMSC47M1
#undef  CONFIG_SENSORS_THMC50
#undef  CONFIG_SENSORS_VIA686A
#undef  CONFIG_SENSORS_VT1211
#undef  CONFIG_SENSORS_VT8231
#undef  CONFIG_SENSORS_W83781D
#define CONFIG_SENSORS_OTHER 1
#undef  CONFIG_SENSORS_CH700X
#undef  CONFIG_SENSORS_VT1622
#undef  CONFIG_SENSORS_BT869
#undef  CONFIG_SENSORS_DDCMON
#define CONFIG_SENSORS_EEPROM 1
#undef  CONFIG_SENSORS_MATORB
#undef  CONFIG_SENSORS_PCF8574
#undef  CONFIG_SENSORS_PCF8591
#undef  CONFIG_I2C_DS1307

/*
 * L3 serial bus support
 */
#undef  CONFIG_L3
#undef  CONFIG_L3_ALGOBIT
#undef  CONFIG_L3_BIT_SA1100_GPIO
#undef  CONFIG_L3_SA1111
#undef  CONFIG_BIT_SA1100_GPIO

/*
 * Mice
 */
#undef  CONFIG_BUSMOUSE
#define CONFIG_MOUSE 1
#define CONFIG_PSMOUSE 1
#undef  CONFIG_82C710_MOUSE
#undef  CONFIG_PC110_PAD
#undef  CONFIG_MK712_MOUSE

/*
 * Joysticks
 */
#undef  CONFIG_INPUT_GAMEPORT
#undef  CONFIG_QIC02_TAPE

/*
 * Watchdog Cards
 */
#undef  CONFIG_WATCHDOG
#undef  CONFIG_NVRAM
#undef  CONFIG_RTC
#undef  CONFIG_DTLK
#undef  CONFIG_R3964
#undef  CONFIG_APPLICOM

/*
 * Ftape, the floppy tape device driver
 */
#undef  CONFIG_FTAPE
#undef  CONFIG_AGP
#undef  CONFIG_DRM
#undef  CONFIG_SECURITY

/*
 * Multimedia devices
 */
#undef  CONFIG_VIDEO_DEV

/*
 * File systems
 */
#undef  CONFIG_QUOTA
#undef  CONFIG_AUTOFS_FS
#undef  CONFIG_AUTOFS4_FS
#undef  CONFIG_REISERFS_FS
#undef  CONFIG_REISERFS_CHECK
#undef  CONFIG_REISERFS_PROC_INFO
#undef  CONFIG_ADFS_FS
#undef  CONFIG_ADFS_FS_RW
#undef  CONFIG_AFFS_FS
#undef  CONFIG_HFS_FS
#undef  CONFIG_BFS_FS
#undef  CONFIG_EXT3_FS
#undef  CONFIG_JBD
#undef  CONFIG_JBD_DEBUG
#define CONFIG_FAT_FS 1
#define CONFIG_MSDOS_FS 1
#undef  CONFIG_UMSDOS_FS
#define CONFIG_VFAT_FS 1
#undef  CONFIG_EFS_FS
#undef  CONFIG_JFFS_FS
#undef  CONFIG_JFFS2_FS
#define CONFIG_CRAMFS 1
#undef  CONFIG_TMPFS
#define CONFIG_RAMFS 1
#undef  CONFIG_ISO9660_FS
#undef  CONFIG_JOLIET
#undef  CONFIG_ZISOFS
#define CONFIG_MINIX_FS 1
#undef  CONFIG_VXFS_FS
#undef  CONFIG_NTFS_FS
#undef  CONFIG_NTFS_RW
#undef  CONFIG_HPFS_FS
#define CONFIG_PROC_FS 1
#define CONFIG_DEVFS_FS 1
#define CONFIG_DEVFS_MOUNT 1
#undef  CONFIG_DEVFS_DEBUG
#define CONFIG_DEVPTS_FS 1
#undef  CONFIG_QNX4FS_FS
#undef  CONFIG_QNX4FS_RW
#undef  CONFIG_ROMFS_FS
#undef  CONFIG_EXT2_FS
#undef  CONFIG_SYSV_FS
#undef  CONFIG_UDF_FS
#undef  CONFIG_UDF_RW
#undef  CONFIG_UFS_FS
#undef  CONFIG_UFS_FS_WRITE

/*
 * Network File Systems
 */
#undef  CONFIG_CODA_FS
#undef  CONFIG_INTERMEZZO_FS
#define CONFIG_NFS_FS 1
#define CONFIG_NFS_V3 1
#define CONFIG_ROOT_NFS 1
#undef  CONFIG_NFSD
#undef  CONFIG_NFSD_V3
#define CONFIG_SUNRPC 1
#define CONFIG_LOCKD 1
#define CONFIG_LOCKD_V4 1
#define CONFIG_SMB_FS 1
#undef  CONFIG_SMB_NLS_DEFAULT
#undef  CONFIG_NCP_FS
#undef  CONFIG_NCPFS_PACKET_SIGNING
#undef  CONFIG_NCPFS_IOCTL_LOCKING
#undef  CONFIG_NCPFS_STRONG
#undef  CONFIG_NCPFS_NFS_NS
#undef  CONFIG_NCPFS_OS2_NS
#undef  CONFIG_NCPFS_SMALLDOS
#undef  CONFIG_NCPFS_NLS
#undef  CONFIG_NCPFS_EXTRAS
#undef  CONFIG_ZISOFS_FS
#define CONFIG_ZLIB_FS_INFLATE 1

/*
 * Partition Types
 */
#define CONFIG_PARTITION_ADVANCED 1
#undef  CONFIG_ACORN_PARTITION
#undef  CONFIG_OSF_PARTITION
#undef  CONFIG_AMIGA_PARTITION
#undef  CONFIG_ATARI_PARTITION
#undef  CONFIG_MAC_PARTITION
#undef  CONFIG_MSDOS_PARTITION
#undef  CONFIG_LDM_PARTITION
#undef  CONFIG_SGI_PARTITION
#undef  CONFIG_ULTRIX_PARTITION
#undef  CONFIG_SUN_PARTITION
#define CONFIG_SMB_NLS 1
#define CONFIG_NLS 1

/*
 * Native Language Support
 */
#define CONFIG_NLS_DEFAULT "iso8859-1"
#undef  CONFIG_NLS_CODEPAGE_437
#undef  CONFIG_NLS_CODEPAGE_737
#undef  CONFIG_NLS_CODEPAGE_775
#undef  CONFIG_NLS_CODEPAGE_850
#undef  CONFIG_NLS_CODEPAGE_852
#undef  CONFIG_NLS_CODEPAGE_855
#undef  CONFIG_NLS_CODEPAGE_857
#undef  CONFIG_NLS_CODEPAGE_860
#undef  CONFIG_NLS_CODEPAGE_861
#undef  CONFIG_NLS_CODEPAGE_862
#undef  CONFIG_NLS_CODEPAGE_863
#undef  CONFIG_NLS_CODEPAGE_864
#undef  CONFIG_NLS_CODEPAGE_865
#undef  CONFIG_NLS_CODEPAGE_866
#undef  CONFIG_NLS_CODEPAGE_869
#undef  CONFIG_NLS_CODEPAGE_936
#undef  CONFIG_NLS_CODEPAGE_950
#undef  CONFIG_NLS_CODEPAGE_932
#undef  CONFIG_NLS_CODEPAGE_949
#undef  CONFIG_NLS_CODEPAGE_874
#undef  CONFIG_NLS_ISO8859_8
#undef  CONFIG_NLS_CODEPAGE_1250
#undef  CONFIG_NLS_CODEPAGE_1251
#undef  CONFIG_NLS_ISO8859_1
#undef  CONFIG_NLS_ISO8859_2
#undef  CONFIG_NLS_ISO8859_3
#undef  CONFIG_NLS_ISO8859_4
#undef  CONFIG_NLS_ISO8859_5
#undef  CONFIG_NLS_ISO8859_6
#undef  CONFIG_NLS_ISO8859_7
#undef  CONFIG_NLS_ISO8859_9
#undef  CONFIG_NLS_ISO8859_13
#undef  CONFIG_NLS_ISO8859_14
#undef  CONFIG_NLS_ISO8859_15
#undef  CONFIG_NLS_KOI8_R
#undef  CONFIG_NLS_KOI8_U
#undef  CONFIG_NLS_UTF8

/*
 * Sound
 */
#undef  CONFIG_SOUND

/*
 * Multimedia Capabilities Port drivers
 */
#undef  CONFIG_MCP
#undef  CONFIG_MCP_SA1100
#undef  CONFIG_MCP_UCB1200
#undef  CONFIG_MCP_UCB1200_AUDIO
#undef  CONFIG_MCP_UCB1200_TS
#undef  CONFIG_CPE_GPIO_BUTTON

/*
 * USB support
 */
#undef  CONFIG_USB

/*
 * Bluetooth support
 */
#undef  CONFIG_BLUEZ

/*
 * Kernel hacking
 */
#define CONFIG_FRAME_POINTER 1
#define CONFIG_DEBUG_USER 1
#undef  CONFIG_DEBUG_INFO
#undef  CONFIG_NO_PGT_CACHE
#define CONFIG_DEBUG_KERNEL 1
#undef  CONFIG_DEBUG_SLAB
#undef  CONFIG_MAGIC_SYSRQ
#undef  CONFIG_DEBUG_SPINLOCK
#undef  CONFIG_DEBUG_WAITQ
#undef  CONFIG_DEBUG_BUGVERBOSE
#undef  CONFIG_DEBUG_ERRORS
#define CONFIG_DEBUG_LL 1
#undef  CONFIG_DEBUG_DC21285_PORT
#undef  CONFIG_DEBUG_CLPS711X_UART2