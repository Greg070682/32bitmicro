/**************************************************************************//**
 * @file
 * @brief CMSIS Cortex-M3 Peripheral Access Layer for EFM EFM32G840F64
 * @author Energy Micro AS
 * @version 1.0.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2009 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * This source code is the property of Energy Micro AS. The source and compiled
 * code may only be used on Energy Micro "EFM32" microcontrollers.
 *
 * This copyright notice may not be removed from the source code nor changed.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/

#ifndef __EFM32G840F64_H
#define __EFM32G840F64_H

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64 EFM32G840F64
 * @{
 *****************************************************************************/

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn   = -14,              /*!< 2 Non Maskable Interrupt                         */
  HardFault_IRQn        = -13,              /*!< 3 Cortex-M3 Hard Fault Interrupt                 */
  MemoryManagement_IRQn = -12,              /*!< 4 Cortex-M3 Memory Management Interrupt          */
  BusFault_IRQn         = -11,              /*!< 5 Cortex-M3 Bus Fault Interrupt                  */
  UsageFault_IRQn       = -10,              /*!< 6 Cortex-M3 Usage Fault Interrupt                */
  SVCall_IRQn           = -5,               /*!< 11 Cortex-M3 SV Call Interrupt                   */
  DebugMonitor_IRQn     = -4,               /*!< 12 Cortex-M3 Debug Monitor Interrupt             */
  PendSV_IRQn           = -2,               /*!< 14 Cortex-M3 Pend SV Interrupt                   */
  SysTick_IRQn          = -1,               /*!< 15 Cortex-M3 System Tick Interrupt               */

/******  EFM32G Peripheral Interrupt Numbers **************************************************/
  DMA_IRQn              = 0,  /*!< DMA Interrupt */
  GPIO_EVEN_IRQn        = 1,  /*!< GPIO_EVEN Interrupt */
  TIMER0_IRQn           = 2,  /*!< TIMER0 Interrupt */
  USART0_RX_IRQn        = 3,  /*!< USART0_RX Interrupt */
  USART0_TX_IRQn        = 4,  /*!< USART0_TX Interrupt */
  ACMP0_IRQn            = 5,  /*!< ACMP0 Interrupt */
  ADC0_IRQn             = 6,  /*!< ADC0 Interrupt */
  DAC0_IRQn             = 7,  /*!< DAC0 Interrupt */
  I2C0_IRQn             = 8,  /*!< I2C0 Interrupt */
  GPIO_ODD_IRQn         = 9,  /*!< GPIO_ODD Interrupt */
  TIMER1_IRQn           = 10, /*!< TIMER1 Interrupt */
  TIMER2_IRQn           = 11, /*!< TIMER2 Interrupt */
  USART1_RX_IRQn        = 12, /*!< USART1_RX Interrupt */
  USART1_TX_IRQn        = 13, /*!< USART1_TX Interrupt */
  USART2_RX_IRQn        = 14, /*!< USART2_RX Interrupt */
  USART2_TX_IRQn        = 15, /*!< USART2_TX Interrupt */
  LEUART0_IRQn          = 18, /*!< LEUART0 Interrupt */
  LEUART1_IRQn          = 19, /*!< LEUART1 Interrupt */
  LETIMER0_IRQn         = 20, /*!< LETIMER0 Interrupt */
  PCNT0_IRQn            = 21, /*!< PCNT0 Interrupt */
  PCNT1_IRQn            = 22, /*!< PCNT1 Interrupt */
  PCNT2_IRQn            = 23, /*!< PCNT2 Interrupt */
  RTC_IRQn              = 24, /*!< RTC Interrupt */
  CMU_IRQn              = 25, /*!< CMU Interrupt */
  VCMP_IRQn             = 26, /*!< VCMP Interrupt */
  LCD_IRQn              = 27, /*!< LCD Interrupt */
  MSC_IRQn              = 28, /*!< MSC Interrupt */
  AES_IRQn              = 29, /*!< AES Interrupt */
} IRQn_Type;

/**************************************************************************//**
 * @defgroup EFM32G840F64_Core EFM32G840F64 Core
 * @{
 *****************************************************************************/

#define __MPU_PRESENT             1 /**< Presence of MPU  */
#define __NVIC_PRIO_BITS          3 /**< NVIC intterupt priority bits */
#define __Vendor_SysTickConfig    0 /**< Is 1 if different SysTick counter is used */

/**
 * @}
 */

/**************************************************************************//**
* @defgroup EFM32G840F64_Part EFM32G840F64 Part
* @{
******************************************************************************/

#if !defined(EFM32G840F64)
#define EFM32G840F64
#endif

/** Configure part number */
#define PART_NUMBER          "EFM32G840F64" /**< Part Number */

/** Memory Base addresses and limits */
#define EBI_MEM_BASE         ((uint32_t) 0x80000000)  /**< EBI base address  */
#define EBI_MEM_SIZE         ((uint32_t) 0x10000000)  /**< EBI available address space  */
#define EBI_MEM_END          ((uint32_t) 0x8FFFFFFF)  /**< EBI end address  */
#define EBI_MEM_BITS         ((uint32_t) 0x28)        /**< EBI used bits  */
#define AES_MEM_BASE         ((uint32_t) 0x400E0000)  /**< AES base address  */
#define AES_MEM_SIZE         ((uint32_t) 0x400)       /**< AES available address space  */
#define AES_MEM_END          ((uint32_t) 0x400E03FF)  /**< AES end address  */
#define AES_MEM_BITS         ((uint32_t) 0x10)        /**< AES used bits  */
#define PER_MEM_BASE         ((uint32_t) 0x40000000)  /**< PER base address  */
#define PER_MEM_SIZE         ((uint32_t) 0xE0000)     /**< PER available address space  */
#define PER_MEM_END          ((uint32_t) 0x400DFFFF)  /**< PER end address  */
#define PER_MEM_BITS         ((uint32_t) 0x20)        /**< PER used bits  */
#define RAM_MEM_BASE         ((uint32_t) 0x20000000)  /**< RAM base address  */
#define RAM_MEM_SIZE         ((uint32_t) 0x8000)      /**< RAM available address space  */
#define RAM_MEM_END          ((uint32_t) 0x20007FFF)  /**< RAM end address  */
#define RAM_MEM_BITS         ((uint32_t) 0x15)        /**< RAM used bits  */
#define RAM_CODE_MEM_BASE    ((uint32_t) 0x10000000)  /**< RAM_CODE base address  */
#define RAM_CODE_MEM_SIZE    ((uint32_t) 0x4000)      /**< RAM_CODE available address space  */
#define RAM_CODE_MEM_END     ((uint32_t) 0x10003FFF)  /**< RAM_CODE end address  */
#define RAM_CODE_MEM_BITS    ((uint32_t) 0x14)        /**< RAM_CODE used bits  */
#define FLASH_MEM_BASE       ((uint32_t) 0x0)         /**< FLASH base address  */
#define FLASH_MEM_SIZE       ((uint32_t) 0x10000000)  /**< FLASH available address space  */
#define FLASH_MEM_END        ((uint32_t) 0xFFFFFFF)   /**< FLASH end address  */
#define FLASH_MEM_BITS       ((uint32_t) 0x28)        /**< FLASH used bits  */

/** Flash and SRAM limits for EFM32G840F64 */
#define FLASH_SIZE           0x00010000 /**< Available flash memory */
#define SRAM_SIZE            0x00004000 /**< Available sram memory */
#define __CM3_REV            0x200      /**< Cortex-M3 Core revision r2p0 */
#define DPI_CHAN_COUNT       8          /**< Number of DPI channels */
#define DMA_CHAN_COUNT       8          /**< Number of DMA channels */
/* Part number capabilities */
#define TIMER_PRESENT
#define TIMER_COUNT          3
#define TIMER_PARAM_DTI(i)                   (i == 0 ? 1 : i == 1 ? 0 : i == 2 ? 0 :  0)
#define TIMER_PARAM_CCNUM(i)                 (i == 0 ? 3 : i == 1 ? 3 : i == 2 ? 3 :  0)
#define USART_PRESENT
#define USART_COUNT    3
#define USART_PARAM_SC_AVAILABLE(i)          (i == 0 ? 1 : i == 1 ? 1 : i == 2 ? 1 :  0)
#define USART_PARAM_IRDA_AVAILABLE(i)        (i == 0 ? 1 : i == 1 ? 0 : i == 2 ? 0 :  0)
#define USART_PARAM_FULL_DATABIT_RANGE(i)    (i == 0 ? 1 : i == 1 ? 1 : i == 2 ? 1 :  0)
#define USART_PARAM_SYNC_AVAILABLE(i)        (i == 0 ? 1 : i == 1 ? 1 : i == 2 ? 1 :  0)
#define LEUART_PRESENT
#define LEUART_COUNT         2
#define LETIMER_PRESENT
#define LETIMER_COUNT        1
#define PCNT_PRESENT
#define PCNT_COUNT           3
#define PCNT_PARAM_PCNT_WIDTH(i)    (i == 0 ? 16 : i == 1 ? 8 : i == 2 ? 8 :  0)
#define I2C_PRESENT
#define I2C_COUNT            1
#define ADC_PRESENT
#define ADC_COUNT            1
#define ADC_PARAM_RES(i)    (i == 0 ? 12 :  0)
#define DAC_PRESENT
#define DAC_COUNT            1
#define DAC_PARAM_RES(i)    (i == 0 ? 12 :  0)
#define ACMP_PRESENT
#define ACMP_COUNT           2
#define CM3_PRESENT
#define CM3_COUNT            1
#define CM3_FREE_PRESENT
#define CM3_FREE_COUNT       1
#define BUSMATRIX_PRESENT
#define BUSMATRIX_COUNT      1
#define DMEM_PRESENT
#define DMEM_COUNT           1
#define AHB2APB_PRESENT
#define AHB2APB_COUNT        1
#define LE_PRESENT
#define LE_COUNT             1
#define MSC_PRESENT
#define MSC_COUNT            1
#define EMU_PRESENT
#define EMU_COUNT            1
#define RMU_PRESENT
#define RMU_COUNT            1
#define CMU_PRESENT
#define CMU_COUNT            1
#define AES_PRESENT
#define AES_COUNT            1
#define GPIO_PRESENT
#define GPIO_COUNT           1
#define PRS_PRESENT
#define PRS_COUNT            1
#define DMA_PRESENT
#define DMA_COUNT            1
#define VCMP_PRESENT
#define VCMP_COUNT           1
#define LCD_PRESENT
#define LCD_COUNT            1
#define LCD_PARAM_SEG_NUM    40
#define LCD_PARAM_COM_NUM    4
#define RTC_PRESENT
#define RTC_COUNT            1
#define HFXTAL_PRESENT
#define HFXTAL_COUNT         1
#define LFXTAL_PRESENT
#define LFXTAL_COUNT         1
#define WDOG_PRESENT
#define WDOG_COUNT           1
#define DBG_PRESENT
#define DBG_COUNT            1
#define TMODE_PRESENT
#define TMODE_COUNT          1
#define SCAN_PRESENT
#define SCAN_COUNT           1

/**
 * @}
 */

/* Include CMSIS core functionality */
#include "core_cm3.h"
#include "system_efm32.h"
#include <stdint.h>

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_Peripheral_TypeDefs EFM32G840F64 Peripheral TypeDefs
 * @{
 *
 *****************************************************************************/

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_MSC
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Memory System Control Register  */
  __IO uint32_t READCTRL;     /**< Read Control Register  */
  __IO uint32_t WRITECTRL;    /**< Write Control Register  */
  __O uint32_t  WRITECMD;     /**< Write Command Register  */
  __IO uint32_t ADDRB;        /**< Page Erase/Write Address Buffer  */

  uint32_t      RESERVED0[1]; /**< Reserved for future use **/
  __IO uint32_t WDATA;        /**< Write Data Register  */
  __I uint32_t  STATUS;       /**< Status Register  */

  uint32_t      RESERVED1[3]; /**< Reserved for future use **/
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */
} MSC_TypeDef;                /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_EMU
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __IO uint32_t MEMCTRL;      /**< Memory Control Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */

  uint32_t      RESERVED0[3]; /**< Reserved for future use **/
  __IO uint32_t ATESTCTRL;    /**< Analog Test Control Register  */

  uint32_t      RESERVED1[2]; /**< Reserved for future use **/
  __IO uint32_t AUXCTRL;      /**< Auxiliary Control Register  */
} EMU_TypeDef;                /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_RMU
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  RSTCAUSE; /**< Reset Cause Register  */
  __O uint32_t  CMD;      /**< Command Register  */
} RMU_TypeDef;            /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_CMU
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< CMU Control Register  */
  __IO uint32_t HFCORECLKDIV; /**< High Frequency Core Clock Division Register  */
  __IO uint32_t HFPERCLKDIV;  /**< High Frequency Peripheral Clock Division Register  */
  __IO uint32_t HFRCOCTRL;    /**< HFRCO Control Register  */
  __IO uint32_t LFRCOCTRL;    /**< LFRCO Control Register  */
  __IO uint32_t AUXHFRCOCTRL; /**< AUXHFRCO Control Register  */
  __IO uint32_t CALCTRL;      /**< Calibration Control Register  */
  __IO uint32_t CALCNT;       /**< Calibration Counter Register  */
  __O uint32_t  OSCENCMD;     /**< Oscillator Enable/Disable Command Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __IO uint32_t LFCLKSEL;     /**< Low Frequency Clock Select Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t HFCORECLKEN0; /**< High Frequency Core Clock Enable Register 0  */
  __IO uint32_t HFPERCLKEN0;  /**< High Frequency Peripheral Clock Enable Register 0  */
  uint32_t      RESERVED0[2]; /**< Reserved for future use **/
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */
  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __IO uint32_t LFACLKEN0;    /**< Low Frequency A Clock Enable Register 0  */
  uint32_t      RESERVED1[1]; /**< Reserved for future use **/
  __IO uint32_t LFBCLKEN0;    /**< Low Frequency B Clock Enable Register 0  */
  uint32_t      RESERVED2[1]; /**< Reserved for future use **/
  __IO uint32_t LFAPRESC0;    /**< Low Frequency A Prescaler Register 0  */
  uint32_t      RESERVED3[1]; /**< Reserved for future use **/
  __IO uint32_t LFBPRESC0;    /**< Low Frequency B Prescaler Register 0  */
  uint32_t      RESERVED4[1]; /**< Reserved for future use **/
  __IO uint32_t PCNTCTRL;     /**< PCNT Control Register  */
  __IO uint32_t LCDCTRL;      /**< LCD Control Register  */
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */
} CMU_TypeDef;                /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_AES
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t DATA;         /**< DATA Register  */
  __IO uint32_t XORDATA;      /**< XORDATA Register  */
  uint32_t      RESERVED0[3]; /**< Reserved for future use **/
  __IO uint32_t KEYLA;        /**< KEY Low Register  */
  __IO uint32_t KEYLB;        /**< KEY Low Register  */
  __IO uint32_t KEYLC;        /**< KEY Low Register  */
  __IO uint32_t KEYLD;        /**< KEY Low Register  */
  __IO uint32_t KEYHA;        /**< KEY High Register  */
  __IO uint32_t KEYHB;        /**< KEY High Register  */
  __IO uint32_t KEYHC;        /**< KEY High Register  */
  __IO uint32_t KEYHD;        /**< KEY High Register  */
} AES_TypeDef;                /** @} */

/**************************************************************************//**
 *
 * P
 *
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Port Control Register  */
  __IO uint32_t MODEL;    /**< Port Pin Mode Low Register  */
  __IO uint32_t MODEH;    /**< Port Pin Mode High Register  */
  __IO uint32_t DOUT;     /**< Port Data Out Register  */
  __O uint32_t  DOUTSET;  /**< Port Data Out Set Register  */
  __O uint32_t  DOUTCLR;  /**< Port Data Out Clear Register  */
  __O uint32_t  DOUTTGL;  /**< Port Data Out Toggle Register  */
  __I uint32_t  DIN;      /**< Port Data In Register  */
  __IO uint32_t PINLOCKN; /**< Port Unlocked Pins Register  */
} GPIO_P_TypeDef;

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_GPIO
 * @{
 *****************************************************************************/
typedef struct
{
  GPIO_P_TypeDef P[6];          /**< Port configuration bits */

  uint32_t       RESERVED0[10]; /**< Reserved for future use **/
  __IO uint32_t  EXTIPSELL;     /**< External Interrupt Port Select Low Register  */
  __IO uint32_t  EXTIPSELH;     /**< External Interrupt Port Select High Register  */
  __IO uint32_t  EXTIRISE;      /**< External Interrupt Rising Edge Trigger Register  */
  __IO uint32_t  EXTIFALL;      /**< External Interrupt Falling Edge Trigger Register  */
  __IO uint32_t  IEN;           /**< Interrupt Enable Register  */
  __I uint32_t   IF;            /**< Interrupt Flag Register  */
  __O uint32_t   IFS;           /**< Interrupt Flag Set Register  */
  __O uint32_t   IFC;           /**< Interrupt Flag Clear Register  */

  __IO uint32_t  ROUTE;         /**< I/O Routing Register  */
  __IO uint32_t  INSENSE;       /**< Input Sense Register  */
  __IO uint32_t  LOCK;          /**< Configuration Lock Register  */
} GPIO_TypeDef;                 /** @} */

/**************************************************************************//**
 *
 * CH
 *
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< Channel Control Register  */
} PRS_CH_TypeDef;

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_PRS
 * @{
 *****************************************************************************/
typedef struct
{
  __O uint32_t   SWPULSE;      /**< Software Pulse Register  */
  __IO uint32_t  SWLEVEL;      /**< Software Level Register  */

  uint32_t       RESERVED0[2]; /**< Reserved registers */

  PRS_CH_TypeDef CH[8];        /**< Channel registers */
} PRS_TypeDef;                 /** @} */

/**************************************************************************//**
 *
 * CH
 *
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< Channel Control Register  */
} DMA_CH_TypeDef;

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_DMA
 * @{
 *****************************************************************************/
typedef struct
{
  __I uint32_t   STATUS;          /**< DMA Status Registers  */
  __IO uint32_t  CONFIG;          /**< DMA Configuration Register  */
  __IO uint32_t  CTRLBASE;        /**< Channel Control Data Base Pointer Register  */
  __I uint32_t   ALTCTRLBASE;     /**< Channel Alternate Control Data Base Pointer Register  */
  __I uint32_t   WAITSTATUS;      /**< Channel Wait on Request Status Register  */
  __O uint32_t   CHSWREQ;         /**< Channel Software Request Register  */
  __O uint32_t   CHUSEBURSTS;     /**< Channel Useburst Set Register  */
  __O uint32_t   CHUSEBURSTC;     /**< Channel Useburst Clear Register  */
  __O uint32_t   CHREQMASKS;      /**< Channel Request Mask Set Register  */
  __O uint32_t   CHREQMASKC;      /**< Channel Request Mask Clear Register  */
  __O uint32_t   CHENS;           /**< Channel Enable Set Register  */
  __O uint32_t   CHENC;           /**< Channel Enable Clear Register  */
  __O uint32_t   CHALTS;          /**< Channel Alternate Set Register  */
  __O uint32_t   CHALTC;          /**< Channel Alternate Clear Register  */
  __O uint32_t   CHPRIS;          /**< Channel Priority Set Register  */
  __O uint32_t   CHPRIC;          /**< Channel Priority Clear Register  */
  uint32_t       RESERVED0[3];    /**< Reserved for future use **/
  __IO uint32_t  ERRORC;          /**< Bus Error Clear Register  */

  uint32_t       RESERVED1[1004]; /**< Reserved for future use **/
  __I uint32_t   IF;              /**< Interrupt Flag Register  */
  __O uint32_t   IFS;             /**< Interrupt Flag Set Register  */
  __O uint32_t   IFC;             /**< Interrupt Flag Clear Register  */
  __IO uint32_t  IEN;             /**< Interrupt Enable register  */

  uint32_t       RESERVED2[60];   /**< Reserved registers */

  DMA_CH_TypeDef CH[8];           /**< Channel registers */
} DMA_TypeDef;                    /** @} */

/**************************************************************************//**
 *
 * CC
 *
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< CC Channel Control Register  */
  __IO uint32_t CCV;  /**< CC Channel Value Register  */
  __I uint32_t  CCVP; /**< CC Channel Value Peek Register  */
  __IO uint32_t CCVB; /**< CC Channel Buffer Register  */
} TIMER_CC_TypeDef;

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_TIMER
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t    CTRL;         /**< Control Register  */
  __O uint32_t     CMD;          /**< Command Register  */
  __I uint32_t     STATUS;       /**< Status Register  */
  __IO uint32_t    IEN;          /**< Interrupt Enable Register  */
  __I uint32_t     IF;           /**< Interrupt Flag Register  */
  __O uint32_t     IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t     IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t    TOP;          /**< Counter Top Value Register  */
  __IO uint32_t    TOPB;         /**< Counter Top Value Buffer Register  */
  __IO uint32_t    CNT;          /**< Counter Value Register  */
  __IO uint32_t    ROUTE;        /**< I/O Routing Register  */

  uint32_t         RESERVED0[1]; /**< Reserved registers */

  TIMER_CC_TypeDef CC[3];        /**< Compare/Capture Channel */

  uint32_t         RESERVED1[4]; /**< Reserved for future use **/
  __IO uint32_t    DTCTRL;       /**< DTI Control Register  */
  __IO uint32_t    DTTIME;       /**< DTI Time Control Register  */
  __IO uint32_t    DTFC;         /**< DTI Fault Configuration Register  */
  __IO uint32_t    DTOGEN;       /**< DTI Output Generation Enable Register  */
  __IO uint32_t    DTFAULT;      /**< DTI Fault Register  */
  __O uint32_t     DTFAULTC;     /**< DTI Fault Clear Register  */
  __IO uint32_t    DTLOCK;       /**< DTI Configuration Lock Register  */
} TIMER_TypeDef;                 /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_USART
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;       /**< Control Register  */
  __IO uint32_t FRAME;      /**< USART Frame Format Register  */
  __IO uint32_t TRIGCTRL;   /**< USART Trigger Control register  */
  __O uint32_t  CMD;        /**< Command Register  */
  __I uint32_t  STATUS;     /**< USART Status Register  */
  __IO uint32_t CLKDIV;     /**< Clock Control Register  */
  __I uint32_t  RXDATAX;    /**< RX Buffer Data Extended Register  */
  __I uint32_t  RXDATA;     /**< RX Buffer Data Register  */
  __I uint32_t  RXDOUBLEX;  /**< RX Buffer Double Data Extended Register  */
  __I uint32_t  RXDOUBLE;   /**< RX FIFO Double Data Register  */
  __I uint32_t  RXDATAXP;   /**< RX Buffer Data Extended Peek Register  */
  __I uint32_t  RXDOUBLEXP; /**< RX Buffer Double Data Extended Peek Register  */
  __O uint32_t  TXDATAX;    /**< TX Buffer Data Extended Register  */
  __O uint32_t  TXDATA;     /**< TX Buffer Data Register  */
  __O uint32_t  TXDOUBLEX;  /**< TX Buffer Double Data Extended Register  */
  __O uint32_t  TXDOUBLE;   /**< TX Buffer Double Data Register  */
  __I uint32_t  IF;         /**< Interrupt Flag Register  */
  __O uint32_t  IFS;        /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;        /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;        /**< Interrupt Enable Register  */
  __IO uint32_t IRCTRL;     /**< IrDA Control Register  */
  __IO uint32_t ROUTE;      /**< I/O Routing Register  */
} USART_TypeDef;            /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_LEUART
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __IO uint32_t CLKDIV;       /**< Clock Control Register  */
  __IO uint32_t STARTFRAME;   /**< Start Frame Register  */
  __IO uint32_t SIGFRAME;     /**< Signal Frame Register  */
  __I uint32_t  RXDATAX;      /**< Receive Buffer Data Extended Register  */
  __I uint32_t  RXDATA;       /**< Receive Buffer Data Register  */
  __I uint32_t  RXDATAXP;     /**< Receive Buffer Data Extended Peek Register  */
  __O uint32_t  TXDATAX;      /**< Transmit Buffer Data Extended Register  */
  __O uint32_t  TXDATA;       /**< Transmit Buffer Data Register  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t PULSECTRL;    /**< Pulse Control Register  */

  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */

  uint32_t      RESERVED0[3]; /**< Reserved for future use **/
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
} LEUART_TypeDef;             /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_LETIMER
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __I uint32_t  CNT;          /**< Counter Value Register  */
  __IO uint32_t COMP0;        /**< Compare Value Register 0  */
  __IO uint32_t COMP1;        /**< Compare Value Register 1  */
  __IO uint32_t REP0;         /**< Repeat Counter Register 0  */
  __IO uint32_t REP1;         /**< Repeat Counter Register 1  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */

  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */

  uint32_t      RESERVED0[2]; /**< Reserved for future use **/
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
} LETIMER_TypeDef;            /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_PCNT
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __O uint32_t  CMD;      /**< Command Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __I uint32_t  CNT;      /**< Counter Value Register  */
  __I uint32_t  TOP;      /**< Top Value Register  */
  __IO uint32_t TOPB;     /**< Top Value Buffer Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __IO uint32_t ROUTE;    /**< I/O Routing Register  */

  __IO uint32_t FREEZE;   /**< Freeze Register  */
  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} PCNT_TypeDef;           /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_I2C
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;      /**< Control Register  */
  __O uint32_t  CMD;       /**< Command Register  */
  __I uint32_t  STATE;     /**< State Register  */
  __I uint32_t  STATUS;    /**< Status Register  */
  __IO uint32_t CLKDIV;    /**< Clock Division Register  */
  __IO uint32_t SADDR;     /**< Slave Address Register  */
  __IO uint32_t SADDRMASK; /**< Slave Address Mask Register  */
  __I uint32_t  RXDATA;    /**< Receive Buffer Data Register  */
  __I uint32_t  RXDATAP;   /**< Receive Buffer Data Peek Register  */
  __O uint32_t  TXDATA;    /**< Transmit Buffer Data Register  */
  __I uint32_t  IF;        /**< Interrupt Flag Register  */
  __O uint32_t  IFS;       /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;       /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;       /**< Interrupt Enable Register  */
  __IO uint32_t ROUTE;     /**< I/O Routing Register  */
} I2C_TypeDef;             /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_ADC
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;        /**< Control Register  */
  __O uint32_t  CMD;         /**< Command Register  */
  __I uint32_t  STATUS;      /**< Status Register  */
  __IO uint32_t SINGLECTRL;  /**< Single Sample Control Register  */
  __IO uint32_t SCANCTRL;    /**< Scan Control Register  */
  __IO uint32_t IEN;         /**< Interrupt Enable Register  */
  __I uint32_t  IF;          /**< Interrupt Flag Register  */
  __O uint32_t  IFS;         /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;         /**< Interrupt Flag Clear Register  */
  __I uint32_t  SINGLEDATA;  /**< Single Conversion Result Data  */
  __I uint32_t  SCANDATA;    /**< Scan Conversion Result Data  */
  __I uint32_t  SINGLEDATAP; /**< Single Conversion Result Data Peek Register  */
  __I uint32_t  SCANDATAP;   /**< Scan Sequence Result Data Peek Register  */
  __IO uint32_t CAL;         /**< Calibration Register  */
  __IO uint32_t ROUTE;       /**< I/O Routing Register  */
} ADC_TypeDef;               /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_DAC
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t CH0CTRL;  /**< Channel 0 Control Register  */
  __IO uint32_t CH1CTRL;  /**< Channel 1 Control Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t CH0DATA;  /**< Channel 0 Data Register  */
  __IO uint32_t CH1DATA;  /**< Channel 1 Data Register  */
  __O uint32_t  COMBDATA; /**< Combined Data Register  */
  __IO uint32_t CAL;      /**< Calibration Register  */
} DAC_TypeDef;            /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_ACMP
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __IO uint32_t INPUTSEL; /**< Input Selection Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t ROUTE;    /**< I/O Routing Register  */
} ACMP_TypeDef;           /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_VCMP
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __IO uint32_t INPUTSEL; /**< Input Selection Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
} VCMP_TypeDef;           /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_LCD
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __IO uint32_t DISPCTRL;     /**< Display Control Register  */
  __IO uint32_t SEGEN;        /**< Segment Enable Register  */
  __IO uint32_t BACTRL;       /**< Blink and Animation Control Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __IO uint32_t AREGA;        /**< Animation Register A  */
  __IO uint32_t AREGB;        /**< Animation Register B  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */

  uint32_t      RESERVED0[5]; /**< Reserved for future use **/
  __IO uint32_t SEGD0L;       /**< Segment Data Low Register 0  */
  __IO uint32_t SEGD1L;       /**< Segment Data Low Register 1  */
  __IO uint32_t SEGD2L;       /**< Segment Data Low Register 2  */
  __IO uint32_t SEGD3L;       /**< Segment Data Low Register 3  */
  __IO uint32_t SEGD0H;       /**< Segment Data High Register 0  */
  __IO uint32_t SEGD1H;       /**< Segment Data High Register 1  */
  __IO uint32_t SEGD2H;       /**< Segment Data High Register 2  */
  __IO uint32_t SEGD3H;       /**< Segment Data High Register 3  */

  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */
} LCD_TypeDef;                /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_RTC
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  CNT;      /**< Counter Value Register  */
  __IO uint32_t COMP0;    /**< Compare Value Register 0  */
  __IO uint32_t COMP1;    /**< Compare Value Register 1  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */

  __IO uint32_t FREEZE;   /**< Freeze Register  */
  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} RTC_TypeDef;            /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_WDOG
 * @{
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __O uint32_t  CMD;      /**< Command Register  */

  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} WDOG_TypeDef;           /** @} */

/**
 * @}
 */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_DEVINFO
 * @{
 *****************************************************************************/
typedef struct
{
  __I uint32_t UNIQUEL; /**< Low 32 bits of device unique number */
  __I uint32_t UNIQUEH; /**< High 32 bits of device unique number */
  __I uint32_t MSIZE;   /**< Flash and SRAM Memory size in KiloBytes */
  __I uint32_t PART;    /**< Part description */
} DEVINFO_TypeDef;      /** @} */

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_CALIBRATE
 * @{
 *****************************************************************************/
#define CALIBRATE_MAX_REGISTERS    50 /**< Max number of address/value pairs for calibration */

typedef struct
{
  __I uint32_t ADDRESS; /**< Address of calibration register */
  __I uint32_t VALUE;   /**< Default value for calibration register */
} CALIBRATE_TypeDef;    /** @} */

/** Special calibration registers */
#define HFRCO_CALIBH    (*(volatile uint32_t *) 0x0FE081DC) /**< Calibration value for HFRCO 28 Mhz */
#define HFRCO_CALIBL    (*(volatile uint32_t *) 0x0FE081E0) /**< Calibration value for HFRCO 1/7/11/21 Mhz */
#define ADC_CALIB       (*(volatile uint32_t *) 0x0FE081E4) /**< ADC temperature for calibration and result */

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_Peripheral_Base EFM32G840F64 Peripheral Base Addresses
 * @{
 *****************************************************************************/

#define MSC_BASE          (0x400C0000) /**< MSC base address  */
#define EMU_BASE          (0x400C6000) /**< EMU base address  */
#define RMU_BASE          (0x400CA000) /**< RMU base address  */
#define CMU_BASE          (0x400C8000) /**< CMU base address  */
#define AES_BASE          (0x400E0000) /**< AES base address  */
#define GPIO_BASE         (0x40006000) /**< GPIO base address  */
#define PRS_BASE          (0x400CC000) /**< PRS base address  */
#define DMA_BASE          (0x400C2000) /**< DMA base address  */
#define TIMER0_BASE       (0x40010000) /**< TIMER0 base address  */
#define TIMER1_BASE       (0x40010400) /**< TIMER1 base address  */
#define TIMER2_BASE       (0x40010800) /**< TIMER2 base address  */
#define USART0_BASE       (0x4000C000) /**< USART0 base address  */
#define USART1_BASE       (0x4000C400) /**< USART1 base address  */
#define USART2_BASE       (0x4000C800) /**< USART2 base address  */
#define LEUART0_BASE      (0x40084000) /**< LEUART0 base address  */
#define LEUART1_BASE      (0x40084400) /**< LEUART1 base address  */
#define LETIMER0_BASE     (0x40082000) /**< LETIMER0 base address  */
#define PCNT0_BASE        (0x40086000) /**< PCNT0 base address  */
#define PCNT1_BASE        (0x40086400) /**< PCNT1 base address  */
#define PCNT2_BASE        (0x40086800) /**< PCNT2 base address  */
#define I2C0_BASE         (0x4000A000) /**< I2C0 base address  */
#define ADC0_BASE         (0x40002000) /**< ADC0 base address  */
#define DAC0_BASE         (0x40004000) /**< DAC0 base address  */
#define ACMP0_BASE        (0x40001000) /**< ACMP0 base address  */
#define ACMP1_BASE        (0x40001400) /**< ACMP1 base address  */
#define VCMP_BASE         (0x40000000) /**< VCMP base address  */
#define LCD_BASE          (0x4008A000) /**< LCD base address  */
#define RTC_BASE          (0x40080000) /**< RTC base address  */
#define WDOG_BASE         (0x40088000) /**< WDOG base address  */
#define DEVINFO_BASE      (0x0FE081F0) /**< DEVINFO base address */
#define CALIBRATE_BASE    (0x0FE08000) /**< CALIBRATE base address */
/**
 * @}
 */

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_Peripheral_Declaration  EFM32G840F64 Peripheral Declaration
 * @{
 *****************************************************************************/

#define MSC          ((MSC_TypeDef *) MSC_BASE)             /**< MSC base pointer */
#define EMU          ((EMU_TypeDef *) EMU_BASE)             /**< EMU base pointer */
#define RMU          ((RMU_TypeDef *) RMU_BASE)             /**< RMU base pointer */
#define CMU          ((CMU_TypeDef *) CMU_BASE)             /**< CMU base pointer */
#define AES          ((AES_TypeDef *) AES_BASE)             /**< AES base pointer */
#define GPIO         ((GPIO_TypeDef *) GPIO_BASE)           /**< GPIO base pointer */
#define PRS          ((PRS_TypeDef *) PRS_BASE)             /**< PRS base pointer */
#define DMA          ((DMA_TypeDef *) DMA_BASE)             /**< DMA base pointer */
#define TIMER0       ((TIMER_TypeDef *) TIMER0_BASE)        /**< TIMER0 base pointer */
#define TIMER1       ((TIMER_TypeDef *) TIMER1_BASE)        /**< TIMER1 base pointer */
#define TIMER2       ((TIMER_TypeDef *) TIMER2_BASE)        /**< TIMER2 base pointer */
#define USART0       ((USART_TypeDef *) USART0_BASE)        /**< USART0 base pointer */
#define USART1       ((USART_TypeDef *) USART1_BASE)        /**< USART1 base pointer */
#define USART2       ((USART_TypeDef *) USART2_BASE)        /**< USART2 base pointer */
#define LEUART0      ((LEUART_TypeDef *) LEUART0_BASE)      /**< LEUART0 base pointer */
#define LEUART1      ((LEUART_TypeDef *) LEUART1_BASE)      /**< LEUART1 base pointer */
#define LETIMER0     ((LETIMER_TypeDef *) LETIMER0_BASE)    /**< LETIMER0 base pointer */
#define PCNT0        ((PCNT_TypeDef *) PCNT0_BASE)          /**< PCNT0 base pointer */
#define PCNT1        ((PCNT_TypeDef *) PCNT1_BASE)          /**< PCNT1 base pointer */
#define PCNT2        ((PCNT_TypeDef *) PCNT2_BASE)          /**< PCNT2 base pointer */
#define I2C0         ((I2C_TypeDef *) I2C0_BASE)            /**< I2C0 base pointer */
#define ADC0         ((ADC_TypeDef *) ADC0_BASE)            /**< ADC0 base pointer */
#define DAC0         ((DAC_TypeDef *) DAC0_BASE)            /**< DAC0 base pointer */
#define ACMP0        ((ACMP_TypeDef *) ACMP0_BASE)          /**< ACMP0 base pointer */
#define ACMP1        ((ACMP_TypeDef *) ACMP1_BASE)          /**< ACMP1 base pointer */
#define VCMP         ((VCMP_TypeDef *) VCMP_BASE)           /**< VCMP base pointer */
#define LCD          ((LCD_TypeDef *) LCD_BASE)             /**< LCD base pointer */
#define RTC          ((RTC_TypeDef *) RTC_BASE)             /**< RTC base pointer */
#define WDOG         ((WDOG_TypeDef *) WDOG_BASE)           /**< WDOG base pointer */
#define DEVINFO      ((DEVINFO_TypeDef *) DEVINFO_BASE)     /**< DEVINFO base pointer */
#define CALIBRATE    ((CALIBRATE_TypeDef *) CALIBRATE_BASE) /**< CALIBRATE base pointer */
/**
 * @}
 */

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_BitFields EFM32G840F64 Bit Fields
 * @{
 *****************************************************************************/

/**************************************************************************//**
 *
 * @addtogroup EFM32G840F64_PRS
 * @{
 *****************************************************************************/

#define PRS_VCMP_OUT          ((1 << 16) + 0)  /**< PRS Voltage comparator output */
#define PRS_ACMP0_OUT         ((2 << 16) + 0)  /**< PRS Analog comparator output */
#define PRS_ACMP1_OUT         ((3 << 16) + 0)  /**< PRS Analog comparator output */
#define PRS_DAC0_CH0          ((6 << 16) + 0)  /**< PRS DAC ch0 conversion done */
#define PRS_DAC0_CH1          ((6 << 16) + 1)  /**< PRS DAC ch1 conversion done */
#define PRS_ADC0_SINGLE       ((8 << 16) + 0)  /**< PRS ADC single conversion done */
#define PRS_ADC0_SCAN         ((8 << 16) + 1)  /**< PRS ADC scan conversion done */
#define PRS_USART0_IRTX       ((16 << 16) + 0) /**< PRS USART 0 IRDA out */
#define PRS_USART0_TXC        ((16 << 16) + 1) /**< PRS USART 0 TX complete */
#define PRS_USART0_RXDATAV    ((16 << 16) + 2) /**< PRS USART 0 RX Data Valid */
#define PRS_USART1_IRTX       ((17 << 16) + 0) /**< PRS USART 1 IRDA out */
#define PRS_USART1_TXC        ((17 << 16) + 1) /**< PRS USART 1 TX complete */
#define PRS_USART1_RXDATAV    ((17 << 16) + 2) /**< PRS USART 1 RX Data Valid */
#define PRS_USART2_IRTX       ((18 << 16) + 0) /**< PRS USART 2 IRDA out */
#define PRS_USART2_TXC        ((18 << 16) + 1) /**< PRS USART 2 TX complete */
#define PRS_USART2_RXDATAV    ((18 << 16) + 2) /**< PRS USART 2 RX Data Valid */
#define PRS_TIMER0_UF         ((28 << 16) + 0) /**< PRS Timer 0 Underflow */
#define PRS_TIMER0_OF         ((28 << 16) + 1) /**< PRS Timer 0 Overflow */
#define PRS_TIMER0_CC0        ((28 << 16) + 2) /**< PRS Timer 0 Compare/Capture 0 */
#define PRS_TIMER0_CC1        ((28 << 16) + 3) /**< PRS Timer 0 Compare/Capture 1 */
#define PRS_TIMER0_CC2        ((28 << 16) + 4) /**< PRS Timer 0 Compare/Capture 2 */
#define PRS_TIMER1_UF         ((29 << 16) + 0) /**< PRS Timer 1 Underflow */
#define PRS_TIMER1_OF         ((29 << 16) + 1) /**< PRS Timer 1 Overflow */
#define PRS_TIMER1_CC0        ((29 << 16) + 2) /**< PRS Timer 1 Compare/Capture 0 */
#define PRS_TIMER1_CC1        ((29 << 16) + 3) /**< PRS Timer 1 Compare/Capture 1 */
#define PRS_TIMER1_CC2        ((29 << 16) + 4) /**< PRS Timer 1 Compare/Capture 2 */
#define PRS_TIMER2_UF         ((30 << 16) + 0) /**< PRS Timer 2 Underflow */
#define PRS_TIMER2_OF         ((30 << 16) + 1) /**< PRS Timer 2 Overflow */
#define PRS_TIMER2_CC0        ((30 << 16) + 2) /**< PRS Timer 2 Compare/Capture 0 */
#define PRS_TIMER2_CC1        ((30 << 16) + 3) /**< PRS Timer 2 Compare/Capture 1 */
#define PRS_TIMER2_CC2        ((30 << 16) + 4) /**< PRS Timer 2 Compare/Capture 2 */
#define PRS_RTC_OF            ((40 << 16) + 0) /**< PRS RTC Overflow */
#define PRS_RTC_COMP0         ((40 << 16) + 1) /**< PRS RTC Compare 0 */
#define PRS_RTC_COMP1         ((40 << 16) + 2) /**< PRS RTC Compare 1 */
#define PRS_GPIO_PIN0         ((48 << 16) + 0) /**< PRS GPIO pin 0 */
#define PRS_GPIO_PIN1         ((48 << 16) + 1) /**< PRS GPIO pin 1 */
#define PRS_GPIO_PIN2         ((48 << 16) + 2) /**< PRS GPIO pin 2 */
#define PRS_GPIO_PIN3         ((48 << 16) + 3) /**< PRS GPIO pin 3 */
#define PRS_GPIO_PIN4         ((48 << 16) + 4) /**< PRS GPIO pin 4 */
#define PRS_GPIO_PIN5         ((48 << 16) + 5) /**< PRS GPIO pin 5 */
#define PRS_GPIO_PIN6         ((48 << 16) + 6) /**< PRS GPIO pin 6 */
#define PRS_GPIO_PIN7         ((48 << 16) + 7) /**< PRS GPIO pin 7 */
#define PRS_GPIO_PIN8         ((49 << 16) + 0) /**< PRS GPIO pin 8 */
#define PRS_GPIO_PIN9         ((49 << 16) + 1) /**< PRS GPIO pin 9 */
#define PRS_GPIO_PIN10        ((49 << 16) + 2) /**< PRS GPIO pin 10 */
#define PRS_GPIO_PIN11        ((49 << 16) + 3) /**< PRS GPIO pin 11 */
#define PRS_GPIO_PIN12        ((49 << 16) + 4) /**< PRS GPIO pin 12 */
#define PRS_GPIO_PIN13        ((49 << 16) + 5) /**< PRS GPIO pin 13 */
#define PRS_GPIO_PIN14        ((49 << 16) + 6) /**< PRS GPIO pin 14 */
#define PRS_GPIO_PIN15        ((49 << 16) + 7) /**< PRS GPIO pin 15 */

/**
 * @}
 */

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_DMA_Channel_Select EFM32G840F64 DMA Channel Select
 * @{
 *****************************************************************************/
#define DMAREQ_ADC0_SINGLE        ((8 << 16) + 0)  /**< DMA channel select for ADC0_SINGLE */
#define DMAREQ_ADC0_SCAN          ((8 << 16) + 1)  /**< DMA channel select for ADC0_SCAN */
#define DMAREQ_DAC0_CH0           ((10 << 16) + 0) /**< DMA channel select for DAC0_CH0 */
#define DMAREQ_DAC0_CH1           ((10 << 16) + 1) /**< DMA channel select for DAC0_CH1 */
#define DMAREQ_USART0_RXDATAV     ((12 << 16) + 0) /**< DMA channel select for USART0_RXDATAV */
#define DMAREQ_USART0_TXBL        ((12 << 16) + 1) /**< DMA channel select for USART0_TXBL */
#define DMAREQ_USART0_TXEMPTY     ((12 << 16) + 2) /**< DMA channel select for USART0_TXEMPTY */
#define DMAREQ_USART1_RXDATAV     ((13 << 16) + 0) /**< DMA channel select for USART1_RXDATAV */
#define DMAREQ_USART1_TXBL        ((13 << 16) + 1) /**< DMA channel select for USART1_TXBL */
#define DMAREQ_USART1_TXEMPTY     ((13 << 16) + 2) /**< DMA channel select for USART1_TXEMPTY */
#define DMAREQ_USART2_RXDATAV     ((14 << 16) + 0) /**< DMA channel select for USART2_RXDATAV */
#define DMAREQ_USART2_TXBL        ((14 << 16) + 1) /**< DMA channel select for USART2_TXBL */
#define DMAREQ_USART2_TXEMPTY     ((14 << 16) + 2) /**< DMA channel select for USART2_TXEMPTY */
#define DMAREQ_LEUART0_RXDATAV    ((16 << 16) + 0) /**< DMA channel select for LEUART0_RXDATAV */
#define DMAREQ_LEUART0_TXBL       ((16 << 16) + 1) /**< DMA channel select for LEUART0_TXBL */
#define DMAREQ_LEUART0_TXEMPTY    ((16 << 16) + 2) /**< DMA channel select for LEUART0_TXEMPTY */
#define DMAREQ_LEUART1_RXDATAV    ((17 << 16) + 0) /**< DMA channel select for LEUART1_RXDATAV */
#define DMAREQ_LEUART1_TXBL       ((17 << 16) + 1) /**< DMA channel select for LEUART1_TXBL */
#define DMAREQ_LEUART1_TXEMPTY    ((17 << 16) + 2) /**< DMA channel select for LEUART1_TXEMPTY */
#define DMAREQ_I2C0_RXDATAV       ((20 << 16) + 0) /**< DMA channel select for I2C0_RXDATAV */
#define DMAREQ_I2C0_TXBL          ((20 << 16) + 1) /**< DMA channel select for I2C0_TXBL */
#define DMAREQ_TIMER0_UFOF        ((24 << 16) + 0) /**< DMA channel select for TIMER0_UFOF */
#define DMAREQ_TIMER0_CC0         ((24 << 16) + 1) /**< DMA channel select for TIMER0_CC0 */
#define DMAREQ_TIMER0_CC1         ((24 << 16) + 2) /**< DMA channel select for TIMER0_CC1 */
#define DMAREQ_TIMER0_CC2         ((24 << 16) + 3) /**< DMA channel select for TIMER0_CC2 */
#define DMAREQ_TIMER1_UFOF        ((25 << 16) + 0) /**< DMA channel select for TIMER1_UFOF */
#define DMAREQ_TIMER1_CC0         ((25 << 16) + 1) /**< DMA channel select for TIMER1_CC0 */
#define DMAREQ_TIMER1_CC1         ((25 << 16) + 2) /**< DMA channel select for TIMER1_CC1 */
#define DMAREQ_TIMER1_CC2         ((25 << 16) + 3) /**< DMA channel select for TIMER1_CC2 */
#define DMAREQ_TIMER2_UFOF        ((26 << 16) + 0) /**< DMA channel select for TIMER2_UFOF */
#define DMAREQ_TIMER2_CC0         ((26 << 16) + 1) /**< DMA channel select for TIMER2_CC0 */
#define DMAREQ_TIMER2_CC1         ((26 << 16) + 2) /**< DMA channel select for TIMER2_CC1 */
#define DMAREQ_TIMER2_CC2         ((26 << 16) + 3) /**< DMA channel select for TIMER2_CC2 */
#define DMAREQ_UART0_RXDATAV      ((44 << 16) + 0) /**< DMA channel select for UART0_RXDATAV */
#define DMAREQ_UART0_TXBL         ((44 << 16) + 1) /**< DMA channel select for UART0_TXBL */
#define DMAREQ_UART0_TXEMPTY      ((44 << 16) + 2) /**< DMA channel select for UART0_TXEMPTY */
#define DMAREQ_MSC_WDATA          ((48 << 16) + 0) /**< DMA channel select for MSC_WDATA */
#define DMAREQ_AES_DATAWR         ((49 << 16) + 0) /**< DMA channel select for AES_DATAWR */
#define DMAREQ_AES_XORDATAWR      ((49 << 16) + 1) /**< DMA channel select for AES_XORDATAWR */
#define DMAREQ_AES_DATARD         ((49 << 16) + 2) /**< DMA channel select for AES_DATARD */
#define DMAREQ_AES_KEYWR          ((49 << 16) + 3) /**< DMA channel select for AES_KEYWR */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_TIMER
 * @{
 */

/** Bit fields for TIMER CTRL */
#define _TIMER_CTRL_RESETVALUE                     0x00000000         /**< Default value for TIMER_CTRL */
#define _TIMER_CTRL_MASK                           0x0F030FFB         /**< Mask for TIMER_CTRL */
#define _TIMER_CTRL_MODE_SHIFT                     0                  /**< Shift value for TIMER_MODE */
#define _TIMER_CTRL_MODE_MASK                      0x3                /**< Bit mask for TIMER_MODE */
#define TIMER_CTRL_MODE_DEFAULT                    (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_MODE_UP                         (0x00000000 << 0)  /**< Shifted mode UP for TIMER_CTRL */
#define TIMER_CTRL_MODE_DOWN                       (0x00000001 << 0)  /**< Shifted mode DOWN for TIMER_CTRL */
#define TIMER_CTRL_MODE_UPDOWN                     (0x00000002 << 0)  /**< Shifted mode UPDOWN for TIMER_CTRL */
#define TIMER_CTRL_MODE_QDEC                       (0x00000003 << 0)  /**< Shifted mode QDEC for TIMER_CTRL */
#define _TIMER_CTRL_MODE_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_MODE_UP                        0x00000000         /**< Mode UP for TIMER_CTRL */
#define _TIMER_CTRL_MODE_DOWN                      0x00000001         /**< Mode DOWN for TIMER_CTRL */
#define _TIMER_CTRL_MODE_UPDOWN                    0x00000002         /**< Mode UPDOWN for TIMER_CTRL */
#define _TIMER_CTRL_MODE_QDEC                      0x00000003         /**< Mode QDEC for TIMER_CTRL */
#define TIMER_CTRL_SYNC                            (1 << 3)           /**< Timer Start/Stop/Reload Synchronization */
#define _TIMER_CTRL_SYNC_SHIFT                     3                  /**< Shift value for TIMER_SYNC */
#define _TIMER_CTRL_SYNC_MASK                      0x8                /**< Bit mask for TIMER_SYNC */
#define TIMER_CTRL_SYNC_DEFAULT                    (0x00000000 << 3)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_SYNC_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_OSMEN                           (1 << 4)           /**< One-shot Mode Enable */
#define _TIMER_CTRL_OSMEN_SHIFT                    4                  /**< Shift value for TIMER_OSMEN */
#define _TIMER_CTRL_OSMEN_MASK                     0x10               /**< Bit mask for TIMER_OSMEN */
#define TIMER_CTRL_OSMEN_DEFAULT                   (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_OSMEN_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_QEM                             (1 << 5)           /**< Quadrature Decoder Mode Selection */
#define _TIMER_CTRL_QEM_SHIFT                      5                  /**< Shift value for TIMER_QEM */
#define _TIMER_CTRL_QEM_MASK                       0x20               /**< Bit mask for TIMER_QEM */
#define TIMER_CTRL_QEM_DEFAULT                     (0x00000000 << 5)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_QEM_X2                          (0x00000000 << 5)  /**< Shifted mode X2 for TIMER_CTRL */
#define TIMER_CTRL_QEM_X4                          (0x00000001 << 5)  /**< Shifted mode X4 for TIMER_CTRL */
#define _TIMER_CTRL_QEM_DEFAULT                    0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_QEM_X2                         0x00000000         /**< Mode X2 for TIMER_CTRL */
#define _TIMER_CTRL_QEM_X4                         0x00000001         /**< Mode X4 for TIMER_CTRL */
#define TIMER_CTRL_DEBUGRUN                        (1 << 6)           /**< Debug Mode Run Enable */
#define _TIMER_CTRL_DEBUGRUN_SHIFT                 6                  /**< Shift value for TIMER_DEBUGRUN */
#define _TIMER_CTRL_DEBUGRUN_MASK                  0x40               /**< Bit mask for TIMER_DEBUGRUN */
#define TIMER_CTRL_DEBUGRUN_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_DEBUGRUN_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_DMACLRACT                       (1 << 7)           /**< DMA Request Clear on Active */
#define _TIMER_CTRL_DMACLRACT_SHIFT                7                  /**< Shift value for TIMER_DMACLRACT */
#define _TIMER_CTRL_DMACLRACT_MASK                 0x80               /**< Bit mask for TIMER_DMACLRACT */
#define TIMER_CTRL_DMACLRACT_DEFAULT               (0x00000000 << 7)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_DMACLRACT_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_SHIFT                    8                  /**< Shift value for TIMER_RISEA */
#define _TIMER_CTRL_RISEA_MASK                     0x300              /**< Bit mask for TIMER_RISEA */
#define TIMER_CTRL_RISEA_DEFAULT                   (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_RISEA_NONE                      (0x00000000 << 8)  /**< Shifted mode NONE for TIMER_CTRL */
#define TIMER_CTRL_RISEA_START                     (0x00000001 << 8)  /**< Shifted mode START for TIMER_CTRL */
#define TIMER_CTRL_RISEA_STOP                      (0x00000002 << 8)  /**< Shifted mode STOP for TIMER_CTRL */
#define TIMER_CTRL_RISEA_RELOADSTART               (0x00000003 << 8)  /**< Shifted mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_NONE                     0x00000000         /**< Mode NONE for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_START                    0x00000001         /**< Mode START for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_STOP                     0x00000002         /**< Mode STOP for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_RELOADSTART              0x00000003         /**< Mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_SHIFT                    10                 /**< Shift value for TIMER_FALLA */
#define _TIMER_CTRL_FALLA_MASK                     0xC00              /**< Bit mask for TIMER_FALLA */
#define TIMER_CTRL_FALLA_DEFAULT                   (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_FALLA_NONE                      (0x00000000 << 10) /**< Shifted mode NONE for TIMER_CTRL */
#define TIMER_CTRL_FALLA_START                     (0x00000001 << 10) /**< Shifted mode START for TIMER_CTRL */
#define TIMER_CTRL_FALLA_STOP                      (0x00000002 << 10) /**< Shifted mode STOP for TIMER_CTRL */
#define TIMER_CTRL_FALLA_RELOADSTART               (0x00000003 << 10) /**< Shifted mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_NONE                     0x00000000         /**< Mode NONE for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_START                    0x00000001         /**< Mode START for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_STOP                     0x00000002         /**< Mode STOP for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_RELOADSTART              0x00000003         /**< Mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_SHIFT                   16                 /**< Shift value for TIMER_CLKSEL */
#define _TIMER_CTRL_CLKSEL_MASK                    0x30000            /**< Bit mask for TIMER_CLKSEL */
#define TIMER_CTRL_CLKSEL_DEFAULT                  (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_PRESCHFPERCLK            (0x00000000 << 16) /**< Shifted mode PRESCHFPERCLK for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_CC1                      (0x00000001 << 16) /**< Shifted mode CC1 for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_TIMEROUF                 (0x00000002 << 16) /**< Shifted mode TIMEROUF for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_PRESCHFPERCLK           0x00000000         /**< Mode PRESCHFPERCLK for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_CC1                     0x00000001         /**< Mode CC1 for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_TIMEROUF                0x00000002         /**< Mode TIMEROUF for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_SHIFT                    24                 /**< Shift value for TIMER_PRESC */
#define _TIMER_CTRL_PRESC_MASK                     0xF000000          /**< Bit mask for TIMER_PRESC */
#define TIMER_CTRL_PRESC_DEFAULT                   (0x00000000 << 24) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV1                      (0x00000000 << 24) /**< Shifted mode DIV1 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV2                      (0x00000001 << 24) /**< Shifted mode DIV2 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV4                      (0x00000002 << 24) /**< Shifted mode DIV4 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV8                      (0x00000003 << 24) /**< Shifted mode DIV8 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV16                     (0x00000004 << 24) /**< Shifted mode DIV16 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV32                     (0x00000005 << 24) /**< Shifted mode DIV32 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV64                     (0x00000006 << 24) /**< Shifted mode DIV64 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV128                    (0x00000007 << 24) /**< Shifted mode DIV128 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV256                    (0x00000008 << 24) /**< Shifted mode DIV256 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV512                    (0x00000009 << 24) /**< Shifted mode DIV512 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV1024                   (0x0000000A << 24) /**< Shifted mode DIV1024 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV1                     0x00000000         /**< Mode DIV1 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV2                     0x00000001         /**< Mode DIV2 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV4                     0x00000002         /**< Mode DIV4 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV8                     0x00000003         /**< Mode DIV8 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV16                    0x00000004         /**< Mode DIV16 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV32                    0x00000005         /**< Mode DIV32 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV64                    0x00000006         /**< Mode DIV64 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV128                   0x00000007         /**< Mode DIV128 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV256                   0x00000008         /**< Mode DIV256 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV512                   0x00000009         /**< Mode DIV512 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV1024                  0x0000000A         /**< Mode DIV1024 for TIMER_CTRL */

/** Bit fields for TIMER CMD */
#define _TIMER_CMD_RESETVALUE                      0x00000000        /**< Default value for TIMER_CMD */
#define _TIMER_CMD_MASK                            0x00000003        /**< Mask for TIMER_CMD */
#define TIMER_CMD_START                            (1 << 0)          /**< Start Timer */
#define _TIMER_CMD_START_SHIFT                     0                 /**< Shift value for TIMER_START */
#define _TIMER_CMD_START_MASK                      0x1               /**< Bit mask for TIMER_START */
#define TIMER_CMD_START_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_CMD */
#define _TIMER_CMD_START_DEFAULT                   0x00000000        /**< Mode DEFAULT for TIMER_CMD */
#define TIMER_CMD_STOP                             (1 << 1)          /**< Stop Timer */
#define _TIMER_CMD_STOP_SHIFT                      1                 /**< Shift value for TIMER_STOP */
#define _TIMER_CMD_STOP_MASK                       0x2               /**< Bit mask for TIMER_STOP */
#define TIMER_CMD_STOP_DEFAULT                     (0x00000000 << 1) /**< Shifted mode DEFAULT for TIMER_CMD */
#define _TIMER_CMD_STOP_DEFAULT                    0x00000000        /**< Mode DEFAULT for TIMER_CMD */

/** Bit fields for TIMER STATUS */
#define _TIMER_STATUS_RESETVALUE                   0x00000000         /**< Default value for TIMER_STATUS */
#define _TIMER_STATUS_MASK                         0x07070707         /**< Mask for TIMER_STATUS */
#define TIMER_STATUS_RUNNING                       (1 << 0)           /**< Running */
#define _TIMER_STATUS_RUNNING_SHIFT                0                  /**< Shift value for TIMER_RUNNING */
#define _TIMER_STATUS_RUNNING_MASK                 0x1                /**< Bit mask for TIMER_RUNNING */
#define TIMER_STATUS_RUNNING_DEFAULT               (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_RUNNING_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_DIR                           (1 << 1)           /**< Direction */
#define _TIMER_STATUS_DIR_SHIFT                    1                  /**< Shift value for TIMER_DIR */
#define _TIMER_STATUS_DIR_MASK                     0x2                /**< Bit mask for TIMER_DIR */
#define TIMER_STATUS_DIR_DEFAULT                   (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_DIR_UP                        (0x00000000 << 1)  /**< Shifted mode UP for TIMER_STATUS */
#define TIMER_STATUS_DIR_DOWN                      (0x00000001 << 1)  /**< Shifted mode DOWN for TIMER_STATUS */
#define _TIMER_STATUS_DIR_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_DIR_UP                       0x00000000         /**< Mode UP for TIMER_STATUS */
#define _TIMER_STATUS_DIR_DOWN                     0x00000001         /**< Mode DOWN for TIMER_STATUS */
#define TIMER_STATUS_TOPBV                         (1 << 2)           /**< TOPB Valid */
#define _TIMER_STATUS_TOPBV_SHIFT                  2                  /**< Shift value for TIMER_TOPBV */
#define _TIMER_STATUS_TOPBV_MASK                   0x4                /**< Bit mask for TIMER_TOPBV */
#define TIMER_STATUS_TOPBV_DEFAULT                 (0x00000000 << 2)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_TOPBV_DEFAULT                0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV0                        (1 << 8)           /**< CC0 CCVB Valid */
#define _TIMER_STATUS_CCVBV0_SHIFT                 8                  /**< Shift value for TIMER_CCVBV0 */
#define _TIMER_STATUS_CCVBV0_MASK                  0x100              /**< Bit mask for TIMER_CCVBV0 */
#define TIMER_STATUS_CCVBV0_DEFAULT                (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV0_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV1                        (1 << 9)           /**< CC1 CCVB Valid */
#define _TIMER_STATUS_CCVBV1_SHIFT                 9                  /**< Shift value for TIMER_CCVBV1 */
#define _TIMER_STATUS_CCVBV1_MASK                  0x200              /**< Bit mask for TIMER_CCVBV1 */
#define TIMER_STATUS_CCVBV1_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV1_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV2                        (1 << 10)          /**< CC2 CCVB Valid */
#define _TIMER_STATUS_CCVBV2_SHIFT                 10                 /**< Shift value for TIMER_CCVBV2 */
#define _TIMER_STATUS_CCVBV2_MASK                  0x400              /**< Bit mask for TIMER_CCVBV2 */
#define TIMER_STATUS_CCVBV2_DEFAULT                (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV2_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV0                          (1 << 16)          /**< CC0 Input Capture Valid */
#define _TIMER_STATUS_ICV0_SHIFT                   16                 /**< Shift value for TIMER_ICV0 */
#define _TIMER_STATUS_ICV0_MASK                    0x10000            /**< Bit mask for TIMER_ICV0 */
#define TIMER_STATUS_ICV0_DEFAULT                  (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV0_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV1                          (1 << 17)          /**< CC1 Input Capture Valid */
#define _TIMER_STATUS_ICV1_SHIFT                   17                 /**< Shift value for TIMER_ICV1 */
#define _TIMER_STATUS_ICV1_MASK                    0x20000            /**< Bit mask for TIMER_ICV1 */
#define TIMER_STATUS_ICV1_DEFAULT                  (0x00000000 << 17) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV1_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV2                          (1 << 18)          /**< CC2 Input Capture Valid */
#define _TIMER_STATUS_ICV2_SHIFT                   18                 /**< Shift value for TIMER_ICV2 */
#define _TIMER_STATUS_ICV2_MASK                    0x40000            /**< Bit mask for TIMER_ICV2 */
#define TIMER_STATUS_ICV2_DEFAULT                  (0x00000000 << 18) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV2_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0                        (1 << 24)          /**< CC0 Polarity */
#define _TIMER_STATUS_CCPOL0_SHIFT                 24                 /**< Shift value for TIMER_CCPOL0 */
#define _TIMER_STATUS_CCPOL0_MASK                  0x1000000          /**< Bit mask for TIMER_CCPOL0 */
#define TIMER_STATUS_CCPOL0_DEFAULT                (0x00000000 << 24) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0_LOWRISE                (0x00000000 << 24) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0_HIGHFALL               (0x00000001 << 24) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_LOWRISE               0x00000000         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_HIGHFALL              0x00000001         /**< Mode HIGHFALL for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1                        (1 << 25)          /**< CC1 Polarity */
#define _TIMER_STATUS_CCPOL1_SHIFT                 25                 /**< Shift value for TIMER_CCPOL1 */
#define _TIMER_STATUS_CCPOL1_MASK                  0x2000000          /**< Bit mask for TIMER_CCPOL1 */
#define TIMER_STATUS_CCPOL1_DEFAULT                (0x00000000 << 25) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1_LOWRISE                (0x00000000 << 25) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1_HIGHFALL               (0x00000001 << 25) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_LOWRISE               0x00000000         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_HIGHFALL              0x00000001         /**< Mode HIGHFALL for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2                        (1 << 26)          /**< CC2 Polarity */
#define _TIMER_STATUS_CCPOL2_SHIFT                 26                 /**< Shift value for TIMER_CCPOL2 */
#define _TIMER_STATUS_CCPOL2_MASK                  0x4000000          /**< Bit mask for TIMER_CCPOL2 */
#define TIMER_STATUS_CCPOL2_DEFAULT                (0x00000000 << 26) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2_LOWRISE                (0x00000000 << 26) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2_HIGHFALL               (0x00000001 << 26) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_LOWRISE               0x00000000         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_HIGHFALL              0x00000001         /**< Mode HIGHFALL for TIMER_STATUS */

/** Bit fields for TIMER IEN */
#define _TIMER_IEN_RESETVALUE                      0x00000000         /**< Default value for TIMER_IEN */
#define _TIMER_IEN_MASK                            0x00000773         /**< Mask for TIMER_IEN */
#define TIMER_IEN_OF                               (1 << 0)           /**< Overflow Interrupt Enable */
#define _TIMER_IEN_OF_SHIFT                        0                  /**< Shift value for TIMER_OF */
#define _TIMER_IEN_OF_MASK                         0x1                /**< Bit mask for TIMER_OF */
#define TIMER_IEN_OF_DEFAULT                       (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_OF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_UF                               (1 << 1)           /**< Underflow Interrupt Enable */
#define _TIMER_IEN_UF_SHIFT                        1                  /**< Shift value for TIMER_UF */
#define _TIMER_IEN_UF_MASK                         0x2                /**< Bit mask for TIMER_UF */
#define TIMER_IEN_UF_DEFAULT                       (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_UF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC0                              (1 << 4)           /**< CC Channel 0 Interrupt Enable */
#define _TIMER_IEN_CC0_SHIFT                       4                  /**< Shift value for TIMER_CC0 */
#define _TIMER_IEN_CC0_MASK                        0x10               /**< Bit mask for TIMER_CC0 */
#define TIMER_IEN_CC0_DEFAULT                      (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC0_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC1                              (1 << 5)           /**< CC Channel 1 Interrupt Enable */
#define _TIMER_IEN_CC1_SHIFT                       5                  /**< Shift value for TIMER_CC1 */
#define _TIMER_IEN_CC1_MASK                        0x20               /**< Bit mask for TIMER_CC1 */
#define TIMER_IEN_CC1_DEFAULT                      (0x00000000 << 5)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC1_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC2                              (1 << 6)           /**< CC Channel 2 Interrupt Enable */
#define _TIMER_IEN_CC2_SHIFT                       6                  /**< Shift value for TIMER_CC2 */
#define _TIMER_IEN_CC2_MASK                        0x40               /**< Bit mask for TIMER_CC2 */
#define TIMER_IEN_CC2_DEFAULT                      (0x00000000 << 6)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC2_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF0                           (1 << 8)           /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF0_SHIFT                    8                  /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IEN_ICBOF0_MASK                     0x100              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IEN_ICBOF0_DEFAULT                   (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF0_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF1                           (1 << 9)           /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF1_SHIFT                    9                  /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IEN_ICBOF1_MASK                     0x200              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IEN_ICBOF1_DEFAULT                   (0x00000000 << 9)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF1_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF2                           (1 << 10)          /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF2_SHIFT                    10                 /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IEN_ICBOF2_MASK                     0x400              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IEN_ICBOF2_DEFAULT                   (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF2_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IEN */

/** Bit fields for TIMER IF */
#define _TIMER_IF_RESETVALUE                       0x00000000         /**< Default value for TIMER_IF */
#define _TIMER_IF_MASK                             0x00000773         /**< Mask for TIMER_IF */
#define TIMER_IF_OF                                (1 << 0)           /**< Overflow Interrupt Flag */
#define _TIMER_IF_OF_SHIFT                         0                  /**< Shift value for TIMER_OF */
#define _TIMER_IF_OF_MASK                          0x1                /**< Bit mask for TIMER_OF */
#define TIMER_IF_OF_DEFAULT                        (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_OF_DEFAULT                       0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_UF                                (1 << 1)           /**< Underflow Interrupt Flag */
#define _TIMER_IF_UF_SHIFT                         1                  /**< Shift value for TIMER_UF */
#define _TIMER_IF_UF_MASK                          0x2                /**< Bit mask for TIMER_UF */
#define TIMER_IF_UF_DEFAULT                        (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_UF_DEFAULT                       0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC0                               (1 << 4)           /**< CC Channel 0 Interrupt Flag */
#define _TIMER_IF_CC0_SHIFT                        4                  /**< Shift value for TIMER_CC0 */
#define _TIMER_IF_CC0_MASK                         0x10               /**< Bit mask for TIMER_CC0 */
#define TIMER_IF_CC0_DEFAULT                       (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC0_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC1                               (1 << 5)           /**< CC Channel 1 Interrupt Flag */
#define _TIMER_IF_CC1_SHIFT                        5                  /**< Shift value for TIMER_CC1 */
#define _TIMER_IF_CC1_MASK                         0x20               /**< Bit mask for TIMER_CC1 */
#define TIMER_IF_CC1_DEFAULT                       (0x00000000 << 5)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC1_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC2                               (1 << 6)           /**< CC Channel 2 Interrupt Flag */
#define _TIMER_IF_CC2_SHIFT                        6                  /**< Shift value for TIMER_CC2 */
#define _TIMER_IF_CC2_MASK                         0x40               /**< Bit mask for TIMER_CC2 */
#define TIMER_IF_CC2_DEFAULT                       (0x00000000 << 6)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC2_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF0                            (1 << 8)           /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF0_SHIFT                     8                  /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IF_ICBOF0_MASK                      0x100              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IF_ICBOF0_DEFAULT                    (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF0_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF1                            (1 << 9)           /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF1_SHIFT                     9                  /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IF_ICBOF1_MASK                      0x200              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IF_ICBOF1_DEFAULT                    (0x00000000 << 9)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF1_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF2                            (1 << 10)          /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF2_SHIFT                     10                 /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IF_ICBOF2_MASK                      0x400              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IF_ICBOF2_DEFAULT                    (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF2_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_IF */

/** Bit fields for TIMER IFS */
#define _TIMER_IFS_RESETVALUE                      0x00000000         /**< Default value for TIMER_IFS */
#define _TIMER_IFS_MASK                            0x00000773         /**< Mask for TIMER_IFS */
#define TIMER_IFS_OF                               (1 << 0)           /**< Overflow Interrupt Flag Set */
#define _TIMER_IFS_OF_SHIFT                        0                  /**< Shift value for TIMER_OF */
#define _TIMER_IFS_OF_MASK                         0x1                /**< Bit mask for TIMER_OF */
#define TIMER_IFS_OF_DEFAULT                       (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_OF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_UF                               (1 << 1)           /**< Underflow Interrupt Flag Set */
#define _TIMER_IFS_UF_SHIFT                        1                  /**< Shift value for TIMER_UF */
#define _TIMER_IFS_UF_MASK                         0x2                /**< Bit mask for TIMER_UF */
#define TIMER_IFS_UF_DEFAULT                       (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_UF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC0                              (1 << 4)           /**< CC Channel 0 Interrupt Flag Set */
#define _TIMER_IFS_CC0_SHIFT                       4                  /**< Shift value for TIMER_CC0 */
#define _TIMER_IFS_CC0_MASK                        0x10               /**< Bit mask for TIMER_CC0 */
#define TIMER_IFS_CC0_DEFAULT                      (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC0_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC1                              (1 << 5)           /**< CC Channel 1 Interrupt Flag Set */
#define _TIMER_IFS_CC1_SHIFT                       5                  /**< Shift value for TIMER_CC1 */
#define _TIMER_IFS_CC1_MASK                        0x20               /**< Bit mask for TIMER_CC1 */
#define TIMER_IFS_CC1_DEFAULT                      (0x00000000 << 5)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC1_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC2                              (1 << 6)           /**< CC Channel 2 Interrupt Flag Set */
#define _TIMER_IFS_CC2_SHIFT                       6                  /**< Shift value for TIMER_CC2 */
#define _TIMER_IFS_CC2_MASK                        0x40               /**< Bit mask for TIMER_CC2 */
#define TIMER_IFS_CC2_DEFAULT                      (0x00000000 << 6)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC2_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF0                           (1 << 8)           /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF0_SHIFT                    8                  /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IFS_ICBOF0_MASK                     0x100              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IFS_ICBOF0_DEFAULT                   (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF0_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF1                           (1 << 9)           /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF1_SHIFT                    9                  /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IFS_ICBOF1_MASK                     0x200              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IFS_ICBOF1_DEFAULT                   (0x00000000 << 9)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF1_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF2                           (1 << 10)          /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF2_SHIFT                    10                 /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IFS_ICBOF2_MASK                     0x400              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IFS_ICBOF2_DEFAULT                   (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF2_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFS */

/** Bit fields for TIMER IFC */
#define _TIMER_IFC_RESETVALUE                      0x00000000         /**< Default value for TIMER_IFC */
#define _TIMER_IFC_MASK                            0x00000773         /**< Mask for TIMER_IFC */
#define TIMER_IFC_OF                               (1 << 0)           /**< Overflow Interrupt Flag Clear */
#define _TIMER_IFC_OF_SHIFT                        0                  /**< Shift value for TIMER_OF */
#define _TIMER_IFC_OF_MASK                         0x1                /**< Bit mask for TIMER_OF */
#define TIMER_IFC_OF_DEFAULT                       (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_OF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_UF                               (1 << 1)           /**< Underflow Interrupt Flag Clear */
#define _TIMER_IFC_UF_SHIFT                        1                  /**< Shift value for TIMER_UF */
#define _TIMER_IFC_UF_MASK                         0x2                /**< Bit mask for TIMER_UF */
#define TIMER_IFC_UF_DEFAULT                       (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_UF_DEFAULT                      0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC0                              (1 << 4)           /**< CC Channel 0 Interrupt Flag Clear */
#define _TIMER_IFC_CC0_SHIFT                       4                  /**< Shift value for TIMER_CC0 */
#define _TIMER_IFC_CC0_MASK                        0x10               /**< Bit mask for TIMER_CC0 */
#define TIMER_IFC_CC0_DEFAULT                      (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC0_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC1                              (1 << 5)           /**< CC Channel 1 Interrupt Flag Clear */
#define _TIMER_IFC_CC1_SHIFT                       5                  /**< Shift value for TIMER_CC1 */
#define _TIMER_IFC_CC1_MASK                        0x20               /**< Bit mask for TIMER_CC1 */
#define TIMER_IFC_CC1_DEFAULT                      (0x00000000 << 5)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC1_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC2                              (1 << 6)           /**< CC Channel 2 Interrupt Flag Clear */
#define _TIMER_IFC_CC2_SHIFT                       6                  /**< Shift value for TIMER_CC2 */
#define _TIMER_IFC_CC2_MASK                        0x40               /**< Bit mask for TIMER_CC2 */
#define TIMER_IFC_CC2_DEFAULT                      (0x00000000 << 6)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC2_DEFAULT                     0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF0                           (1 << 8)           /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF0_SHIFT                    8                  /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IFC_ICBOF0_MASK                     0x100              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IFC_ICBOF0_DEFAULT                   (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF0_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF1                           (1 << 9)           /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF1_SHIFT                    9                  /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IFC_ICBOF1_MASK                     0x200              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IFC_ICBOF1_DEFAULT                   (0x00000000 << 9)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF1_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF2                           (1 << 10)          /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF2_SHIFT                    10                 /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IFC_ICBOF2_MASK                     0x400              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IFC_ICBOF2_DEFAULT                   (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF2_DEFAULT                  0x00000000         /**< Mode DEFAULT for TIMER_IFC */

/** Bit fields for TIMER TOP */
#define _TIMER_TOP_RESETVALUE                      0x0000FFFF        /**< Default value for TIMER_TOP */
#define _TIMER_TOP_MASK                            0x0000FFFF        /**< Mask for TIMER_TOP */
#define _TIMER_TOP_TOP_SHIFT                       0                 /**< Shift value for TIMER_TOP */
#define _TIMER_TOP_TOP_MASK                        0xFFFF            /**< Bit mask for TIMER_TOP */
#define TIMER_TOP_TOP_DEFAULT                      (0x0000FFFF << 0) /**< Shifted mode DEFAULT for TIMER_TOP */
#define _TIMER_TOP_TOP_DEFAULT                     0x0000FFFF        /**< Mode DEFAULT for TIMER_TOP */

/** Bit fields for TIMER TOPB */
#define _TIMER_TOPB_RESETVALUE                     0x00000000        /**< Default value for TIMER_TOPB */
#define _TIMER_TOPB_MASK                           0x0000FFFF        /**< Mask for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_SHIFT                     0                 /**< Shift value for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_MASK                      0xFFFF            /**< Bit mask for TIMER_TOPB */
#define TIMER_TOPB_TOPB_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_DEFAULT                   0x00000000        /**< Mode DEFAULT for TIMER_TOPB */

/** Bit fields for TIMER CNT */
#define _TIMER_CNT_RESETVALUE                      0x00000000        /**< Default value for TIMER_CNT */
#define _TIMER_CNT_MASK                            0x0000FFFF        /**< Mask for TIMER_CNT */
#define _TIMER_CNT_CNT_SHIFT                       0                 /**< Shift value for TIMER_CNT */
#define _TIMER_CNT_CNT_MASK                        0xFFFF            /**< Bit mask for TIMER_CNT */
#define TIMER_CNT_CNT_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_CNT */
#define _TIMER_CNT_CNT_DEFAULT                     0x00000000        /**< Mode DEFAULT for TIMER_CNT */

/** Bit fields for TIMER ROUTE */
#define _TIMER_ROUTE_RESETVALUE                    0x00000000         /**< Default value for TIMER_ROUTE */
#define _TIMER_ROUTE_MASK                          0x00030707         /**< Mask for TIMER_ROUTE */
#define _TIMER_ROUTE_CCPEN_SHIFT                   0                  /**< Shift value for TIMER_CCPEN */
#define _TIMER_ROUTE_CCPEN_MASK                    0x7                /**< Bit mask for TIMER_CCPEN */
#define TIMER_ROUTE_CCPEN_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CCPEN_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CDTIPEN_SHIFT                 8                  /**< Shift value for TIMER_CDTIPEN */
#define _TIMER_ROUTE_CDTIPEN_MASK                  0x700              /**< Bit mask for TIMER_CDTIPEN */
#define TIMER_ROUTE_CDTIPEN_DEFAULT                (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CDTIPEN_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_SHIFT                16                 /**< Shift value for TIMER_LOCATION */
#define _TIMER_ROUTE_LOCATION_MASK                 0x30000            /**< Bit mask for TIMER_LOCATION */
#define TIMER_ROUTE_LOCATION_DEFAULT               (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC0                  (0x00000000 << 16) /**< Shifted mode LOC0 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC1                  (0x00000001 << 16) /**< Shifted mode LOC1 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC2                  (0x00000002 << 16) /**< Shifted mode LOC2 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC3                  (0x00000003 << 16) /**< Shifted mode LOC3 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC0                 0x00000000         /**< Mode LOC0 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC1                 0x00000001         /**< Mode LOC1 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC2                 0x00000002         /**< Mode LOC2 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC3                 0x00000003         /**< Mode LOC3 for TIMER_ROUTE */

/** Bit fields for TIMER CC_CTRL */
#define _TIMER_CC_CTRL_RESETVALUE                  0x00000000         /**< Default value for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MASK                        0x0F373F17         /**< Mask for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_SHIFT                  0                  /**< Shift value for TIMER_MODE */
#define _TIMER_CC_CTRL_MODE_MASK                   0x3                /**< Bit mask for TIMER_MODE */
#define TIMER_CC_CTRL_MODE_DEFAULT                 (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_OFF                     (0x00000000 << 0)  /**< Shifted mode OFF for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_INPUTCAPTURE            (0x00000001 << 0)  /**< Shifted mode INPUTCAPTURE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_OUTPUTCOMPARE           (0x00000002 << 0)  /**< Shifted mode OUTPUTCOMPARE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_PWM                     (0x00000003 << 0)  /**< Shifted mode PWM for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_DEFAULT                0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_OFF                    0x00000000         /**< Mode OFF for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_INPUTCAPTURE           0x00000001         /**< Mode INPUTCAPTURE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_OUTPUTCOMPARE          0x00000002         /**< Mode OUTPUTCOMPARE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_PWM                    0x00000003         /**< Mode PWM for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_OUTINV                       (1 << 2)           /**< Output Invert */
#define _TIMER_CC_CTRL_OUTINV_SHIFT                2                  /**< Shift value for TIMER_OUTINV */
#define _TIMER_CC_CTRL_OUTINV_MASK                 0x4                /**< Bit mask for TIMER_OUTINV */
#define TIMER_CC_CTRL_OUTINV_DEFAULT               (0x00000000 << 2)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_OUTINV_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COIST                        (1 << 4)           /**< Compare Output Initial State */
#define _TIMER_CC_CTRL_COIST_SHIFT                 4                  /**< Shift value for TIMER_COIST */
#define _TIMER_CC_CTRL_COIST_MASK                  0x10               /**< Bit mask for TIMER_COIST */
#define TIMER_CC_CTRL_COIST_DEFAULT                (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COIST_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_SHIFT                  8                  /**< Shift value for TIMER_CMOA */
#define _TIMER_CC_CTRL_CMOA_MASK                   0x300              /**< Bit mask for TIMER_CMOA */
#define TIMER_CC_CTRL_CMOA_DEFAULT                 (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_NONE                    (0x00000000 << 8)  /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_TOGGLE                  (0x00000001 << 8)  /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_CLEAR                   (0x00000002 << 8)  /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_SET                     (0x00000003 << 8)  /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_DEFAULT                0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_NONE                   0x00000000         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_TOGGLE                 0x00000001         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_CLEAR                  0x00000002         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_SET                    0x00000003         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_SHIFT                 10                 /**< Shift value for TIMER_COFOA */
#define _TIMER_CC_CTRL_COFOA_MASK                  0xC00              /**< Bit mask for TIMER_COFOA */
#define TIMER_CC_CTRL_COFOA_DEFAULT                (0x00000000 << 10) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_NONE                   (0x00000000 << 10) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_TOGGLE                 (0x00000001 << 10) /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_CLEAR                  (0x00000002 << 10) /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_SET                    (0x00000003 << 10) /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_NONE                  0x00000000         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_TOGGLE                0x00000001         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_CLEAR                 0x00000002         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_SET                   0x00000003         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_SHIFT                 12                 /**< Shift value for TIMER_CUFOA */
#define _TIMER_CC_CTRL_CUFOA_MASK                  0x3000             /**< Bit mask for TIMER_CUFOA */
#define TIMER_CC_CTRL_CUFOA_DEFAULT                (0x00000000 << 12) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_NONE                   (0x00000000 << 12) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_TOGGLE                 (0x00000001 << 12) /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_CLEAR                  (0x00000002 << 12) /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_SET                    (0x00000003 << 12) /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_NONE                  0x00000000         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_TOGGLE                0x00000001         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_CLEAR                 0x00000002         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_SET                   0x00000003         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_SHIFT                16                 /**< Shift value for TIMER_PRSSEL */
#define _TIMER_CC_CTRL_PRSSEL_MASK                 0x70000            /**< Bit mask for TIMER_PRSSEL */
#define TIMER_CC_CTRL_PRSSEL_DEFAULT               (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH0                (0x00000000 << 16) /**< Shifted mode PRSCH0 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH1                (0x00000001 << 16) /**< Shifted mode PRSCH1 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH2                (0x00000002 << 16) /**< Shifted mode PRSCH2 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH3                (0x00000003 << 16) /**< Shifted mode PRSCH3 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH4                (0x00000004 << 16) /**< Shifted mode PRSCH4 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH5                (0x00000005 << 16) /**< Shifted mode PRSCH5 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH6                (0x00000006 << 16) /**< Shifted mode PRSCH6 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH7                (0x00000007 << 16) /**< Shifted mode PRSCH7 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH0               0x00000000         /**< Mode PRSCH0 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH1               0x00000001         /**< Mode PRSCH1 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH2               0x00000002         /**< Mode PRSCH2 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH3               0x00000003         /**< Mode PRSCH3 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH4               0x00000004         /**< Mode PRSCH4 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH5               0x00000005         /**< Mode PRSCH5 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH6               0x00000006         /**< Mode PRSCH6 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH7               0x00000007         /**< Mode PRSCH7 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL                        (1 << 20)          /**< Input Selection */
#define _TIMER_CC_CTRL_INSEL_SHIFT                 20                 /**< Shift value for TIMER_INSEL */
#define _TIMER_CC_CTRL_INSEL_MASK                  0x100000           /**< Bit mask for TIMER_INSEL */
#define TIMER_CC_CTRL_INSEL_DEFAULT                (0x00000000 << 20) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL_PIN                    (0x00000000 << 20) /**< Shifted mode PIN for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL_PRS                    (0x00000001 << 20) /**< Shifted mode PRS for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_PIN                   0x00000000         /**< Mode PIN for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_PRS                   0x00000001         /**< Mode PRS for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT                         (1 << 21)          /**< Digital Filter */
#define _TIMER_CC_CTRL_FILT_SHIFT                  21                 /**< Shift value for TIMER_FILT */
#define _TIMER_CC_CTRL_FILT_MASK                   0x200000           /**< Bit mask for TIMER_FILT */
#define TIMER_CC_CTRL_FILT_DEFAULT                 (0x00000000 << 21) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT_DISABLE                 (0x00000000 << 21) /**< Shifted mode DISABLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT_ENABLE                  (0x00000001 << 21) /**< Shifted mode ENABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_DEFAULT                0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_DISABLE                0x00000000         /**< Mode DISABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_ENABLE                 0x00000001         /**< Mode ENABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_SHIFT                24                 /**< Shift value for TIMER_ICEDGE */
#define _TIMER_CC_CTRL_ICEDGE_MASK                 0x3000000          /**< Bit mask for TIMER_ICEDGE */
#define TIMER_CC_CTRL_ICEDGE_DEFAULT               (0x00000000 << 24) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_RISING                (0x00000000 << 24) /**< Shifted mode RISING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_FALLING               (0x00000001 << 24) /**< Shifted mode FALLING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_BOTH                  (0x00000002 << 24) /**< Shifted mode BOTH for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_NONE                  (0x00000003 << 24) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_RISING               0x00000000         /**< Mode RISING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_FALLING              0x00000001         /**< Mode FALLING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_BOTH                 0x00000002         /**< Mode BOTH for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_NONE                 0x00000003         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_SHIFT              26                 /**< Shift value for TIMER_ICEVCTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_MASK               0xC000000          /**< Bit mask for TIMER_ICEVCTRL */
#define TIMER_CC_CTRL_ICEVCTRL_DEFAULT             (0x00000000 << 26) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_EVERYEDGE           (0x00000000 << 26) /**< Shifted mode EVERYEDGE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE     (0x00000001 << 26) /**< Shifted mode EVERYSECONDEDGE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_RISING              (0x00000002 << 26) /**< Shifted mode RISING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_FALLING             (0x00000003 << 26) /**< Shifted mode FALLING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_DEFAULT            0x00000000         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_EVERYEDGE          0x00000000         /**< Mode EVERYEDGE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE    0x00000001         /**< Mode EVERYSECONDEDGE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_RISING             0x00000002         /**< Mode RISING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_FALLING            0x00000003         /**< Mode FALLING for TIMER_CC_CTRL */

/** Bit fields for TIMER CC_CCV */
#define _TIMER_CC_CCV_RESETVALUE                   0x00000000        /**< Default value for TIMER_CC_CCV */
#define _TIMER_CC_CCV_MASK                         0x0000FFFF        /**< Mask for TIMER_CC_CCV */
#define _TIMER_CC_CCV_CCV_SHIFT                    0                 /**< Shift value for TIMER_CCV */
#define _TIMER_CC_CCV_CCV_MASK                     0xFFFF            /**< Bit mask for TIMER_CCV */
#define TIMER_CC_CCV_CCV_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCV */
#define _TIMER_CC_CCV_CCV_DEFAULT                  0x00000000        /**< Mode DEFAULT for TIMER_CC_CCV */

/** Bit fields for TIMER CC_CCVP */
#define _TIMER_CC_CCVP_RESETVALUE                  0x00000000        /**< Default value for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_MASK                        0x0000FFFF        /**< Mask for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_CCVP_SHIFT                  0                 /**< Shift value for TIMER_CCVP */
#define _TIMER_CC_CCVP_CCVP_MASK                   0xFFFF            /**< Bit mask for TIMER_CCVP */
#define TIMER_CC_CCVP_CCVP_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_CCVP_DEFAULT                0x00000000        /**< Mode DEFAULT for TIMER_CC_CCVP */

/** Bit fields for TIMER CC_CCVB */
#define _TIMER_CC_CCVB_RESETVALUE                  0x00000000        /**< Default value for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_MASK                        0x0000FFFF        /**< Mask for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_CCVB_SHIFT                  0                 /**< Shift value for TIMER_CCVB */
#define _TIMER_CC_CCVB_CCVB_MASK                   0xFFFF            /**< Bit mask for TIMER_CCVB */
#define TIMER_CC_CCVB_CCVB_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_CCVB_DEFAULT                0x00000000        /**< Mode DEFAULT for TIMER_CC_CCVB */

/** Bit fields for TIMER DTCTRL */
#define _TIMER_DTCTRL_RESETVALUE                   0x00000000         /**< Default value for TIMER_DTCTRL */
#define _TIMER_DTCTRL_MASK                         0x0100007F         /**< Mask for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTEN                          (1 << 0)           /**< DTI Enable */
#define _TIMER_DTCTRL_DTEN_SHIFT                   0                  /**< Shift value for TIMER_DTEN */
#define _TIMER_DTCTRL_DTEN_MASK                    0x1                /**< Bit mask for TIMER_DTEN */
#define TIMER_DTCTRL_DTEN_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTEN_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS                         (1 << 1)           /**< DTI Automatic Start-up Functionality */
#define _TIMER_DTCTRL_DTDAS_SHIFT                  1                  /**< Shift value for TIMER_DTDAS */
#define _TIMER_DTCTRL_DTDAS_MASK                   0x2                /**< Bit mask for TIMER_DTDAS */
#define TIMER_DTCTRL_DTDAS_DEFAULT                 (0x00000000 << 1)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS_NORESTART               (0x00000000 << 1)  /**< Shifted mode NORESTART for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS_RESTART                 (0x00000001 << 1)  /**< Shifted mode RESTART for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_DEFAULT                0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_NORESTART              0x00000000         /**< Mode NORESTART for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_RESTART                0x00000001         /**< Mode RESTART for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTIPOL                        (1 << 2)           /**< DTI Inactive Polarity */
#define _TIMER_DTCTRL_DTIPOL_SHIFT                 2                  /**< Shift value for TIMER_DTIPOL */
#define _TIMER_DTCTRL_DTIPOL_MASK                  0x4                /**< Bit mask for TIMER_DTIPOL */
#define TIMER_DTCTRL_DTIPOL_DEFAULT                (0x00000000 << 2)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTIPOL_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTCINV                        (1 << 3)           /**< DTI Complementary Output Invert. */
#define _TIMER_DTCTRL_DTCINV_SHIFT                 3                  /**< Shift value for TIMER_DTCINV */
#define _TIMER_DTCTRL_DTCINV_MASK                  0x8                /**< Bit mask for TIMER_DTCINV */
#define TIMER_DTCTRL_DTCINV_DEFAULT                (0x00000000 << 3)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTCINV_DEFAULT               0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_SHIFT               4                  /**< Shift value for TIMER_DTPRSSEL */
#define _TIMER_DTCTRL_DTPRSSEL_MASK                0x70               /**< Bit mask for TIMER_DTPRSSEL */
#define TIMER_DTCTRL_DTPRSSEL_DEFAULT              (0x00000000 << 4)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH0               (0x00000000 << 4)  /**< Shifted mode PRSCH0 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH1               (0x00000001 << 4)  /**< Shifted mode PRSCH1 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH2               (0x00000002 << 4)  /**< Shifted mode PRSCH2 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH3               (0x00000003 << 4)  /**< Shifted mode PRSCH3 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH4               (0x00000004 << 4)  /**< Shifted mode PRSCH4 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH5               (0x00000005 << 4)  /**< Shifted mode PRSCH5 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH6               (0x00000006 << 4)  /**< Shifted mode PRSCH6 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH7               (0x00000007 << 4)  /**< Shifted mode PRSCH7 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_DEFAULT             0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH0              0x00000000         /**< Mode PRSCH0 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH1              0x00000001         /**< Mode PRSCH1 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH2              0x00000002         /**< Mode PRSCH2 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH3              0x00000003         /**< Mode PRSCH3 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH4              0x00000004         /**< Mode PRSCH4 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH5              0x00000005         /**< Mode PRSCH5 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH6              0x00000006         /**< Mode PRSCH6 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH7              0x00000007         /**< Mode PRSCH7 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSEN                       (1 << 24)          /**< DTI PRS Source Enable */
#define _TIMER_DTCTRL_DTPRSEN_SHIFT                24                 /**< Shift value for TIMER_DTPRSEN */
#define _TIMER_DTCTRL_DTPRSEN_MASK                 0x1000000          /**< Bit mask for TIMER_DTPRSEN */
#define TIMER_DTCTRL_DTPRSEN_DEFAULT               (0x00000000 << 24) /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSEN_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_DTCTRL */

/** Bit fields for TIMER DTTIME */
#define _TIMER_DTTIME_RESETVALUE                   0x00000000         /**< Default value for TIMER_DTTIME */
#define _TIMER_DTTIME_MASK                         0x003F3F0F         /**< Mask for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_SHIFT                0                  /**< Shift value for TIMER_DTPRESC */
#define _TIMER_DTTIME_DTPRESC_MASK                 0xF                /**< Bit mask for TIMER_DTPRESC */
#define TIMER_DTTIME_DTPRESC_DEFAULT               (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV1                  (0x00000000 << 0)  /**< Shifted mode DIV1 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV2                  (0x00000001 << 0)  /**< Shifted mode DIV2 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV4                  (0x00000002 << 0)  /**< Shifted mode DIV4 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV8                  (0x00000003 << 0)  /**< Shifted mode DIV8 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV16                 (0x00000004 << 0)  /**< Shifted mode DIV16 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV32                 (0x00000005 << 0)  /**< Shifted mode DIV32 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV64                 (0x00000006 << 0)  /**< Shifted mode DIV64 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV128                (0x00000007 << 0)  /**< Shifted mode DIV128 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV256                (0x00000008 << 0)  /**< Shifted mode DIV256 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV512                (0x00000009 << 0)  /**< Shifted mode DIV512 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV1024               (0x0000000A << 0)  /**< Shifted mode DIV1024 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV1                 0x00000000         /**< Mode DIV1 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV2                 0x00000001         /**< Mode DIV2 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV4                 0x00000002         /**< Mode DIV4 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV8                 0x00000003         /**< Mode DIV8 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV16                0x00000004         /**< Mode DIV16 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV32                0x00000005         /**< Mode DIV32 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV64                0x00000006         /**< Mode DIV64 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV128               0x00000007         /**< Mode DIV128 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV256               0x00000008         /**< Mode DIV256 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV512               0x00000009         /**< Mode DIV512 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV1024              0x0000000A         /**< Mode DIV1024 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTRISET_SHIFT                8                  /**< Shift value for TIMER_DTRISET */
#define _TIMER_DTTIME_DTRISET_MASK                 0x3F00             /**< Bit mask for TIMER_DTRISET */
#define TIMER_DTTIME_DTRISET_DEFAULT               (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTRISET_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTFALLT_SHIFT                16                 /**< Shift value for TIMER_DTFALLT */
#define _TIMER_DTTIME_DTFALLT_MASK                 0x3F0000           /**< Bit mask for TIMER_DTFALLT */
#define TIMER_DTTIME_DTFALLT_DEFAULT               (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTFALLT_DEFAULT              0x00000000         /**< Mode DEFAULT for TIMER_DTTIME */

/** Bit fields for TIMER DTFC */
#define _TIMER_DTFC_RESETVALUE                     0x00000000         /**< Default value for TIMER_DTFC */
#define _TIMER_DTFC_MASK                           0x0F030707         /**< Mask for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_SHIFT               0                  /**< Shift value for TIMER_DTPRSFSEL0 */
#define _TIMER_DTFC_DTPRSFSEL0_MASK                0x7                /**< Bit mask for TIMER_DTPRSFSEL0 */
#define TIMER_DTFC_DTPRSFSEL0_DEFAULT              (0x00000000 << 0)  /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH0               (0x00000000 << 0)  /**< Shifted mode PRSCH0 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH1               (0x00000001 << 0)  /**< Shifted mode PRSCH1 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH2               (0x00000002 << 0)  /**< Shifted mode PRSCH2 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH3               (0x00000003 << 0)  /**< Shifted mode PRSCH3 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH4               (0x00000004 << 0)  /**< Shifted mode PRSCH4 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH5               (0x00000005 << 0)  /**< Shifted mode PRSCH5 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH6               (0x00000006 << 0)  /**< Shifted mode PRSCH6 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL0_PRSCH7               (0x00000007 << 0)  /**< Shifted mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_DEFAULT             0x00000000         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH0              0x00000000         /**< Mode PRSCH0 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH1              0x00000001         /**< Mode PRSCH1 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH2              0x00000002         /**< Mode PRSCH2 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH3              0x00000003         /**< Mode PRSCH3 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH4              0x00000004         /**< Mode PRSCH4 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH5              0x00000005         /**< Mode PRSCH5 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH6              0x00000006         /**< Mode PRSCH6 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL0_PRSCH7              0x00000007         /**< Mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_SHIFT               8                  /**< Shift value for TIMER_DTPRSFSEL1 */
#define _TIMER_DTFC_DTPRSFSEL1_MASK                0x700              /**< Bit mask for TIMER_DTPRSFSEL1 */
#define TIMER_DTFC_DTPRSFSEL1_DEFAULT              (0x00000000 << 8)  /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH0               (0x00000000 << 8)  /**< Shifted mode PRSCH0 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH1               (0x00000001 << 8)  /**< Shifted mode PRSCH1 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH2               (0x00000002 << 8)  /**< Shifted mode PRSCH2 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH3               (0x00000003 << 8)  /**< Shifted mode PRSCH3 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH4               (0x00000004 << 8)  /**< Shifted mode PRSCH4 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH5               (0x00000005 << 8)  /**< Shifted mode PRSCH5 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH6               (0x00000006 << 8)  /**< Shifted mode PRSCH6 for TIMER_DTFC */
#define TIMER_DTFC_DTPRSFSEL1_PRSCH7               (0x00000007 << 8)  /**< Shifted mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_DEFAULT             0x00000000         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH0              0x00000000         /**< Mode PRSCH0 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH1              0x00000001         /**< Mode PRSCH1 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH2              0x00000002         /**< Mode PRSCH2 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH3              0x00000003         /**< Mode PRSCH3 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH4              0x00000004         /**< Mode PRSCH4 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH5              0x00000005         /**< Mode PRSCH5 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH6              0x00000006         /**< Mode PRSCH6 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRSFSEL1_PRSCH7              0x00000007         /**< Mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_SHIFT                     16                 /**< Shift value for TIMER_DTFA */
#define _TIMER_DTFC_DTFA_MASK                      0x30000            /**< Bit mask for TIMER_DTFA */
#define TIMER_DTFC_DTFA_DEFAULT                    (0x00000000 << 16) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTFA_NONE                       (0x00000000 << 16) /**< Shifted mode NONE for TIMER_DTFC */
#define TIMER_DTFC_DTFA_INACTIVE                   (0x00000001 << 16) /**< Shifted mode INACTIVE for TIMER_DTFC */
#define TIMER_DTFC_DTFA_CLEAR                      (0x00000002 << 16) /**< Shifted mode CLEAR for TIMER_DTFC */
#define TIMER_DTFC_DTFA_TRISTATE                   (0x00000003 << 16) /**< Shifted mode TRISTATE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_DEFAULT                   0x00000000         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_NONE                      0x00000000         /**< Mode NONE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_INACTIVE                  0x00000001         /**< Mode INACTIVE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_CLEAR                     0x00000002         /**< Mode CLEAR for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_TRISTATE                  0x00000003         /**< Mode TRISTATE for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_SHIFT                   24                 /**< Shift value for TIMER_DTFSEN */
#define _TIMER_DTFC_DTFSEN_MASK                    0xF000000          /**< Bit mask for TIMER_DTFSEN */
#define TIMER_DTFC_DTFSEN_DEFAULT                  (0x00000000 << 24) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTFSEN_PRS0                     (0x00000001 << 24) /**< Shifted mode PRS0 for TIMER_DTFC */
#define TIMER_DTFC_DTFSEN_PRS1                     (0x00000002 << 24) /**< Shifted mode PRS1 for TIMER_DTFC */
#define TIMER_DTFC_DTFSEN_DEBUG                    (0x00000004 << 24) /**< Shifted mode DEBUG for TIMER_DTFC */
#define TIMER_DTFC_DTFSEN_LOCKUP                   (0x00000008 << 24) /**< Shifted mode LOCKUP for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_DEFAULT                 0x00000000         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_PRS0                    0x00000001         /**< Mode PRS0 for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_PRS1                    0x00000002         /**< Mode PRS1 for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_DEBUG                   0x00000004         /**< Mode DEBUG for TIMER_DTFC */
#define _TIMER_DTFC_DTFSEN_LOCKUP                  0x00000008         /**< Mode LOCKUP for TIMER_DTFC */

/** Bit fields for TIMER DTOGEN */
#define _TIMER_DTOGEN_RESETVALUE                   0x00000000        /**< Default value for TIMER_DTOGEN */
#define _TIMER_DTOGEN_MASK                         0x0000003F        /**< Mask for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_SHIFT                 0                 /**< Shift value for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_MASK                  0x3F              /**< Bit mask for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CC0                    (0x00000001 << 0) /**< Shifted mode CC0 for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CC1                    (0x00000002 << 0) /**< Shifted mode CC1 for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CC2                    (0x00000004 << 0) /**< Shifted mode CC2 for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CDTI0                  (0x00000008 << 0) /**< Shifted mode CDTI0 for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CDTI1                  (0x00000010 << 0) /**< Shifted mode CDTI1 for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGEN_CDTI2                  (0x00000020 << 0) /**< Shifted mode CDTI2 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_DEFAULT               0x00000000        /**< Mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CC0                   0x00000001        /**< Mode CC0 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CC1                   0x00000002        /**< Mode CC1 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CC2                   0x00000004        /**< Mode CC2 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CDTI0                 0x00000008        /**< Mode CDTI0 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CDTI1                 0x00000010        /**< Mode CDTI1 for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGEN_CDTI2                 0x00000020        /**< Mode CDTI2 for TIMER_DTOGEN */

/** Bit fields for TIMER DTFAULT */
#define _TIMER_DTFAULT_RESETVALUE                  0x00000000        /**< Default value for TIMER_DTFAULT */
#define _TIMER_DTFAULT_MASK                        0x0000000F        /**< Mask for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_SHIFT                  0                 /**< Shift value for TIMER_DTFS */
#define _TIMER_DTFAULT_DTFS_MASK                   0xF               /**< Bit mask for TIMER_DTFS */
#define TIMER_DTFAULT_DTFS_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTFS_PRS0                    (0x00000001 << 0) /**< Shifted mode PRS0 for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTFS_PRS1                    (0x00000002 << 0) /**< Shifted mode PRS1 for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTFS_DEBUG                   (0x00000004 << 0) /**< Shifted mode DEBUG for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTFS_LOCKUP                  (0x00000008 << 0) /**< Shifted mode LOCKUP for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_DEFAULT                0x00000000        /**< Mode DEFAULT for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_PRS0                   0x00000001        /**< Mode PRS0 for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_PRS1                   0x00000002        /**< Mode PRS1 for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_DEBUG                  0x00000004        /**< Mode DEBUG for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTFS_LOCKUP                 0x00000008        /**< Mode LOCKUP for TIMER_DTFAULT */

/** Bit fields for TIMER DTFAULTC */
#define _TIMER_DTFAULTC_RESETVALUE                 0x00000000        /**< Default value for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_MASK                       0x0000000F        /**< Mask for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_SHIFT                0                 /**< Shift value for TIMER_DTFSC */
#define _TIMER_DTFAULTC_DTFSC_MASK                 0xF               /**< Bit mask for TIMER_DTFSC */
#define TIMER_DTFAULTC_DTFSC_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTFSC_PRS0                  (0x00000001 << 0) /**< Shifted mode PRS0 for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTFSC_PRS1                  (0x00000002 << 0) /**< Shifted mode PRS1 for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTFSC_DEBUG                 (0x00000004 << 0) /**< Shifted mode DEBUG for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTFSC_LOCKUP                (0x00000008 << 0) /**< Shifted mode LOCKUP for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_DEFAULT              0x00000000        /**< Mode DEFAULT for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_PRS0                 0x00000001        /**< Mode PRS0 for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_PRS1                 0x00000002        /**< Mode PRS1 for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_DEBUG                0x00000004        /**< Mode DEBUG for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTFSC_LOCKUP               0x00000008        /**< Mode LOCKUP for TIMER_DTFAULTC */

/** Bit fields for TIMER DTLOCK */
#define _TIMER_DTLOCK_RESETVALUE                   0x00000000        /**< Default value for TIMER_DTLOCK */
#define _TIMER_DTLOCK_MASK                         0x0000FFFF        /**< Mask for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_SHIFT                0                 /**< Shift value for TIMER_LOCKKEY */
#define _TIMER_DTLOCK_LOCKKEY_MASK                 0xFFFF            /**< Bit mask for TIMER_LOCKKEY */
#define TIMER_DTLOCK_LOCKKEY_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_LOCK                  (0x00000000 << 0) /**< Shifted mode LOCK for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_UNLOCKED              (0x00000000 << 0) /**< Shifted mode UNLOCKED for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_LOCKED                (0x00000001 << 0) /**< Shifted mode LOCKED for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_UNLOCK                (0x0000CE80 << 0) /**< Shifted mode UNLOCK for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_DEFAULT              0x00000000        /**< Mode DEFAULT for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_LOCK                 0x00000000        /**< Mode LOCK for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_UNLOCKED             0x00000000        /**< Mode UNLOCKED for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_LOCKED               0x00000001        /**< Mode LOCKED for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_UNLOCK               0x0000CE80        /**< Mode UNLOCK for TIMER_DTLOCK */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_USART
 * @{
 */

/** Bit fields for USART CTRL */
#define _USART_CTRL_RESETVALUE                0x00000000         /**< Default value for USART_CTRL */
#define _USART_CTRL_MASK                      0x1DFFFF7F         /**< Mask for USART_CTRL */
#define USART_CTRL_SYNC                       (1 << 0)           /**< USART Synchronous Mode */
#define _USART_CTRL_SYNC_SHIFT                0                  /**< Shift value for USART_SYNC */
#define _USART_CTRL_SYNC_MASK                 0x1                /**< Bit mask for USART_SYNC */
#define USART_CTRL_SYNC_DEFAULT               (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SYNC_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_LOOPBK                     (1 << 1)           /**< Loopback Enable */
#define _USART_CTRL_LOOPBK_SHIFT              1                  /**< Shift value for USART_LOOPBK */
#define _USART_CTRL_LOOPBK_MASK               0x2                /**< Bit mask for USART_LOOPBK */
#define USART_CTRL_LOOPBK_DEFAULT             (0x00000000 << 1)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_LOOPBK_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CCEN                       (1 << 2)           /**< Collision Check Enable */
#define _USART_CTRL_CCEN_SHIFT                2                  /**< Shift value for USART_CCEN */
#define _USART_CTRL_CCEN_MASK                 0x4                /**< Bit mask for USART_CCEN */
#define USART_CTRL_CCEN_DEFAULT               (0x00000000 << 2)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CCEN_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_MPM                        (1 << 3)           /**< Multi-Processor Mode */
#define _USART_CTRL_MPM_SHIFT                 3                  /**< Shift value for USART_MPM */
#define _USART_CTRL_MPM_MASK                  0x8                /**< Bit mask for USART_MPM */
#define USART_CTRL_MPM_DEFAULT                (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MPM_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_MPAB                       (1 << 4)           /**< Multi-Processor Address-Bit */
#define _USART_CTRL_MPAB_SHIFT                4                  /**< Shift value for USART_MPAB */
#define _USART_CTRL_MPAB_MASK                 0x10               /**< Bit mask for USART_MPAB */
#define USART_CTRL_MPAB_DEFAULT               (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MPAB_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_OVS_SHIFT                 5                  /**< Shift value for USART_OVS */
#define _USART_CTRL_OVS_MASK                  0x60               /**< Bit mask for USART_OVS */
#define USART_CTRL_OVS_DEFAULT                (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_OVS_X16                    (0x00000000 << 5)  /**< Shifted mode X16 for USART_CTRL */
#define USART_CTRL_OVS_X8                     (0x00000001 << 5)  /**< Shifted mode X8 for USART_CTRL */
#define USART_CTRL_OVS_X6                     (0x00000002 << 5)  /**< Shifted mode X6 for USART_CTRL */
#define USART_CTRL_OVS_X4                     (0x00000003 << 5)  /**< Shifted mode X4 for USART_CTRL */
#define _USART_CTRL_OVS_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_OVS_X16                   0x00000000         /**< Mode X16 for USART_CTRL */
#define _USART_CTRL_OVS_X8                    0x00000001         /**< Mode X8 for USART_CTRL */
#define _USART_CTRL_OVS_X6                    0x00000002         /**< Mode X6 for USART_CTRL */
#define _USART_CTRL_OVS_X4                    0x00000003         /**< Mode X4 for USART_CTRL */
#define USART_CTRL_CLKPOL                     (1 << 8)           /**< Clock Polarity */
#define _USART_CTRL_CLKPOL_SHIFT              8                  /**< Shift value for USART_CLKPOL */
#define _USART_CTRL_CLKPOL_MASK               0x100              /**< Bit mask for USART_CLKPOL */
#define USART_CTRL_CLKPOL_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CLKPOL_IDLELOW             (0x00000000 << 8)  /**< Shifted mode IDLELOW for USART_CTRL */
#define USART_CTRL_CLKPOL_IDLEHIGH            (0x00000001 << 8)  /**< Shifted mode IDLEHIGH for USART_CTRL */
#define _USART_CTRL_CLKPOL_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CLKPOL_IDLELOW            0x00000000         /**< Mode IDLELOW for USART_CTRL */
#define _USART_CTRL_CLKPOL_IDLEHIGH           0x00000001         /**< Mode IDLEHIGH for USART_CTRL */
#define USART_CTRL_CLKPHA                     (1 << 9)           /**< Clock Edge For Setup/Sample */
#define _USART_CTRL_CLKPHA_SHIFT              9                  /**< Shift value for USART_CLKPHA */
#define _USART_CTRL_CLKPHA_MASK               0x200              /**< Bit mask for USART_CLKPHA */
#define USART_CTRL_CLKPHA_DEFAULT             (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CLKPHA_SAMPLELEADING       (0x00000000 << 9)  /**< Shifted mode SAMPLELEADING for USART_CTRL */
#define USART_CTRL_CLKPHA_SAMPLETRAILING      (0x00000001 << 9)  /**< Shifted mode SAMPLETRAILING for USART_CTRL */
#define _USART_CTRL_CLKPHA_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CLKPHA_SAMPLELEADING      0x00000000         /**< Mode SAMPLELEADING for USART_CTRL */
#define _USART_CTRL_CLKPHA_SAMPLETRAILING     0x00000001         /**< Mode SAMPLETRAILING for USART_CTRL */
#define USART_CTRL_MSBF                       (1 << 10)          /**< Most Significant Bit First */
#define _USART_CTRL_MSBF_SHIFT                10                 /**< Shift value for USART_MSBF */
#define _USART_CTRL_MSBF_MASK                 0x400              /**< Bit mask for USART_MSBF */
#define USART_CTRL_MSBF_DEFAULT               (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MSBF_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSMA                       (1 << 11)          /**< Action On Slave-Select In Master Mode */
#define _USART_CTRL_CSMA_SHIFT                11                 /**< Shift value for USART_CSMA */
#define _USART_CTRL_CSMA_MASK                 0x800              /**< Bit mask for USART_CSMA */
#define USART_CTRL_CSMA_DEFAULT               (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSMA_NOACTION              (0x00000000 << 11) /**< Shifted mode NOACTION for USART_CTRL */
#define USART_CTRL_CSMA_GOTOSLAVEMODE         (0x00000001 << 11) /**< Shifted mode GOTOSLAVEMODE for USART_CTRL */
#define _USART_CTRL_CSMA_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CSMA_NOACTION             0x00000000         /**< Mode NOACTION for USART_CTRL */
#define _USART_CTRL_CSMA_GOTOSLAVEMODE        0x00000001         /**< Mode GOTOSLAVEMODE for USART_CTRL */
#define USART_CTRL_TXBIL                      (1 << 12)          /**< TX Buffer Interrupt Level */
#define _USART_CTRL_TXBIL_SHIFT               12                 /**< Shift value for USART_TXBIL */
#define _USART_CTRL_TXBIL_MASK                0x1000             /**< Bit mask for USART_TXBIL */
#define USART_CTRL_TXBIL_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXBIL_EMPTY                (0x00000000 << 12) /**< Shifted mode EMPTY for USART_CTRL */
#define USART_CTRL_TXBIL_HALFFULL             (0x00000001 << 12) /**< Shifted mode HALFFULL for USART_CTRL */
#define _USART_CTRL_TXBIL_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXBIL_EMPTY               0x00000000         /**< Mode EMPTY for USART_CTRL */
#define _USART_CTRL_TXBIL_HALFFULL            0x00000001         /**< Mode HALFFULL for USART_CTRL */
#define USART_CTRL_RXINV                      (1 << 13)          /**< Receiver Input Invert */
#define _USART_CTRL_RXINV_SHIFT               13                 /**< Shift value for USART_RXINV */
#define _USART_CTRL_RXINV_MASK                0x2000             /**< Bit mask for USART_RXINV */
#define USART_CTRL_RXINV_DEFAULT              (0x00000000 << 13) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_RXINV_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXINV                      (1 << 14)          /**< Transmitter output Invert */
#define _USART_CTRL_TXINV_SHIFT               14                 /**< Shift value for USART_TXINV */
#define _USART_CTRL_TXINV_MASK                0x4000             /**< Bit mask for USART_TXINV */
#define USART_CTRL_TXINV_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXINV_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSINV                      (1 << 15)          /**< Chip Select Invert */
#define _USART_CTRL_CSINV_SHIFT               15                 /**< Shift value for USART_CSINV */
#define _USART_CTRL_CSINV_MASK                0x8000             /**< Bit mask for USART_CSINV */
#define USART_CTRL_CSINV_DEFAULT              (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CSINV_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_AUTOCS                     (1 << 16)          /**< Automatic Chip Select */
#define _USART_CTRL_AUTOCS_SHIFT              16                 /**< Shift value for USART_AUTOCS */
#define _USART_CTRL_AUTOCS_MASK               0x10000            /**< Bit mask for USART_AUTOCS */
#define USART_CTRL_AUTOCS_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_AUTOCS_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_AUTOTRI                    (1 << 17)          /**< Automatic TX Tristate */
#define _USART_CTRL_AUTOTRI_SHIFT             17                 /**< Shift value for USART_AUTOTRI */
#define _USART_CTRL_AUTOTRI_MASK              0x20000            /**< Bit mask for USART_AUTOTRI */
#define USART_CTRL_AUTOTRI_DEFAULT            (0x00000000 << 17) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_AUTOTRI_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SCMODE                     (1 << 18)          /**< SmartCard Mode */
#define _USART_CTRL_SCMODE_SHIFT              18                 /**< Shift value for USART_SCMODE */
#define _USART_CTRL_SCMODE_MASK               0x40000            /**< Bit mask for USART_SCMODE */
#define USART_CTRL_SCMODE_DEFAULT             (0x00000000 << 18) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SCMODE_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SCRETRANS                  (1 << 19)          /**< SmartCard Retransmit */
#define _USART_CTRL_SCRETRANS_SHIFT           19                 /**< Shift value for USART_SCRETRANS */
#define _USART_CTRL_SCRETRANS_MASK            0x80000            /**< Bit mask for USART_SCRETRANS */
#define USART_CTRL_SCRETRANS_DEFAULT          (0x00000000 << 19) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SCRETRANS_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SKIPPERRF                  (1 << 20)          /**< Skip Parity Error Frames */
#define _USART_CTRL_SKIPPERRF_SHIFT           20                 /**< Shift value for USART_SKIPPERRF */
#define _USART_CTRL_SKIPPERRF_MASK            0x100000           /**< Bit mask for USART_SKIPPERRF */
#define USART_CTRL_SKIPPERRF_DEFAULT          (0x00000000 << 20) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SKIPPERRF_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_BIT8DV                     (1 << 21)          /**< Bit 8 Default Value */
#define _USART_CTRL_BIT8DV_SHIFT              21                 /**< Shift value for USART_BIT8DV */
#define _USART_CTRL_BIT8DV_MASK               0x200000           /**< Bit mask for USART_BIT8DV */
#define USART_CTRL_BIT8DV_DEFAULT             (0x00000000 << 21) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_BIT8DV_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSDMA                    (1 << 22)          /**< Halt DMA On Error */
#define _USART_CTRL_ERRSDMA_SHIFT             22                 /**< Shift value for USART_ERRSDMA */
#define _USART_CTRL_ERRSDMA_MASK              0x400000           /**< Bit mask for USART_ERRSDMA */
#define USART_CTRL_ERRSDMA_DEFAULT            (0x00000000 << 22) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSDMA_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSRX                     (1 << 23)          /**< Disable RX On Error */
#define _USART_CTRL_ERRSRX_SHIFT              23                 /**< Shift value for USART_ERRSRX */
#define _USART_CTRL_ERRSRX_MASK               0x800000           /**< Bit mask for USART_ERRSRX */
#define USART_CTRL_ERRSRX_DEFAULT             (0x00000000 << 23) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSRX_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSTX                     (1 << 24)          /**< Disable TX On Error */
#define _USART_CTRL_ERRSTX_SHIFT              24                 /**< Shift value for USART_ERRSTX */
#define _USART_CTRL_ERRSTX_MASK               0x1000000          /**< Bit mask for USART_ERRSTX */
#define USART_CTRL_ERRSTX_DEFAULT             (0x00000000 << 24) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSTX_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXDELAY_SHIFT             26                 /**< Shift value for USART_TXDELAY */
#define _USART_CTRL_TXDELAY_MASK              0xC000000          /**< Bit mask for USART_TXDELAY */
#define USART_CTRL_TXDELAY_DEFAULT            (0x00000000 << 26) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXDELAY_NONE               (0x00000000 << 26) /**< Shifted mode NONE for USART_CTRL */
#define USART_CTRL_TXDELAY_SINGLE             (0x00000001 << 26) /**< Shifted mode SINGLE for USART_CTRL */
#define USART_CTRL_TXDELAY_DOUBLE             (0x00000002 << 26) /**< Shifted mode DOUBLE for USART_CTRL */
#define USART_CTRL_TXDELAY_TRIPLE             (0x00000003 << 26) /**< Shifted mode TRIPLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXDELAY_NONE              0x00000000         /**< Mode NONE for USART_CTRL */
#define _USART_CTRL_TXDELAY_SINGLE            0x00000001         /**< Mode SINGLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_DOUBLE            0x00000002         /**< Mode DOUBLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_TRIPLE            0x00000003         /**< Mode TRIPLE for USART_CTRL */
#define USART_CTRL_BYTESWAP                   (1 << 28)          /**< Byteswap In Double Accesses */
#define _USART_CTRL_BYTESWAP_SHIFT            28                 /**< Shift value for USART_BYTESWAP */
#define _USART_CTRL_BYTESWAP_MASK             0x10000000         /**< Bit mask for USART_BYTESWAP */
#define USART_CTRL_BYTESWAP_DEFAULT           (0x00000000 << 28) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_BYTESWAP_DEFAULT          0x00000000         /**< Mode DEFAULT for USART_CTRL */

/** Bit fields for USART FRAME */
#define _USART_FRAME_RESETVALUE               0x00001005         /**< Default value for USART_FRAME */
#define _USART_FRAME_MASK                     0x0000330F         /**< Mask for USART_FRAME */
#define _USART_FRAME_DATABITS_SHIFT           0                  /**< Shift value for USART_DATABITS */
#define _USART_FRAME_DATABITS_MASK            0xF                /**< Bit mask for USART_DATABITS */
#define USART_FRAME_DATABITS_FOUR             (0x00000001 << 0)  /**< Shifted mode FOUR for USART_FRAME */
#define USART_FRAME_DATABITS_FIVE             (0x00000002 << 0)  /**< Shifted mode FIVE for USART_FRAME */
#define USART_FRAME_DATABITS_SIX              (0x00000003 << 0)  /**< Shifted mode SIX for USART_FRAME */
#define USART_FRAME_DATABITS_SEVEN            (0x00000004 << 0)  /**< Shifted mode SEVEN for USART_FRAME */
#define USART_FRAME_DATABITS_DEFAULT          (0x00000005 << 0)  /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_DATABITS_EIGHT            (0x00000005 << 0)  /**< Shifted mode EIGHT for USART_FRAME */
#define USART_FRAME_DATABITS_NINE             (0x00000006 << 0)  /**< Shifted mode NINE for USART_FRAME */
#define USART_FRAME_DATABITS_TEN              (0x00000007 << 0)  /**< Shifted mode TEN for USART_FRAME */
#define USART_FRAME_DATABITS_ELEVEN           (0x00000008 << 0)  /**< Shifted mode ELEVEN for USART_FRAME */
#define USART_FRAME_DATABITS_TWELVE           (0x00000009 << 0)  /**< Shifted mode TWELVE for USART_FRAME */
#define USART_FRAME_DATABITS_THIRTEEN         (0x0000000A << 0)  /**< Shifted mode THIRTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_FOURTEEN         (0x0000000B << 0)  /**< Shifted mode FOURTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_FIFTEEN          (0x0000000C << 0)  /**< Shifted mode FIFTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_SIXTEEN          (0x0000000D << 0)  /**< Shifted mode SIXTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FOUR            0x00000001         /**< Mode FOUR for USART_FRAME */
#define _USART_FRAME_DATABITS_FIVE            0x00000002         /**< Mode FIVE for USART_FRAME */
#define _USART_FRAME_DATABITS_SIX             0x00000003         /**< Mode SIX for USART_FRAME */
#define _USART_FRAME_DATABITS_SEVEN           0x00000004         /**< Mode SEVEN for USART_FRAME */
#define _USART_FRAME_DATABITS_DEFAULT         0x00000005         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_DATABITS_EIGHT           0x00000005         /**< Mode EIGHT for USART_FRAME */
#define _USART_FRAME_DATABITS_NINE            0x00000006         /**< Mode NINE for USART_FRAME */
#define _USART_FRAME_DATABITS_TEN             0x00000007         /**< Mode TEN for USART_FRAME */
#define _USART_FRAME_DATABITS_ELEVEN          0x00000008         /**< Mode ELEVEN for USART_FRAME */
#define _USART_FRAME_DATABITS_TWELVE          0x00000009         /**< Mode TWELVE for USART_FRAME */
#define _USART_FRAME_DATABITS_THIRTEEN        0x0000000A         /**< Mode THIRTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FOURTEEN        0x0000000B         /**< Mode FOURTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FIFTEEN         0x0000000C         /**< Mode FIFTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_SIXTEEN         0x0000000D         /**< Mode SIXTEEN for USART_FRAME */
#define _USART_FRAME_PARITY_SHIFT             8                  /**< Shift value for USART_PARITY */
#define _USART_FRAME_PARITY_MASK              0x300              /**< Bit mask for USART_PARITY */
#define USART_FRAME_PARITY_DEFAULT            (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_PARITY_NONE               (0x00000000 << 8)  /**< Shifted mode NONE for USART_FRAME */
#define USART_FRAME_PARITY_EVEN               (0x00000002 << 8)  /**< Shifted mode EVEN for USART_FRAME */
#define USART_FRAME_PARITY_ODD                (0x00000003 << 8)  /**< Shifted mode ODD for USART_FRAME */
#define _USART_FRAME_PARITY_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_PARITY_NONE              0x00000000         /**< Mode NONE for USART_FRAME */
#define _USART_FRAME_PARITY_EVEN              0x00000002         /**< Mode EVEN for USART_FRAME */
#define _USART_FRAME_PARITY_ODD               0x00000003         /**< Mode ODD for USART_FRAME */
#define _USART_FRAME_STOPBITS_SHIFT           12                 /**< Shift value for USART_STOPBITS */
#define _USART_FRAME_STOPBITS_MASK            0x3000             /**< Bit mask for USART_STOPBITS */
#define USART_FRAME_STOPBITS_HALF             (0x00000000 << 12) /**< Shifted mode HALF for USART_FRAME */
#define USART_FRAME_STOPBITS_DEFAULT          (0x00000001 << 12) /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_STOPBITS_ONE              (0x00000001 << 12) /**< Shifted mode ONE for USART_FRAME */
#define USART_FRAME_STOPBITS_ONEANDAHALF      (0x00000002 << 12) /**< Shifted mode ONEANDAHALF for USART_FRAME */
#define USART_FRAME_STOPBITS_TWO              (0x00000003 << 12) /**< Shifted mode TWO for USART_FRAME */
#define _USART_FRAME_STOPBITS_HALF            0x00000000         /**< Mode HALF for USART_FRAME */
#define _USART_FRAME_STOPBITS_DEFAULT         0x00000001         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_STOPBITS_ONE             0x00000001         /**< Mode ONE for USART_FRAME */
#define _USART_FRAME_STOPBITS_ONEANDAHALF     0x00000002         /**< Mode ONEANDAHALF for USART_FRAME */
#define _USART_FRAME_STOPBITS_TWO             0x00000003         /**< Mode TWO for USART_FRAME */

/** Bit fields for USART TRIGCTRL */
#define _USART_TRIGCTRL_RESETVALUE            0x00000000        /**< Default value for USART_TRIGCTRL */
#define _USART_TRIGCTRL_MASK                  0x00000037        /**< Mask for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_SHIFT            0                 /**< Shift value for USART_TSEL */
#define _USART_TRIGCTRL_TSEL_MASK             0x7               /**< Bit mask for USART_TSEL */
#define USART_TRIGCTRL_TSEL_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH0            (0x00000000 << 0) /**< Shifted mode PRSCH0 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH1            (0x00000001 << 0) /**< Shifted mode PRSCH1 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH2            (0x00000002 << 0) /**< Shifted mode PRSCH2 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH3            (0x00000003 << 0) /**< Shifted mode PRSCH3 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH4            (0x00000004 << 0) /**< Shifted mode PRSCH4 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH5            (0x00000005 << 0) /**< Shifted mode PRSCH5 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH6            (0x00000006 << 0) /**< Shifted mode PRSCH6 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH7            (0x00000007 << 0) /**< Shifted mode PRSCH7 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH0           0x00000000        /**< Mode PRSCH0 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH1           0x00000001        /**< Mode PRSCH1 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH2           0x00000002        /**< Mode PRSCH2 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH3           0x00000003        /**< Mode PRSCH3 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH4           0x00000004        /**< Mode PRSCH4 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH5           0x00000005        /**< Mode PRSCH5 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH6           0x00000006        /**< Mode PRSCH6 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH7           0x00000007        /**< Mode PRSCH7 for USART_TRIGCTRL */
#define USART_TRIGCTRL_RXTEN                  (1 << 4)          /**< Receive Trigger Enable */
#define _USART_TRIGCTRL_RXTEN_SHIFT           4                 /**< Shift value for USART_RXTEN */
#define _USART_TRIGCTRL_RXTEN_MASK            0x10              /**< Bit mask for USART_RXTEN */
#define USART_TRIGCTRL_RXTEN_DEFAULT          (0x00000000 << 4) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_RXTEN_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_TRIGCTRL */
#define USART_TRIGCTRL_TXTEN                  (1 << 5)          /**< Transmit Trigger Enable */
#define _USART_TRIGCTRL_TXTEN_SHIFT           5                 /**< Shift value for USART_TXTEN */
#define _USART_TRIGCTRL_TXTEN_MASK            0x20              /**< Bit mask for USART_TXTEN */
#define USART_TRIGCTRL_TXTEN_DEFAULT          (0x00000000 << 5) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TXTEN_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_TRIGCTRL */

/** Bit fields for USART CMD */
#define _USART_CMD_RESETVALUE                 0x00000000         /**< Default value for USART_CMD */
#define _USART_CMD_MASK                       0x00000FFF         /**< Mask for USART_CMD */
#define USART_CMD_RXEN                        (1 << 0)           /**< Receiver Enable */
#define _USART_CMD_RXEN_SHIFT                 0                  /**< Shift value for USART_RXEN */
#define _USART_CMD_RXEN_MASK                  0x1                /**< Bit mask for USART_RXEN */
#define USART_CMD_RXEN_DEFAULT                (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXEN_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXDIS                       (1 << 1)           /**< Receiver Disable */
#define _USART_CMD_RXDIS_SHIFT                1                  /**< Shift value for USART_RXDIS */
#define _USART_CMD_RXDIS_MASK                 0x2                /**< Bit mask for USART_RXDIS */
#define USART_CMD_RXDIS_DEFAULT               (0x00000000 << 1)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXDIS_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXEN                        (1 << 2)           /**< Transmitter Enable */
#define _USART_CMD_TXEN_SHIFT                 2                  /**< Shift value for USART_TXEN */
#define _USART_CMD_TXEN_MASK                  0x4                /**< Bit mask for USART_TXEN */
#define USART_CMD_TXEN_DEFAULT                (0x00000000 << 2)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXEN_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXDIS                       (1 << 3)           /**< Transmitter Disable */
#define _USART_CMD_TXDIS_SHIFT                3                  /**< Shift value for USART_TXDIS */
#define _USART_CMD_TXDIS_MASK                 0x8                /**< Bit mask for USART_TXDIS */
#define USART_CMD_TXDIS_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXDIS_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_MASTEREN                    (1 << 4)           /**< Master Enable */
#define _USART_CMD_MASTEREN_SHIFT             4                  /**< Shift value for USART_MASTEREN */
#define _USART_CMD_MASTEREN_MASK              0x10               /**< Bit mask for USART_MASTEREN */
#define USART_CMD_MASTEREN_DEFAULT            (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_MASTEREN_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_MASTERDIS                   (1 << 5)           /**< Master Disable */
#define _USART_CMD_MASTERDIS_SHIFT            5                  /**< Shift value for USART_MASTERDIS */
#define _USART_CMD_MASTERDIS_MASK             0x20               /**< Bit mask for USART_MASTERDIS */
#define USART_CMD_MASTERDIS_DEFAULT           (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_MASTERDIS_DEFAULT          0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXBLOCKEN                   (1 << 6)           /**< Receiver Block Enable */
#define _USART_CMD_RXBLOCKEN_SHIFT            6                  /**< Shift value for USART_RXBLOCKEN */
#define _USART_CMD_RXBLOCKEN_MASK             0x40               /**< Bit mask for USART_RXBLOCKEN */
#define USART_CMD_RXBLOCKEN_DEFAULT           (0x00000000 << 6)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXBLOCKEN_DEFAULT          0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXBLOCKDIS                  (1 << 7)           /**< Receiver Block Disable */
#define _USART_CMD_RXBLOCKDIS_SHIFT           7                  /**< Shift value for USART_RXBLOCKDIS */
#define _USART_CMD_RXBLOCKDIS_MASK            0x80               /**< Bit mask for USART_RXBLOCKDIS */
#define USART_CMD_RXBLOCKDIS_DEFAULT          (0x00000000 << 7)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXBLOCKDIS_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXTRIEN                     (1 << 8)           /**< Transmitter Tristate Enable */
#define _USART_CMD_TXTRIEN_SHIFT              8                  /**< Shift value for USART_TXTRIEN */
#define _USART_CMD_TXTRIEN_MASK               0x100              /**< Bit mask for USART_TXTRIEN */
#define USART_CMD_TXTRIEN_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXTRIEN_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXTRIDIS                    (1 << 9)           /**< Transmitter Tristate Disable */
#define _USART_CMD_TXTRIDIS_SHIFT             9                  /**< Shift value for USART_TXTRIDIS */
#define _USART_CMD_TXTRIDIS_MASK              0x200              /**< Bit mask for USART_TXTRIDIS */
#define USART_CMD_TXTRIDIS_DEFAULT            (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXTRIDIS_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_CLEARTX                     (1 << 10)          /**< Clear TX */
#define _USART_CMD_CLEARTX_SHIFT              10                 /**< Shift value for USART_CLEARTX */
#define _USART_CMD_CLEARTX_MASK               0x400              /**< Bit mask for USART_CLEARTX */
#define USART_CMD_CLEARTX_DEFAULT             (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_CLEARTX_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_CLEARRX                     (1 << 11)          /**< Clear RX */
#define _USART_CMD_CLEARRX_SHIFT              11                 /**< Shift value for USART_CLEARRX */
#define _USART_CMD_CLEARRX_MASK               0x800              /**< Bit mask for USART_CLEARRX */
#define USART_CMD_CLEARRX_DEFAULT             (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_CLEARRX_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_CMD */

/** Bit fields for USART STATUS */
#define _USART_STATUS_RESETVALUE              0x00000040        /**< Default value for USART_STATUS */
#define _USART_STATUS_MASK                    0x000001FF        /**< Mask for USART_STATUS */
#define USART_STATUS_RXENS                    (1 << 0)          /**< Receiver Enable Status */
#define _USART_STATUS_RXENS_SHIFT             0                 /**< Shift value for USART_RXENS */
#define _USART_STATUS_RXENS_MASK              0x1               /**< Bit mask for USART_RXENS */
#define USART_STATUS_RXENS_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXENS_DEFAULT           0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXENS                    (1 << 1)          /**< Transmitter Enable Status */
#define _USART_STATUS_TXENS_SHIFT             1                 /**< Shift value for USART_TXENS */
#define _USART_STATUS_TXENS_MASK              0x2               /**< Bit mask for USART_TXENS */
#define USART_STATUS_TXENS_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXENS_DEFAULT           0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_MASTER                   (1 << 2)          /**< SPI Master Mode */
#define _USART_STATUS_MASTER_SHIFT            2                 /**< Shift value for USART_MASTER */
#define _USART_STATUS_MASTER_MASK             0x4               /**< Bit mask for USART_MASTER */
#define USART_STATUS_MASTER_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_MASTER_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXBLOCK                  (1 << 3)          /**< Block Incoming Data */
#define _USART_STATUS_RXBLOCK_SHIFT           3                 /**< Shift value for USART_RXBLOCK */
#define _USART_STATUS_RXBLOCK_MASK            0x8               /**< Bit mask for USART_RXBLOCK */
#define USART_STATUS_RXBLOCK_DEFAULT          (0x00000000 << 3) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXBLOCK_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXTRI                    (1 << 4)          /**< Transmitter Tristated */
#define _USART_STATUS_TXTRI_SHIFT             4                 /**< Shift value for USART_TXTRI */
#define _USART_STATUS_TXTRI_MASK              0x10              /**< Bit mask for USART_TXTRI */
#define USART_STATUS_TXTRI_DEFAULT            (0x00000000 << 4) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXTRI_DEFAULT           0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXC                      (1 << 5)          /**< TX Complete */
#define _USART_STATUS_TXC_SHIFT               5                 /**< Shift value for USART_TXC */
#define _USART_STATUS_TXC_MASK                0x20              /**< Bit mask for USART_TXC */
#define USART_STATUS_TXC_DEFAULT              (0x00000000 << 5) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXC_DEFAULT             0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXBL                     (1 << 6)          /**< TX Buffer Level */
#define _USART_STATUS_TXBL_SHIFT              6                 /**< Shift value for USART_TXBL */
#define _USART_STATUS_TXBL_MASK               0x40              /**< Bit mask for USART_TXBL */
#define USART_STATUS_TXBL_DEFAULT             (0x00000001 << 6) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXBL_DEFAULT            0x00000001        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXDATAV                  (1 << 7)          /**< RX Data Valid */
#define _USART_STATUS_RXDATAV_SHIFT           7                 /**< Shift value for USART_RXDATAV */
#define _USART_STATUS_RXDATAV_MASK            0x80              /**< Bit mask for USART_RXDATAV */
#define USART_STATUS_RXDATAV_DEFAULT          (0x00000000 << 7) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXDATAV_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXFULL                   (1 << 8)          /**< RX FIFO Full */
#define _USART_STATUS_RXFULL_SHIFT            8                 /**< Shift value for USART_RXFULL */
#define _USART_STATUS_RXFULL_MASK             0x100             /**< Bit mask for USART_RXFULL */
#define USART_STATUS_RXFULL_DEFAULT           (0x00000000 << 8) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXFULL_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_STATUS */

/** Bit fields for USART CLKDIV */
#define _USART_CLKDIV_RESETVALUE              0x00000000        /**< Default value for USART_CLKDIV */
#define _USART_CLKDIV_MASK                    0x001FFFC0        /**< Mask for USART_CLKDIV */
#define _USART_CLKDIV_DIV_SHIFT               6                 /**< Shift value for USART_DIV */
#define _USART_CLKDIV_DIV_MASK                0x1FFFC0          /**< Bit mask for USART_DIV */
#define USART_CLKDIV_DIV_DEFAULT              (0x00000000 << 6) /**< Shifted mode DEFAULT for USART_CLKDIV */
#define _USART_CLKDIV_DIV_DEFAULT             0x00000000        /**< Mode DEFAULT for USART_CLKDIV */

/** Bit fields for USART RXDATAX */
#define _USART_RXDATAX_RESETVALUE             0x00000000         /**< Default value for USART_RXDATAX */
#define _USART_RXDATAX_MASK                   0x0000C1FF         /**< Mask for USART_RXDATAX */
#define _USART_RXDATAX_RXDATA_SHIFT           0                  /**< Shift value for USART_RXDATA */
#define _USART_RXDATAX_RXDATA_MASK            0x1FF              /**< Bit mask for USART_RXDATA */
#define USART_RXDATAX_RXDATA_DEFAULT          (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_RXDATA_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_RXDATAX */
#define USART_RXDATAX_PERR                    (1 << 14)          /**< Data Parity Error */
#define _USART_RXDATAX_PERR_SHIFT             14                 /**< Shift value for USART_PERR */
#define _USART_RXDATAX_PERR_MASK              0x4000             /**< Bit mask for USART_PERR */
#define USART_RXDATAX_PERR_DEFAULT            (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_PERR_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_RXDATAX */
#define USART_RXDATAX_FERR                    (1 << 15)          /**< Data Framing Error */
#define _USART_RXDATAX_FERR_SHIFT             15                 /**< Shift value for USART_FERR */
#define _USART_RXDATAX_FERR_MASK              0x8000             /**< Bit mask for USART_FERR */
#define USART_RXDATAX_FERR_DEFAULT            (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_FERR_DEFAULT           0x00000000         /**< Mode DEFAULT for USART_RXDATAX */

/** Bit fields for USART RXDATA */
#define _USART_RXDATA_RESETVALUE              0x00000000        /**< Default value for USART_RXDATA */
#define _USART_RXDATA_MASK                    0x000000FF        /**< Mask for USART_RXDATA */
#define _USART_RXDATA_RXDATA_SHIFT            0                 /**< Shift value for USART_RXDATA */
#define _USART_RXDATA_RXDATA_MASK             0xFF              /**< Bit mask for USART_RXDATA */
#define USART_RXDATA_RXDATA_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_RXDATA */
#define _USART_RXDATA_RXDATA_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_RXDATA */

/** Bit fields for USART RXDOUBLEX */
#define _USART_RXDOUBLEX_RESETVALUE           0x00000000         /**< Default value for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_MASK                 0xC1FFC1FF         /**< Mask for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA0_SHIFT        0                  /**< Shift value for USART_RXDATA0 */
#define _USART_RXDOUBLEX_RXDATA0_MASK         0x1FF              /**< Bit mask for USART_RXDATA0 */
#define USART_RXDOUBLEX_RXDATA0_DEFAULT       (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_PERR0                 (1 << 14)          /**< Data Parity Error 0 */
#define _USART_RXDOUBLEX_PERR0_SHIFT          14                 /**< Shift value for USART_PERR0 */
#define _USART_RXDOUBLEX_PERR0_MASK           0x4000             /**< Bit mask for USART_PERR0 */
#define USART_RXDOUBLEX_PERR0_DEFAULT         (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_PERR0_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_FERR0                 (1 << 15)          /**< Data Framing Error 0 */
#define _USART_RXDOUBLEX_FERR0_SHIFT          15                 /**< Shift value for USART_FERR0 */
#define _USART_RXDOUBLEX_FERR0_MASK           0x8000             /**< Bit mask for USART_FERR0 */
#define USART_RXDOUBLEX_FERR0_DEFAULT         (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_FERR0_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA1_SHIFT        16                 /**< Shift value for USART_RXDATA1 */
#define _USART_RXDOUBLEX_RXDATA1_MASK         0x1FF0000          /**< Bit mask for USART_RXDATA1 */
#define USART_RXDOUBLEX_RXDATA1_DEFAULT       (0x00000000 << 16) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_PERR1                 (1 << 30)          /**< Data Parity Error 1 */
#define _USART_RXDOUBLEX_PERR1_SHIFT          30                 /**< Shift value for USART_PERR1 */
#define _USART_RXDOUBLEX_PERR1_MASK           0x40000000         /**< Bit mask for USART_PERR1 */
#define USART_RXDOUBLEX_PERR1_DEFAULT         (0x00000000 << 30) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_PERR1_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_FERR1                 (1 << 31)          /**< Data Framing Error 1 */
#define _USART_RXDOUBLEX_FERR1_SHIFT          31                 /**< Shift value for USART_FERR1 */
#define _USART_RXDOUBLEX_FERR1_MASK           0x80000000         /**< Bit mask for USART_FERR1 */
#define USART_RXDOUBLEX_FERR1_DEFAULT         (0x00000000 << 31) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_FERR1_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEX */

/** Bit fields for USART RXDOUBLE */
#define _USART_RXDOUBLE_RESETVALUE            0x00000000        /**< Default value for USART_RXDOUBLE */
#define _USART_RXDOUBLE_MASK                  0x0000FFFF        /**< Mask for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA0_SHIFT         0                 /**< Shift value for USART_RXDATA0 */
#define _USART_RXDOUBLE_RXDATA0_MASK          0xFF              /**< Bit mask for USART_RXDATA0 */
#define USART_RXDOUBLE_RXDATA0_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA0_DEFAULT       0x00000000        /**< Mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA1_SHIFT         8                 /**< Shift value for USART_RXDATA1 */
#define _USART_RXDOUBLE_RXDATA1_MASK          0xFF00            /**< Bit mask for USART_RXDATA1 */
#define USART_RXDOUBLE_RXDATA1_DEFAULT        (0x00000000 << 8) /**< Shifted mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA1_DEFAULT       0x00000000        /**< Mode DEFAULT for USART_RXDOUBLE */

/** Bit fields for USART RXDATAXP */
#define _USART_RXDATAXP_RESETVALUE            0x00000000         /**< Default value for USART_RXDATAXP */
#define _USART_RXDATAXP_MASK                  0x0000C1FF         /**< Mask for USART_RXDATAXP */
#define _USART_RXDATAXP_RXDATAP_SHIFT         0                  /**< Shift value for USART_RXDATAP */
#define _USART_RXDATAXP_RXDATAP_MASK          0x1FF              /**< Bit mask for USART_RXDATAP */
#define USART_RXDATAXP_RXDATAP_DEFAULT        (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_RXDATAP_DEFAULT       0x00000000         /**< Mode DEFAULT for USART_RXDATAXP */
#define USART_RXDATAXP_PERRP                  (1 << 14)          /**< Data Parity Error Peek */
#define _USART_RXDATAXP_PERRP_SHIFT           14                 /**< Shift value for USART_PERRP */
#define _USART_RXDATAXP_PERRP_MASK            0x4000             /**< Bit mask for USART_PERRP */
#define USART_RXDATAXP_PERRP_DEFAULT          (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_PERRP_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_RXDATAXP */
#define USART_RXDATAXP_FERRP                  (1 << 15)          /**< Data Framing Error Peek */
#define _USART_RXDATAXP_FERRP_SHIFT           15                 /**< Shift value for USART_FERRP */
#define _USART_RXDATAXP_FERRP_MASK            0x8000             /**< Bit mask for USART_FERRP */
#define USART_RXDATAXP_FERRP_DEFAULT          (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_FERRP_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_RXDATAXP */

/** Bit fields for USART RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RESETVALUE          0x00000000         /**< Default value for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_MASK                0xC1FFC1FF         /**< Mask for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP0_SHIFT      0                  /**< Shift value for USART_RXDATAP0 */
#define _USART_RXDOUBLEXP_RXDATAP0_MASK       0x1FF              /**< Bit mask for USART_RXDATAP0 */
#define USART_RXDOUBLEXP_RXDATAP0_DEFAULT     (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP0_DEFAULT    0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_PERRP0               (1 << 14)          /**< Data Parity Error 0 Peek */
#define _USART_RXDOUBLEXP_PERRP0_SHIFT        14                 /**< Shift value for USART_PERRP0 */
#define _USART_RXDOUBLEXP_PERRP0_MASK         0x4000             /**< Bit mask for USART_PERRP0 */
#define USART_RXDOUBLEXP_PERRP0_DEFAULT       (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_PERRP0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_FERRP0               (1 << 15)          /**< Data Framing Error 0 Peek */
#define _USART_RXDOUBLEXP_FERRP0_SHIFT        15                 /**< Shift value for USART_FERRP0 */
#define _USART_RXDOUBLEXP_FERRP0_MASK         0x8000             /**< Bit mask for USART_FERRP0 */
#define USART_RXDOUBLEXP_FERRP0_DEFAULT       (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_FERRP0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP1_SHIFT      16                 /**< Shift value for USART_RXDATAP1 */
#define _USART_RXDOUBLEXP_RXDATAP1_MASK       0x1FF0000          /**< Bit mask for USART_RXDATAP1 */
#define USART_RXDOUBLEXP_RXDATAP1_DEFAULT     (0x00000000 << 16) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP1_DEFAULT    0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_PERRP1               (1 << 30)          /**< Data Parity Error 1 Peek */
#define _USART_RXDOUBLEXP_PERRP1_SHIFT        30                 /**< Shift value for USART_PERRP1 */
#define _USART_RXDOUBLEXP_PERRP1_MASK         0x40000000         /**< Bit mask for USART_PERRP1 */
#define USART_RXDOUBLEXP_PERRP1_DEFAULT       (0x00000000 << 30) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_PERRP1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_FERRP1               (1 << 31)          /**< Data Framing Error 1 Peek */
#define _USART_RXDOUBLEXP_FERRP1_SHIFT        31                 /**< Shift value for USART_FERRP1 */
#define _USART_RXDOUBLEXP_FERRP1_MASK         0x80000000         /**< Bit mask for USART_FERRP1 */
#define USART_RXDOUBLEXP_FERRP1_DEFAULT       (0x00000000 << 31) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_FERRP1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_RXDOUBLEXP */

/** Bit fields for USART TXDATAX */
#define _USART_TXDATAX_RESETVALUE             0x00000000         /**< Default value for USART_TXDATAX */
#define _USART_TXDATAX_MASK                   0x0000F9FF         /**< Mask for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_SHIFT          0                  /**< Shift value for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_MASK           0x1FF              /**< Bit mask for USART_TXDATAX */
#define USART_TXDATAX_TXDATAX_DEFAULT         (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_UBRXAT                  (1 << 11)          /**< Unblock RX After Transmission */
#define _USART_TXDATAX_UBRXAT_SHIFT           11                 /**< Shift value for USART_UBRXAT */
#define _USART_TXDATAX_UBRXAT_MASK            0x800              /**< Bit mask for USART_UBRXAT */
#define USART_TXDATAX_UBRXAT_DEFAULT          (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_UBRXAT_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXTRIAT                 (1 << 12)          /**< Set TXTRI After Transmission */
#define _USART_TXDATAX_TXTRIAT_SHIFT          12                 /**< Shift value for USART_TXTRIAT */
#define _USART_TXDATAX_TXTRIAT_MASK           0x1000             /**< Bit mask for USART_TXTRIAT */
#define USART_TXDATAX_TXTRIAT_DEFAULT         (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXTRIAT_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXBREAK                 (1 << 13)          /**< Transmit Data As Break */
#define _USART_TXDATAX_TXBREAK_SHIFT          13                 /**< Shift value for USART_TXBREAK */
#define _USART_TXDATAX_TXBREAK_MASK           0x2000             /**< Bit mask for USART_TXBREAK */
#define USART_TXDATAX_TXBREAK_DEFAULT         (0x00000000 << 13) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXBREAK_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXDISAT                 (1 << 14)          /**< Clear TXEN After Transmission */
#define _USART_TXDATAX_TXDISAT_SHIFT          14                 /**< Shift value for USART_TXDISAT */
#define _USART_TXDATAX_TXDISAT_MASK           0x4000             /**< Bit mask for USART_TXDISAT */
#define USART_TXDATAX_TXDISAT_DEFAULT         (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXDISAT_DEFAULT        0x00000000         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_RXENAT                  (1 << 15)          /**< Enable RX After Transmission */
#define _USART_TXDATAX_RXENAT_SHIFT           15                 /**< Shift value for USART_RXENAT */
#define _USART_TXDATAX_RXENAT_MASK            0x8000             /**< Bit mask for USART_RXENAT */
#define USART_TXDATAX_RXENAT_DEFAULT          (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_RXENAT_DEFAULT         0x00000000         /**< Mode DEFAULT for USART_TXDATAX */

/** Bit fields for USART TXDATA */
#define _USART_TXDATA_RESETVALUE              0x00000000        /**< Default value for USART_TXDATA */
#define _USART_TXDATA_MASK                    0x000000FF        /**< Mask for USART_TXDATA */
#define _USART_TXDATA_TXDATA_SHIFT            0                 /**< Shift value for USART_TXDATA */
#define _USART_TXDATA_TXDATA_MASK             0xFF              /**< Bit mask for USART_TXDATA */
#define USART_TXDATA_TXDATA_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_TXDATA */
#define _USART_TXDATA_TXDATA_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_TXDATA */

/** Bit fields for USART TXDOUBLEX */
#define _USART_TXDOUBLEX_RESETVALUE           0x00000000         /**< Default value for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_MASK                 0xF9FFF9FF         /**< Mask for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA0_SHIFT        0                  /**< Shift value for USART_TXDATA0 */
#define _USART_TXDOUBLEX_TXDATA0_MASK         0x1FF              /**< Bit mask for USART_TXDATA0 */
#define USART_TXDOUBLEX_TXDATA0_DEFAULT       (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_UBRXAT0               (1 << 11)          /**< Unblock RX After Transmission */
#define _USART_TXDOUBLEX_UBRXAT0_SHIFT        11                 /**< Shift value for USART_UBRXAT0 */
#define _USART_TXDOUBLEX_UBRXAT0_MASK         0x800              /**< Bit mask for USART_UBRXAT0 */
#define USART_TXDOUBLEX_UBRXAT0_DEFAULT       (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_UBRXAT0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXTRIAT0              (1 << 12)          /**< Set TXTRI After Transmission */
#define _USART_TXDOUBLEX_TXTRIAT0_SHIFT       12                 /**< Shift value for USART_TXTRIAT0 */
#define _USART_TXDOUBLEX_TXTRIAT0_MASK        0x1000             /**< Bit mask for USART_TXTRIAT0 */
#define USART_TXDOUBLEX_TXTRIAT0_DEFAULT      (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXTRIAT0_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXBREAK0              (1 << 13)          /**< Transmit Data As Break */
#define _USART_TXDOUBLEX_TXBREAK0_SHIFT       13                 /**< Shift value for USART_TXBREAK0 */
#define _USART_TXDOUBLEX_TXBREAK0_MASK        0x2000             /**< Bit mask for USART_TXBREAK0 */
#define USART_TXDOUBLEX_TXBREAK0_DEFAULT      (0x00000000 << 13) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXBREAK0_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXDISAT0              (1 << 14)          /**< Clear TXEN After Transmission */
#define _USART_TXDOUBLEX_TXDISAT0_SHIFT       14                 /**< Shift value for USART_TXDISAT0 */
#define _USART_TXDOUBLEX_TXDISAT0_MASK        0x4000             /**< Bit mask for USART_TXDISAT0 */
#define USART_TXDOUBLEX_TXDISAT0_DEFAULT      (0x00000000 << 14) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDISAT0_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_RXENAT0               (1 << 15)          /**< Enable RX After Transmission */
#define _USART_TXDOUBLEX_RXENAT0_SHIFT        15                 /**< Shift value for USART_RXENAT0 */
#define _USART_TXDOUBLEX_RXENAT0_MASK         0x8000             /**< Bit mask for USART_RXENAT0 */
#define USART_TXDOUBLEX_RXENAT0_DEFAULT       (0x00000000 << 15) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_RXENAT0_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA1_SHIFT        16                 /**< Shift value for USART_TXDATA1 */
#define _USART_TXDOUBLEX_TXDATA1_MASK         0x1FF0000          /**< Bit mask for USART_TXDATA1 */
#define USART_TXDOUBLEX_TXDATA1_DEFAULT       (0x00000000 << 16) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_UBRXAT1               (1 << 27)          /**< Unblock RX After Transmission */
#define _USART_TXDOUBLEX_UBRXAT1_SHIFT        27                 /**< Shift value for USART_UBRXAT1 */
#define _USART_TXDOUBLEX_UBRXAT1_MASK         0x8000000          /**< Bit mask for USART_UBRXAT1 */
#define USART_TXDOUBLEX_UBRXAT1_DEFAULT       (0x00000000 << 27) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_UBRXAT1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXTRIAT1              (1 << 28)          /**< Set TXTRI After Transmission */
#define _USART_TXDOUBLEX_TXTRIAT1_SHIFT       28                 /**< Shift value for USART_TXTRIAT1 */
#define _USART_TXDOUBLEX_TXTRIAT1_MASK        0x10000000         /**< Bit mask for USART_TXTRIAT1 */
#define USART_TXDOUBLEX_TXTRIAT1_DEFAULT      (0x00000000 << 28) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXTRIAT1_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXBREAK1              (1 << 29)          /**< Transmit Data As Break */
#define _USART_TXDOUBLEX_TXBREAK1_SHIFT       29                 /**< Shift value for USART_TXBREAK1 */
#define _USART_TXDOUBLEX_TXBREAK1_MASK        0x20000000         /**< Bit mask for USART_TXBREAK1 */
#define USART_TXDOUBLEX_TXBREAK1_DEFAULT      (0x00000000 << 29) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXBREAK1_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXDISAT1              (1 << 30)          /**< Clear TXEN After Transmission */
#define _USART_TXDOUBLEX_TXDISAT1_SHIFT       30                 /**< Shift value for USART_TXDISAT1 */
#define _USART_TXDOUBLEX_TXDISAT1_MASK        0x40000000         /**< Bit mask for USART_TXDISAT1 */
#define USART_TXDOUBLEX_TXDISAT1_DEFAULT      (0x00000000 << 30) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDISAT1_DEFAULT     0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_RXENAT1               (1 << 31)          /**< Enable RX After Transmission */
#define _USART_TXDOUBLEX_RXENAT1_SHIFT        31                 /**< Shift value for USART_RXENAT1 */
#define _USART_TXDOUBLEX_RXENAT1_MASK         0x80000000         /**< Bit mask for USART_RXENAT1 */
#define USART_TXDOUBLEX_RXENAT1_DEFAULT       (0x00000000 << 31) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_RXENAT1_DEFAULT      0x00000000         /**< Mode DEFAULT for USART_TXDOUBLEX */

/** Bit fields for USART TXDOUBLE */
#define _USART_TXDOUBLE_RESETVALUE            0x00000000        /**< Default value for USART_TXDOUBLE */
#define _USART_TXDOUBLE_MASK                  0x0000FFFF        /**< Mask for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA0_SHIFT         0                 /**< Shift value for USART_TXDATA0 */
#define _USART_TXDOUBLE_TXDATA0_MASK          0xFF              /**< Bit mask for USART_TXDATA0 */
#define USART_TXDOUBLE_TXDATA0_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA0_DEFAULT       0x00000000        /**< Mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA1_SHIFT         8                 /**< Shift value for USART_TXDATA1 */
#define _USART_TXDOUBLE_TXDATA1_MASK          0xFF00            /**< Bit mask for USART_TXDATA1 */
#define USART_TXDOUBLE_TXDATA1_DEFAULT        (0x00000000 << 8) /**< Shifted mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA1_DEFAULT       0x00000000        /**< Mode DEFAULT for USART_TXDOUBLE */

/** Bit fields for USART IF */
#define _USART_IF_RESETVALUE                  0x00000002         /**< Default value for USART_IF */
#define _USART_IF_MASK                        0x00001FFF         /**< Mask for USART_IF */
#define USART_IF_TXC                          (1 << 0)           /**< TX Complete Interrupt Flag */
#define _USART_IF_TXC_SHIFT                   0                  /**< Shift value for USART_TXC */
#define _USART_IF_TXC_MASK                    0x1                /**< Bit mask for USART_TXC */
#define USART_IF_TXC_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXC_DEFAULT                 0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXBL                         (1 << 1)           /**< TX Buffer Level Interrupt Flag */
#define _USART_IF_TXBL_SHIFT                  1                  /**< Shift value for USART_TXBL */
#define _USART_IF_TXBL_MASK                   0x2                /**< Bit mask for USART_TXBL */
#define USART_IF_TXBL_DEFAULT                 (0x00000001 << 1)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXBL_DEFAULT                0x00000001         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXDATAV                      (1 << 2)           /**< RX Data Valid Interrupt Flag */
#define _USART_IF_RXDATAV_SHIFT               2                  /**< Shift value for USART_RXDATAV */
#define _USART_IF_RXDATAV_MASK                0x4                /**< Bit mask for USART_RXDATAV */
#define USART_IF_RXDATAV_DEFAULT              (0x00000000 << 2)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXDATAV_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXFULL                       (1 << 3)           /**< RX Buffer Full Interrupt Flag */
#define _USART_IF_RXFULL_SHIFT                3                  /**< Shift value for USART_RXFULL */
#define _USART_IF_RXFULL_MASK                 0x8                /**< Bit mask for USART_RXFULL */
#define USART_IF_RXFULL_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXFULL_DEFAULT              0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXOF                         (1 << 4)           /**< RX Overflow Interrupt Flag */
#define _USART_IF_RXOF_SHIFT                  4                  /**< Shift value for USART_RXOF */
#define _USART_IF_RXOF_MASK                   0x10               /**< Bit mask for USART_RXOF */
#define USART_IF_RXOF_DEFAULT                 (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXOF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXUF                         (1 << 5)           /**< RX Underflow Interrupt Flag */
#define _USART_IF_RXUF_SHIFT                  5                  /**< Shift value for USART_RXUF */
#define _USART_IF_RXUF_MASK                   0x20               /**< Bit mask for USART_RXUF */
#define USART_IF_RXUF_DEFAULT                 (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXUF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXOF                         (1 << 6)           /**< TX Overflow Interrupt Flag */
#define _USART_IF_TXOF_SHIFT                  6                  /**< Shift value for USART_TXOF */
#define _USART_IF_TXOF_MASK                   0x40               /**< Bit mask for USART_TXOF */
#define USART_IF_TXOF_DEFAULT                 (0x00000000 << 6)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXOF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXUF                         (1 << 7)           /**< TX Underflow Interrupt Flag */
#define _USART_IF_TXUF_SHIFT                  7                  /**< Shift value for USART_TXUF */
#define _USART_IF_TXUF_MASK                   0x80               /**< Bit mask for USART_TXUF */
#define USART_IF_TXUF_DEFAULT                 (0x00000000 << 7)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXUF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_PERR                         (1 << 8)           /**< Parity Error Interrupt Flag */
#define _USART_IF_PERR_SHIFT                  8                  /**< Shift value for USART_PERR */
#define _USART_IF_PERR_MASK                   0x100              /**< Bit mask for USART_PERR */
#define USART_IF_PERR_DEFAULT                 (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_PERR_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_FERR                         (1 << 9)           /**< Framing Error Interrupt Flag */
#define _USART_IF_FERR_SHIFT                  9                  /**< Shift value for USART_FERR */
#define _USART_IF_FERR_MASK                   0x200              /**< Bit mask for USART_FERR */
#define USART_IF_FERR_DEFAULT                 (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_FERR_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_MPAF                         (1 << 10)          /**< Multi-Processor Address Frame Interrupt Flag */
#define _USART_IF_MPAF_SHIFT                  10                 /**< Shift value for USART_MPAF */
#define _USART_IF_MPAF_MASK                   0x400              /**< Bit mask for USART_MPAF */
#define USART_IF_MPAF_DEFAULT                 (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_MPAF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_SSM                          (1 << 11)          /**< Slave-Select In Master Mode Interrupt Flag */
#define _USART_IF_SSM_SHIFT                   11                 /**< Shift value for USART_SSM */
#define _USART_IF_SSM_MASK                    0x800              /**< Bit mask for USART_SSM */
#define USART_IF_SSM_DEFAULT                  (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_SSM_DEFAULT                 0x00000000         /**< Mode DEFAULT for USART_IF */
#define USART_IF_CCF                          (1 << 12)          /**< Collision Check Fail Interrupt Flag */
#define _USART_IF_CCF_SHIFT                   12                 /**< Shift value for USART_CCF */
#define _USART_IF_CCF_MASK                    0x1000             /**< Bit mask for USART_CCF */
#define USART_IF_CCF_DEFAULT                  (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_CCF_DEFAULT                 0x00000000         /**< Mode DEFAULT for USART_IF */

/** Bit fields for USART IFS */
#define _USART_IFS_RESETVALUE                 0x00000000         /**< Default value for USART_IFS */
#define _USART_IFS_MASK                       0x00001FF9         /**< Mask for USART_IFS */
#define USART_IFS_TXC                         (1 << 0)           /**< Set TX Complete Interrupt Flag */
#define _USART_IFS_TXC_SHIFT                  0                  /**< Shift value for USART_TXC */
#define _USART_IFS_TXC_MASK                   0x1                /**< Bit mask for USART_TXC */
#define USART_IFS_TXC_DEFAULT                 (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXC_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXFULL                      (1 << 3)           /**< Set RX Buffer Full Interrupt Flag */
#define _USART_IFS_RXFULL_SHIFT               3                  /**< Shift value for USART_RXFULL */
#define _USART_IFS_RXFULL_MASK                0x8                /**< Bit mask for USART_RXFULL */
#define USART_IFS_RXFULL_DEFAULT              (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXFULL_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXOF                        (1 << 4)           /**< Set RX Overflow Interrupt Flag */
#define _USART_IFS_RXOF_SHIFT                 4                  /**< Shift value for USART_RXOF */
#define _USART_IFS_RXOF_MASK                  0x10               /**< Bit mask for USART_RXOF */
#define USART_IFS_RXOF_DEFAULT                (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXUF                        (1 << 5)           /**< Set RX Underflow Interrupt Flag */
#define _USART_IFS_RXUF_SHIFT                 5                  /**< Shift value for USART_RXUF */
#define _USART_IFS_RXUF_MASK                  0x20               /**< Bit mask for USART_RXUF */
#define USART_IFS_RXUF_DEFAULT                (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_TXOF                        (1 << 6)           /**< Set TX Overflow Interrupt Flag */
#define _USART_IFS_TXOF_SHIFT                 6                  /**< Shift value for USART_TXOF */
#define _USART_IFS_TXOF_MASK                  0x40               /**< Bit mask for USART_TXOF */
#define USART_IFS_TXOF_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_TXUF                        (1 << 7)           /**< Set TX Underflow Interrupt Flag */
#define _USART_IFS_TXUF_SHIFT                 7                  /**< Shift value for USART_TXUF */
#define _USART_IFS_TXUF_MASK                  0x80               /**< Bit mask for USART_TXUF */
#define USART_IFS_TXUF_DEFAULT                (0x00000000 << 7)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_PERR                        (1 << 8)           /**< Set Parity Error Interrupt Flag */
#define _USART_IFS_PERR_SHIFT                 8                  /**< Shift value for USART_PERR */
#define _USART_IFS_PERR_MASK                  0x100              /**< Bit mask for USART_PERR */
#define USART_IFS_PERR_DEFAULT                (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_PERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_FERR                        (1 << 9)           /**< Set Framing Error Interrupt Flag */
#define _USART_IFS_FERR_SHIFT                 9                  /**< Shift value for USART_FERR */
#define _USART_IFS_FERR_MASK                  0x200              /**< Bit mask for USART_FERR */
#define USART_IFS_FERR_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_FERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_MPAF                        (1 << 10)          /**< Set Multi-Processor Address Frame Interrupt Flag */
#define _USART_IFS_MPAF_SHIFT                 10                 /**< Shift value for USART_MPAF */
#define _USART_IFS_MPAF_MASK                  0x400              /**< Bit mask for USART_MPAF */
#define USART_IFS_MPAF_DEFAULT                (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_MPAF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_SSM                         (1 << 11)          /**< Set Slave-Select in Master mode Interrupt Flag */
#define _USART_IFS_SSM_SHIFT                  11                 /**< Shift value for USART_SSM */
#define _USART_IFS_SSM_MASK                   0x800              /**< Bit mask for USART_SSM */
#define USART_IFS_SSM_DEFAULT                 (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_SSM_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_CCF                         (1 << 12)          /**< Set Collision Check Fail Interrupt Flag */
#define _USART_IFS_CCF_SHIFT                  12                 /**< Shift value for USART_CCF */
#define _USART_IFS_CCF_MASK                   0x1000             /**< Bit mask for USART_CCF */
#define USART_IFS_CCF_DEFAULT                 (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_CCF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFS */

/** Bit fields for USART IFC */
#define _USART_IFC_RESETVALUE                 0x00000000         /**< Default value for USART_IFC */
#define _USART_IFC_MASK                       0x00001FF9         /**< Mask for USART_IFC */
#define USART_IFC_TXC                         (1 << 0)           /**< Clear TX Complete Interrupt Flag */
#define _USART_IFC_TXC_SHIFT                  0                  /**< Shift value for USART_TXC */
#define _USART_IFC_TXC_MASK                   0x1                /**< Bit mask for USART_TXC */
#define USART_IFC_TXC_DEFAULT                 (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXC_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXFULL                      (1 << 3)           /**< Clear RX Buffer Full Interrupt Flag */
#define _USART_IFC_RXFULL_SHIFT               3                  /**< Shift value for USART_RXFULL */
#define _USART_IFC_RXFULL_MASK                0x8                /**< Bit mask for USART_RXFULL */
#define USART_IFC_RXFULL_DEFAULT              (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXFULL_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXOF                        (1 << 4)           /**< Clear RX Overflow Interrupt Flag */
#define _USART_IFC_RXOF_SHIFT                 4                  /**< Shift value for USART_RXOF */
#define _USART_IFC_RXOF_MASK                  0x10               /**< Bit mask for USART_RXOF */
#define USART_IFC_RXOF_DEFAULT                (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXUF                        (1 << 5)           /**< Clear RX Underflow Interrupt Flag */
#define _USART_IFC_RXUF_SHIFT                 5                  /**< Shift value for USART_RXUF */
#define _USART_IFC_RXUF_MASK                  0x20               /**< Bit mask for USART_RXUF */
#define USART_IFC_RXUF_DEFAULT                (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_TXOF                        (1 << 6)           /**< Clear TX Overflow Interrupt Flag */
#define _USART_IFC_TXOF_SHIFT                 6                  /**< Shift value for USART_TXOF */
#define _USART_IFC_TXOF_MASK                  0x40               /**< Bit mask for USART_TXOF */
#define USART_IFC_TXOF_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_TXUF                        (1 << 7)           /**< Clear TX Underflow Interrupt Flag */
#define _USART_IFC_TXUF_SHIFT                 7                  /**< Shift value for USART_TXUF */
#define _USART_IFC_TXUF_MASK                  0x80               /**< Bit mask for USART_TXUF */
#define USART_IFC_TXUF_DEFAULT                (0x00000000 << 7)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_PERR                        (1 << 8)           /**< Clear Parity Error Interrupt Flag */
#define _USART_IFC_PERR_SHIFT                 8                  /**< Shift value for USART_PERR */
#define _USART_IFC_PERR_MASK                  0x100              /**< Bit mask for USART_PERR */
#define USART_IFC_PERR_DEFAULT                (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_PERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_FERR                        (1 << 9)           /**< Clear Framing Error Interrupt Flag */
#define _USART_IFC_FERR_SHIFT                 9                  /**< Shift value for USART_FERR */
#define _USART_IFC_FERR_MASK                  0x200              /**< Bit mask for USART_FERR */
#define USART_IFC_FERR_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_FERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_MPAF                        (1 << 10)          /**< Clear Multi-Processor Address Frame Interrupt Flag */
#define _USART_IFC_MPAF_SHIFT                 10                 /**< Shift value for USART_MPAF */
#define _USART_IFC_MPAF_MASK                  0x400              /**< Bit mask for USART_MPAF */
#define USART_IFC_MPAF_DEFAULT                (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_MPAF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_SSM                         (1 << 11)          /**< Clear Slave-Select In Master Mode Interrupt Flag */
#define _USART_IFC_SSM_SHIFT                  11                 /**< Shift value for USART_SSM */
#define _USART_IFC_SSM_MASK                   0x800              /**< Bit mask for USART_SSM */
#define USART_IFC_SSM_DEFAULT                 (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_SSM_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_CCF                         (1 << 12)          /**< Clear Collision Check Fail Interrupt Flag */
#define _USART_IFC_CCF_SHIFT                  12                 /**< Shift value for USART_CCF */
#define _USART_IFC_CCF_MASK                   0x1000             /**< Bit mask for USART_CCF */
#define USART_IFC_CCF_DEFAULT                 (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_CCF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IFC */

/** Bit fields for USART IEN */
#define _USART_IEN_RESETVALUE                 0x00000000         /**< Default value for USART_IEN */
#define _USART_IEN_MASK                       0x00001FFF         /**< Mask for USART_IEN */
#define USART_IEN_TXC                         (1 << 0)           /**< TX Complete Interrupt Enable */
#define _USART_IEN_TXC_SHIFT                  0                  /**< Shift value for USART_TXC */
#define _USART_IEN_TXC_MASK                   0x1                /**< Bit mask for USART_TXC */
#define USART_IEN_TXC_DEFAULT                 (0x00000000 << 0)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXC_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXBL                        (1 << 1)           /**< TX Buffer Level Interrupt Enable */
#define _USART_IEN_TXBL_SHIFT                 1                  /**< Shift value for USART_TXBL */
#define _USART_IEN_TXBL_MASK                  0x2                /**< Bit mask for USART_TXBL */
#define USART_IEN_TXBL_DEFAULT                (0x00000000 << 1)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXBL_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXDATAV                     (1 << 2)           /**< RX Data Valid Interrupt Enable */
#define _USART_IEN_RXDATAV_SHIFT              2                  /**< Shift value for USART_RXDATAV */
#define _USART_IEN_RXDATAV_MASK               0x4                /**< Bit mask for USART_RXDATAV */
#define USART_IEN_RXDATAV_DEFAULT             (0x00000000 << 2)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXDATAV_DEFAULT            0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXFULL                      (1 << 3)           /**< RX Buffer Full Interrupt Enable */
#define _USART_IEN_RXFULL_SHIFT               3                  /**< Shift value for USART_RXFULL */
#define _USART_IEN_RXFULL_MASK                0x8                /**< Bit mask for USART_RXFULL */
#define USART_IEN_RXFULL_DEFAULT              (0x00000000 << 3)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXFULL_DEFAULT             0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXOF                        (1 << 4)           /**< RX Overflow Interrupt Enable */
#define _USART_IEN_RXOF_SHIFT                 4                  /**< Shift value for USART_RXOF */
#define _USART_IEN_RXOF_MASK                  0x10               /**< Bit mask for USART_RXOF */
#define USART_IEN_RXOF_DEFAULT                (0x00000000 << 4)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXUF                        (1 << 5)           /**< RX Underflow Interrupt Enable */
#define _USART_IEN_RXUF_SHIFT                 5                  /**< Shift value for USART_RXUF */
#define _USART_IEN_RXUF_MASK                  0x20               /**< Bit mask for USART_RXUF */
#define USART_IEN_RXUF_DEFAULT                (0x00000000 << 5)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXOF                        (1 << 6)           /**< TX Overflow Interrupt Enable */
#define _USART_IEN_TXOF_SHIFT                 6                  /**< Shift value for USART_TXOF */
#define _USART_IEN_TXOF_MASK                  0x40               /**< Bit mask for USART_TXOF */
#define USART_IEN_TXOF_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXOF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXUF                        (1 << 7)           /**< TX Underflow Interrupt Enable */
#define _USART_IEN_TXUF_SHIFT                 7                  /**< Shift value for USART_TXUF */
#define _USART_IEN_TXUF_MASK                  0x80               /**< Bit mask for USART_TXUF */
#define USART_IEN_TXUF_DEFAULT                (0x00000000 << 7)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXUF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_PERR                        (1 << 8)           /**< Parity Error Interrupt Enable */
#define _USART_IEN_PERR_SHIFT                 8                  /**< Shift value for USART_PERR */
#define _USART_IEN_PERR_MASK                  0x100              /**< Bit mask for USART_PERR */
#define USART_IEN_PERR_DEFAULT                (0x00000000 << 8)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_PERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_FERR                        (1 << 9)           /**< Framing Error Interrupt Enable */
#define _USART_IEN_FERR_SHIFT                 9                  /**< Shift value for USART_FERR */
#define _USART_IEN_FERR_MASK                  0x200              /**< Bit mask for USART_FERR */
#define USART_IEN_FERR_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_FERR_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_MPAF                        (1 << 10)          /**< Multi-Processor Address Frame Interrupt Enable */
#define _USART_IEN_MPAF_SHIFT                 10                 /**< Shift value for USART_MPAF */
#define _USART_IEN_MPAF_MASK                  0x400              /**< Bit mask for USART_MPAF */
#define USART_IEN_MPAF_DEFAULT                (0x00000000 << 10) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_MPAF_DEFAULT               0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_SSM                         (1 << 11)          /**< Slave-Select In Master Mode Interrupt Enable */
#define _USART_IEN_SSM_SHIFT                  11                 /**< Shift value for USART_SSM */
#define _USART_IEN_SSM_MASK                   0x800              /**< Bit mask for USART_SSM */
#define USART_IEN_SSM_DEFAULT                 (0x00000000 << 11) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_SSM_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_CCF                         (1 << 12)          /**< Collision Check Fail Interrupt Enable */
#define _USART_IEN_CCF_SHIFT                  12                 /**< Shift value for USART_CCF */
#define _USART_IEN_CCF_MASK                   0x1000             /**< Bit mask for USART_CCF */
#define USART_IEN_CCF_DEFAULT                 (0x00000000 << 12) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_CCF_DEFAULT                0x00000000         /**< Mode DEFAULT for USART_IEN */

/** Bit fields for USART IRCTRL */
#define _USART_IRCTRL_RESETVALUE              0x00000000        /**< Default value for USART_IRCTRL */
#define _USART_IRCTRL_MASK                    0x000000FF        /**< Mask for USART_IRCTRL */
#define USART_IRCTRL_IREN                     (1 << 0)          /**< Enable IrDA Module */
#define _USART_IRCTRL_IREN_SHIFT              0                 /**< Shift value for USART_IREN */
#define _USART_IRCTRL_IREN_MASK               0x1               /**< Bit mask for USART_IREN */
#define USART_IRCTRL_IREN_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IREN_DEFAULT            0x00000000        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_SHIFT              1                 /**< Shift value for USART_IRPW */
#define _USART_IRCTRL_IRPW_MASK               0x6               /**< Bit mask for USART_IRPW */
#define USART_IRCTRL_IRPW_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define USART_IRCTRL_IRPW_ONE                 (0x00000000 << 1) /**< Shifted mode ONE for USART_IRCTRL */
#define USART_IRCTRL_IRPW_TWO                 (0x00000001 << 1) /**< Shifted mode TWO for USART_IRCTRL */
#define USART_IRCTRL_IRPW_THREE               (0x00000002 << 1) /**< Shifted mode THREE for USART_IRCTRL */
#define USART_IRCTRL_IRPW_FOUR                (0x00000003 << 1) /**< Shifted mode FOUR for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_DEFAULT            0x00000000        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_ONE                0x00000000        /**< Mode ONE for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_TWO                0x00000001        /**< Mode TWO for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_THREE              0x00000002        /**< Mode THREE for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_FOUR               0x00000003        /**< Mode FOUR for USART_IRCTRL */
#define USART_IRCTRL_IRFILT                   (1 << 3)          /**< IrDA RX Filter */
#define _USART_IRCTRL_IRFILT_SHIFT            3                 /**< Shift value for USART_IRFILT */
#define _USART_IRCTRL_IRFILT_MASK             0x8               /**< Bit mask for USART_IRFILT */
#define USART_IRCTRL_IRFILT_DEFAULT           (0x00000000 << 3) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRFILT_DEFAULT          0x00000000        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_SHIFT          4                 /**< Shift value for USART_IRPRSSEL */
#define _USART_IRCTRL_IRPRSSEL_MASK           0x70              /**< Bit mask for USART_IRPRSSEL */
#define USART_IRCTRL_IRPRSSEL_DEFAULT         (0x00000000 << 4) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH0          (0x00000000 << 4) /**< Shifted mode PRSCH0 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH1          (0x00000001 << 4) /**< Shifted mode PRSCH1 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH2          (0x00000002 << 4) /**< Shifted mode PRSCH2 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH3          (0x00000003 << 4) /**< Shifted mode PRSCH3 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH4          (0x00000004 << 4) /**< Shifted mode PRSCH4 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH5          (0x00000005 << 4) /**< Shifted mode PRSCH5 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH6          (0x00000006 << 4) /**< Shifted mode PRSCH6 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH7          (0x00000007 << 4) /**< Shifted mode PRSCH7 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_DEFAULT        0x00000000        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH0         0x00000000        /**< Mode PRSCH0 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH1         0x00000001        /**< Mode PRSCH1 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH2         0x00000002        /**< Mode PRSCH2 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH3         0x00000003        /**< Mode PRSCH3 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH4         0x00000004        /**< Mode PRSCH4 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH5         0x00000005        /**< Mode PRSCH5 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH6         0x00000006        /**< Mode PRSCH6 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH7         0x00000007        /**< Mode PRSCH7 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSEN                  (1 << 7)          /**< IrDA PRS Channel Enable */
#define _USART_IRCTRL_IRPRSEN_SHIFT           7                 /**< Shift value for USART_IRPRSEN */
#define _USART_IRCTRL_IRPRSEN_MASK            0x80              /**< Bit mask for USART_IRPRSEN */
#define USART_IRCTRL_IRPRSEN_DEFAULT          (0x00000000 << 7) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSEN_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_IRCTRL */

/** Bit fields for USART ROUTE */
#define _USART_ROUTE_RESETVALUE               0x00000000        /**< Default value for USART_ROUTE */
#define _USART_ROUTE_MASK                     0x0000030F        /**< Mask for USART_ROUTE */
#define USART_ROUTE_RXPEN                     (1 << 0)          /**< RX Pin Enable */
#define _USART_ROUTE_RXPEN_SHIFT              0                 /**< Shift value for USART_RXPEN */
#define _USART_ROUTE_RXPEN_MASK               0x1               /**< Bit mask for USART_RXPEN */
#define USART_ROUTE_RXPEN_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_RXPEN_DEFAULT            0x00000000        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_TXPEN                     (1 << 1)          /**< TX Pin Enable */
#define _USART_ROUTE_TXPEN_SHIFT              1                 /**< Shift value for USART_TXPEN */
#define _USART_ROUTE_TXPEN_MASK               0x2               /**< Bit mask for USART_TXPEN */
#define USART_ROUTE_TXPEN_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_TXPEN_DEFAULT            0x00000000        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_CSPEN                     (1 << 2)          /**< CS Pin Enable */
#define _USART_ROUTE_CSPEN_SHIFT              2                 /**< Shift value for USART_CSPEN */
#define _USART_ROUTE_CSPEN_MASK               0x4               /**< Bit mask for USART_CSPEN */
#define USART_ROUTE_CSPEN_DEFAULT             (0x00000000 << 2) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_CSPEN_DEFAULT            0x00000000        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_CLKPEN                    (1 << 3)          /**< RX Pin Enable */
#define _USART_ROUTE_CLKPEN_SHIFT             3                 /**< Shift value for USART_CLKPEN */
#define _USART_ROUTE_CLKPEN_MASK              0x8               /**< Bit mask for USART_CLKPEN */
#define USART_ROUTE_CLKPEN_DEFAULT            (0x00000000 << 3) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_CLKPEN_DEFAULT           0x00000000        /**< Mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_LOCATION_SHIFT           8                 /**< Shift value for USART_LOCATION */
#define _USART_ROUTE_LOCATION_MASK            0x300             /**< Bit mask for USART_LOCATION */
#define USART_ROUTE_LOCATION_DEFAULT          (0x00000000 << 8) /**< Shifted mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC0             (0x00000000 << 8) /**< Shifted mode LOC0 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC1             (0x00000001 << 8) /**< Shifted mode LOC1 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC2             (0x00000002 << 8) /**< Shifted mode LOC2 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC3             (0x00000003 << 8) /**< Shifted mode LOC3 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_DEFAULT         0x00000000        /**< Mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC0            0x00000000        /**< Mode LOC0 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC1            0x00000001        /**< Mode LOC1 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC2            0x00000002        /**< Mode LOC2 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC3            0x00000003        /**< Mode LOC3 for USART_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_LEUART
 * @{
 */

/** Bit fields for LEUART CTRL */
#define _LEUART_CTRL_RESETVALUE                  0x00000000         /**< Default value for LEUART_CTRL */
#define _LEUART_CTRL_MASK                        0x0000FFFF         /**< Mask for LEUART_CTRL */
#define LEUART_CTRL_AUTOTRI                      (1 << 0)           /**< Automatic Transmitter Tristate */
#define _LEUART_CTRL_AUTOTRI_SHIFT               0                  /**< Shift value for LEUART_AUTOTRI */
#define _LEUART_CTRL_AUTOTRI_MASK                0x1                /**< Bit mask for LEUART_AUTOTRI */
#define LEUART_CTRL_AUTOTRI_DEFAULT              (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_AUTOTRI_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS                     (1 << 1)           /**< Data-Bit Mode */
#define _LEUART_CTRL_DATABITS_SHIFT              1                  /**< Shift value for LEUART_DATABITS */
#define _LEUART_CTRL_DATABITS_MASK               0x2                /**< Bit mask for LEUART_DATABITS */
#define LEUART_CTRL_DATABITS_DEFAULT             (0x00000000 << 1)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS_EIGHT               (0x00000000 << 1)  /**< Shifted mode EIGHT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS_NINE                (0x00000001 << 1)  /**< Shifted mode NINE for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_DEFAULT            0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_EIGHT              0x00000000         /**< Mode EIGHT for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_NINE               0x00000001         /**< Mode NINE for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_SHIFT                2                  /**< Shift value for LEUART_PARITY */
#define _LEUART_CTRL_PARITY_MASK                 0xC                /**< Bit mask for LEUART_PARITY */
#define LEUART_CTRL_PARITY_DEFAULT               (0x00000000 << 2)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_PARITY_NONE                  (0x00000000 << 2)  /**< Shifted mode NONE for LEUART_CTRL */
#define LEUART_CTRL_PARITY_EVEN                  (0x00000002 << 2)  /**< Shifted mode EVEN for LEUART_CTRL */
#define LEUART_CTRL_PARITY_ODD                   (0x00000003 << 2)  /**< Shifted mode ODD for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_DEFAULT              0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_NONE                 0x00000000         /**< Mode NONE for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_EVEN                 0x00000002         /**< Mode EVEN for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_ODD                  0x00000003         /**< Mode ODD for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS                     (1 << 4)           /**< Stop-Bit Mode */
#define _LEUART_CTRL_STOPBITS_SHIFT              4                  /**< Shift value for LEUART_STOPBITS */
#define _LEUART_CTRL_STOPBITS_MASK               0x10               /**< Bit mask for LEUART_STOPBITS */
#define LEUART_CTRL_STOPBITS_DEFAULT             (0x00000000 << 4)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS_ONE                 (0x00000000 << 4)  /**< Shifted mode ONE for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS_TWO                 (0x00000001 << 4)  /**< Shifted mode TWO for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_DEFAULT            0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_ONE                0x00000000         /**< Mode ONE for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_TWO                0x00000001         /**< Mode TWO for LEUART_CTRL */
#define LEUART_CTRL_INV                          (1 << 5)           /**< Invert Input And Output */
#define _LEUART_CTRL_INV_SHIFT                   5                  /**< Shift value for LEUART_INV */
#define _LEUART_CTRL_INV_MASK                    0x20               /**< Bit mask for LEUART_INV */
#define LEUART_CTRL_INV_DEFAULT                  (0x00000000 << 5)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_INV_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_ERRSDMA                      (1 << 6)           /**< Halt RX DMA On Error */
#define _LEUART_CTRL_ERRSDMA_SHIFT               6                  /**< Shift value for LEUART_ERRSDMA */
#define _LEUART_CTRL_ERRSDMA_MASK                0x40               /**< Bit mask for LEUART_ERRSDMA */
#define LEUART_CTRL_ERRSDMA_DEFAULT              (0x00000000 << 6)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_ERRSDMA_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_LOOPBK                       (1 << 7)           /**< Loopback Enable */
#define _LEUART_CTRL_LOOPBK_SHIFT                7                  /**< Shift value for LEUART_LOOPBK */
#define _LEUART_CTRL_LOOPBK_MASK                 0x80               /**< Bit mask for LEUART_LOOPBK */
#define LEUART_CTRL_LOOPBK_DEFAULT               (0x00000000 << 7)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_LOOPBK_DEFAULT              0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_SFUBRX                       (1 << 8)           /**< Start-Frame UnBlock RX */
#define _LEUART_CTRL_SFUBRX_SHIFT                8                  /**< Shift value for LEUART_SFUBRX */
#define _LEUART_CTRL_SFUBRX_MASK                 0x100              /**< Bit mask for LEUART_SFUBRX */
#define LEUART_CTRL_SFUBRX_DEFAULT               (0x00000000 << 8)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_SFUBRX_DEFAULT              0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_MPM                          (1 << 9)           /**< Multi-Processor Mode */
#define _LEUART_CTRL_MPM_SHIFT                   9                  /**< Shift value for LEUART_MPM */
#define _LEUART_CTRL_MPM_MASK                    0x200              /**< Bit mask for LEUART_MPM */
#define LEUART_CTRL_MPM_DEFAULT                  (0x00000000 << 9)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_MPM_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_MPAB                         (1 << 10)          /**< Multi-Processor Address-Bit */
#define _LEUART_CTRL_MPAB_SHIFT                  10                 /**< Shift value for LEUART_MPAB */
#define _LEUART_CTRL_MPAB_MASK                   0x400              /**< Bit mask for LEUART_MPAB */
#define LEUART_CTRL_MPAB_DEFAULT                 (0x00000000 << 10) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_MPAB_DEFAULT                0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_BIT8DV                       (1 << 11)          /**< Bit 8 Default Value */
#define _LEUART_CTRL_BIT8DV_SHIFT                11                 /**< Shift value for LEUART_BIT8DV */
#define _LEUART_CTRL_BIT8DV_MASK                 0x800              /**< Bit mask for LEUART_BIT8DV */
#define LEUART_CTRL_BIT8DV_DEFAULT               (0x00000000 << 11) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_BIT8DV_DEFAULT              0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_RXDMAWU                      (1 << 12)          /**< RX DMA Wakeup */
#define _LEUART_CTRL_RXDMAWU_SHIFT               12                 /**< Shift value for LEUART_RXDMAWU */
#define _LEUART_CTRL_RXDMAWU_MASK                0x1000             /**< Bit mask for LEUART_RXDMAWU */
#define LEUART_CTRL_RXDMAWU_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_RXDMAWU_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_TXDMAWU                      (1 << 13)          /**< TX DMA Wakeup */
#define _LEUART_CTRL_TXDMAWU_SHIFT               13                 /**< Shift value for LEUART_TXDMAWU */
#define _LEUART_CTRL_TXDMAWU_MASK                0x2000             /**< Bit mask for LEUART_TXDMAWU */
#define LEUART_CTRL_TXDMAWU_DEFAULT              (0x00000000 << 13) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDMAWU_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_SHIFT               14                 /**< Shift value for LEUART_TXDELAY */
#define _LEUART_CTRL_TXDELAY_MASK                0xC000             /**< Bit mask for LEUART_TXDELAY */
#define LEUART_CTRL_TXDELAY_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_NONE                 (0x00000000 << 14) /**< Shifted mode NONE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_SINGLE               (0x00000001 << 14) /**< Shifted mode SINGLE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_DOUBLE               (0x00000002 << 14) /**< Shifted mode DOUBLE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_TRIPLE               (0x00000003 << 14) /**< Shifted mode TRIPLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_NONE                0x00000000         /**< Mode NONE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_SINGLE              0x00000001         /**< Mode SINGLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_DOUBLE              0x00000002         /**< Mode DOUBLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_TRIPLE              0x00000003         /**< Mode TRIPLE for LEUART_CTRL */

/** Bit fields for LEUART CMD */
#define _LEUART_CMD_RESETVALUE                   0x00000000        /**< Default value for LEUART_CMD */
#define _LEUART_CMD_MASK                         0x000000FF        /**< Mask for LEUART_CMD */
#define LEUART_CMD_RXEN                          (1 << 0)          /**< Receiver Enable */
#define _LEUART_CMD_RXEN_SHIFT                   0                 /**< Shift value for LEUART_RXEN */
#define _LEUART_CMD_RXEN_MASK                    0x1               /**< Bit mask for LEUART_RXEN */
#define LEUART_CMD_RXEN_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXEN_DEFAULT                 0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXDIS                         (1 << 1)          /**< Receiver Disable */
#define _LEUART_CMD_RXDIS_SHIFT                  1                 /**< Shift value for LEUART_RXDIS */
#define _LEUART_CMD_RXDIS_MASK                   0x2               /**< Bit mask for LEUART_RXDIS */
#define LEUART_CMD_RXDIS_DEFAULT                 (0x00000000 << 1) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXDIS_DEFAULT                0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_TXEN                          (1 << 2)          /**< Transmitter Enable */
#define _LEUART_CMD_TXEN_SHIFT                   2                 /**< Shift value for LEUART_TXEN */
#define _LEUART_CMD_TXEN_MASK                    0x4               /**< Bit mask for LEUART_TXEN */
#define LEUART_CMD_TXEN_DEFAULT                  (0x00000000 << 2) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_TXEN_DEFAULT                 0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_TXDIS                         (1 << 3)          /**< Transmitter Disable */
#define _LEUART_CMD_TXDIS_SHIFT                  3                 /**< Shift value for LEUART_TXDIS */
#define _LEUART_CMD_TXDIS_MASK                   0x8               /**< Bit mask for LEUART_TXDIS */
#define LEUART_CMD_TXDIS_DEFAULT                 (0x00000000 << 3) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_TXDIS_DEFAULT                0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXBLOCKEN                     (1 << 4)          /**< Receiver Block Enable */
#define _LEUART_CMD_RXBLOCKEN_SHIFT              4                 /**< Shift value for LEUART_RXBLOCKEN */
#define _LEUART_CMD_RXBLOCKEN_MASK               0x10              /**< Bit mask for LEUART_RXBLOCKEN */
#define LEUART_CMD_RXBLOCKEN_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXBLOCKEN_DEFAULT            0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXBLOCKDIS                    (1 << 5)          /**< Receiver Block Disable */
#define _LEUART_CMD_RXBLOCKDIS_SHIFT             5                 /**< Shift value for LEUART_RXBLOCKDIS */
#define _LEUART_CMD_RXBLOCKDIS_MASK              0x20              /**< Bit mask for LEUART_RXBLOCKDIS */
#define LEUART_CMD_RXBLOCKDIS_DEFAULT            (0x00000000 << 5) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXBLOCKDIS_DEFAULT           0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_CLEARTX                       (1 << 6)          /**< Clear TX */
#define _LEUART_CMD_CLEARTX_SHIFT                6                 /**< Shift value for LEUART_CLEARTX */
#define _LEUART_CMD_CLEARTX_MASK                 0x40              /**< Bit mask for LEUART_CLEARTX */
#define LEUART_CMD_CLEARTX_DEFAULT               (0x00000000 << 6) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_CLEARTX_DEFAULT              0x00000000        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_CLEARRX                       (1 << 7)          /**< Clear RX */
#define _LEUART_CMD_CLEARRX_SHIFT                7                 /**< Shift value for LEUART_CLEARRX */
#define _LEUART_CMD_CLEARRX_MASK                 0x80              /**< Bit mask for LEUART_CLEARRX */
#define LEUART_CMD_CLEARRX_DEFAULT               (0x00000000 << 7) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_CLEARRX_DEFAULT              0x00000000        /**< Mode DEFAULT for LEUART_CMD */

/** Bit fields for LEUART STATUS */
#define _LEUART_STATUS_RESETVALUE                0x00000010        /**< Default value for LEUART_STATUS */
#define _LEUART_STATUS_MASK                      0x0000003F        /**< Mask for LEUART_STATUS */
#define LEUART_STATUS_RXENS                      (1 << 0)          /**< Receiver Enable Status */
#define _LEUART_STATUS_RXENS_SHIFT               0                 /**< Shift value for LEUART_RXENS */
#define _LEUART_STATUS_RXENS_MASK                0x1               /**< Bit mask for LEUART_RXENS */
#define LEUART_STATUS_RXENS_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXENS_DEFAULT             0x00000000        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXENS                      (1 << 1)          /**< Transmitter Enable Status */
#define _LEUART_STATUS_TXENS_SHIFT               1                 /**< Shift value for LEUART_TXENS */
#define _LEUART_STATUS_TXENS_MASK                0x2               /**< Bit mask for LEUART_TXENS */
#define LEUART_STATUS_TXENS_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXENS_DEFAULT             0x00000000        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_RXBLOCK                    (1 << 2)          /**< Block Incoming Data */
#define _LEUART_STATUS_RXBLOCK_SHIFT             2                 /**< Shift value for LEUART_RXBLOCK */
#define _LEUART_STATUS_RXBLOCK_MASK              0x4               /**< Bit mask for LEUART_RXBLOCK */
#define LEUART_STATUS_RXBLOCK_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXBLOCK_DEFAULT           0x00000000        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXC                        (1 << 3)          /**< TX Complete */
#define _LEUART_STATUS_TXC_SHIFT                 3                 /**< Shift value for LEUART_TXC */
#define _LEUART_STATUS_TXC_MASK                  0x8               /**< Bit mask for LEUART_TXC */
#define LEUART_STATUS_TXC_DEFAULT                (0x00000000 << 3) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXC_DEFAULT               0x00000000        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXBL                       (1 << 4)          /**< TX Buffer Level */
#define _LEUART_STATUS_TXBL_SHIFT                4                 /**< Shift value for LEUART_TXBL */
#define _LEUART_STATUS_TXBL_MASK                 0x10              /**< Bit mask for LEUART_TXBL */
#define LEUART_STATUS_TXBL_DEFAULT               (0x00000001 << 4) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXBL_DEFAULT              0x00000001        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_RXDATAV                    (1 << 5)          /**< RX Data Valid */
#define _LEUART_STATUS_RXDATAV_SHIFT             5                 /**< Shift value for LEUART_RXDATAV */
#define _LEUART_STATUS_RXDATAV_MASK              0x20              /**< Bit mask for LEUART_RXDATAV */
#define LEUART_STATUS_RXDATAV_DEFAULT            (0x00000000 << 5) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXDATAV_DEFAULT           0x00000000        /**< Mode DEFAULT for LEUART_STATUS */

/** Bit fields for LEUART CLKDIV */
#define _LEUART_CLKDIV_RESETVALUE                0x00000000        /**< Default value for LEUART_CLKDIV */
#define _LEUART_CLKDIV_MASK                      0x00007FF8        /**< Mask for LEUART_CLKDIV */
#define _LEUART_CLKDIV_DIV_SHIFT                 3                 /**< Shift value for LEUART_DIV */
#define _LEUART_CLKDIV_DIV_MASK                  0x7FF8            /**< Bit mask for LEUART_DIV */
#define LEUART_CLKDIV_DIV_DEFAULT                (0x00000000 << 3) /**< Shifted mode DEFAULT for LEUART_CLKDIV */
#define _LEUART_CLKDIV_DIV_DEFAULT               0x00000000        /**< Mode DEFAULT for LEUART_CLKDIV */

/** Bit fields for LEUART STARTFRAME */
#define _LEUART_STARTFRAME_RESETVALUE            0x00000000        /**< Default value for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_MASK                  0x000001FF        /**< Mask for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_SHIFT      0                 /**< Shift value for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_MASK       0x1FF             /**< Bit mask for LEUART_STARTFRAME */
#define LEUART_STARTFRAME_STARTFRAME_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_DEFAULT    0x00000000        /**< Mode DEFAULT for LEUART_STARTFRAME */

/** Bit fields for LEUART SIGFRAME */
#define _LEUART_SIGFRAME_RESETVALUE              0x00000000        /**< Default value for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_MASK                    0x000001FF        /**< Mask for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_SHIFT          0                 /**< Shift value for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_MASK           0x1FF             /**< Bit mask for LEUART_SIGFRAME */
#define LEUART_SIGFRAME_SIGFRAME_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_DEFAULT        0x00000000        /**< Mode DEFAULT for LEUART_SIGFRAME */

/** Bit fields for LEUART RXDATAX */
#define _LEUART_RXDATAX_RESETVALUE               0x00000000         /**< Default value for LEUART_RXDATAX */
#define _LEUART_RXDATAX_MASK                     0x0000C1FF         /**< Mask for LEUART_RXDATAX */
#define _LEUART_RXDATAX_RXDATA_SHIFT             0                  /**< Shift value for LEUART_RXDATA */
#define _LEUART_RXDATAX_RXDATA_MASK              0x1FF              /**< Bit mask for LEUART_RXDATA */
#define LEUART_RXDATAX_RXDATA_DEFAULT            (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_RXDATA_DEFAULT           0x00000000         /**< Mode DEFAULT for LEUART_RXDATAX */
#define LEUART_RXDATAX_PERR                      (1 << 14)          /**< Receive Data Parity Error */
#define _LEUART_RXDATAX_PERR_SHIFT               14                 /**< Shift value for LEUART_PERR */
#define _LEUART_RXDATAX_PERR_MASK                0x4000             /**< Bit mask for LEUART_PERR */
#define LEUART_RXDATAX_PERR_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_PERR_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_RXDATAX */
#define LEUART_RXDATAX_FERR                      (1 << 15)          /**< Receive Data Framing Error */
#define _LEUART_RXDATAX_FERR_SHIFT               15                 /**< Shift value for LEUART_FERR */
#define _LEUART_RXDATAX_FERR_MASK                0x8000             /**< Bit mask for LEUART_FERR */
#define LEUART_RXDATAX_FERR_DEFAULT              (0x00000000 << 15) /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_FERR_DEFAULT             0x00000000         /**< Mode DEFAULT for LEUART_RXDATAX */

/** Bit fields for LEUART RXDATA */
#define _LEUART_RXDATA_RESETVALUE                0x00000000        /**< Default value for LEUART_RXDATA */
#define _LEUART_RXDATA_MASK                      0x000000FF        /**< Mask for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_SHIFT              0                 /**< Shift value for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_MASK               0xFF              /**< Bit mask for LEUART_RXDATA */
#define LEUART_RXDATA_RXDATA_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_DEFAULT            0x00000000        /**< Mode DEFAULT for LEUART_RXDATA */

/** Bit fields for LEUART RXDATAXP */
#define _LEUART_RXDATAXP_RESETVALUE              0x00000000         /**< Default value for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_MASK                    0x0000C1FF         /**< Mask for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_RXDATAP_SHIFT           0                  /**< Shift value for LEUART_RXDATAP */
#define _LEUART_RXDATAXP_RXDATAP_MASK            0x1FF              /**< Bit mask for LEUART_RXDATAP */
#define LEUART_RXDATAXP_RXDATAP_DEFAULT          (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_RXDATAP_DEFAULT         0x00000000         /**< Mode DEFAULT for LEUART_RXDATAXP */
#define LEUART_RXDATAXP_PERRP                    (1 << 14)          /**< Receive Data Parity Error Peek */
#define _LEUART_RXDATAXP_PERRP_SHIFT             14                 /**< Shift value for LEUART_PERRP */
#define _LEUART_RXDATAXP_PERRP_MASK              0x4000             /**< Bit mask for LEUART_PERRP */
#define LEUART_RXDATAXP_PERRP_DEFAULT            (0x00000000 << 14) /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_PERRP_DEFAULT           0x00000000         /**< Mode DEFAULT for LEUART_RXDATAXP */
#define LEUART_RXDATAXP_FERRP                    (1 << 15)          /**< Receive Data Framing Error Peek */
#define _LEUART_RXDATAXP_FERRP_SHIFT             15                 /**< Shift value for LEUART_FERRP */
#define _LEUART_RXDATAXP_FERRP_MASK              0x8000             /**< Bit mask for LEUART_FERRP */
#define LEUART_RXDATAXP_FERRP_DEFAULT            (0x00000000 << 15) /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_FERRP_DEFAULT           0x00000000         /**< Mode DEFAULT for LEUART_RXDATAXP */

/** Bit fields for LEUART TXDATAX */
#define _LEUART_TXDATAX_RESETVALUE               0x00000000         /**< Default value for LEUART_TXDATAX */
#define _LEUART_TXDATAX_MASK                     0x0000E1FF         /**< Mask for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDATA_SHIFT             0                  /**< Shift value for LEUART_TXDATA */
#define _LEUART_TXDATAX_TXDATA_MASK              0x1FF              /**< Bit mask for LEUART_TXDATA */
#define LEUART_TXDATAX_TXDATA_DEFAULT            (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDATA_DEFAULT           0x00000000         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_TXBREAK                   (1 << 13)          /**< Transmit Data As Break */
#define _LEUART_TXDATAX_TXBREAK_SHIFT            13                 /**< Shift value for LEUART_TXBREAK */
#define _LEUART_TXDATAX_TXBREAK_MASK             0x2000             /**< Bit mask for LEUART_TXBREAK */
#define LEUART_TXDATAX_TXBREAK_DEFAULT           (0x00000000 << 13) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXBREAK_DEFAULT          0x00000000         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_TXDISAT                   (1 << 14)          /**< Disable TX After Transmission */
#define _LEUART_TXDATAX_TXDISAT_SHIFT            14                 /**< Shift value for LEUART_TXDISAT */
#define _LEUART_TXDATAX_TXDISAT_MASK             0x4000             /**< Bit mask for LEUART_TXDISAT */
#define LEUART_TXDATAX_TXDISAT_DEFAULT           (0x00000000 << 14) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDISAT_DEFAULT          0x00000000         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_RXENAT                    (1 << 15)          /**< Enable RX After Transmission */
#define _LEUART_TXDATAX_RXENAT_SHIFT             15                 /**< Shift value for LEUART_RXENAT */
#define _LEUART_TXDATAX_RXENAT_MASK              0x8000             /**< Bit mask for LEUART_RXENAT */
#define LEUART_TXDATAX_RXENAT_DEFAULT            (0x00000000 << 15) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_RXENAT_DEFAULT           0x00000000         /**< Mode DEFAULT for LEUART_TXDATAX */

/** Bit fields for LEUART TXDATA */
#define _LEUART_TXDATA_RESETVALUE                0x00000000        /**< Default value for LEUART_TXDATA */
#define _LEUART_TXDATA_MASK                      0x000000FF        /**< Mask for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_SHIFT              0                 /**< Shift value for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_MASK               0xFF              /**< Bit mask for LEUART_TXDATA */
#define LEUART_TXDATA_TXDATA_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_DEFAULT            0x00000000        /**< Mode DEFAULT for LEUART_TXDATA */

/** Bit fields for LEUART IF */
#define _LEUART_IF_RESETVALUE                    0x00000002         /**< Default value for LEUART_IF */
#define _LEUART_IF_MASK                          0x000007FF         /**< Mask for LEUART_IF */
#define LEUART_IF_TXC                            (1 << 0)           /**< TX Complete Interrupt Flag */
#define _LEUART_IF_TXC_SHIFT                     0                  /**< Shift value for LEUART_TXC */
#define _LEUART_IF_TXC_MASK                      0x1                /**< Bit mask for LEUART_TXC */
#define LEUART_IF_TXC_DEFAULT                    (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXC_DEFAULT                   0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_TXBL                           (1 << 1)           /**< TX Buffer Level Interrupt Flag */
#define _LEUART_IF_TXBL_SHIFT                    1                  /**< Shift value for LEUART_TXBL */
#define _LEUART_IF_TXBL_MASK                     0x2                /**< Bit mask for LEUART_TXBL */
#define LEUART_IF_TXBL_DEFAULT                   (0x00000001 << 1)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXBL_DEFAULT                  0x00000001         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXDATAV                        (1 << 2)           /**< RX Data Valid Interrupt Flag */
#define _LEUART_IF_RXDATAV_SHIFT                 2                  /**< Shift value for LEUART_RXDATAV */
#define _LEUART_IF_RXDATAV_MASK                  0x4                /**< Bit mask for LEUART_RXDATAV */
#define LEUART_IF_RXDATAV_DEFAULT                (0x00000000 << 2)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXDATAV_DEFAULT               0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXOF                           (1 << 3)           /**< RX Overflow Interrupt Flag */
#define _LEUART_IF_RXOF_SHIFT                    3                  /**< Shift value for LEUART_RXOF */
#define _LEUART_IF_RXOF_MASK                     0x8                /**< Bit mask for LEUART_RXOF */
#define LEUART_IF_RXOF_DEFAULT                   (0x00000000 << 3)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXOF_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXUF                           (1 << 4)           /**< RX Underflow Interrupt Flag */
#define _LEUART_IF_RXUF_SHIFT                    4                  /**< Shift value for LEUART_RXUF */
#define _LEUART_IF_RXUF_MASK                     0x10               /**< Bit mask for LEUART_RXUF */
#define LEUART_IF_RXUF_DEFAULT                   (0x00000000 << 4)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXUF_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_TXOF                           (1 << 5)           /**< TX Overflow Interrupt Flag */
#define _LEUART_IF_TXOF_SHIFT                    5                  /**< Shift value for LEUART_TXOF */
#define _LEUART_IF_TXOF_MASK                     0x20               /**< Bit mask for LEUART_TXOF */
#define LEUART_IF_TXOF_DEFAULT                   (0x00000000 << 5)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXOF_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_PERR                           (1 << 6)           /**< Parity Error Interrupt Flag */
#define _LEUART_IF_PERR_SHIFT                    6                  /**< Shift value for LEUART_PERR */
#define _LEUART_IF_PERR_MASK                     0x40               /**< Bit mask for LEUART_PERR */
#define LEUART_IF_PERR_DEFAULT                   (0x00000000 << 6)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_PERR_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_FERR                           (1 << 7)           /**< Framing Error Interrupt Flag */
#define _LEUART_IF_FERR_SHIFT                    7                  /**< Shift value for LEUART_FERR */
#define _LEUART_IF_FERR_MASK                     0x80               /**< Bit mask for LEUART_FERR */
#define LEUART_IF_FERR_DEFAULT                   (0x00000000 << 7)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_FERR_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_MPAF                           (1 << 8)           /**< Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IF_MPAF_SHIFT                    8                  /**< Shift value for LEUART_MPAF */
#define _LEUART_IF_MPAF_MASK                     0x100              /**< Bit mask for LEUART_MPAF */
#define LEUART_IF_MPAF_DEFAULT                   (0x00000000 << 8)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_MPAF_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_STARTF                         (1 << 9)           /**< Start Frame Interrupt Flag */
#define _LEUART_IF_STARTF_SHIFT                  9                  /**< Shift value for LEUART_STARTF */
#define _LEUART_IF_STARTF_MASK                   0x200              /**< Bit mask for LEUART_STARTF */
#define LEUART_IF_STARTF_DEFAULT                 (0x00000000 << 9)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_STARTF_DEFAULT                0x00000000         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_SIGF                           (1 << 10)          /**< Signal Frame Interrupt Flag */
#define _LEUART_IF_SIGF_SHIFT                    10                 /**< Shift value for LEUART_SIGF */
#define _LEUART_IF_SIGF_MASK                     0x400              /**< Bit mask for LEUART_SIGF */
#define LEUART_IF_SIGF_DEFAULT                   (0x00000000 << 10) /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_SIGF_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IF */

/** Bit fields for LEUART IFS */
#define _LEUART_IFS_RESETVALUE                   0x00000000         /**< Default value for LEUART_IFS */
#define _LEUART_IFS_MASK                         0x000007F9         /**< Mask for LEUART_IFS */
#define LEUART_IFS_TXC                           (1 << 0)           /**< Set TX Complete Interrupt Flag */
#define _LEUART_IFS_TXC_SHIFT                    0                  /**< Shift value for LEUART_TXC */
#define _LEUART_IFS_TXC_MASK                     0x1                /**< Bit mask for LEUART_TXC */
#define LEUART_IFS_TXC_DEFAULT                   (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_TXC_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_RXOF                          (1 << 3)           /**< Set RX Overflow Interrupt Flag */
#define _LEUART_IFS_RXOF_SHIFT                   3                  /**< Shift value for LEUART_RXOF */
#define _LEUART_IFS_RXOF_MASK                    0x8                /**< Bit mask for LEUART_RXOF */
#define LEUART_IFS_RXOF_DEFAULT                  (0x00000000 << 3)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_RXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_RXUF                          (1 << 4)           /**< Set RX Underflow Interrupt Flag */
#define _LEUART_IFS_RXUF_SHIFT                   4                  /**< Shift value for LEUART_RXUF */
#define _LEUART_IFS_RXUF_MASK                    0x10               /**< Bit mask for LEUART_RXUF */
#define LEUART_IFS_RXUF_DEFAULT                  (0x00000000 << 4)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_RXUF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_TXOF                          (1 << 5)           /**< Set TX Overflow Interrupt Flag */
#define _LEUART_IFS_TXOF_SHIFT                   5                  /**< Shift value for LEUART_TXOF */
#define _LEUART_IFS_TXOF_MASK                    0x20               /**< Bit mask for LEUART_TXOF */
#define LEUART_IFS_TXOF_DEFAULT                  (0x00000000 << 5)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_TXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_PERR                          (1 << 6)           /**< Set Parity Error Interrupt Flag */
#define _LEUART_IFS_PERR_SHIFT                   6                  /**< Shift value for LEUART_PERR */
#define _LEUART_IFS_PERR_MASK                    0x40               /**< Bit mask for LEUART_PERR */
#define LEUART_IFS_PERR_DEFAULT                  (0x00000000 << 6)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_PERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_FERR                          (1 << 7)           /**< Set Framing Error Interrupt Flag */
#define _LEUART_IFS_FERR_SHIFT                   7                  /**< Shift value for LEUART_FERR */
#define _LEUART_IFS_FERR_MASK                    0x80               /**< Bit mask for LEUART_FERR */
#define LEUART_IFS_FERR_DEFAULT                  (0x00000000 << 7)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_FERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_MPAF                          (1 << 8)           /**< Set Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IFS_MPAF_SHIFT                   8                  /**< Shift value for LEUART_MPAF */
#define _LEUART_IFS_MPAF_MASK                    0x100              /**< Bit mask for LEUART_MPAF */
#define LEUART_IFS_MPAF_DEFAULT                  (0x00000000 << 8)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_MPAF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_STARTF                        (1 << 9)           /**< Set Start Frame Interrupt Flag */
#define _LEUART_IFS_STARTF_SHIFT                 9                  /**< Shift value for LEUART_STARTF */
#define _LEUART_IFS_STARTF_MASK                  0x200              /**< Bit mask for LEUART_STARTF */
#define LEUART_IFS_STARTF_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_STARTF_DEFAULT               0x00000000         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_SIGF                          (1 << 10)          /**< Set Signal Frame Interrupt Flag */
#define _LEUART_IFS_SIGF_SHIFT                   10                 /**< Shift value for LEUART_SIGF */
#define _LEUART_IFS_SIGF_MASK                    0x400              /**< Bit mask for LEUART_SIGF */
#define LEUART_IFS_SIGF_DEFAULT                  (0x00000000 << 10) /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_SIGF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFS */

/** Bit fields for LEUART IFC */
#define _LEUART_IFC_RESETVALUE                   0x00000000         /**< Default value for LEUART_IFC */
#define _LEUART_IFC_MASK                         0x000007F9         /**< Mask for LEUART_IFC */
#define LEUART_IFC_TXC                           (1 << 0)           /**< Clear TX Complete Interrupt Flag */
#define _LEUART_IFC_TXC_SHIFT                    0                  /**< Shift value for LEUART_TXC */
#define _LEUART_IFC_TXC_MASK                     0x1                /**< Bit mask for LEUART_TXC */
#define LEUART_IFC_TXC_DEFAULT                   (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_TXC_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_RXOF                          (1 << 3)           /**< Clear RX Overflow Interrupt Flag */
#define _LEUART_IFC_RXOF_SHIFT                   3                  /**< Shift value for LEUART_RXOF */
#define _LEUART_IFC_RXOF_MASK                    0x8                /**< Bit mask for LEUART_RXOF */
#define LEUART_IFC_RXOF_DEFAULT                  (0x00000000 << 3)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_RXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_RXUF                          (1 << 4)           /**< Clear RX Underflow Interrupt Flag */
#define _LEUART_IFC_RXUF_SHIFT                   4                  /**< Shift value for LEUART_RXUF */
#define _LEUART_IFC_RXUF_MASK                    0x10               /**< Bit mask for LEUART_RXUF */
#define LEUART_IFC_RXUF_DEFAULT                  (0x00000000 << 4)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_RXUF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_TXOF                          (1 << 5)           /**< Clear TX Overflow Interrupt Flag */
#define _LEUART_IFC_TXOF_SHIFT                   5                  /**< Shift value for LEUART_TXOF */
#define _LEUART_IFC_TXOF_MASK                    0x20               /**< Bit mask for LEUART_TXOF */
#define LEUART_IFC_TXOF_DEFAULT                  (0x00000000 << 5)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_TXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_PERR                          (1 << 6)           /**< Clear Parity Error Interrupt Flag */
#define _LEUART_IFC_PERR_SHIFT                   6                  /**< Shift value for LEUART_PERR */
#define _LEUART_IFC_PERR_MASK                    0x40               /**< Bit mask for LEUART_PERR */
#define LEUART_IFC_PERR_DEFAULT                  (0x00000000 << 6)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_PERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_FERR                          (1 << 7)           /**< Clear Framing Error Interrupt Flag */
#define _LEUART_IFC_FERR_SHIFT                   7                  /**< Shift value for LEUART_FERR */
#define _LEUART_IFC_FERR_MASK                    0x80               /**< Bit mask for LEUART_FERR */
#define LEUART_IFC_FERR_DEFAULT                  (0x00000000 << 7)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_FERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_MPAF                          (1 << 8)           /**< Clear Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IFC_MPAF_SHIFT                   8                  /**< Shift value for LEUART_MPAF */
#define _LEUART_IFC_MPAF_MASK                    0x100              /**< Bit mask for LEUART_MPAF */
#define LEUART_IFC_MPAF_DEFAULT                  (0x00000000 << 8)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_MPAF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_STARTF                        (1 << 9)           /**< Clear Start-Frame Interrupt Flag */
#define _LEUART_IFC_STARTF_SHIFT                 9                  /**< Shift value for LEUART_STARTF */
#define _LEUART_IFC_STARTF_MASK                  0x200              /**< Bit mask for LEUART_STARTF */
#define LEUART_IFC_STARTF_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_STARTF_DEFAULT               0x00000000         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_SIGF                          (1 << 10)          /**< Clear Signal-Frame Interrupt Flag */
#define _LEUART_IFC_SIGF_SHIFT                   10                 /**< Shift value for LEUART_SIGF */
#define _LEUART_IFC_SIGF_MASK                    0x400              /**< Bit mask for LEUART_SIGF */
#define LEUART_IFC_SIGF_DEFAULT                  (0x00000000 << 10) /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_SIGF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IFC */

/** Bit fields for LEUART IEN */
#define _LEUART_IEN_RESETVALUE                   0x00000000         /**< Default value for LEUART_IEN */
#define _LEUART_IEN_MASK                         0x000007FF         /**< Mask for LEUART_IEN */
#define LEUART_IEN_TXC                           (1 << 0)           /**< TX Complete Interrupt Enable */
#define _LEUART_IEN_TXC_SHIFT                    0                  /**< Shift value for LEUART_TXC */
#define _LEUART_IEN_TXC_MASK                     0x1                /**< Bit mask for LEUART_TXC */
#define LEUART_IEN_TXC_DEFAULT                   (0x00000000 << 0)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXC_DEFAULT                  0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_TXBL                          (1 << 1)           /**< TX Buffer Level Interrupt Enable */
#define _LEUART_IEN_TXBL_SHIFT                   1                  /**< Shift value for LEUART_TXBL */
#define _LEUART_IEN_TXBL_MASK                    0x2                /**< Bit mask for LEUART_TXBL */
#define LEUART_IEN_TXBL_DEFAULT                  (0x00000000 << 1)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXBL_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXDATAV                       (1 << 2)           /**< RX Data Valid Interrupt Enable */
#define _LEUART_IEN_RXDATAV_SHIFT                2                  /**< Shift value for LEUART_RXDATAV */
#define _LEUART_IEN_RXDATAV_MASK                 0x4                /**< Bit mask for LEUART_RXDATAV */
#define LEUART_IEN_RXDATAV_DEFAULT               (0x00000000 << 2)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXDATAV_DEFAULT              0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXOF                          (1 << 3)           /**< RX Overflow Interrupt Enable */
#define _LEUART_IEN_RXOF_SHIFT                   3                  /**< Shift value for LEUART_RXOF */
#define _LEUART_IEN_RXOF_MASK                    0x8                /**< Bit mask for LEUART_RXOF */
#define LEUART_IEN_RXOF_DEFAULT                  (0x00000000 << 3)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXUF                          (1 << 4)           /**< RX Underflow Interrupt Enable */
#define _LEUART_IEN_RXUF_SHIFT                   4                  /**< Shift value for LEUART_RXUF */
#define _LEUART_IEN_RXUF_MASK                    0x10               /**< Bit mask for LEUART_RXUF */
#define LEUART_IEN_RXUF_DEFAULT                  (0x00000000 << 4)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXUF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_TXOF                          (1 << 5)           /**< TX Overflow Interrupt Enable */
#define _LEUART_IEN_TXOF_SHIFT                   5                  /**< Shift value for LEUART_TXOF */
#define _LEUART_IEN_TXOF_MASK                    0x20               /**< Bit mask for LEUART_TXOF */
#define LEUART_IEN_TXOF_DEFAULT                  (0x00000000 << 5)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXOF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_PERR                          (1 << 6)           /**< Parity Error Interrupt Enable */
#define _LEUART_IEN_PERR_SHIFT                   6                  /**< Shift value for LEUART_PERR */
#define _LEUART_IEN_PERR_MASK                    0x40               /**< Bit mask for LEUART_PERR */
#define LEUART_IEN_PERR_DEFAULT                  (0x00000000 << 6)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_PERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_FERR                          (1 << 7)           /**< Framing Error Interrupt Enable */
#define _LEUART_IEN_FERR_SHIFT                   7                  /**< Shift value for LEUART_FERR */
#define _LEUART_IEN_FERR_MASK                    0x80               /**< Bit mask for LEUART_FERR */
#define LEUART_IEN_FERR_DEFAULT                  (0x00000000 << 7)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_FERR_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_MPAF                          (1 << 8)           /**< Multi-Processor Address Frame Interrupt Enable */
#define _LEUART_IEN_MPAF_SHIFT                   8                  /**< Shift value for LEUART_MPAF */
#define _LEUART_IEN_MPAF_MASK                    0x100              /**< Bit mask for LEUART_MPAF */
#define LEUART_IEN_MPAF_DEFAULT                  (0x00000000 << 8)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_MPAF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_STARTF                        (1 << 9)           /**< Start Frame Interrupt Enable */
#define _LEUART_IEN_STARTF_SHIFT                 9                  /**< Shift value for LEUART_STARTF */
#define _LEUART_IEN_STARTF_MASK                  0x200              /**< Bit mask for LEUART_STARTF */
#define LEUART_IEN_STARTF_DEFAULT                (0x00000000 << 9)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_STARTF_DEFAULT               0x00000000         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_SIGF                          (1 << 10)          /**< Signal Frame Interrupt Enable */
#define _LEUART_IEN_SIGF_SHIFT                   10                 /**< Shift value for LEUART_SIGF */
#define _LEUART_IEN_SIGF_MASK                    0x400              /**< Bit mask for LEUART_SIGF */
#define LEUART_IEN_SIGF_DEFAULT                  (0x00000000 << 10) /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_SIGF_DEFAULT                 0x00000000         /**< Mode DEFAULT for LEUART_IEN */

/** Bit fields for LEUART PULSECTRL */
#define _LEUART_PULSECTRL_RESETVALUE             0x00000000        /**< Default value for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_MASK                   0x0000003F        /**< Mask for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEW_SHIFT           0                 /**< Shift value for LEUART_PULSEW */
#define _LEUART_PULSECTRL_PULSEW_MASK            0xF               /**< Bit mask for LEUART_PULSEW */
#define LEUART_PULSECTRL_PULSEW_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEW_DEFAULT         0x00000000        /**< Mode DEFAULT for LEUART_PULSECTRL */
#define LEUART_PULSECTRL_PULSEEN                 (1 << 4)          /**< Pulse Generator/Extender Enable */
#define _LEUART_PULSECTRL_PULSEEN_SHIFT          4                 /**< Shift value for LEUART_PULSEEN */
#define _LEUART_PULSECTRL_PULSEEN_MASK           0x10              /**< Bit mask for LEUART_PULSEEN */
#define LEUART_PULSECTRL_PULSEEN_DEFAULT         (0x00000000 << 4) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEEN_DEFAULT        0x00000000        /**< Mode DEFAULT for LEUART_PULSECTRL */
#define LEUART_PULSECTRL_PULSEFILT               (1 << 5)          /**< Pulse Filter */
#define _LEUART_PULSECTRL_PULSEFILT_SHIFT        5                 /**< Shift value for LEUART_PULSEFILT */
#define _LEUART_PULSECTRL_PULSEFILT_MASK         0x20              /**< Bit mask for LEUART_PULSEFILT */
#define LEUART_PULSECTRL_PULSEFILT_DEFAULT       (0x00000000 << 5) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEFILT_DEFAULT      0x00000000        /**< Mode DEFAULT for LEUART_PULSECTRL */

/** Bit fields for LEUART FREEZE */
#define _LEUART_FREEZE_RESETVALUE                0x00000000        /**< Default value for LEUART_FREEZE */
#define _LEUART_FREEZE_MASK                      0x00000001        /**< Mask for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE                  (1 << 0)          /**< Register Update Freeze */
#define _LEUART_FREEZE_REGFREEZE_SHIFT           0                 /**< Shift value for LEUART_REGFREEZE */
#define _LEUART_FREEZE_REGFREEZE_MASK            0x1               /**< Bit mask for LEUART_REGFREEZE */
#define LEUART_FREEZE_REGFREEZE_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE_UPDATE           (0x00000000 << 0) /**< Shifted mode UPDATE for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE_FREEZE           (0x00000001 << 0) /**< Shifted mode FREEZE for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_DEFAULT         0x00000000        /**< Mode DEFAULT for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_UPDATE          0x00000000        /**< Mode UPDATE for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_FREEZE          0x00000001        /**< Mode FREEZE for LEUART_FREEZE */

/** Bit fields for LEUART SYNCBUSY */
#define _LEUART_SYNCBUSY_RESETVALUE              0x00000000        /**< Default value for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_MASK                    0x000000FF        /**< Mask for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CTRL                     (1 << 0)          /**< LEUARTn_CTRL Register Busy */
#define _LEUART_SYNCBUSY_CTRL_SHIFT              0                 /**< Shift value for LEUART_CTRL */
#define _LEUART_SYNCBUSY_CTRL_MASK               0x1               /**< Bit mask for LEUART_CTRL */
#define LEUART_SYNCBUSY_CTRL_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CTRL_DEFAULT            0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CMD                      (1 << 1)          /**< LEUARTn_CMD Register Busy */
#define _LEUART_SYNCBUSY_CMD_SHIFT               1                 /**< Shift value for LEUART_CMD */
#define _LEUART_SYNCBUSY_CMD_MASK                0x2               /**< Bit mask for LEUART_CMD */
#define LEUART_SYNCBUSY_CMD_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CMD_DEFAULT             0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CLKDIV                   (1 << 2)          /**< LEUARTn_CLKDIV Register Busy */
#define _LEUART_SYNCBUSY_CLKDIV_SHIFT            2                 /**< Shift value for LEUART_CLKDIV */
#define _LEUART_SYNCBUSY_CLKDIV_MASK             0x4               /**< Bit mask for LEUART_CLKDIV */
#define LEUART_SYNCBUSY_CLKDIV_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CLKDIV_DEFAULT          0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_STARTFRAME               (1 << 3)          /**< LEUARTn_STARTFRAME Register Busy */
#define _LEUART_SYNCBUSY_STARTFRAME_SHIFT        3                 /**< Shift value for LEUART_STARTFRAME */
#define _LEUART_SYNCBUSY_STARTFRAME_MASK         0x8               /**< Bit mask for LEUART_STARTFRAME */
#define LEUART_SYNCBUSY_STARTFRAME_DEFAULT       (0x00000000 << 3) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_STARTFRAME_DEFAULT      0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_SIGFRAME                 (1 << 4)          /**< LEUARTn_SIGFRAME Register Busy */
#define _LEUART_SYNCBUSY_SIGFRAME_SHIFT          4                 /**< Shift value for LEUART_SIGFRAME */
#define _LEUART_SYNCBUSY_SIGFRAME_MASK           0x10              /**< Bit mask for LEUART_SIGFRAME */
#define LEUART_SYNCBUSY_SIGFRAME_DEFAULT         (0x00000000 << 4) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_SIGFRAME_DEFAULT        0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_TXDATAX                  (1 << 5)          /**< LEUARTn_TXDATAX Register Busy */
#define _LEUART_SYNCBUSY_TXDATAX_SHIFT           5                 /**< Shift value for LEUART_TXDATAX */
#define _LEUART_SYNCBUSY_TXDATAX_MASK            0x20              /**< Bit mask for LEUART_TXDATAX */
#define LEUART_SYNCBUSY_TXDATAX_DEFAULT          (0x00000000 << 5) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_TXDATAX_DEFAULT         0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_TXDATA                   (1 << 6)          /**< LEUARTn_TXDATA Register Busy */
#define _LEUART_SYNCBUSY_TXDATA_SHIFT            6                 /**< Shift value for LEUART_TXDATA */
#define _LEUART_SYNCBUSY_TXDATA_MASK             0x40              /**< Bit mask for LEUART_TXDATA */
#define LEUART_SYNCBUSY_TXDATA_DEFAULT           (0x00000000 << 6) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_TXDATA_DEFAULT          0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_PULSECTRL                (1 << 7)          /**< LEUARTn_PULSECTRL Register Busy */
#define _LEUART_SYNCBUSY_PULSECTRL_SHIFT         7                 /**< Shift value for LEUART_PULSECTRL */
#define _LEUART_SYNCBUSY_PULSECTRL_MASK          0x80              /**< Bit mask for LEUART_PULSECTRL */
#define LEUART_SYNCBUSY_PULSECTRL_DEFAULT        (0x00000000 << 7) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_PULSECTRL_DEFAULT       0x00000000        /**< Mode DEFAULT for LEUART_SYNCBUSY */

/** Bit fields for LEUART ROUTE */
#define _LEUART_ROUTE_RESETVALUE                 0x00000000        /**< Default value for LEUART_ROUTE */
#define _LEUART_ROUTE_MASK                       0x00000303        /**< Mask for LEUART_ROUTE */
#define LEUART_ROUTE_RXPEN                       (1 << 0)          /**< RX Pin Enable */
#define _LEUART_ROUTE_RXPEN_SHIFT                0                 /**< Shift value for LEUART_RXPEN */
#define _LEUART_ROUTE_RXPEN_MASK                 0x1               /**< Bit mask for LEUART_RXPEN */
#define LEUART_ROUTE_RXPEN_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_RXPEN_DEFAULT              0x00000000        /**< Mode DEFAULT for LEUART_ROUTE */
#define LEUART_ROUTE_TXPEN                       (1 << 1)          /**< TX Pin Enable */
#define _LEUART_ROUTE_TXPEN_SHIFT                1                 /**< Shift value for LEUART_TXPEN */
#define _LEUART_ROUTE_TXPEN_MASK                 0x2               /**< Bit mask for LEUART_TXPEN */
#define LEUART_ROUTE_TXPEN_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_TXPEN_DEFAULT              0x00000000        /**< Mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_SHIFT             8                 /**< Shift value for LEUART_LOCATION */
#define _LEUART_ROUTE_LOCATION_MASK              0x300             /**< Bit mask for LEUART_LOCATION */
#define LEUART_ROUTE_LOCATION_DEFAULT            (0x00000000 << 8) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC0               (0x00000000 << 8) /**< Shifted mode LOC0 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC1               (0x00000001 << 8) /**< Shifted mode LOC1 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC2               (0x00000002 << 8) /**< Shifted mode LOC2 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC3               (0x00000003 << 8) /**< Shifted mode LOC3 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_DEFAULT           0x00000000        /**< Mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC0              0x00000000        /**< Mode LOC0 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC1              0x00000001        /**< Mode LOC1 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC2              0x00000002        /**< Mode LOC2 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC3              0x00000003        /**< Mode LOC3 for LEUART_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_LETIMER
 * @{
 */

/** Bit fields for LETIMER CTRL */
#define _LETIMER_CTRL_RESETVALUE             0x00000000         /**< Default value for LETIMER_CTRL */
#define _LETIMER_CTRL_MASK                   0x00001FFF         /**< Mask for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_SHIFT          0                  /**< Shift value for LETIMER_REPMODE */
#define _LETIMER_CTRL_REPMODE_MASK           0x3                /**< Bit mask for LETIMER_REPMODE */
#define LETIMER_CTRL_REPMODE_DEFAULT         (0x00000000 << 0)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_FREE            (0x00000000 << 0)  /**< Shifted mode FREE for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_ONESHOT         (0x00000001 << 0)  /**< Shifted mode ONESHOT for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_BUFFERED        (0x00000002 << 0)  /**< Shifted mode BUFFERED for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_DOUBLE          (0x00000003 << 0)  /**< Shifted mode DOUBLE for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_DEFAULT        0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_FREE           0x00000000         /**< Mode FREE for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_ONESHOT        0x00000001         /**< Mode ONESHOT for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_BUFFERED       0x00000002         /**< Mode BUFFERED for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_DOUBLE         0x00000003         /**< Mode DOUBLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_SHIFT            2                  /**< Shift value for LETIMER_UFOA0 */
#define _LETIMER_CTRL_UFOA0_MASK             0xC                /**< Bit mask for LETIMER_UFOA0 */
#define LETIMER_CTRL_UFOA0_DEFAULT           (0x00000000 << 2)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_NONE              (0x00000000 << 2)  /**< Shifted mode NONE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_TOGGLE            (0x00000001 << 2)  /**< Shifted mode TOGGLE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_PULSE             (0x00000002 << 2)  /**< Shifted mode PULSE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_PWM               (0x00000003 << 2)  /**< Shifted mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_DEFAULT          0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_NONE             0x00000000         /**< Mode NONE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_TOGGLE           0x00000001         /**< Mode TOGGLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_PULSE            0x00000002         /**< Mode PULSE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_PWM              0x00000003         /**< Mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_SHIFT            4                  /**< Shift value for LETIMER_UFOA1 */
#define _LETIMER_CTRL_UFOA1_MASK             0x30               /**< Bit mask for LETIMER_UFOA1 */
#define LETIMER_CTRL_UFOA1_DEFAULT           (0x00000000 << 4)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_NONE              (0x00000000 << 4)  /**< Shifted mode NONE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_TOGGLE            (0x00000001 << 4)  /**< Shifted mode TOGGLE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_PULSE             (0x00000002 << 4)  /**< Shifted mode PULSE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_PWM               (0x00000003 << 4)  /**< Shifted mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_DEFAULT          0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_NONE             0x00000000         /**< Mode NONE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_TOGGLE           0x00000001         /**< Mode TOGGLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_PULSE            0x00000002         /**< Mode PULSE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_PWM              0x00000003         /**< Mode PWM for LETIMER_CTRL */
#define LETIMER_CTRL_OPOL0                   (1 << 6)           /**< Output 0 Polarity */
#define _LETIMER_CTRL_OPOL0_SHIFT            6                  /**< Shift value for LETIMER_OPOL0 */
#define _LETIMER_CTRL_OPOL0_MASK             0x40               /**< Bit mask for LETIMER_OPOL0 */
#define LETIMER_CTRL_OPOL0_DEFAULT           (0x00000000 << 6)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_OPOL0_DEFAULT          0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_OPOL1                   (1 << 7)           /**< Output 1 Polarity */
#define _LETIMER_CTRL_OPOL1_SHIFT            7                  /**< Shift value for LETIMER_OPOL1 */
#define _LETIMER_CTRL_OPOL1_MASK             0x80               /**< Bit mask for LETIMER_OPOL1 */
#define LETIMER_CTRL_OPOL1_DEFAULT           (0x00000000 << 7)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_OPOL1_DEFAULT          0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_BUFTOP                  (1 << 8)           /**< Buffered Top */
#define _LETIMER_CTRL_BUFTOP_SHIFT           8                  /**< Shift value for LETIMER_BUFTOP */
#define _LETIMER_CTRL_BUFTOP_MASK            0x100              /**< Bit mask for LETIMER_BUFTOP */
#define LETIMER_CTRL_BUFTOP_DEFAULT          (0x00000000 << 8)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_BUFTOP_DEFAULT         0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_COMP0TOP                (1 << 9)           /**< Compare Value 0 Is Top Value */
#define _LETIMER_CTRL_COMP0TOP_SHIFT         9                  /**< Shift value for LETIMER_COMP0TOP */
#define _LETIMER_CTRL_COMP0TOP_MASK          0x200              /**< Bit mask for LETIMER_COMP0TOP */
#define LETIMER_CTRL_COMP0TOP_DEFAULT        (0x00000000 << 9)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_COMP0TOP_DEFAULT       0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_RTCC0TEN                (1 << 10)          /**< RTC Compare 0 Trigger Enable */
#define _LETIMER_CTRL_RTCC0TEN_SHIFT         10                 /**< Shift value for LETIMER_RTCC0TEN */
#define _LETIMER_CTRL_RTCC0TEN_MASK          0x400              /**< Bit mask for LETIMER_RTCC0TEN */
#define LETIMER_CTRL_RTCC0TEN_DEFAULT        (0x00000000 << 10) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_RTCC0TEN_DEFAULT       0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_RTCC1TEN                (1 << 11)          /**< RTC Compare 1 Trigger Enable */
#define _LETIMER_CTRL_RTCC1TEN_SHIFT         11                 /**< Shift value for LETIMER_RTCC1TEN */
#define _LETIMER_CTRL_RTCC1TEN_MASK          0x800              /**< Bit mask for LETIMER_RTCC1TEN */
#define LETIMER_CTRL_RTCC1TEN_DEFAULT        (0x00000000 << 11) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_RTCC1TEN_DEFAULT       0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_DEBUGRUN                (1 << 12)          /**< Debug Mode Run Enable */
#define _LETIMER_CTRL_DEBUGRUN_SHIFT         12                 /**< Shift value for LETIMER_DEBUGRUN */
#define _LETIMER_CTRL_DEBUGRUN_MASK          0x1000             /**< Bit mask for LETIMER_DEBUGRUN */
#define LETIMER_CTRL_DEBUGRUN_DEFAULT        (0x00000000 << 12) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_DEBUGRUN_DEFAULT       0x00000000         /**< Mode DEFAULT for LETIMER_CTRL */

/** Bit fields for LETIMER CMD */
#define _LETIMER_CMD_RESETVALUE              0x00000000        /**< Default value for LETIMER_CMD */
#define _LETIMER_CMD_MASK                    0x0000001F        /**< Mask for LETIMER_CMD */
#define LETIMER_CMD_START                    (1 << 0)          /**< Start LETIMER */
#define _LETIMER_CMD_START_SHIFT             0                 /**< Shift value for LETIMER_START */
#define _LETIMER_CMD_START_MASK              0x1               /**< Bit mask for LETIMER_START */
#define LETIMER_CMD_START_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_START_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_STOP                     (1 << 1)          /**< Stop LETIMER */
#define _LETIMER_CMD_STOP_SHIFT              1                 /**< Shift value for LETIMER_STOP */
#define _LETIMER_CMD_STOP_MASK               0x2               /**< Bit mask for LETIMER_STOP */
#define LETIMER_CMD_STOP_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_STOP_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CLEAR                    (1 << 2)          /**< Clear LETIMER */
#define _LETIMER_CMD_CLEAR_SHIFT             2                 /**< Shift value for LETIMER_CLEAR */
#define _LETIMER_CMD_CLEAR_MASK              0x4               /**< Bit mask for LETIMER_CLEAR */
#define LETIMER_CMD_CLEAR_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CLEAR_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CTO0                     (1 << 3)          /**< Clear Toggle Output 0 */
#define _LETIMER_CMD_CTO0_SHIFT              3                 /**< Shift value for LETIMER_CTO0 */
#define _LETIMER_CMD_CTO0_MASK               0x8               /**< Bit mask for LETIMER_CTO0 */
#define LETIMER_CMD_CTO0_DEFAULT             (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CTO0_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CTO1                     (1 << 4)          /**< Clear Toggle Output 1 */
#define _LETIMER_CMD_CTO1_SHIFT              4                 /**< Shift value for LETIMER_CTO1 */
#define _LETIMER_CMD_CTO1_MASK               0x10              /**< Bit mask for LETIMER_CTO1 */
#define LETIMER_CMD_CTO1_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CTO1_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_CMD */

/** Bit fields for LETIMER STATUS */
#define _LETIMER_STATUS_RESETVALUE           0x00000000        /**< Default value for LETIMER_STATUS */
#define _LETIMER_STATUS_MASK                 0x00000001        /**< Mask for LETIMER_STATUS */
#define LETIMER_STATUS_RUNNING               (1 << 0)          /**< LETIMER Running */
#define _LETIMER_STATUS_RUNNING_SHIFT        0                 /**< Shift value for LETIMER_RUNNING */
#define _LETIMER_STATUS_RUNNING_MASK         0x1               /**< Bit mask for LETIMER_RUNNING */
#define LETIMER_STATUS_RUNNING_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_STATUS */
#define _LETIMER_STATUS_RUNNING_DEFAULT      0x00000000        /**< Mode DEFAULT for LETIMER_STATUS */

/** Bit fields for LETIMER CNT */
#define _LETIMER_CNT_RESETVALUE              0x00000000        /**< Default value for LETIMER_CNT */
#define _LETIMER_CNT_MASK                    0x0000FFFF        /**< Mask for LETIMER_CNT */
#define _LETIMER_CNT_CNT_SHIFT               0                 /**< Shift value for LETIMER_CNT */
#define _LETIMER_CNT_CNT_MASK                0xFFFF            /**< Bit mask for LETIMER_CNT */
#define LETIMER_CNT_CNT_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_CNT */
#define _LETIMER_CNT_CNT_DEFAULT             0x00000000        /**< Mode DEFAULT for LETIMER_CNT */

/** Bit fields for LETIMER COMP0 */
#define _LETIMER_COMP0_RESETVALUE            0x00000000        /**< Default value for LETIMER_COMP0 */
#define _LETIMER_COMP0_MASK                  0x0000FFFF        /**< Mask for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_SHIFT           0                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_MASK            0xFFFF            /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_COMP0_COMP0_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_DEFAULT         0x00000000        /**< Mode DEFAULT for LETIMER_COMP0 */

/** Bit fields for LETIMER COMP1 */
#define _LETIMER_COMP1_RESETVALUE            0x00000000        /**< Default value for LETIMER_COMP1 */
#define _LETIMER_COMP1_MASK                  0x0000FFFF        /**< Mask for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_SHIFT           0                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_MASK            0xFFFF            /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_COMP1_COMP1_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_DEFAULT         0x00000000        /**< Mode DEFAULT for LETIMER_COMP1 */

/** Bit fields for LETIMER REP0 */
#define _LETIMER_REP0_RESETVALUE             0x00000000        /**< Default value for LETIMER_REP0 */
#define _LETIMER_REP0_MASK                   0x000000FF        /**< Mask for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_SHIFT             0                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_MASK              0xFF              /**< Bit mask for LETIMER_REP0 */
#define LETIMER_REP0_REP0_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_REP0 */

/** Bit fields for LETIMER REP1 */
#define _LETIMER_REP1_RESETVALUE             0x00000000        /**< Default value for LETIMER_REP1 */
#define _LETIMER_REP1_MASK                   0x000000FF        /**< Mask for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_SHIFT             0                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_MASK              0xFF              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_REP1_REP1_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_REP1 */

/** Bit fields for LETIMER IF */
#define _LETIMER_IF_RESETVALUE               0x00000000        /**< Default value for LETIMER_IF */
#define _LETIMER_IF_MASK                     0x0000001F        /**< Mask for LETIMER_IF */
#define LETIMER_IF_COMP0                     (1 << 0)          /**< Compare Match 0 Interrupt Flag */
#define _LETIMER_IF_COMP0_SHIFT              0                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IF_COMP0_MASK               0x1               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IF_COMP0_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_COMP0_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_COMP1                     (1 << 1)          /**< Compare Match 1 Interrupt Flag */
#define _LETIMER_IF_COMP1_SHIFT              1                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IF_COMP1_MASK               0x2               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IF_COMP1_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_COMP1_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_UF                        (1 << 2)          /**< Underflow Interrupt Flag */
#define _LETIMER_IF_UF_SHIFT                 2                 /**< Shift value for LETIMER_UF */
#define _LETIMER_IF_UF_MASK                  0x4               /**< Bit mask for LETIMER_UF */
#define LETIMER_IF_UF_DEFAULT                (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_UF_DEFAULT               0x00000000        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_REP0                      (1 << 3)          /**< Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IF_REP0_SHIFT               3                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IF_REP0_MASK                0x8               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IF_REP0_DEFAULT              (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_REP0_DEFAULT             0x00000000        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_REP1                      (1 << 4)          /**< Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IF_REP1_SHIFT               4                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IF_REP1_MASK                0x10              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IF_REP1_DEFAULT              (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_REP1_DEFAULT             0x00000000        /**< Mode DEFAULT for LETIMER_IF */

/** Bit fields for LETIMER IFS */
#define _LETIMER_IFS_RESETVALUE              0x00000000        /**< Default value for LETIMER_IFS */
#define _LETIMER_IFS_MASK                    0x0000001F        /**< Mask for LETIMER_IFS */
#define LETIMER_IFS_COMP0                    (1 << 0)          /**< Set Compare Match 0 Interrupt Flag */
#define _LETIMER_IFS_COMP0_SHIFT             0                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IFS_COMP0_MASK              0x1               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IFS_COMP0_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_COMP1                    (1 << 1)          /**< Set Compare Match 1 Interrupt Flag */
#define _LETIMER_IFS_COMP1_SHIFT             1                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IFS_COMP1_MASK              0x2               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IFS_COMP1_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_UF                       (1 << 2)          /**< Set Underflow Interrupt Flag */
#define _LETIMER_IFS_UF_SHIFT                2                 /**< Shift value for LETIMER_UF */
#define _LETIMER_IFS_UF_MASK                 0x4               /**< Bit mask for LETIMER_UF */
#define LETIMER_IFS_UF_DEFAULT               (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_REP0                     (1 << 3)          /**< Set Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IFS_REP0_SHIFT              3                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IFS_REP0_MASK               0x8               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IFS_REP0_DEFAULT             (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_REP0_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_REP1                     (1 << 4)          /**< Set Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IFS_REP1_SHIFT              4                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IFS_REP1_MASK               0x10              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IFS_REP1_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_REP1_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IFS */

/** Bit fields for LETIMER IFC */
#define _LETIMER_IFC_RESETVALUE              0x00000000        /**< Default value for LETIMER_IFC */
#define _LETIMER_IFC_MASK                    0x0000001F        /**< Mask for LETIMER_IFC */
#define LETIMER_IFC_COMP0                    (1 << 0)          /**< Clear Compare Match 0 Interrupt Flag */
#define _LETIMER_IFC_COMP0_SHIFT             0                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IFC_COMP0_MASK              0x1               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IFC_COMP0_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_COMP1                    (1 << 1)          /**< Clear Compare Match 1 Interrupt Flag */
#define _LETIMER_IFC_COMP1_SHIFT             1                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IFC_COMP1_MASK              0x2               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IFC_COMP1_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_UF                       (1 << 2)          /**< Clear Underflow Interrupt Flag */
#define _LETIMER_IFC_UF_SHIFT                2                 /**< Shift value for LETIMER_UF */
#define _LETIMER_IFC_UF_MASK                 0x4               /**< Bit mask for LETIMER_UF */
#define LETIMER_IFC_UF_DEFAULT               (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_REP0                     (1 << 3)          /**< Clear Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IFC_REP0_SHIFT              3                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IFC_REP0_MASK               0x8               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IFC_REP0_DEFAULT             (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_REP0_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_REP1                     (1 << 4)          /**< Clear Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IFC_REP1_SHIFT              4                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IFC_REP1_MASK               0x10              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IFC_REP1_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_REP1_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IFC */

/** Bit fields for LETIMER IEN */
#define _LETIMER_IEN_RESETVALUE              0x00000000        /**< Default value for LETIMER_IEN */
#define _LETIMER_IEN_MASK                    0x0000001F        /**< Mask for LETIMER_IEN */
#define LETIMER_IEN_COMP0                    (1 << 0)          /**< Compare Match 0 Interrupt Enable */
#define _LETIMER_IEN_COMP0_SHIFT             0                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IEN_COMP0_MASK              0x1               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IEN_COMP0_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_COMP1                    (1 << 1)          /**< Compare Match 1 Interrupt Enable */
#define _LETIMER_IEN_COMP1_SHIFT             1                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IEN_COMP1_MASK              0x2               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IEN_COMP1_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_UF                       (1 << 2)          /**< Underflow Interrupt Enable */
#define _LETIMER_IEN_UF_SHIFT                2                 /**< Shift value for LETIMER_UF */
#define _LETIMER_IEN_UF_MASK                 0x4               /**< Bit mask for LETIMER_UF */
#define LETIMER_IEN_UF_DEFAULT               (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_REP0                     (1 << 3)          /**< Repeat Counter 0 Interrupt Enable */
#define _LETIMER_IEN_REP0_SHIFT              3                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IEN_REP0_MASK               0x8               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IEN_REP0_DEFAULT             (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_REP0_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_REP1                     (1 << 4)          /**< Repeat Counter 1 Interrupt Enable */
#define _LETIMER_IEN_REP1_SHIFT              4                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IEN_REP1_MASK               0x10              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IEN_REP1_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_REP1_DEFAULT            0x00000000        /**< Mode DEFAULT for LETIMER_IEN */

/** Bit fields for LETIMER FREEZE */
#define _LETIMER_FREEZE_RESETVALUE           0x00000000        /**< Default value for LETIMER_FREEZE */
#define _LETIMER_FREEZE_MASK                 0x00000001        /**< Mask for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE             (1 << 0)          /**< Register Update Freeze */
#define _LETIMER_FREEZE_REGFREEZE_SHIFT      0                 /**< Shift value for LETIMER_REGFREEZE */
#define _LETIMER_FREEZE_REGFREEZE_MASK       0x1               /**< Bit mask for LETIMER_REGFREEZE */
#define LETIMER_FREEZE_REGFREEZE_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE_UPDATE      (0x00000000 << 0) /**< Shifted mode UPDATE for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE_FREEZE      (0x00000001 << 0) /**< Shifted mode FREEZE for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_DEFAULT    0x00000000        /**< Mode DEFAULT for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_UPDATE     0x00000000        /**< Mode UPDATE for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_FREEZE     0x00000001        /**< Mode FREEZE for LETIMER_FREEZE */

/** Bit fields for LETIMER SYNCBUSY */
#define _LETIMER_SYNCBUSY_RESETVALUE         0x00000000        /**< Default value for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_MASK               0x0000003F        /**< Mask for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_CTRL                (1 << 0)          /**< LETIMERn_CTRL Register Busy */
#define _LETIMER_SYNCBUSY_CTRL_SHIFT         0                 /**< Shift value for LETIMER_CTRL */
#define _LETIMER_SYNCBUSY_CTRL_MASK          0x1               /**< Bit mask for LETIMER_CTRL */
#define LETIMER_SYNCBUSY_CTRL_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_CTRL_DEFAULT       0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_CMD                 (1 << 1)          /**< LETIMERn_CMD Register Busy */
#define _LETIMER_SYNCBUSY_CMD_SHIFT          1                 /**< Shift value for LETIMER_CMD */
#define _LETIMER_SYNCBUSY_CMD_MASK           0x2               /**< Bit mask for LETIMER_CMD */
#define LETIMER_SYNCBUSY_CMD_DEFAULT         (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_CMD_DEFAULT        0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_COMP0               (1 << 2)          /**< LETIMERn_COMP0 Register Busy */
#define _LETIMER_SYNCBUSY_COMP0_SHIFT        2                 /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_SYNCBUSY_COMP0_MASK         0x4               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_SYNCBUSY_COMP0_DEFAULT       (0x00000000 << 2) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_COMP0_DEFAULT      0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_COMP1               (1 << 3)          /**< LETIMERn_COMP1 Register Busy */
#define _LETIMER_SYNCBUSY_COMP1_SHIFT        3                 /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_SYNCBUSY_COMP1_MASK         0x8               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_SYNCBUSY_COMP1_DEFAULT       (0x00000000 << 3) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_COMP1_DEFAULT      0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_REP0                (1 << 4)          /**< LETIMERn_REP0 Register Busy */
#define _LETIMER_SYNCBUSY_REP0_SHIFT         4                 /**< Shift value for LETIMER_REP0 */
#define _LETIMER_SYNCBUSY_REP0_MASK          0x10              /**< Bit mask for LETIMER_REP0 */
#define LETIMER_SYNCBUSY_REP0_DEFAULT        (0x00000000 << 4) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_REP0_DEFAULT       0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_REP1                (1 << 5)          /**< LETIMERn_REP1 Register Busy */
#define _LETIMER_SYNCBUSY_REP1_SHIFT         5                 /**< Shift value for LETIMER_REP1 */
#define _LETIMER_SYNCBUSY_REP1_MASK          0x20              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_SYNCBUSY_REP1_DEFAULT        (0x00000000 << 5) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_REP1_DEFAULT       0x00000000        /**< Mode DEFAULT for LETIMER_SYNCBUSY */

/** Bit fields for LETIMER ROUTE */
#define _LETIMER_ROUTE_RESETVALUE            0x00000000        /**< Default value for LETIMER_ROUTE */
#define _LETIMER_ROUTE_MASK                  0x00000303        /**< Mask for LETIMER_ROUTE */
#define LETIMER_ROUTE_OUT0PEN                (1 << 0)          /**< Output 0 Pin Enable */
#define _LETIMER_ROUTE_OUT0PEN_SHIFT         0                 /**< Shift value for LETIMER_OUT0PEN */
#define _LETIMER_ROUTE_OUT0PEN_MASK          0x1               /**< Bit mask for LETIMER_OUT0PEN */
#define LETIMER_ROUTE_OUT0PEN_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_OUT0PEN_DEFAULT       0x00000000        /**< Mode DEFAULT for LETIMER_ROUTE */
#define LETIMER_ROUTE_OUT1PEN                (1 << 1)          /**< Output 1 Pin Enable */
#define _LETIMER_ROUTE_OUT1PEN_SHIFT         1                 /**< Shift value for LETIMER_OUT1PEN */
#define _LETIMER_ROUTE_OUT1PEN_MASK          0x2               /**< Bit mask for LETIMER_OUT1PEN */
#define LETIMER_ROUTE_OUT1PEN_DEFAULT        (0x00000000 << 1) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_OUT1PEN_DEFAULT       0x00000000        /**< Mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_SHIFT        8                 /**< Shift value for LETIMER_LOCATION */
#define _LETIMER_ROUTE_LOCATION_MASK         0x300             /**< Bit mask for LETIMER_LOCATION */
#define LETIMER_ROUTE_LOCATION_DEFAULT       (0x00000000 << 8) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC0          (0x00000000 << 8) /**< Shifted mode LOC0 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC1          (0x00000001 << 8) /**< Shifted mode LOC1 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC2          (0x00000002 << 8) /**< Shifted mode LOC2 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC3          (0x00000003 << 8) /**< Shifted mode LOC3 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_DEFAULT      0x00000000        /**< Mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC0         0x00000000        /**< Mode LOC0 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC1         0x00000001        /**< Mode LOC1 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC2         0x00000002        /**< Mode LOC2 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC3         0x00000003        /**< Mode LOC3 for LETIMER_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_PCNT
 * @{
 */

/** Bit fields for PCNT CTRL */
#define _PCNT_CTRL_RESETVALUE             0x00000000        /**< Default value for PCNT_CTRL */
#define _PCNT_CTRL_MASK                   0x0000003F        /**< Mask for PCNT_CTRL */
#define _PCNT_CTRL_MODE_SHIFT             0                 /**< Shift value for PCNT_MODE */
#define _PCNT_CTRL_MODE_MASK              0x3               /**< Bit mask for PCNT_MODE */
#define PCNT_CTRL_MODE_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_MODE_DISABLE            (0x00000000 << 0) /**< Shifted mode DISABLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_OVRSINGLE          (0x00000001 << 0) /**< Shifted mode OVRSINGLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_EXTCLKSINGLE       (0x00000002 << 0) /**< Shifted mode EXTCLKSINGLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_EXTCLKQUAD         (0x00000003 << 0) /**< Shifted mode EXTCLKQUAD for PCNT_CTRL */
#define _PCNT_CTRL_MODE_DEFAULT           0x00000000        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_MODE_DISABLE           0x00000000        /**< Mode DISABLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_OVRSINGLE         0x00000001        /**< Mode OVRSINGLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_EXTCLKSINGLE      0x00000002        /**< Mode EXTCLKSINGLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_EXTCLKQUAD        0x00000003        /**< Mode EXTCLKQUAD for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR                  (1 << 2)          /**< Non-Quadrature Mode Counter Direction Control */
#define _PCNT_CTRL_CNTDIR_SHIFT           2                 /**< Shift value for PCNT_CNTDIR */
#define _PCNT_CTRL_CNTDIR_MASK            0x4               /**< Bit mask for PCNT_CNTDIR */
#define PCNT_CTRL_CNTDIR_DEFAULT          (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR_UP               (0x00000000 << 2) /**< Shifted mode UP for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR_DOWN             (0x00000001 << 2) /**< Shifted mode DOWN for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_DEFAULT         0x00000000        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_UP              0x00000000        /**< Mode UP for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_DOWN            0x00000001        /**< Mode DOWN for PCNT_CTRL */
#define PCNT_CTRL_EDGE                    (1 << 3)          /**< Edge Select */
#define _PCNT_CTRL_EDGE_SHIFT             3                 /**< Shift value for PCNT_EDGE */
#define _PCNT_CTRL_EDGE_MASK              0x8               /**< Bit mask for PCNT_EDGE */
#define PCNT_CTRL_EDGE_DEFAULT            (0x00000000 << 3) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_EDGE_POS                (0x00000000 << 3) /**< Shifted mode POS for PCNT_CTRL */
#define PCNT_CTRL_EDGE_NEG                (0x00000001 << 3) /**< Shifted mode NEG for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_DEFAULT           0x00000000        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_POS               0x00000000        /**< Mode POS for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_NEG               0x00000001        /**< Mode NEG for PCNT_CTRL */
#define PCNT_CTRL_FILT                    (1 << 4)          /**< Enable Digital Pulse Width Filter */
#define _PCNT_CTRL_FILT_SHIFT             4                 /**< Shift value for PCNT_FILT */
#define _PCNT_CTRL_FILT_MASK              0x10              /**< Bit mask for PCNT_FILT */
#define PCNT_CTRL_FILT_DEFAULT            (0x00000000 << 4) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_FILT_DEFAULT           0x00000000        /**< Mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_RSTEN                   (1 << 5)          /**< Enable PCNT Clock Domain Reset */
#define _PCNT_CTRL_RSTEN_SHIFT            5                 /**< Shift value for PCNT_RSTEN */
#define _PCNT_CTRL_RSTEN_MASK             0x20              /**< Bit mask for PCNT_RSTEN */
#define PCNT_CTRL_RSTEN_DEFAULT           (0x00000000 << 5) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_RSTEN_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_CTRL */

/** Bit fields for PCNT CMD */
#define _PCNT_CMD_RESETVALUE              0x00000000        /**< Default value for PCNT_CMD */
#define _PCNT_CMD_MASK                    0x00000003        /**< Mask for PCNT_CMD */
#define PCNT_CMD_LCNTIM                   (1 << 0)          /**< Load CNT Immediately */
#define _PCNT_CMD_LCNTIM_SHIFT            0                 /**< Shift value for PCNT_LCNTIM */
#define _PCNT_CMD_LCNTIM_MASK             0x1               /**< Bit mask for PCNT_LCNTIM */
#define PCNT_CMD_LCNTIM_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_CMD */
#define _PCNT_CMD_LCNTIM_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_CMD */
#define PCNT_CMD_LTOPBIM                  (1 << 1)          /**< Load TOPB Immediately */
#define _PCNT_CMD_LTOPBIM_SHIFT           1                 /**< Shift value for PCNT_LTOPBIM */
#define _PCNT_CMD_LTOPBIM_MASK            0x2               /**< Bit mask for PCNT_LTOPBIM */
#define PCNT_CMD_LTOPBIM_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_CMD */
#define _PCNT_CMD_LTOPBIM_DEFAULT         0x00000000        /**< Mode DEFAULT for PCNT_CMD */

/** Bit fields for PCNT STATUS */
#define _PCNT_STATUS_RESETVALUE           0x00000000        /**< Default value for PCNT_STATUS */
#define _PCNT_STATUS_MASK                 0x00000001        /**< Mask for PCNT_STATUS */
#define PCNT_STATUS_DIR                   (1 << 0)          /**< Current Counter Direction */
#define _PCNT_STATUS_DIR_SHIFT            0                 /**< Shift value for PCNT_DIR */
#define _PCNT_STATUS_DIR_MASK             0x1               /**< Bit mask for PCNT_DIR */
#define PCNT_STATUS_DIR_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_STATUS */
#define PCNT_STATUS_DIR_UP                (0x00000000 << 0) /**< Shifted mode UP for PCNT_STATUS */
#define PCNT_STATUS_DIR_DOWN              (0x00000001 << 0) /**< Shifted mode DOWN for PCNT_STATUS */
#define _PCNT_STATUS_DIR_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_STATUS */
#define _PCNT_STATUS_DIR_UP               0x00000000        /**< Mode UP for PCNT_STATUS */
#define _PCNT_STATUS_DIR_DOWN             0x00000001        /**< Mode DOWN for PCNT_STATUS */

/** Bit fields for PCNT CNT */
#define _PCNT_CNT_RESETVALUE              0x00000000        /**< Default value for PCNT_CNT */
#define _PCNT_CNT_MASK                    0x0000FFFF        /**< Mask for PCNT_CNT */
#define _PCNT_CNT_CNT_SHIFT               0                 /**< Shift value for PCNT_CNT */
#define _PCNT_CNT_CNT_MASK                0xFFFF            /**< Bit mask for PCNT_CNT */
#define PCNT_CNT_CNT_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_CNT */
#define _PCNT_CNT_CNT_DEFAULT             0x00000000        /**< Mode DEFAULT for PCNT_CNT */

/** Bit fields for PCNT TOP */
#define _PCNT_TOP_RESETVALUE              0x0000FFFF        /**< Default value for PCNT_TOP */
#define _PCNT_TOP_MASK                    0x0000FFFF        /**< Mask for PCNT_TOP */
#define _PCNT_TOP_TOP_SHIFT               0                 /**< Shift value for PCNT_TOP */
#define _PCNT_TOP_TOP_MASK                0xFFFF            /**< Bit mask for PCNT_TOP */
#define PCNT_TOP_TOP_DEFAULT              (0x0000FFFF << 0) /**< Shifted mode DEFAULT for PCNT_TOP */
#define _PCNT_TOP_TOP_DEFAULT             0x0000FFFF        /**< Mode DEFAULT for PCNT_TOP */

/** Bit fields for PCNT TOPB */
#define _PCNT_TOPB_RESETVALUE             0x0000FFFF        /**< Default value for PCNT_TOPB */
#define _PCNT_TOPB_MASK                   0x0000FFFF        /**< Mask for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_SHIFT             0                 /**< Shift value for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_MASK              0xFFFF            /**< Bit mask for PCNT_TOPB */
#define PCNT_TOPB_TOPB_DEFAULT            (0x0000FFFF << 0) /**< Shifted mode DEFAULT for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_DEFAULT           0x0000FFFF        /**< Mode DEFAULT for PCNT_TOPB */

/** Bit fields for PCNT IF */
#define _PCNT_IF_RESETVALUE               0x00000000        /**< Default value for PCNT_IF */
#define _PCNT_IF_MASK                     0x00000007        /**< Mask for PCNT_IF */
#define PCNT_IF_UF                        (1 << 0)          /**< Underflow Interrupt Read Flag */
#define _PCNT_IF_UF_SHIFT                 0                 /**< Shift value for PCNT_UF */
#define _PCNT_IF_UF_MASK                  0x1               /**< Bit mask for PCNT_UF */
#define PCNT_IF_UF_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_UF_DEFAULT               0x00000000        /**< Mode DEFAULT for PCNT_IF */
#define PCNT_IF_OF                        (1 << 1)          /**< Overflow Interrupt Read Flag */
#define _PCNT_IF_OF_SHIFT                 1                 /**< Shift value for PCNT_OF */
#define _PCNT_IF_OF_MASK                  0x2               /**< Bit mask for PCNT_OF */
#define PCNT_IF_OF_DEFAULT                (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_OF_DEFAULT               0x00000000        /**< Mode DEFAULT for PCNT_IF */
#define PCNT_IF_DIRCNG                    (1 << 2)          /**< Direction Change Detect Interrupt Flag */
#define _PCNT_IF_DIRCNG_SHIFT             2                 /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IF_DIRCNG_MASK              0x4               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IF_DIRCNG_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_DIRCNG_DEFAULT           0x00000000        /**< Mode DEFAULT for PCNT_IF */

/** Bit fields for PCNT IFS */
#define _PCNT_IFS_RESETVALUE              0x00000000        /**< Default value for PCNT_IFS */
#define _PCNT_IFS_MASK                    0x00000007        /**< Mask for PCNT_IFS */
#define PCNT_IFS_UF                       (1 << 0)          /**< Underflow interrupt set */
#define _PCNT_IFS_UF_SHIFT                0                 /**< Shift value for PCNT_UF */
#define _PCNT_IFS_UF_MASK                 0x1               /**< Bit mask for PCNT_UF */
#define PCNT_IFS_UF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IFS */
#define PCNT_IFS_OF                       (1 << 1)          /**< Overflow Interrupt Set */
#define _PCNT_IFS_OF_SHIFT                1                 /**< Shift value for PCNT_OF */
#define _PCNT_IFS_OF_MASK                 0x2               /**< Bit mask for PCNT_OF */
#define PCNT_IFS_OF_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IFS */
#define PCNT_IFS_DIRCNG                   (1 << 2)          /**< Direction Change Detect Interrupt Set */
#define _PCNT_IFS_DIRCNG_SHIFT            2                 /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IFS_DIRCNG_MASK             0x4               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IFS_DIRCNG_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_DIRCNG_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_IFS */

/** Bit fields for PCNT IFC */
#define _PCNT_IFC_RESETVALUE              0x00000000        /**< Default value for PCNT_IFC */
#define _PCNT_IFC_MASK                    0x00000007        /**< Mask for PCNT_IFC */
#define PCNT_IFC_UF                       (1 << 0)          /**< Underflow Interrupt Clear */
#define _PCNT_IFC_UF_SHIFT                0                 /**< Shift value for PCNT_UF */
#define _PCNT_IFC_UF_MASK                 0x1               /**< Bit mask for PCNT_UF */
#define PCNT_IFC_UF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IFC */
#define PCNT_IFC_OF                       (1 << 1)          /**< Overflow Interrupt Clear */
#define _PCNT_IFC_OF_SHIFT                1                 /**< Shift value for PCNT_OF */
#define _PCNT_IFC_OF_MASK                 0x2               /**< Bit mask for PCNT_OF */
#define PCNT_IFC_OF_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IFC */
#define PCNT_IFC_DIRCNG                   (1 << 2)          /**< Direction Change Detect Interrupt Clear */
#define _PCNT_IFC_DIRCNG_SHIFT            2                 /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IFC_DIRCNG_MASK             0x4               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IFC_DIRCNG_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_DIRCNG_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_IFC */

/** Bit fields for PCNT IEN */
#define _PCNT_IEN_RESETVALUE              0x00000000        /**< Default value for PCNT_IEN */
#define _PCNT_IEN_MASK                    0x00000007        /**< Mask for PCNT_IEN */
#define PCNT_IEN_UF                       (1 << 0)          /**< Underflow Interrupt Enable */
#define _PCNT_IEN_UF_SHIFT                0                 /**< Shift value for PCNT_UF */
#define _PCNT_IEN_UF_MASK                 0x1               /**< Bit mask for PCNT_UF */
#define PCNT_IEN_UF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_UF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IEN */
#define PCNT_IEN_OF                       (1 << 1)          /**< Overflow Interrupt Enable */
#define _PCNT_IEN_OF_SHIFT                1                 /**< Shift value for PCNT_OF */
#define _PCNT_IEN_OF_MASK                 0x2               /**< Bit mask for PCNT_OF */
#define PCNT_IEN_OF_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for PCNT_IEN */
#define PCNT_IEN_DIRCNG                   (1 << 2)          /**< Direction Change Detect Interrupt Enable */
#define _PCNT_IEN_DIRCNG_SHIFT            2                 /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IEN_DIRCNG_MASK             0x4               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IEN_DIRCNG_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_DIRCNG_DEFAULT          0x00000000        /**< Mode DEFAULT for PCNT_IEN */

/** Bit fields for PCNT ROUTE */
#define _PCNT_ROUTE_RESETVALUE            0x00000000        /**< Default value for PCNT_ROUTE */
#define _PCNT_ROUTE_MASK                  0x00000300        /**< Mask for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_SHIFT        8                 /**< Shift value for PCNT_LOCATION */
#define _PCNT_ROUTE_LOCATION_MASK         0x300             /**< Bit mask for PCNT_LOCATION */
#define PCNT_ROUTE_LOCATION_DEFAULT       (0x00000000 << 8) /**< Shifted mode DEFAULT for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC0          (0x00000000 << 8) /**< Shifted mode LOC0 for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC1          (0x00000001 << 8) /**< Shifted mode LOC1 for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC2          (0x00000002 << 8) /**< Shifted mode LOC2 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_DEFAULT      0x00000000        /**< Mode DEFAULT for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC0         0x00000000        /**< Mode LOC0 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC1         0x00000001        /**< Mode LOC1 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC2         0x00000002        /**< Mode LOC2 for PCNT_ROUTE */

/** Bit fields for PCNT FREEZE */
#define _PCNT_FREEZE_RESETVALUE           0x00000000        /**< Default value for PCNT_FREEZE */
#define _PCNT_FREEZE_MASK                 0x00000001        /**< Mask for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE             (1 << 0)          /**< Register Update Freeze */
#define _PCNT_FREEZE_REGFREEZE_SHIFT      0                 /**< Shift value for PCNT_REGFREEZE */
#define _PCNT_FREEZE_REGFREEZE_MASK       0x1               /**< Bit mask for PCNT_REGFREEZE */
#define PCNT_FREEZE_REGFREEZE_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE_UPDATE      (0x00000000 << 0) /**< Shifted mode UPDATE for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE_FREEZE      (0x00000001 << 0) /**< Shifted mode FREEZE for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_DEFAULT    0x00000000        /**< Mode DEFAULT for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_UPDATE     0x00000000        /**< Mode UPDATE for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_FREEZE     0x00000001        /**< Mode FREEZE for PCNT_FREEZE */

/** Bit fields for PCNT SYNCBUSY */
#define _PCNT_SYNCBUSY_RESETVALUE         0x00000000        /**< Default value for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_MASK               0x00000007        /**< Mask for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_CTRL                (1 << 0)          /**< PCNTn_CTRL Register Busy */
#define _PCNT_SYNCBUSY_CTRL_SHIFT         0                 /**< Shift value for PCNT_CTRL */
#define _PCNT_SYNCBUSY_CTRL_MASK          0x1               /**< Bit mask for PCNT_CTRL */
#define PCNT_SYNCBUSY_CTRL_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_CTRL_DEFAULT       0x00000000        /**< Mode DEFAULT for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_CMD                 (1 << 1)          /**< PCNTn_CMD Register Busy */
#define _PCNT_SYNCBUSY_CMD_SHIFT          1                 /**< Shift value for PCNT_CMD */
#define _PCNT_SYNCBUSY_CMD_MASK           0x2               /**< Bit mask for PCNT_CMD */
#define PCNT_SYNCBUSY_CMD_DEFAULT         (0x00000000 << 1) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_CMD_DEFAULT        0x00000000        /**< Mode DEFAULT for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_TOPB                (1 << 2)          /**< PCNTn_TOPB Register Busy */
#define _PCNT_SYNCBUSY_TOPB_SHIFT         2                 /**< Shift value for PCNT_TOPB */
#define _PCNT_SYNCBUSY_TOPB_MASK          0x4               /**< Bit mask for PCNT_TOPB */
#define PCNT_SYNCBUSY_TOPB_DEFAULT        (0x00000000 << 2) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_TOPB_DEFAULT       0x00000000        /**< Mode DEFAULT for PCNT_SYNCBUSY */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_I2C
 * @{
 */

/** Bit fields for I2C CTRL */
#define _I2C_CTRL_RESETVALUE              0x00000000         /**< Default value for I2C_CTRL */
#define _I2C_CTRL_MASK                    0x0007B37F         /**< Mask for I2C_CTRL */
#define I2C_CTRL_EN                       (1 << 0)           /**< I2C Enable */
#define _I2C_CTRL_EN_SHIFT                0                  /**< Shift value for I2C_EN */
#define _I2C_CTRL_EN_MASK                 0x1                /**< Bit mask for I2C_EN */
#define I2C_CTRL_EN_DEFAULT               (0x00000000 << 0)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_EN_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_SLAVE                    (1 << 1)           /**< Addressable as Slave */
#define _I2C_CTRL_SLAVE_SHIFT             1                  /**< Shift value for I2C_SLAVE */
#define _I2C_CTRL_SLAVE_MASK              0x2                /**< Bit mask for I2C_SLAVE */
#define I2C_CTRL_SLAVE_DEFAULT            (0x00000000 << 1)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_SLAVE_DISABLE            (0x00000000 << 1)  /**< Shifted mode DISABLE for I2C_CTRL */
#define I2C_CTRL_SLAVE_ENABLE             (0x00000001 << 1)  /**< Shifted mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_SLAVE_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_SLAVE_DISABLE           0x00000000         /**< Mode DISABLE for I2C_CTRL */
#define _I2C_CTRL_SLAVE_ENABLE            0x00000001         /**< Mode ENABLE for I2C_CTRL */
#define I2C_CTRL_AUTOACK                  (1 << 2)           /**< Automatic Acknowledge */
#define _I2C_CTRL_AUTOACK_SHIFT           2                  /**< Shift value for I2C_AUTOACK */
#define _I2C_CTRL_AUTOACK_MASK            0x4                /**< Bit mask for I2C_AUTOACK */
#define I2C_CTRL_AUTOACK_DEFAULT          (0x00000000 << 2)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOACK_DISABLE          (0x00000000 << 2)  /**< Shifted mode DISABLE for I2C_CTRL */
#define I2C_CTRL_AUTOACK_ENABLE           (0x00000001 << 2)  /**< Shifted mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOACK_DEFAULT         0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOACK_DISABLE         0x00000000         /**< Mode DISABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOACK_ENABLE          0x00000001         /**< Mode ENABLE for I2C_CTRL */
#define I2C_CTRL_AUTOSE                   (1 << 3)           /**< Automatic STOP when Empty */
#define _I2C_CTRL_AUTOSE_SHIFT            3                  /**< Shift value for I2C_AUTOSE */
#define _I2C_CTRL_AUTOSE_MASK             0x8                /**< Bit mask for I2C_AUTOSE */
#define I2C_CTRL_AUTOSE_DEFAULT           (0x00000000 << 3)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOSE_DISABLE           (0x00000000 << 3)  /**< Shifted mode DISABLE for I2C_CTRL */
#define I2C_CTRL_AUTOSE_ENABLE            (0x00000001 << 3)  /**< Shifted mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOSE_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOSE_DISABLE          0x00000000         /**< Mode DISABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOSE_ENABLE           0x00000001         /**< Mode ENABLE for I2C_CTRL */
#define I2C_CTRL_AUTOSN                   (1 << 4)           /**< Automatic STOP on NACK */
#define _I2C_CTRL_AUTOSN_SHIFT            4                  /**< Shift value for I2C_AUTOSN */
#define _I2C_CTRL_AUTOSN_MASK             0x10               /**< Bit mask for I2C_AUTOSN */
#define I2C_CTRL_AUTOSN_DEFAULT           (0x00000000 << 4)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOSN_DISABLE           (0x00000000 << 4)  /**< Shifted mode DISABLE for I2C_CTRL */
#define I2C_CTRL_AUTOSN_ENABLE            (0x00000001 << 4)  /**< Shifted mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOSN_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOSN_DISABLE          0x00000000         /**< Mode DISABLE for I2C_CTRL */
#define _I2C_CTRL_AUTOSN_ENABLE           0x00000001         /**< Mode ENABLE for I2C_CTRL */
#define I2C_CTRL_ARBDIS                   (1 << 5)           /**< Arbitration Disable */
#define _I2C_CTRL_ARBDIS_SHIFT            5                  /**< Shift value for I2C_ARBDIS */
#define _I2C_CTRL_ARBDIS_MASK             0x20               /**< Bit mask for I2C_ARBDIS */
#define I2C_CTRL_ARBDIS_DEFAULT           (0x00000000 << 5)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_ARBDIS_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_GCAMEN                   (1 << 6)           /**< General Call Address Match Enable */
#define _I2C_CTRL_GCAMEN_SHIFT            6                  /**< Shift value for I2C_GCAMEN */
#define _I2C_CTRL_GCAMEN_MASK             0x40               /**< Bit mask for I2C_GCAMEN */
#define I2C_CTRL_GCAMEN_DEFAULT           (0x00000000 << 6)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_GCAMEN_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLHR_SHIFT              8                  /**< Shift value for I2C_CLHR */
#define _I2C_CTRL_CLHR_MASK               0x300              /**< Bit mask for I2C_CLHR */
#define I2C_CTRL_CLHR_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_CLHR_STANDARD            (0x00000000 << 8)  /**< Shifted mode STANDARD for I2C_CTRL */
#define I2C_CTRL_CLHR_ASYMMETRIC          (0x00000001 << 8)  /**< Shifted mode ASYMMETRIC for I2C_CTRL */
#define I2C_CTRL_CLHR_FAST                (0x00000002 << 8)  /**< Shifted mode FAST for I2C_CTRL */
#define _I2C_CTRL_CLHR_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLHR_STANDARD           0x00000000         /**< Mode STANDARD for I2C_CTRL */
#define _I2C_CTRL_CLHR_ASYMMETRIC         0x00000001         /**< Mode ASYMMETRIC for I2C_CTRL */
#define _I2C_CTRL_CLHR_FAST               0x00000002         /**< Mode FAST for I2C_CTRL */
#define _I2C_CTRL_BITO_SHIFT              12                 /**< Shift value for I2C_BITO */
#define _I2C_CTRL_BITO_MASK               0x3000             /**< Bit mask for I2C_BITO */
#define I2C_CTRL_BITO_DEFAULT             (0x00000000 << 12) /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_BITO_OFF                 (0x00000000 << 12) /**< Shifted mode OFF for I2C_CTRL */
#define I2C_CTRL_BITO_40PCC               (0x00000001 << 12) /**< Shifted mode 40PCC for I2C_CTRL */
#define I2C_CTRL_BITO_80PCC               (0x00000002 << 12) /**< Shifted mode 80PCC for I2C_CTRL */
#define I2C_CTRL_BITO_160PCC              (0x00000003 << 12) /**< Shifted mode 160PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_BITO_OFF                0x00000000         /**< Mode OFF for I2C_CTRL */
#define _I2C_CTRL_BITO_40PCC              0x00000001         /**< Mode 40PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_80PCC              0x00000002         /**< Mode 80PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_160PCC             0x00000003         /**< Mode 160PCC for I2C_CTRL */
#define I2C_CTRL_GIBITO                   (1 << 15)          /**< Go Idle on Bus Idle Timeout  */
#define _I2C_CTRL_GIBITO_SHIFT            15                 /**< Shift value for I2C_GIBITO */
#define _I2C_CTRL_GIBITO_MASK             0x8000             /**< Bit mask for I2C_GIBITO */
#define I2C_CTRL_GIBITO_DEFAULT           (0x00000000 << 15) /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_GIBITO_DISABLE           (0x00000000 << 15) /**< Shifted mode DISABLE for I2C_CTRL */
#define I2C_CTRL_GIBITO_ENABLE            (0x00000001 << 15) /**< Shifted mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_GIBITO_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_GIBITO_DISABLE          0x00000000         /**< Mode DISABLE for I2C_CTRL */
#define _I2C_CTRL_GIBITO_ENABLE           0x00000001         /**< Mode ENABLE for I2C_CTRL */
#define _I2C_CTRL_CLTO_SHIFT              16                 /**< Shift value for I2C_CLTO */
#define _I2C_CTRL_CLTO_MASK               0x70000            /**< Bit mask for I2C_CLTO */
#define I2C_CTRL_CLTO_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_CLTO_OFF                 (0x00000000 << 16) /**< Shifted mode OFF for I2C_CTRL */
#define I2C_CTRL_CLTO_40PCC               (0x00000001 << 16) /**< Shifted mode 40PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_80PCC               (0x00000002 << 16) /**< Shifted mode 80PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_160PCC              (0x00000003 << 16) /**< Shifted mode 160PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_320PPC              (0x00000004 << 16) /**< Shifted mode 320PPC for I2C_CTRL */
#define I2C_CTRL_CLTO_1024PPC             (0x00000005 << 16) /**< Shifted mode 1024PPC for I2C_CTRL */
#define _I2C_CTRL_CLTO_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLTO_OFF                0x00000000         /**< Mode OFF for I2C_CTRL */
#define _I2C_CTRL_CLTO_40PCC              0x00000001         /**< Mode 40PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_80PCC              0x00000002         /**< Mode 80PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_160PCC             0x00000003         /**< Mode 160PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_320PPC             0x00000004         /**< Mode 320PPC for I2C_CTRL */
#define _I2C_CTRL_CLTO_1024PPC            0x00000005         /**< Mode 1024PPC for I2C_CTRL */

/** Bit fields for I2C CMD */
#define _I2C_CMD_RESETVALUE               0x00000000        /**< Default value for I2C_CMD */
#define _I2C_CMD_MASK                     0x000000FF        /**< Mask for I2C_CMD */
#define I2C_CMD_START                     (1 << 0)          /**< Send start condition */
#define _I2C_CMD_START_SHIFT              0                 /**< Shift value for I2C_START */
#define _I2C_CMD_START_MASK               0x1               /**< Bit mask for I2C_START */
#define I2C_CMD_START_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_START_DEFAULT            0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_STOP                      (1 << 1)          /**< Send stop condition */
#define _I2C_CMD_STOP_SHIFT               1                 /**< Shift value for I2C_STOP */
#define _I2C_CMD_STOP_MASK                0x2               /**< Bit mask for I2C_STOP */
#define I2C_CMD_STOP_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_STOP_DEFAULT             0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_ACK                       (1 << 2)          /**< Send ACK */
#define _I2C_CMD_ACK_SHIFT                2                 /**< Shift value for I2C_ACK */
#define _I2C_CMD_ACK_MASK                 0x4               /**< Bit mask for I2C_ACK */
#define I2C_CMD_ACK_DEFAULT               (0x00000000 << 2) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_ACK_DEFAULT              0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_NACK                      (1 << 3)          /**< Send NACK */
#define _I2C_CMD_NACK_SHIFT               3                 /**< Shift value for I2C_NACK */
#define _I2C_CMD_NACK_MASK                0x8               /**< Bit mask for I2C_NACK */
#define I2C_CMD_NACK_DEFAULT              (0x00000000 << 3) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_NACK_DEFAULT             0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CONT                      (1 << 4)          /**< Continue transmission */
#define _I2C_CMD_CONT_SHIFT               4                 /**< Shift value for I2C_CONT */
#define _I2C_CMD_CONT_MASK                0x10              /**< Bit mask for I2C_CONT */
#define I2C_CMD_CONT_DEFAULT              (0x00000000 << 4) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CONT_DEFAULT             0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_ABORT                     (1 << 5)          /**< Abort transmission */
#define _I2C_CMD_ABORT_SHIFT              5                 /**< Shift value for I2C_ABORT */
#define _I2C_CMD_ABORT_MASK               0x20              /**< Bit mask for I2C_ABORT */
#define I2C_CMD_ABORT_DEFAULT             (0x00000000 << 5) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_ABORT_DEFAULT            0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CLEARTX                   (1 << 6)          /**< Clear TX */
#define _I2C_CMD_CLEARTX_SHIFT            6                 /**< Shift value for I2C_CLEARTX */
#define _I2C_CMD_CLEARTX_MASK             0x40              /**< Bit mask for I2C_CLEARTX */
#define I2C_CMD_CLEARTX_DEFAULT           (0x00000000 << 6) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CLEARTX_DEFAULT          0x00000000        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CLEARPC                   (1 << 7)          /**< Clear Pending Commands */
#define _I2C_CMD_CLEARPC_SHIFT            7                 /**< Shift value for I2C_CLEARPC */
#define _I2C_CMD_CLEARPC_MASK             0x80              /**< Bit mask for I2C_CLEARPC */
#define I2C_CMD_CLEARPC_DEFAULT           (0x00000000 << 7) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CLEARPC_DEFAULT          0x00000000        /**< Mode DEFAULT for I2C_CMD */

/** Bit fields for I2C STATE */
#define _I2C_STATE_RESETVALUE             0x00000001        /**< Default value for I2C_STATE */
#define _I2C_STATE_MASK                   0x000000FF        /**< Mask for I2C_STATE */
#define I2C_STATE_BUSY                    (1 << 0)          /**< Bus Busy */
#define _I2C_STATE_BUSY_SHIFT             0                 /**< Shift value for I2C_BUSY */
#define _I2C_STATE_BUSY_MASK              0x1               /**< Bit mask for I2C_BUSY */
#define I2C_STATE_BUSY_DEFAULT            (0x00000001 << 0) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_BUSY_DEFAULT           0x00000001        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_MASTER                  (1 << 1)          /**< Master */
#define _I2C_STATE_MASTER_SHIFT           1                 /**< Shift value for I2C_MASTER */
#define _I2C_STATE_MASTER_MASK            0x2               /**< Bit mask for I2C_MASTER */
#define I2C_STATE_MASTER_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_MASTER_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_TRANSMITTER             (1 << 2)          /**< Transmitter */
#define _I2C_STATE_TRANSMITTER_SHIFT      2                 /**< Shift value for I2C_TRANSMITTER */
#define _I2C_STATE_TRANSMITTER_MASK       0x4               /**< Bit mask for I2C_TRANSMITTER */
#define I2C_STATE_TRANSMITTER_DEFAULT     (0x00000000 << 2) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_TRANSMITTER_DEFAULT    0x00000000        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_NACKED                  (1 << 3)          /**< Nack Received */
#define _I2C_STATE_NACKED_SHIFT           3                 /**< Shift value for I2C_NACKED */
#define _I2C_STATE_NACKED_MASK            0x8               /**< Bit mask for I2C_NACKED */
#define I2C_STATE_NACKED_DEFAULT          (0x00000000 << 3) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_NACKED_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_BUSHOLD                 (1 << 4)          /**< Bus Held */
#define _I2C_STATE_BUSHOLD_SHIFT          4                 /**< Shift value for I2C_BUSHOLD */
#define _I2C_STATE_BUSHOLD_MASK           0x10              /**< Bit mask for I2C_BUSHOLD */
#define I2C_STATE_BUSHOLD_DEFAULT         (0x00000000 << 4) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_BUSHOLD_DEFAULT        0x00000000        /**< Mode DEFAULT for I2C_STATE */
#define _I2C_STATE_STATE_SHIFT            5                 /**< Shift value for I2C_STATE */
#define _I2C_STATE_STATE_MASK             0xE0              /**< Bit mask for I2C_STATE */
#define I2C_STATE_STATE_DEFAULT           (0x00000000 << 5) /**< Shifted mode DEFAULT for I2C_STATE */
#define I2C_STATE_STATE_IDLE              (0x00000000 << 5) /**< Shifted mode IDLE for I2C_STATE */
#define I2C_STATE_STATE_WAIT              (0x00000001 << 5) /**< Shifted mode WAIT for I2C_STATE */
#define I2C_STATE_STATE_START             (0x00000002 << 5) /**< Shifted mode START for I2C_STATE */
#define I2C_STATE_STATE_ADDR              (0x00000003 << 5) /**< Shifted mode ADDR for I2C_STATE */
#define I2C_STATE_STATE_ADDRACK           (0x00000004 << 5) /**< Shifted mode ADDRACK for I2C_STATE */
#define I2C_STATE_STATE_DATA              (0x00000005 << 5) /**< Shifted mode DATA for I2C_STATE */
#define I2C_STATE_STATE_DATAACK           (0x00000006 << 5) /**< Shifted mode DATAACK for I2C_STATE */
#define _I2C_STATE_STATE_DEFAULT          0x00000000        /**< Mode DEFAULT for I2C_STATE */
#define _I2C_STATE_STATE_IDLE             0x00000000        /**< Mode IDLE for I2C_STATE */
#define _I2C_STATE_STATE_WAIT             0x00000001        /**< Mode WAIT for I2C_STATE */
#define _I2C_STATE_STATE_START            0x00000002        /**< Mode START for I2C_STATE */
#define _I2C_STATE_STATE_ADDR             0x00000003        /**< Mode ADDR for I2C_STATE */
#define _I2C_STATE_STATE_ADDRACK          0x00000004        /**< Mode ADDRACK for I2C_STATE */
#define _I2C_STATE_STATE_DATA             0x00000005        /**< Mode DATA for I2C_STATE */
#define _I2C_STATE_STATE_DATAACK          0x00000006        /**< Mode DATAACK for I2C_STATE */

/** Bit fields for I2C STATUS */
#define _I2C_STATUS_RESETVALUE            0x00000080        /**< Default value for I2C_STATUS */
#define _I2C_STATUS_MASK                  0x000001FF        /**< Mask for I2C_STATUS */
#define I2C_STATUS_PSTART                 (1 << 0)          /**< Pending START */
#define _I2C_STATUS_PSTART_SHIFT          0                 /**< Shift value for I2C_PSTART */
#define _I2C_STATUS_PSTART_MASK           0x1               /**< Bit mask for I2C_PSTART */
#define I2C_STATUS_PSTART_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PSTART_DEFAULT        0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PSTOP                  (1 << 1)          /**< Pending STOP */
#define _I2C_STATUS_PSTOP_SHIFT           1                 /**< Shift value for I2C_PSTOP */
#define _I2C_STATUS_PSTOP_MASK            0x2               /**< Bit mask for I2C_PSTOP */
#define I2C_STATUS_PSTOP_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PSTOP_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PACK                   (1 << 2)          /**< Pending ACK */
#define _I2C_STATUS_PACK_SHIFT            2                 /**< Shift value for I2C_PACK */
#define _I2C_STATUS_PACK_MASK             0x4               /**< Bit mask for I2C_PACK */
#define I2C_STATUS_PACK_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PACK_DEFAULT          0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PNACK                  (1 << 3)          /**< Pending NACK */
#define _I2C_STATUS_PNACK_SHIFT           3                 /**< Shift value for I2C_PNACK */
#define _I2C_STATUS_PNACK_MASK            0x8               /**< Bit mask for I2C_PNACK */
#define I2C_STATUS_PNACK_DEFAULT          (0x00000000 << 3) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PNACK_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PCONT                  (1 << 4)          /**< Pending continue */
#define _I2C_STATUS_PCONT_SHIFT           4                 /**< Shift value for I2C_PCONT */
#define _I2C_STATUS_PCONT_MASK            0x10              /**< Bit mask for I2C_PCONT */
#define I2C_STATUS_PCONT_DEFAULT          (0x00000000 << 4) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PCONT_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PABORT                 (1 << 5)          /**< Pending abort */
#define _I2C_STATUS_PABORT_SHIFT          5                 /**< Shift value for I2C_PABORT */
#define _I2C_STATUS_PABORT_MASK           0x20              /**< Bit mask for I2C_PABORT */
#define I2C_STATUS_PABORT_DEFAULT         (0x00000000 << 5) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PABORT_DEFAULT        0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_TXC                    (1 << 6)          /**< TX Complete */
#define _I2C_STATUS_TXC_SHIFT             6                 /**< Shift value for I2C_TXC */
#define _I2C_STATUS_TXC_MASK              0x40              /**< Bit mask for I2C_TXC */
#define I2C_STATUS_TXC_DEFAULT            (0x00000000 << 6) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_TXC_DEFAULT           0x00000000        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_TXBL                   (1 << 7)          /**< TX Buffer Level */
#define _I2C_STATUS_TXBL_SHIFT            7                 /**< Shift value for I2C_TXBL */
#define _I2C_STATUS_TXBL_MASK             0x80              /**< Bit mask for I2C_TXBL */
#define I2C_STATUS_TXBL_DEFAULT           (0x00000001 << 7) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_TXBL_DEFAULT          0x00000001        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_RXDATAV                (1 << 8)          /**< RX Data Valid */
#define _I2C_STATUS_RXDATAV_SHIFT         8                 /**< Shift value for I2C_RXDATAV */
#define _I2C_STATUS_RXDATAV_MASK          0x100             /**< Bit mask for I2C_RXDATAV */
#define I2C_STATUS_RXDATAV_DEFAULT        (0x00000000 << 8) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_RXDATAV_DEFAULT       0x00000000        /**< Mode DEFAULT for I2C_STATUS */

/** Bit fields for I2C CLKDIV */
#define _I2C_CLKDIV_RESETVALUE            0x00000000        /**< Default value for I2C_CLKDIV */
#define _I2C_CLKDIV_MASK                  0x000001FF        /**< Mask for I2C_CLKDIV */
#define _I2C_CLKDIV_DIV_SHIFT             0                 /**< Shift value for I2C_DIV */
#define _I2C_CLKDIV_DIV_MASK              0x1FF             /**< Bit mask for I2C_DIV */
#define I2C_CLKDIV_DIV_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_CLKDIV */
#define _I2C_CLKDIV_DIV_DEFAULT           0x00000000        /**< Mode DEFAULT for I2C_CLKDIV */

/** Bit fields for I2C SADDR */
#define _I2C_SADDR_RESETVALUE             0x00000000        /**< Default value for I2C_SADDR */
#define _I2C_SADDR_MASK                   0x000000FE        /**< Mask for I2C_SADDR */
#define _I2C_SADDR_ADDR_SHIFT             1                 /**< Shift value for I2C_ADDR */
#define _I2C_SADDR_ADDR_MASK              0xFE              /**< Bit mask for I2C_ADDR */
#define I2C_SADDR_ADDR_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_SADDR */
#define _I2C_SADDR_ADDR_DEFAULT           0x00000000        /**< Mode DEFAULT for I2C_SADDR */

/** Bit fields for I2C SADDRMASK */
#define _I2C_SADDRMASK_RESETVALUE         0x00000000        /**< Default value for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK               0x000000FE        /**< Mask for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK_SHIFT         1                 /**< Shift value for I2C_MASK */
#define _I2C_SADDRMASK_MASK_MASK          0xFE              /**< Bit mask for I2C_MASK */
#define I2C_SADDRMASK_MASK_DEFAULT        (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK_DEFAULT       0x00000000        /**< Mode DEFAULT for I2C_SADDRMASK */

/** Bit fields for I2C RXDATA */
#define _I2C_RXDATA_RESETVALUE            0x00000000        /**< Default value for I2C_RXDATA */
#define _I2C_RXDATA_MASK                  0x000000FF        /**< Mask for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_SHIFT          0                 /**< Shift value for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_MASK           0xFF              /**< Bit mask for I2C_RXDATA */
#define I2C_RXDATA_RXDATA_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_DEFAULT        0x00000000        /**< Mode DEFAULT for I2C_RXDATA */

/** Bit fields for I2C RXDATAP */
#define _I2C_RXDATAP_RESETVALUE           0x00000000        /**< Default value for I2C_RXDATAP */
#define _I2C_RXDATAP_MASK                 0x000000FF        /**< Mask for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_SHIFT        0                 /**< Shift value for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_MASK         0xFF              /**< Bit mask for I2C_RXDATAP */
#define I2C_RXDATAP_RXDATAP_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_DEFAULT      0x00000000        /**< Mode DEFAULT for I2C_RXDATAP */

/** Bit fields for I2C TXDATA */
#define _I2C_TXDATA_RESETVALUE            0x00000000        /**< Default value for I2C_TXDATA */
#define _I2C_TXDATA_MASK                  0x000000FF        /**< Mask for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_SHIFT          0                 /**< Shift value for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_MASK           0xFF              /**< Bit mask for I2C_TXDATA */
#define I2C_TXDATA_TXDATA_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_DEFAULT        0x00000000        /**< Mode DEFAULT for I2C_TXDATA */

/** Bit fields for I2C IF */
#define _I2C_IF_RESETVALUE                0x00000000         /**< Default value for I2C_IF */
#define _I2C_IF_MASK                      0x0001FFFF         /**< Mask for I2C_IF */
#define I2C_IF_START                      (1 << 0)           /**< START condition Interrupt Flag */
#define _I2C_IF_START_SHIFT               0                  /**< Shift value for I2C_START */
#define _I2C_IF_START_MASK                0x1                /**< Bit mask for I2C_START */
#define I2C_IF_START_DEFAULT              (0x00000000 << 0)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_START_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RSTART                     (1 << 1)           /**< Repeated START condition Interrupt Flag */
#define _I2C_IF_RSTART_SHIFT              1                  /**< Shift value for I2C_RSTART */
#define _I2C_IF_RSTART_MASK               0x2                /**< Bit mask for I2C_RSTART */
#define I2C_IF_RSTART_DEFAULT             (0x00000000 << 1)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RSTART_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ADDR                       (1 << 2)           /**< Address Interrupt Flag */
#define _I2C_IF_ADDR_SHIFT                2                  /**< Shift value for I2C_ADDR */
#define _I2C_IF_ADDR_MASK                 0x4                /**< Bit mask for I2C_ADDR */
#define I2C_IF_ADDR_DEFAULT               (0x00000000 << 2)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ADDR_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXC                        (1 << 3)           /**< Transfer Completed Interrupt Flag */
#define _I2C_IF_TXC_SHIFT                 3                  /**< Shift value for I2C_TXC */
#define _I2C_IF_TXC_MASK                  0x8                /**< Bit mask for I2C_TXC */
#define I2C_IF_TXC_DEFAULT                (0x00000000 << 3)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXC_DEFAULT               0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXBL                       (1 << 4)           /**< Transmit Buffer Level Interrupt Flag */
#define _I2C_IF_TXBL_SHIFT                4                  /**< Shift value for I2C_TXBL */
#define _I2C_IF_TXBL_MASK                 0x10               /**< Bit mask for I2C_TXBL */
#define I2C_IF_TXBL_DEFAULT               (0x00000000 << 4)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXBL_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RXDATAV                    (1 << 5)           /**< Receive Data Valid Interrupt Flag */
#define _I2C_IF_RXDATAV_SHIFT             5                  /**< Shift value for I2C_RXDATAV */
#define _I2C_IF_RXDATAV_MASK              0x20               /**< Bit mask for I2C_RXDATAV */
#define I2C_IF_RXDATAV_DEFAULT            (0x00000000 << 5)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RXDATAV_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ACK                        (1 << 6)           /**< Acknowledge Received Interrupt Flag */
#define _I2C_IF_ACK_SHIFT                 6                  /**< Shift value for I2C_ACK */
#define _I2C_IF_ACK_MASK                  0x40               /**< Bit mask for I2C_ACK */
#define I2C_IF_ACK_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ACK_DEFAULT               0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_NACK                       (1 << 7)           /**< Not Acknowledge Received Interrupt Flag */
#define _I2C_IF_NACK_SHIFT                7                  /**< Shift value for I2C_NACK */
#define _I2C_IF_NACK_MASK                 0x80               /**< Bit mask for I2C_NACK */
#define I2C_IF_NACK_DEFAULT               (0x00000000 << 7)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_NACK_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_MSTOP                      (1 << 8)           /**< Master STOP Condition Interrupt Flag */
#define _I2C_IF_MSTOP_SHIFT               8                  /**< Shift value for I2C_MSTOP */
#define _I2C_IF_MSTOP_MASK                0x100              /**< Bit mask for I2C_MSTOP */
#define I2C_IF_MSTOP_DEFAULT              (0x00000000 << 8)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_MSTOP_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ARBLOST                    (1 << 9)           /**< Arbitration Lost Interrupt Flag */
#define _I2C_IF_ARBLOST_SHIFT             9                  /**< Shift value for I2C_ARBLOST */
#define _I2C_IF_ARBLOST_MASK              0x200              /**< Bit mask for I2C_ARBLOST */
#define I2C_IF_ARBLOST_DEFAULT            (0x00000000 << 9)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ARBLOST_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BUSERR                     (1 << 10)          /**< Bus Error Interrupt Flag */
#define _I2C_IF_BUSERR_SHIFT              10                 /**< Shift value for I2C_BUSERR */
#define _I2C_IF_BUSERR_MASK               0x400              /**< Bit mask for I2C_BUSERR */
#define I2C_IF_BUSERR_DEFAULT             (0x00000000 << 10) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BUSERR_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BUSHOLD                    (1 << 11)          /**< Bus Held Interrupt Flag */
#define _I2C_IF_BUSHOLD_SHIFT             11                 /**< Shift value for I2C_BUSHOLD */
#define _I2C_IF_BUSHOLD_MASK              0x800              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IF_BUSHOLD_DEFAULT            (0x00000000 << 11) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BUSHOLD_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXOF                       (1 << 12)          /**< Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IF_TXOF_SHIFT                12                 /**< Shift value for I2C_TXOF */
#define _I2C_IF_TXOF_MASK                 0x1000             /**< Bit mask for I2C_TXOF */
#define I2C_IF_TXOF_DEFAULT               (0x00000000 << 12) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXOF_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RXUF                       (1 << 13)          /**< Receive Buffer Underflow Interrupt Flag */
#define _I2C_IF_RXUF_SHIFT                13                 /**< Shift value for I2C_RXUF */
#define _I2C_IF_RXUF_MASK                 0x2000             /**< Bit mask for I2C_RXUF */
#define I2C_IF_RXUF_DEFAULT               (0x00000000 << 13) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RXUF_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BITO                       (1 << 14)          /**< Bus Idle Timeout Interrupt Flag */
#define _I2C_IF_BITO_SHIFT                14                 /**< Shift value for I2C_BITO */
#define _I2C_IF_BITO_MASK                 0x4000             /**< Bit mask for I2C_BITO */
#define I2C_IF_BITO_DEFAULT               (0x00000000 << 14) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BITO_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_CLTO                       (1 << 15)          /**< Clock Low Interrupt Flag */
#define _I2C_IF_CLTO_SHIFT                15                 /**< Shift value for I2C_CLTO */
#define _I2C_IF_CLTO_MASK                 0x8000             /**< Bit mask for I2C_CLTO */
#define I2C_IF_CLTO_DEFAULT               (0x00000000 << 15) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_CLTO_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_SSTOP                      (1 << 16)          /**< Slave STOP condition Interrupt Flag */
#define _I2C_IF_SSTOP_SHIFT               16                 /**< Shift value for I2C_SSTOP */
#define _I2C_IF_SSTOP_MASK                0x10000            /**< Bit mask for I2C_SSTOP */
#define I2C_IF_SSTOP_DEFAULT              (0x00000000 << 16) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_SSTOP_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IF */

/** Bit fields for I2C IFS */
#define _I2C_IFS_RESETVALUE               0x00000000         /**< Default value for I2C_IFS */
#define _I2C_IFS_MASK                     0x0001FFFF         /**< Mask for I2C_IFS */
#define I2C_IFS_START                     (1 << 0)           /**< Set START Interrupt Flag */
#define _I2C_IFS_START_SHIFT              0                  /**< Shift value for I2C_START */
#define _I2C_IFS_START_MASK               0x1                /**< Bit mask for I2C_START */
#define I2C_IFS_START_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_START_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RSTART                    (1 << 1)           /**< Set Repeated START Interrupt Flag */
#define _I2C_IFS_RSTART_SHIFT             1                  /**< Shift value for I2C_RSTART */
#define _I2C_IFS_RSTART_MASK              0x2                /**< Bit mask for I2C_RSTART */
#define I2C_IFS_RSTART_DEFAULT            (0x00000000 << 1)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RSTART_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ADDR                      (1 << 2)           /**< Set Address Interrupt Flag */
#define _I2C_IFS_ADDR_SHIFT               2                  /**< Shift value for I2C_ADDR */
#define _I2C_IFS_ADDR_MASK                0x4                /**< Bit mask for I2C_ADDR */
#define I2C_IFS_ADDR_DEFAULT              (0x00000000 << 2)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ADDR_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXC                       (1 << 3)           /**< Set Transfer Completed Interrupt Flag */
#define _I2C_IFS_TXC_SHIFT                3                  /**< Shift value for I2C_TXC */
#define _I2C_IFS_TXC_MASK                 0x8                /**< Bit mask for I2C_TXC */
#define I2C_IFS_TXC_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXC_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXBL                      (1 << 4)           /**< Set Transmit Buffer level Interrupt Flag */
#define _I2C_IFS_TXBL_SHIFT               4                  /**< Shift value for I2C_TXBL */
#define _I2C_IFS_TXBL_MASK                0x10               /**< Bit mask for I2C_TXBL */
#define I2C_IFS_TXBL_DEFAULT              (0x00000000 << 4)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXBL_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RXDATAV                   (1 << 5)           /**< Set Receive Data Valid Interrupt Flag */
#define _I2C_IFS_RXDATAV_SHIFT            5                  /**< Shift value for I2C_RXDATAV */
#define _I2C_IFS_RXDATAV_MASK             0x20               /**< Bit mask for I2C_RXDATAV */
#define I2C_IFS_RXDATAV_DEFAULT           (0x00000000 << 5)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RXDATAV_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ACK                       (1 << 6)           /**< Set Acknowledge Received Interrupt Flag */
#define _I2C_IFS_ACK_SHIFT                6                  /**< Shift value for I2C_ACK */
#define _I2C_IFS_ACK_MASK                 0x40               /**< Bit mask for I2C_ACK */
#define I2C_IFS_ACK_DEFAULT               (0x00000000 << 6)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ACK_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_NACK                      (1 << 7)           /**< Set Not Acknowledge Received Interrupt Flag */
#define _I2C_IFS_NACK_SHIFT               7                  /**< Shift value for I2C_NACK */
#define _I2C_IFS_NACK_MASK                0x80               /**< Bit mask for I2C_NACK */
#define I2C_IFS_NACK_DEFAULT              (0x00000000 << 7)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_NACK_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_MSTOP                     (1 << 8)           /**< Set MSTOP Interrupt Flag */
#define _I2C_IFS_MSTOP_SHIFT              8                  /**< Shift value for I2C_MSTOP */
#define _I2C_IFS_MSTOP_MASK               0x100              /**< Bit mask for I2C_MSTOP */
#define I2C_IFS_MSTOP_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_MSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ARBLOST                   (1 << 9)           /**< Set Arbitration Lost Interrupt Flag */
#define _I2C_IFS_ARBLOST_SHIFT            9                  /**< Shift value for I2C_ARBLOST */
#define _I2C_IFS_ARBLOST_MASK             0x200              /**< Bit mask for I2C_ARBLOST */
#define I2C_IFS_ARBLOST_DEFAULT           (0x00000000 << 9)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ARBLOST_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BUSERR                    (1 << 10)          /**< Set Bus Error Interrupt Flag */
#define _I2C_IFS_BUSERR_SHIFT             10                 /**< Shift value for I2C_BUSERR */
#define _I2C_IFS_BUSERR_MASK              0x400              /**< Bit mask for I2C_BUSERR */
#define I2C_IFS_BUSERR_DEFAULT            (0x00000000 << 10) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BUSERR_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BUSHOLD                   (1 << 11)          /**< Set Bus Held Interrupt Flag */
#define _I2C_IFS_BUSHOLD_SHIFT            11                 /**< Shift value for I2C_BUSHOLD */
#define _I2C_IFS_BUSHOLD_MASK             0x800              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IFS_BUSHOLD_DEFAULT           (0x00000000 << 11) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BUSHOLD_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXOF                      (1 << 12)          /**< Set Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IFS_TXOF_SHIFT               12                 /**< Shift value for I2C_TXOF */
#define _I2C_IFS_TXOF_MASK                0x1000             /**< Bit mask for I2C_TXOF */
#define I2C_IFS_TXOF_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXOF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RXUF                      (1 << 13)          /**< Set Receive Buffer Underflow Interrupt Flag */
#define _I2C_IFS_RXUF_SHIFT               13                 /**< Shift value for I2C_RXUF */
#define _I2C_IFS_RXUF_MASK                0x2000             /**< Bit mask for I2C_RXUF */
#define I2C_IFS_RXUF_DEFAULT              (0x00000000 << 13) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RXUF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BITO                      (1 << 14)          /**< Set Bus Idle Timeout Interrupt Flag */
#define _I2C_IFS_BITO_SHIFT               14                 /**< Shift value for I2C_BITO */
#define _I2C_IFS_BITO_MASK                0x4000             /**< Bit mask for I2C_BITO */
#define I2C_IFS_BITO_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BITO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_CLTO                      (1 << 15)          /**< Set Clock Low Interrupt Flag */
#define _I2C_IFS_CLTO_SHIFT               15                 /**< Shift value for I2C_CLTO */
#define _I2C_IFS_CLTO_MASK                0x8000             /**< Bit mask for I2C_CLTO */
#define I2C_IFS_CLTO_DEFAULT              (0x00000000 << 15) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_CLTO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_SSTOP                     (1 << 16)          /**< Set SSTOP Interrupt Flag */
#define _I2C_IFS_SSTOP_SHIFT              16                 /**< Shift value for I2C_SSTOP */
#define _I2C_IFS_SSTOP_MASK               0x10000            /**< Bit mask for I2C_SSTOP */
#define I2C_IFS_SSTOP_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_SSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFS */

/** Bit fields for I2C IFC */
#define _I2C_IFC_RESETVALUE               0x00000000         /**< Default value for I2C_IFC */
#define _I2C_IFC_MASK                     0x0001FFFF         /**< Mask for I2C_IFC */
#define I2C_IFC_START                     (1 << 0)           /**< Clear START Interrupt Flag */
#define _I2C_IFC_START_SHIFT              0                  /**< Shift value for I2C_START */
#define _I2C_IFC_START_MASK               0x1                /**< Bit mask for I2C_START */
#define I2C_IFC_START_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_START_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RSTART                    (1 << 1)           /**< Clear Repeated START Interrupt Flag */
#define _I2C_IFC_RSTART_SHIFT             1                  /**< Shift value for I2C_RSTART */
#define _I2C_IFC_RSTART_MASK              0x2                /**< Bit mask for I2C_RSTART */
#define I2C_IFC_RSTART_DEFAULT            (0x00000000 << 1)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RSTART_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ADDR                      (1 << 2)           /**< Clear Address Interrupt Flag */
#define _I2C_IFC_ADDR_SHIFT               2                  /**< Shift value for I2C_ADDR */
#define _I2C_IFC_ADDR_MASK                0x4                /**< Bit mask for I2C_ADDR */
#define I2C_IFC_ADDR_DEFAULT              (0x00000000 << 2)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ADDR_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXC                       (1 << 3)           /**< Clear Transfer Completed Interrupt Flag */
#define _I2C_IFC_TXC_SHIFT                3                  /**< Shift value for I2C_TXC */
#define _I2C_IFC_TXC_MASK                 0x8                /**< Bit mask for I2C_TXC */
#define I2C_IFC_TXC_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXC_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXBL                      (1 << 4)           /**< Clear Transmit Buffer level Interrupt Flag */
#define _I2C_IFC_TXBL_SHIFT               4                  /**< Shift value for I2C_TXBL */
#define _I2C_IFC_TXBL_MASK                0x10               /**< Bit mask for I2C_TXBL */
#define I2C_IFC_TXBL_DEFAULT              (0x00000000 << 4)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXBL_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RXDATAV                   (1 << 5)           /**< Clear Receive Data Valid Interrupt Flag */
#define _I2C_IFC_RXDATAV_SHIFT            5                  /**< Shift value for I2C_RXDATAV */
#define _I2C_IFC_RXDATAV_MASK             0x20               /**< Bit mask for I2C_RXDATAV */
#define I2C_IFC_RXDATAV_DEFAULT           (0x00000000 << 5)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RXDATAV_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ACK                       (1 << 6)           /**< Clear Acknowledge Received Interrupt Flag */
#define _I2C_IFC_ACK_SHIFT                6                  /**< Shift value for I2C_ACK */
#define _I2C_IFC_ACK_MASK                 0x40               /**< Bit mask for I2C_ACK */
#define I2C_IFC_ACK_DEFAULT               (0x00000000 << 6)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ACK_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_NACK                      (1 << 7)           /**< Clear Not Acknowledge Received Interrupt Flag */
#define _I2C_IFC_NACK_SHIFT               7                  /**< Shift value for I2C_NACK */
#define _I2C_IFC_NACK_MASK                0x80               /**< Bit mask for I2C_NACK */
#define I2C_IFC_NACK_DEFAULT              (0x00000000 << 7)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_NACK_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_MSTOP                     (1 << 8)           /**< Clear MSTOP Interrupt Flag */
#define _I2C_IFC_MSTOP_SHIFT              8                  /**< Shift value for I2C_MSTOP */
#define _I2C_IFC_MSTOP_MASK               0x100              /**< Bit mask for I2C_MSTOP */
#define I2C_IFC_MSTOP_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_MSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ARBLOST                   (1 << 9)           /**< Clear Arbitration Lost Interrupt Flag */
#define _I2C_IFC_ARBLOST_SHIFT            9                  /**< Shift value for I2C_ARBLOST */
#define _I2C_IFC_ARBLOST_MASK             0x200              /**< Bit mask for I2C_ARBLOST */
#define I2C_IFC_ARBLOST_DEFAULT           (0x00000000 << 9)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ARBLOST_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BUSERR                    (1 << 10)          /**< Clear Bus Error Interrupt Flag */
#define _I2C_IFC_BUSERR_SHIFT             10                 /**< Shift value for I2C_BUSERR */
#define _I2C_IFC_BUSERR_MASK              0x400              /**< Bit mask for I2C_BUSERR */
#define I2C_IFC_BUSERR_DEFAULT            (0x00000000 << 10) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BUSERR_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BUSHOLD                   (1 << 11)          /**< Clear Bus Held Interrupt Flag */
#define _I2C_IFC_BUSHOLD_SHIFT            11                 /**< Shift value for I2C_BUSHOLD */
#define _I2C_IFC_BUSHOLD_MASK             0x800              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IFC_BUSHOLD_DEFAULT           (0x00000000 << 11) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BUSHOLD_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXOF                      (1 << 12)          /**< Clear Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IFC_TXOF_SHIFT               12                 /**< Shift value for I2C_TXOF */
#define _I2C_IFC_TXOF_MASK                0x1000             /**< Bit mask for I2C_TXOF */
#define I2C_IFC_TXOF_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXOF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RXUF                      (1 << 13)          /**< Clear Receive Buffer Underflow Interrupt Flag */
#define _I2C_IFC_RXUF_SHIFT               13                 /**< Shift value for I2C_RXUF */
#define _I2C_IFC_RXUF_MASK                0x2000             /**< Bit mask for I2C_RXUF */
#define I2C_IFC_RXUF_DEFAULT              (0x00000000 << 13) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RXUF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BITO                      (1 << 14)          /**< Clear Bus Idle Timeout Interrupt Flag */
#define _I2C_IFC_BITO_SHIFT               14                 /**< Shift value for I2C_BITO */
#define _I2C_IFC_BITO_MASK                0x4000             /**< Bit mask for I2C_BITO */
#define I2C_IFC_BITO_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BITO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_CLTO                      (1 << 15)          /**< Clear Clock Low Interrupt Flag */
#define _I2C_IFC_CLTO_SHIFT               15                 /**< Shift value for I2C_CLTO */
#define _I2C_IFC_CLTO_MASK                0x8000             /**< Bit mask for I2C_CLTO */
#define I2C_IFC_CLTO_DEFAULT              (0x00000000 << 15) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_CLTO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_SSTOP                     (1 << 16)          /**< Clear SSTOP Interrupt Flag */
#define _I2C_IFC_SSTOP_SHIFT              16                 /**< Shift value for I2C_SSTOP */
#define _I2C_IFC_SSTOP_MASK               0x10000            /**< Bit mask for I2C_SSTOP */
#define I2C_IFC_SSTOP_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_SSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IFC */

/** Bit fields for I2C IEN */
#define _I2C_IEN_RESETVALUE               0x00000000         /**< Default value for I2C_IEN */
#define _I2C_IEN_MASK                     0x0001FFFF         /**< Mask for I2C_IEN */
#define I2C_IEN_START                     (1 << 0)           /**< START Condition Interrupt Enable */
#define _I2C_IEN_START_SHIFT              0                  /**< Shift value for I2C_START */
#define _I2C_IEN_START_MASK               0x1                /**< Bit mask for I2C_START */
#define I2C_IEN_START_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_START_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RSTART                    (1 << 1)           /**< Repeated START condition Interrupt Enable */
#define _I2C_IEN_RSTART_SHIFT             1                  /**< Shift value for I2C_RSTART */
#define _I2C_IEN_RSTART_MASK              0x2                /**< Bit mask for I2C_RSTART */
#define I2C_IEN_RSTART_DEFAULT            (0x00000000 << 1)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RSTART_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ADDR                      (1 << 2)           /**< Address Interrupt Enable */
#define _I2C_IEN_ADDR_SHIFT               2                  /**< Shift value for I2C_ADDR */
#define _I2C_IEN_ADDR_MASK                0x4                /**< Bit mask for I2C_ADDR */
#define I2C_IEN_ADDR_DEFAULT              (0x00000000 << 2)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ADDR_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXC                       (1 << 3)           /**< Transfer Completed Interrupt Enable */
#define _I2C_IEN_TXC_SHIFT                3                  /**< Shift value for I2C_TXC */
#define _I2C_IEN_TXC_MASK                 0x8                /**< Bit mask for I2C_TXC */
#define I2C_IEN_TXC_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXC_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXBL                      (1 << 4)           /**< Transmit Buffer level Interrupt Enable */
#define _I2C_IEN_TXBL_SHIFT               4                  /**< Shift value for I2C_TXBL */
#define _I2C_IEN_TXBL_MASK                0x10               /**< Bit mask for I2C_TXBL */
#define I2C_IEN_TXBL_DEFAULT              (0x00000000 << 4)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXBL_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RXDATAV                   (1 << 5)           /**< Receive Data Valid Interrupt Enable */
#define _I2C_IEN_RXDATAV_SHIFT            5                  /**< Shift value for I2C_RXDATAV */
#define _I2C_IEN_RXDATAV_MASK             0x20               /**< Bit mask for I2C_RXDATAV */
#define I2C_IEN_RXDATAV_DEFAULT           (0x00000000 << 5)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RXDATAV_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ACK                       (1 << 6)           /**< Acknowledge Received Interrupt Enable */
#define _I2C_IEN_ACK_SHIFT                6                  /**< Shift value for I2C_ACK */
#define _I2C_IEN_ACK_MASK                 0x40               /**< Bit mask for I2C_ACK */
#define I2C_IEN_ACK_DEFAULT               (0x00000000 << 6)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ACK_DEFAULT              0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_NACK                      (1 << 7)           /**< Not Acknowledge Received Interrupt Enable */
#define _I2C_IEN_NACK_SHIFT               7                  /**< Shift value for I2C_NACK */
#define _I2C_IEN_NACK_MASK                0x80               /**< Bit mask for I2C_NACK */
#define I2C_IEN_NACK_DEFAULT              (0x00000000 << 7)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_NACK_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_MSTOP                     (1 << 8)           /**< MSTOP Interrupt Enable */
#define _I2C_IEN_MSTOP_SHIFT              8                  /**< Shift value for I2C_MSTOP */
#define _I2C_IEN_MSTOP_MASK               0x100              /**< Bit mask for I2C_MSTOP */
#define I2C_IEN_MSTOP_DEFAULT             (0x00000000 << 8)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_MSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ARBLOST                   (1 << 9)           /**< Arbitration Lost Interrupt Enable */
#define _I2C_IEN_ARBLOST_SHIFT            9                  /**< Shift value for I2C_ARBLOST */
#define _I2C_IEN_ARBLOST_MASK             0x200              /**< Bit mask for I2C_ARBLOST */
#define I2C_IEN_ARBLOST_DEFAULT           (0x00000000 << 9)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ARBLOST_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BUSERR                    (1 << 10)          /**< Bus Error Interrupt Enable */
#define _I2C_IEN_BUSERR_SHIFT             10                 /**< Shift value for I2C_BUSERR */
#define _I2C_IEN_BUSERR_MASK              0x400              /**< Bit mask for I2C_BUSERR */
#define I2C_IEN_BUSERR_DEFAULT            (0x00000000 << 10) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BUSERR_DEFAULT           0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BUSHOLD                   (1 << 11)          /**< Bus Held Interrupt Enable */
#define _I2C_IEN_BUSHOLD_SHIFT            11                 /**< Shift value for I2C_BUSHOLD */
#define _I2C_IEN_BUSHOLD_MASK             0x800              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IEN_BUSHOLD_DEFAULT           (0x00000000 << 11) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BUSHOLD_DEFAULT          0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXOF                      (1 << 12)          /**< Transmit Buffer Overflow Interrupt Enable */
#define _I2C_IEN_TXOF_SHIFT               12                 /**< Shift value for I2C_TXOF */
#define _I2C_IEN_TXOF_MASK                0x1000             /**< Bit mask for I2C_TXOF */
#define I2C_IEN_TXOF_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXOF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RXUF                      (1 << 13)          /**< Receive Buffer Underflow Interrupt Enable */
#define _I2C_IEN_RXUF_SHIFT               13                 /**< Shift value for I2C_RXUF */
#define _I2C_IEN_RXUF_MASK                0x2000             /**< Bit mask for I2C_RXUF */
#define I2C_IEN_RXUF_DEFAULT              (0x00000000 << 13) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RXUF_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BITO                      (1 << 14)          /**< Bus Idle Timeout Interrupt Enable */
#define _I2C_IEN_BITO_SHIFT               14                 /**< Shift value for I2C_BITO */
#define _I2C_IEN_BITO_MASK                0x4000             /**< Bit mask for I2C_BITO */
#define I2C_IEN_BITO_DEFAULT              (0x00000000 << 14) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BITO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_CLTO                      (1 << 15)          /**< Clock Low Interrupt Enable */
#define _I2C_IEN_CLTO_SHIFT               15                 /**< Shift value for I2C_CLTO */
#define _I2C_IEN_CLTO_MASK                0x8000             /**< Bit mask for I2C_CLTO */
#define I2C_IEN_CLTO_DEFAULT              (0x00000000 << 15) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_CLTO_DEFAULT             0x00000000         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_SSTOP                     (1 << 16)          /**< SSTOP Interrupt Enable */
#define _I2C_IEN_SSTOP_SHIFT              16                 /**< Shift value for I2C_SSTOP */
#define _I2C_IEN_SSTOP_MASK               0x10000            /**< Bit mask for I2C_SSTOP */
#define I2C_IEN_SSTOP_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_SSTOP_DEFAULT            0x00000000         /**< Mode DEFAULT for I2C_IEN */

/** Bit fields for I2C ROUTE */
#define _I2C_ROUTE_RESETVALUE             0x00000000        /**< Default value for I2C_ROUTE */
#define _I2C_ROUTE_MASK                   0x00000303        /**< Mask for I2C_ROUTE */
#define I2C_ROUTE_SDAPEN                  (1 << 0)          /**< SDA Pin Enable */
#define _I2C_ROUTE_SDAPEN_SHIFT           0                 /**< Shift value for I2C_SDAPEN */
#define _I2C_ROUTE_SDAPEN_MASK            0x1               /**< Bit mask for I2C_SDAPEN */
#define I2C_ROUTE_SDAPEN_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_SDAPEN_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_ROUTE */
#define I2C_ROUTE_SCLPEN                  (1 << 1)          /**< SCL Pin Enable */
#define _I2C_ROUTE_SCLPEN_SHIFT           1                 /**< Shift value for I2C_SCLPEN */
#define _I2C_ROUTE_SCLPEN_MASK            0x2               /**< Bit mask for I2C_SCLPEN */
#define I2C_ROUTE_SCLPEN_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_SCLPEN_DEFAULT         0x00000000        /**< Mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_SHIFT         8                 /**< Shift value for I2C_LOCATION */
#define _I2C_ROUTE_LOCATION_MASK          0x300             /**< Bit mask for I2C_LOCATION */
#define I2C_ROUTE_LOCATION_DEFAULT        (0x00000000 << 8) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC0           (0x00000000 << 8) /**< Shifted mode LOC0 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC1           (0x00000001 << 8) /**< Shifted mode LOC1 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC2           (0x00000002 << 8) /**< Shifted mode LOC2 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC3           (0x00000003 << 8) /**< Shifted mode LOC3 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_DEFAULT       0x00000000        /**< Mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC0          0x00000000        /**< Mode LOC0 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC1          0x00000001        /**< Mode LOC1 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC2          0x00000002        /**< Mode LOC2 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC3          0x00000003        /**< Mode LOC3 for I2C_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_ADC
 * @{
 */

/** Bit fields for ADC CTRL */
#define _ADC_CTRL_RESETVALUE                    0x001F0000         /**< Default value for ADC_CTRL */
#define _ADC_CTRL_MASK                          0x0F1F7F3B         /**< Mask for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_SHIFT              0                  /**< Shift value for ADC_ENERGYMODE */
#define _ADC_CTRL_ENERGYMODE_MASK               0x3                /**< Bit mask for ADC_ENERGYMODE */
#define ADC_CTRL_ENERGYMODE_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_ENERGYMODE_NORMAL              (0x00000000 << 0)  /**< Shifted mode NORMAL for ADC_CTRL */
#define ADC_CTRL_ENERGYMODE_FASTBG              (0x00000001 << 0)  /**< Shifted mode FASTBG for ADC_CTRL */
#define ADC_CTRL_ENERGYMODE_KEEPSCANREFWARM     (0x00000002 << 0)  /**< Shifted mode KEEPSCANREFWARM for ADC_CTRL */
#define ADC_CTRL_ENERGYMODE_KEEPADCWARM         (0x00000003 << 0)  /**< Shifted mode KEEPADCWARM for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_DEFAULT            0x00000000         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_NORMAL             0x00000000         /**< Mode NORMAL for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_FASTBG             0x00000001         /**< Mode FASTBG for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_KEEPSCANREFWARM    0x00000002         /**< Mode KEEPSCANREFWARM for ADC_CTRL */
#define _ADC_CTRL_ENERGYMODE_KEEPADCWARM        0x00000003         /**< Mode KEEPADCWARM for ADC_CTRL */
#define ADC_CTRL_TAILGATE                       (1 << 3)           /**< Conversion Tailgating */
#define _ADC_CTRL_TAILGATE_SHIFT                3                  /**< Shift value for ADC_TAILGATE */
#define _ADC_CTRL_TAILGATE_MASK                 0x8                /**< Bit mask for ADC_TAILGATE */
#define ADC_CTRL_TAILGATE_DEFAULT               (0x00000000 << 3)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_TAILGATE_DEFAULT              0x00000000         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_SHIFT                 4                  /**< Shift value for ADC_LPFMODE */
#define _ADC_CTRL_LPFMODE_MASK                  0x30               /**< Bit mask for ADC_LPFMODE */
#define ADC_CTRL_LPFMODE_DEFAULT                (0x00000000 << 4)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_LPFMODE_BYPASS                 (0x00000000 << 4)  /**< Shifted mode BYPASS for ADC_CTRL */
#define ADC_CTRL_LPFMODE_RCFILT                 (0x00000001 << 4)  /**< Shifted mode RCFILT for ADC_CTRL */
#define ADC_CTRL_LPFMODE_DECAP                  (0x00000002 << 4)  /**< Shifted mode DECAP for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_DEFAULT               0x00000000         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_BYPASS                0x00000000         /**< Mode BYPASS for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_RCFILT                0x00000001         /**< Mode RCFILT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_DECAP                 0x00000002         /**< Mode DECAP for ADC_CTRL */
#define _ADC_CTRL_PRESC_SHIFT                   8                  /**< Shift value for ADC_PRESC */
#define _ADC_CTRL_PRESC_MASK                    0x7F00             /**< Bit mask for ADC_PRESC */
#define ADC_CTRL_PRESC_DEFAULT                  (0x00000000 << 8)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_PRESC_NODIVISION               (0x00000000 << 8)  /**< Shifted mode NODIVISION for ADC_CTRL */
#define _ADC_CTRL_PRESC_DEFAULT                 0x00000000         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_PRESC_NODIVISION              0x00000000         /**< Mode NODIVISION for ADC_CTRL */
#define _ADC_CTRL_TIMEBASE_SHIFT                16                 /**< Shift value for ADC_TIMEBASE */
#define _ADC_CTRL_TIMEBASE_MASK                 0x1F0000           /**< Bit mask for ADC_TIMEBASE */
#define ADC_CTRL_TIMEBASE_DEFAULT               (0x0000001F << 16) /**< Shifted mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_TIMEBASE_DEFAULT              0x0000001F         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_SHIFT                  24                 /**< Shift value for ADC_OSRSEL */
#define _ADC_CTRL_OSRSEL_MASK                   0xF000000          /**< Bit mask for ADC_OSRSEL */
#define ADC_CTRL_OSRSEL_DEFAULT                 (0x00000000 << 24) /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR2                    (0x00000000 << 24) /**< Shifted mode OSR2 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR4                    (0x00000001 << 24) /**< Shifted mode OSR4 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR8                    (0x00000002 << 24) /**< Shifted mode OSR8 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR16                   (0x00000003 << 24) /**< Shifted mode OSR16 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR32                   (0x00000004 << 24) /**< Shifted mode OSR32 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR64                   (0x00000005 << 24) /**< Shifted mode OSR64 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR128                  (0x00000006 << 24) /**< Shifted mode OSR128 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR256                  (0x00000007 << 24) /**< Shifted mode OSR256 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR512                  (0x00000008 << 24) /**< Shifted mode OSR512 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR1024                 (0x00000009 << 24) /**< Shifted mode OSR1024 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR2048                 (0x0000000A << 24) /**< Shifted mode OSR2048 for ADC_CTRL */
#define ADC_CTRL_OSRSEL_OSR4096                 (0x0000000B << 24) /**< Shifted mode OSR4096 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_DEFAULT                0x00000000         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR2                   0x00000000         /**< Mode OSR2 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR4                   0x00000001         /**< Mode OSR4 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR8                   0x00000002         /**< Mode OSR8 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR16                  0x00000003         /**< Mode OSR16 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR32                  0x00000004         /**< Mode OSR32 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR64                  0x00000005         /**< Mode OSR64 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR128                 0x00000006         /**< Mode OSR128 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR256                 0x00000007         /**< Mode OSR256 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR512                 0x00000008         /**< Mode OSR512 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR1024                0x00000009         /**< Mode OSR1024 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR2048                0x0000000A         /**< Mode OSR2048 for ADC_CTRL */
#define _ADC_CTRL_OSRSEL_OSR4096                0x0000000B         /**< Mode OSR4096 for ADC_CTRL */

/** Bit fields for ADC CMD */
#define _ADC_CMD_RESETVALUE                     0x00000000        /**< Default value for ADC_CMD */
#define _ADC_CMD_MASK                           0x0000000F        /**< Mask for ADC_CMD */
#define ADC_CMD_SINGLESTART                     (1 << 0)          /**< Single Conversion Start */
#define _ADC_CMD_SINGLESTART_SHIFT              0                 /**< Shift value for ADC_SINGLESTART */
#define _ADC_CMD_SINGLESTART_MASK               0x1               /**< Bit mask for ADC_SINGLESTART */
#define ADC_CMD_SINGLESTART_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SINGLESTART_DEFAULT            0x00000000        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SINGLESTOP                      (1 << 1)          /**< Single Conversion Stop */
#define _ADC_CMD_SINGLESTOP_SHIFT               1                 /**< Shift value for ADC_SINGLESTOP */
#define _ADC_CMD_SINGLESTOP_MASK                0x2               /**< Bit mask for ADC_SINGLESTOP */
#define ADC_CMD_SINGLESTOP_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SINGLESTOP_DEFAULT             0x00000000        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SCANSTART                       (1 << 2)          /**< Scan Sequence Start */
#define _ADC_CMD_SCANSTART_SHIFT                2                 /**< Shift value for ADC_SCANSTART */
#define _ADC_CMD_SCANSTART_MASK                 0x4               /**< Bit mask for ADC_SCANSTART */
#define ADC_CMD_SCANSTART_DEFAULT               (0x00000000 << 2) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SCANSTART_DEFAULT              0x00000000        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SCANSTOP                        (1 << 3)          /**< Scan Sequence Stop */
#define _ADC_CMD_SCANSTOP_SHIFT                 3                 /**< Shift value for ADC_SCANSTOP */
#define _ADC_CMD_SCANSTOP_MASK                  0x8               /**< Bit mask for ADC_SCANSTOP */
#define ADC_CMD_SCANSTOP_DEFAULT                (0x00000000 << 3) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SCANSTOP_DEFAULT               0x00000000        /**< Mode DEFAULT for ADC_CMD */

/** Bit fields for ADC STATUS */
#define _ADC_STATUS_RESETVALUE                  0x00000000         /**< Default value for ADC_STATUS */
#define _ADC_STATUS_MASK                        0x07031303         /**< Mask for ADC_STATUS */
#define ADC_STATUS_SINGLEACT                    (1 << 0)           /**< Single Conversion Active */
#define _ADC_STATUS_SINGLEACT_SHIFT             0                  /**< Shift value for ADC_SINGLEACT */
#define _ADC_STATUS_SINGLEACT_MASK              0x1                /**< Bit mask for ADC_SINGLEACT */
#define ADC_STATUS_SINGLEACT_DEFAULT            (0x00000000 << 0)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEACT_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANACT                      (1 << 1)           /**< Scan Conversion Active */
#define _ADC_STATUS_SCANACT_SHIFT               1                  /**< Shift value for ADC_SCANACT */
#define _ADC_STATUS_SCANACT_MASK                0x2                /**< Bit mask for ADC_SCANACT */
#define ADC_STATUS_SCANACT_DEFAULT              (0x00000000 << 1)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANACT_DEFAULT             0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SINGLEREFWARM                (1 << 8)           /**< Single Reference Warmed Up */
#define _ADC_STATUS_SINGLEREFWARM_SHIFT         8                  /**< Shift value for ADC_SINGLEREFWARM */
#define _ADC_STATUS_SINGLEREFWARM_MASK          0x100              /**< Bit mask for ADC_SINGLEREFWARM */
#define ADC_STATUS_SINGLEREFWARM_DEFAULT        (0x00000000 << 8)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEREFWARM_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANREFWARM                  (1 << 9)           /**< Scan Reference Warmed Up */
#define _ADC_STATUS_SCANREFWARM_SHIFT           9                  /**< Shift value for ADC_SCANREFWARM */
#define _ADC_STATUS_SCANREFWARM_MASK            0x200              /**< Bit mask for ADC_SCANREFWARM */
#define ADC_STATUS_SCANREFWARM_DEFAULT          (0x00000000 << 9)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANREFWARM_DEFAULT         0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_WARM                         (1 << 12)          /**< ADC Warmed Up */
#define _ADC_STATUS_WARM_SHIFT                  12                 /**< Shift value for ADC_WARM */
#define _ADC_STATUS_WARM_MASK                   0x1000             /**< Bit mask for ADC_WARM */
#define ADC_STATUS_WARM_DEFAULT                 (0x00000000 << 12) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_WARM_DEFAULT                0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SINGLEDV                     (1 << 16)          /**< Single Sample Data Valid */
#define _ADC_STATUS_SINGLEDV_SHIFT              16                 /**< Shift value for ADC_SINGLEDV */
#define _ADC_STATUS_SINGLEDV_MASK               0x10000            /**< Bit mask for ADC_SINGLEDV */
#define ADC_STATUS_SINGLEDV_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEDV_DEFAULT            0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANDV                       (1 << 17)          /**< Scan Data Valid */
#define _ADC_STATUS_SCANDV_SHIFT                17                 /**< Shift value for ADC_SCANDV */
#define _ADC_STATUS_SCANDV_MASK                 0x20000            /**< Bit mask for ADC_SCANDV */
#define ADC_STATUS_SCANDV_DEFAULT               (0x00000000 << 17) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDV_DEFAULT              0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_SHIFT           24                 /**< Shift value for ADC_SCANDATASRC */
#define _ADC_STATUS_SCANDATASRC_MASK            0x7000000          /**< Bit mask for ADC_SCANDATASRC */
#define ADC_STATUS_SCANDATASRC_DEFAULT          (0x00000000 << 24) /**< Shifted mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL0         (0x00000000 << 24) /**< Shifted mode CHANNEL0 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL1         (0x00000001 << 24) /**< Shifted mode CHANNEL1 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL2         (0x00000002 << 24) /**< Shifted mode CHANNEL2 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL3         (0x00000003 << 24) /**< Shifted mode CHANNEL3 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL4         (0x00000004 << 24) /**< Shifted mode CHANNEL4 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL5         (0x00000005 << 24) /**< Shifted mode CHANNEL5 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL6         (0x00000006 << 24) /**< Shifted mode CHANNEL6 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CHANNEL7         (0x00000007 << 24) /**< Shifted mode CHANNEL7 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_DEFAULT         0x00000000         /**< Mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL0        0x00000000         /**< Mode CHANNEL0 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL1        0x00000001         /**< Mode CHANNEL1 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL2        0x00000002         /**< Mode CHANNEL2 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL3        0x00000003         /**< Mode CHANNEL3 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL4        0x00000004         /**< Mode CHANNEL4 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL5        0x00000005         /**< Mode CHANNEL5 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL6        0x00000006         /**< Mode CHANNEL6 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CHANNEL7        0x00000007         /**< Mode CHANNEL7 for ADC_STATUS */

/** Bit fields for ADC SINGLECTRL */
#define _ADC_SINGLECTRL_RESETVALUE              0x00000000         /**< Default value for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_MASK                    0x71F70F37         /**< Mask for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREP                (1 << 0)           /**< Single Sample Repetitive Mode */
#define _ADC_SINGLECTRL_SINGLEREP_SHIFT         0                  /**< Shift value for ADC_SINGLEREP */
#define _ADC_SINGLECTRL_SINGLEREP_MASK          0x1                /**< Bit mask for ADC_SINGLEREP */
#define ADC_SINGLECTRL_SINGLEREP_DEFAULT        (0x00000000 << 0)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREP_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEDIFF               (1 << 1)           /**< Single Sample Differential Mode */
#define _ADC_SINGLECTRL_SINGLEDIFF_SHIFT        1                  /**< Shift value for ADC_SINGLEDIFF */
#define _ADC_SINGLECTRL_SINGLEDIFF_MASK         0x2                /**< Bit mask for ADC_SINGLEDIFF */
#define ADC_SINGLECTRL_SINGLEDIFF_DEFAULT       (0x00000000 << 1)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEDIFF_DEFAULT      0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEADJ                (1 << 2)           /**< Single Sample Result Adjustment */
#define _ADC_SINGLECTRL_SINGLEADJ_SHIFT         2                  /**< Shift value for ADC_SINGLEADJ */
#define _ADC_SINGLECTRL_SINGLEADJ_MASK          0x4                /**< Bit mask for ADC_SINGLEADJ */
#define ADC_SINGLECTRL_SINGLEADJ_DEFAULT        (0x00000000 << 2)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEADJ_RIGHT          (0x00000000 << 2)  /**< Shifted mode RIGHT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEADJ_LEFT           (0x00000001 << 2)  /**< Shifted mode LEFT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEADJ_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEADJ_RIGHT         0x00000000         /**< Mode RIGHT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEADJ_LEFT          0x00000001         /**< Mode LEFT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_SHIFT         4                  /**< Shift value for ADC_SINGLERES */
#define _ADC_SINGLECTRL_SINGLERES_MASK          0x30               /**< Bit mask for ADC_SINGLERES */
#define ADC_SINGLECTRL_SINGLERES_DEFAULT        (0x00000000 << 4)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLERES_12BIT          (0x00000000 << 4)  /**< Shifted mode 12BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLERES_8BIT           (0x00000001 << 4)  /**< Shifted mode 8BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLERES_6BIT           (0x00000002 << 4)  /**< Shifted mode 6BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLERES_OS             (0x00000003 << 4)  /**< Shifted mode OS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_12BIT         0x00000000         /**< Mode 12BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_8BIT          0x00000001         /**< Mode 8BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_6BIT          0x00000002         /**< Mode 6BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLERES_OS            0x00000003         /**< Mode OS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_SHIFT         8                  /**< Shift value for ADC_SINGLESEL */
#define _ADC_SINGLECTRL_SINGLESEL_MASK          0xF00              /**< Bit mask for ADC_SINGLESEL */
#define ADC_SINGLECTRL_SINGLESEL_DEFAULT        (0x00000000 << 8)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL0       (0x00000000 << 8)  /**< Shifted mode CHANNEL0 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL1       (0x00000001 << 8)  /**< Shifted mode CHANNEL1 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL2       (0x00000002 << 8)  /**< Shifted mode CHANNEL2 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL3       (0x00000003 << 8)  /**< Shifted mode CHANNEL3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL4       (0x00000004 << 8)  /**< Shifted mode CHANNEL4 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL5       (0x00000005 << 8)  /**< Shifted mode CHANNEL5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL6       (0x00000006 << 8)  /**< Shifted mode CHANNEL6 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL7       (0x00000007 << 8)  /**< Shifted mode CHANNEL7 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL8       (0x00000008 << 8)  /**< Shifted mode CHANNEL8 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL9       (0x00000009 << 8)  /**< Shifted mode CHANNEL9 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL10      (0x0000000A << 8)  /**< Shifted mode CHANNEL10 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL11      (0x0000000B << 8)  /**< Shifted mode CHANNEL11 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL12      (0x0000000C << 8)  /**< Shifted mode CHANNEL12 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL13      (0x0000000D << 8)  /**< Shifted mode CHANNEL13 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLESEL_CHANNEL14      (0x0000000E << 8)  /**< Shifted mode CHANNEL14 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL0      0x00000000         /**< Mode CHANNEL0 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL1      0x00000001         /**< Mode CHANNEL1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL2      0x00000002         /**< Mode CHANNEL2 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL3      0x00000003         /**< Mode CHANNEL3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL4      0x00000004         /**< Mode CHANNEL4 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL5      0x00000005         /**< Mode CHANNEL5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL6      0x00000006         /**< Mode CHANNEL6 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL7      0x00000007         /**< Mode CHANNEL7 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL8      0x00000008         /**< Mode CHANNEL8 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL9      0x00000009         /**< Mode CHANNEL9 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL10     0x0000000A         /**< Mode CHANNEL10 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL11     0x0000000B         /**< Mode CHANNEL11 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL12     0x0000000C         /**< Mode CHANNEL12 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL13     0x0000000D         /**< Mode CHANNEL13 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLESEL_CHANNEL14     0x0000000E         /**< Mode CHANNEL14 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_SHIFT         16                 /**< Shift value for ADC_SINGLEREF */
#define _ADC_SINGLECTRL_SINGLEREF_MASK          0x70000            /**< Bit mask for ADC_SINGLEREF */
#define ADC_SINGLECTRL_SINGLEREF_DEFAULT        (0x00000000 << 16) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_1V25           (0x00000000 << 16) /**< Shifted mode 1V25 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_2V5            (0x00000001 << 16) /**< Shifted mode 2V5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_VDD            (0x00000002 << 16) /**< Shifted mode VDD for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_5VDIFF         (0x00000003 << 16) /**< Shifted mode 5VDIFF for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_EXTSINGLE      (0x00000004 << 16) /**< Shifted mode EXTSINGLE for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_EXTDIFF        (0x00000005 << 16) /**< Shifted mode EXTDIFF for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEREF_2XVDDVSS       (0x00000006 << 16) /**< Shifted mode 2XVDDVSS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_DEFAULT       0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_1V25          0x00000000         /**< Mode 1V25 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_2V5           0x00000001         /**< Mode 2V5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_VDD           0x00000002         /**< Mode VDD for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_5VDIFF        0x00000003         /**< Mode 5VDIFF for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_EXTSINGLE     0x00000004         /**< Mode EXTSINGLE for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_EXTDIFF       0x00000005         /**< Mode EXTDIFF for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEREF_2XVDDVSS      0x00000006         /**< Mode 2XVDDVSS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_SHIFT          20                 /**< Shift value for ADC_SINGLEAT */
#define _ADC_SINGLECTRL_SINGLEAT_MASK           0xF00000           /**< Bit mask for ADC_SINGLEAT */
#define ADC_SINGLECTRL_SINGLEAT_DEFAULT         (0x00000000 << 20) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_1CYCLE          (0x00000000 << 20) /**< Shifted mode 1CYCLE for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_2CYCLES         (0x00000001 << 20) /**< Shifted mode 2CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_4CYCLES         (0x00000002 << 20) /**< Shifted mode 4CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_8CYCLES         (0x00000003 << 20) /**< Shifted mode 8CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_16CYCLES        (0x00000004 << 20) /**< Shifted mode 16CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_32CYCLES        (0x00000005 << 20) /**< Shifted mode 32CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_64CYCLES        (0x00000006 << 20) /**< Shifted mode 64CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_128CYCLES       (0x00000007 << 20) /**< Shifted mode 128CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEAT_256CYCLES       (0x00000008 << 20) /**< Shifted mode 256CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_DEFAULT        0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_1CYCLE         0x00000000         /**< Mode 1CYCLE for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_2CYCLES        0x00000001         /**< Mode 2CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_4CYCLES        0x00000002         /**< Mode 4CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_8CYCLES        0x00000003         /**< Mode 8CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_16CYCLES       0x00000004         /**< Mode 16CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_32CYCLES       0x00000005         /**< Mode 32CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_64CYCLES       0x00000006         /**< Mode 64CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_128CYCLES      0x00000007         /**< Mode 128CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEAT_256CYCLES      0x00000008         /**< Mode 256CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSEN              (1 << 24)          /**< Single Sample PRS Trigger Enable */
#define _ADC_SINGLECTRL_SINGLEPRSEN_SHIFT       24                 /**< Shift value for ADC_SINGLEPRSEN */
#define _ADC_SINGLECTRL_SINGLEPRSEN_MASK        0x1000000          /**< Bit mask for ADC_SINGLEPRSEN */
#define ADC_SINGLECTRL_SINGLEPRSEN_DEFAULT      (0x00000000 << 24) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSEN_DEFAULT     0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_SHIFT      28                 /**< Shift value for ADC_SINGLEPRSSEL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_MASK       0x70000000         /**< Bit mask for ADC_SINGLEPRSSEL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_DEFAULT     (0x00000000 << 28) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH0      (0x00000000 << 28) /**< Shifted mode PRSCH0 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH1      (0x00000001 << 28) /**< Shifted mode PRSCH1 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH2      (0x00000002 << 28) /**< Shifted mode PRSCH2 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH3      (0x00000003 << 28) /**< Shifted mode PRSCH3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH4      (0x00000004 << 28) /**< Shifted mode PRSCH4 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH5      (0x00000005 << 28) /**< Shifted mode PRSCH5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH6      (0x00000006 << 28) /**< Shifted mode PRSCH6 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH7      (0x00000007 << 28) /**< Shifted mode PRSCH7 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_DEFAULT    0x00000000         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH0     0x00000000         /**< Mode PRSCH0 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH1     0x00000001         /**< Mode PRSCH1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH2     0x00000002         /**< Mode PRSCH2 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH3     0x00000003         /**< Mode PRSCH3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH4     0x00000004         /**< Mode PRSCH4 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH5     0x00000005         /**< Mode PRSCH5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH6     0x00000006         /**< Mode PRSCH6 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_SINGLEPRSSEL_PRSCH7     0x00000007         /**< Mode PRSCH7 for ADC_SINGLECTRL */

/** Bit fields for ADC SCANCTRL */
#define _ADC_SCANCTRL_RESETVALUE                0x00000000         /**< Default value for ADC_SCANCTRL */
#define _ADC_SCANCTRL_MASK                      0x71F7FF37         /**< Mask for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREP                    (1 << 0)           /**< Scan Sequence Repetitive Mode */
#define _ADC_SCANCTRL_SCANREP_SHIFT             0                  /**< Shift value for ADC_SCANREP */
#define _ADC_SCANCTRL_SCANREP_MASK              0x1                /**< Bit mask for ADC_SCANREP */
#define ADC_SCANCTRL_SCANREP_DEFAULT            (0x00000000 << 0)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREP_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANDIFF                   (1 << 1)           /**< Scan Sequence Differential Mode */
#define _ADC_SCANCTRL_SCANDIFF_SHIFT            1                  /**< Shift value for ADC_SCANDIFF */
#define _ADC_SCANCTRL_SCANDIFF_MASK             0x2                /**< Bit mask for ADC_SCANDIFF */
#define ADC_SCANCTRL_SCANDIFF_DEFAULT           (0x00000000 << 1)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANDIFF_DEFAULT          0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANADJ                    (1 << 2)           /**< Scan Sequence Result Adjustment */
#define _ADC_SCANCTRL_SCANADJ_SHIFT             2                  /**< Shift value for ADC_SCANADJ */
#define _ADC_SCANCTRL_SCANADJ_MASK              0x4                /**< Bit mask for ADC_SCANADJ */
#define ADC_SCANCTRL_SCANADJ_DEFAULT            (0x00000000 << 2)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANADJ_RIGHT              (0x00000000 << 2)  /**< Shifted mode RIGHT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANADJ_LEFT               (0x00000001 << 2)  /**< Shifted mode LEFT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANADJ_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANADJ_RIGHT             0x00000000         /**< Mode RIGHT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANADJ_LEFT              0x00000001         /**< Mode LEFT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_SHIFT             4                  /**< Shift value for ADC_SCANRES */
#define _ADC_SCANCTRL_SCANRES_MASK              0x30               /**< Bit mask for ADC_SCANRES */
#define ADC_SCANCTRL_SCANRES_DEFAULT            (0x00000000 << 4)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANRES_12BIT              (0x00000000 << 4)  /**< Shifted mode 12BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANRES_8BIT               (0x00000001 << 4)  /**< Shifted mode 8BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANRES_6BIT               (0x00000002 << 4)  /**< Shifted mode 6BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANRES_OS                 (0x00000003 << 4)  /**< Shifted mode OS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_12BIT             0x00000000         /**< Mode 12BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_8BIT              0x00000001         /**< Mode 8BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_6BIT              0x00000002         /**< Mode 6BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANRES_OS                0x00000003         /**< Mode OS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_SHIFT            8                  /**< Shift value for ADC_SCANMASK */
#define _ADC_SCANCTRL_SCANMASK_MASK             0xFF00             /**< Bit mask for ADC_SCANMASK */
#define ADC_SCANCTRL_SCANMASK_DEFAULT           (0x00000000 << 8)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL0          (0x00000000 << 8)  /**< Shifted mode CHANNEL0 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL1          (0x00000001 << 8)  /**< Shifted mode CHANNEL1 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL2          (0x00000002 << 8)  /**< Shifted mode CHANNEL2 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL3          (0x00000003 << 8)  /**< Shifted mode CHANNEL3 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL4          (0x00000004 << 8)  /**< Shifted mode CHANNEL4 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL5          (0x00000005 << 8)  /**< Shifted mode CHANNEL5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL6          (0x00000006 << 8)  /**< Shifted mode CHANNEL6 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANMASK_CHANNEL7          (0x00000007 << 8)  /**< Shifted mode CHANNEL7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_DEFAULT          0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL0         0x00000000         /**< Mode CHANNEL0 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL1         0x00000001         /**< Mode CHANNEL1 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL2         0x00000002         /**< Mode CHANNEL2 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL3         0x00000003         /**< Mode CHANNEL3 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL4         0x00000004         /**< Mode CHANNEL4 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL5         0x00000005         /**< Mode CHANNEL5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL6         0x00000006         /**< Mode CHANNEL6 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANMASK_CHANNEL7         0x00000007         /**< Mode CHANNEL7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_SHIFT             16                 /**< Shift value for ADC_SCANREF */
#define _ADC_SCANCTRL_SCANREF_MASK              0x70000            /**< Bit mask for ADC_SCANREF */
#define ADC_SCANCTRL_SCANREF_DEFAULT            (0x00000000 << 16) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_1V25               (0x00000000 << 16) /**< Shifted mode 1V25 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_2V5                (0x00000001 << 16) /**< Shifted mode 2V5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_VDD                (0x00000002 << 16) /**< Shifted mode VDD for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_5VDIFF             (0x00000003 << 16) /**< Shifted mode 5VDIFF for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_EXTSINGLE          (0x00000004 << 16) /**< Shifted mode EXTSINGLE for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_EXTDIFF            (0x00000005 << 16) /**< Shifted mode EXTDIFF for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANREF_2XVDDVSS           (0x00000006 << 16) /**< Shifted mode 2XVDDVSS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_1V25              0x00000000         /**< Mode 1V25 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_2V5               0x00000001         /**< Mode 2V5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_VDD               0x00000002         /**< Mode VDD for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_5VDIFF            0x00000003         /**< Mode 5VDIFF for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_EXTSINGLE         0x00000004         /**< Mode EXTSINGLE for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_EXTDIFF           0x00000005         /**< Mode EXTDIFF for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANREF_2XVDDVSS          0x00000006         /**< Mode 2XVDDVSS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_SHIFT              20                 /**< Shift value for ADC_SCANAT */
#define _ADC_SCANCTRL_SCANAT_MASK               0xF00000           /**< Bit mask for ADC_SCANAT */
#define ADC_SCANCTRL_SCANAT_DEFAULT             (0x00000000 << 20) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_1CYCLE              (0x00000000 << 20) /**< Shifted mode 1CYCLE for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_2CYCLES             (0x00000001 << 20) /**< Shifted mode 2CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_4CYCLES             (0x00000002 << 20) /**< Shifted mode 4CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_8CYCLES             (0x00000003 << 20) /**< Shifted mode 8CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_16CYCLES            (0x00000004 << 20) /**< Shifted mode 16CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_32CYCLES            (0x00000005 << 20) /**< Shifted mode 32CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_64CYCLES            (0x00000006 << 20) /**< Shifted mode 64CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_128CYCLES           (0x00000007 << 20) /**< Shifted mode 128CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANAT_256CYCLES           (0x00000008 << 20) /**< Shifted mode 256CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_DEFAULT            0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_1CYCLE             0x00000000         /**< Mode 1CYCLE for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_2CYCLES            0x00000001         /**< Mode 2CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_4CYCLES            0x00000002         /**< Mode 4CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_8CYCLES            0x00000003         /**< Mode 8CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_16CYCLES           0x00000004         /**< Mode 16CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_32CYCLES           0x00000005         /**< Mode 32CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_64CYCLES           0x00000006         /**< Mode 64CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_128CYCLES          0x00000007         /**< Mode 128CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANAT_256CYCLES          0x00000008         /**< Mode 256CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSEN                  (1 << 24)          /**< Scan Sequence PRS Trigger Enable */
#define _ADC_SCANCTRL_SCANPRSEN_SHIFT           24                 /**< Shift value for ADC_SCANPRSEN */
#define _ADC_SCANCTRL_SCANPRSEN_MASK            0x1000000          /**< Bit mask for ADC_SCANPRSEN */
#define ADC_SCANCTRL_SCANPRSEN_DEFAULT          (0x00000000 << 24) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSEN_DEFAULT         0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_SHIFT          28                 /**< Shift value for ADC_SCANPRSSEL */
#define _ADC_SCANCTRL_SCANPRSSEL_MASK           0x70000000         /**< Bit mask for ADC_SCANPRSSEL */
#define ADC_SCANCTRL_SCANPRSSEL_DEFAULT         (0x00000000 << 28) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH0          (0x00000000 << 28) /**< Shifted mode PRSCH0 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH1          (0x00000001 << 28) /**< Shifted mode PRSCH1 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH2          (0x00000002 << 28) /**< Shifted mode PRSCH2 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH3          (0x00000003 << 28) /**< Shifted mode PRSCH3 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH4          (0x00000004 << 28) /**< Shifted mode PRSCH4 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH5          (0x00000005 << 28) /**< Shifted mode PRSCH5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH6          (0x00000006 << 28) /**< Shifted mode PRSCH6 for ADC_SCANCTRL */
#define ADC_SCANCTRL_SCANPRSSEL_PRSCH7          (0x00000007 << 28) /**< Shifted mode PRSCH7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_DEFAULT        0x00000000         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH0         0x00000000         /**< Mode PRSCH0 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH1         0x00000001         /**< Mode PRSCH1 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH2         0x00000002         /**< Mode PRSCH2 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH3         0x00000003         /**< Mode PRSCH3 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH4         0x00000004         /**< Mode PRSCH4 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH5         0x00000005         /**< Mode PRSCH5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH6         0x00000006         /**< Mode PRSCH6 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_SCANPRSSEL_PRSCH7         0x00000007         /**< Mode PRSCH7 for ADC_SCANCTRL */

/** Bit fields for ADC IEN */
#define _ADC_IEN_RESETVALUE                     0x00000000        /**< Default value for ADC_IEN */
#define _ADC_IEN_MASK                           0x00000303        /**< Mask for ADC_IEN */
#define ADC_IEN_SINGLE                          (1 << 0)          /**< Single Conversion Complete Interrupt Enable */
#define _ADC_IEN_SINGLE_SHIFT                   0                 /**< Shift value for ADC_SINGLE */
#define _ADC_IEN_SINGLE_MASK                    0x1               /**< Bit mask for ADC_SINGLE */
#define ADC_IEN_SINGLE_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SINGLE_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SCAN                            (1 << 1)          /**< Scan Conversion Complete Interrupt Enable */
#define _ADC_IEN_SCAN_SHIFT                     1                 /**< Shift value for ADC_SCAN */
#define _ADC_IEN_SCAN_MASK                      0x2               /**< Bit mask for ADC_SCAN */
#define ADC_IEN_SCAN_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SCAN_DEFAULT                   0x00000000        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SINGLEOF                        (1 << 8)          /**< Single Result Overflow Interrupt Enable */
#define _ADC_IEN_SINGLEOF_SHIFT                 8                 /**< Shift value for ADC_SINGLEOF */
#define _ADC_IEN_SINGLEOF_MASK                  0x100             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IEN_SINGLEOF_DEFAULT                (0x00000000 << 8) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SINGLEOF_DEFAULT               0x00000000        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SCANOF                          (1 << 9)          /**< Scan Result Overflow Interrupt Enable */
#define _ADC_IEN_SCANOF_SHIFT                   9                 /**< Shift value for ADC_SCANOF */
#define _ADC_IEN_SCANOF_MASK                    0x200             /**< Bit mask for ADC_SCANOF */
#define ADC_IEN_SCANOF_DEFAULT                  (0x00000000 << 9) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SCANOF_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IEN */

/** Bit fields for ADC IF */
#define _ADC_IF_RESETVALUE                      0x00000000        /**< Default value for ADC_IF */
#define _ADC_IF_MASK                            0x00000303        /**< Mask for ADC_IF */
#define ADC_IF_SINGLE                           (1 << 0)          /**< Single Conversion Complete Interrupt Flag */
#define _ADC_IF_SINGLE_SHIFT                    0                 /**< Shift value for ADC_SINGLE */
#define _ADC_IF_SINGLE_MASK                     0x1               /**< Bit mask for ADC_SINGLE */
#define ADC_IF_SINGLE_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SINGLE_DEFAULT                  0x00000000        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SCAN                             (1 << 1)          /**< Scan Conversion Complete Interrupt Flag */
#define _ADC_IF_SCAN_SHIFT                      1                 /**< Shift value for ADC_SCAN */
#define _ADC_IF_SCAN_MASK                       0x2               /**< Bit mask for ADC_SCAN */
#define ADC_IF_SCAN_DEFAULT                     (0x00000000 << 1) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SCAN_DEFAULT                    0x00000000        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SINGLEOF                         (1 << 8)          /**< Single Result Overflow Interrupt Flag */
#define _ADC_IF_SINGLEOF_SHIFT                  8                 /**< Shift value for ADC_SINGLEOF */
#define _ADC_IF_SINGLEOF_MASK                   0x100             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IF_SINGLEOF_DEFAULT                 (0x00000000 << 8) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SINGLEOF_DEFAULT                0x00000000        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SCANOF                           (1 << 9)          /**< Scan Result Overflow Interrupt Flag */
#define _ADC_IF_SCANOF_SHIFT                    9                 /**< Shift value for ADC_SCANOF */
#define _ADC_IF_SCANOF_MASK                     0x200             /**< Bit mask for ADC_SCANOF */
#define ADC_IF_SCANOF_DEFAULT                   (0x00000000 << 9) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SCANOF_DEFAULT                  0x00000000        /**< Mode DEFAULT for ADC_IF */

/** Bit fields for ADC IFS */
#define _ADC_IFS_RESETVALUE                     0x00000000        /**< Default value for ADC_IFS */
#define _ADC_IFS_MASK                           0x00000303        /**< Mask for ADC_IFS */
#define ADC_IFS_SINGLE                          (1 << 0)          /**< Single Conversion Complete Interrupt Flag Set */
#define _ADC_IFS_SINGLE_SHIFT                   0                 /**< Shift value for ADC_SINGLE */
#define _ADC_IFS_SINGLE_MASK                    0x1               /**< Bit mask for ADC_SINGLE */
#define ADC_IFS_SINGLE_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SINGLE_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SCAN                            (1 << 1)          /**< Scan Conversion Complete Interrupt Flag Set */
#define _ADC_IFS_SCAN_SHIFT                     1                 /**< Shift value for ADC_SCAN */
#define _ADC_IFS_SCAN_MASK                      0x2               /**< Bit mask for ADC_SCAN */
#define ADC_IFS_SCAN_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SCAN_DEFAULT                   0x00000000        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SINGLEOF                        (1 << 8)          /**< Single Result Overflow Interrupt Flag Set */
#define _ADC_IFS_SINGLEOF_SHIFT                 8                 /**< Shift value for ADC_SINGLEOF */
#define _ADC_IFS_SINGLEOF_MASK                  0x100             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IFS_SINGLEOF_DEFAULT                (0x00000000 << 8) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SINGLEOF_DEFAULT               0x00000000        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SCANOF                          (1 << 9)          /**< Scan Result Overflow Interrupt Flag Set */
#define _ADC_IFS_SCANOF_SHIFT                   9                 /**< Shift value for ADC_SCANOF */
#define _ADC_IFS_SCANOF_MASK                    0x200             /**< Bit mask for ADC_SCANOF */
#define ADC_IFS_SCANOF_DEFAULT                  (0x00000000 << 9) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SCANOF_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IFS */

/** Bit fields for ADC IFC */
#define _ADC_IFC_RESETVALUE                     0x00000000        /**< Default value for ADC_IFC */
#define _ADC_IFC_MASK                           0x00000303        /**< Mask for ADC_IFC */
#define ADC_IFC_SINGLE                          (1 << 0)          /**< Single Conversion Complete Interrupt Flag Clear */
#define _ADC_IFC_SINGLE_SHIFT                   0                 /**< Shift value for ADC_SINGLE */
#define _ADC_IFC_SINGLE_MASK                    0x1               /**< Bit mask for ADC_SINGLE */
#define ADC_IFC_SINGLE_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SINGLE_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SCAN                            (1 << 1)          /**< Scan Conversion Complete Interrupt Flag Clear */
#define _ADC_IFC_SCAN_SHIFT                     1                 /**< Shift value for ADC_SCAN */
#define _ADC_IFC_SCAN_MASK                      0x2               /**< Bit mask for ADC_SCAN */
#define ADC_IFC_SCAN_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SCAN_DEFAULT                   0x00000000        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SINGLEOF                        (1 << 8)          /**< Single Result Overflow Interrupt Flag Clear */
#define _ADC_IFC_SINGLEOF_SHIFT                 8                 /**< Shift value for ADC_SINGLEOF */
#define _ADC_IFC_SINGLEOF_MASK                  0x100             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IFC_SINGLEOF_DEFAULT                (0x00000000 << 8) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SINGLEOF_DEFAULT               0x00000000        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SCANOF                          (1 << 9)          /**< Scan Result Overflow Interrupt Flag Clear */
#define _ADC_IFC_SCANOF_SHIFT                   9                 /**< Shift value for ADC_SCANOF */
#define _ADC_IFC_SCANOF_MASK                    0x200             /**< Bit mask for ADC_SCANOF */
#define ADC_IFC_SCANOF_DEFAULT                  (0x00000000 << 9) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SCANOF_DEFAULT                 0x00000000        /**< Mode DEFAULT for ADC_IFC */

/** Bit fields for ADC SINGLEDATA */
#define _ADC_SINGLEDATA_RESETVALUE              0x00000000        /**< Default value for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_MASK                    0xFFFFFFFF        /**< Mask for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_SINGLEDATA_SHIFT        0                 /**< Shift value for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_SINGLEDATA_MASK         0xFFFFFFFF        /**< Bit mask for ADC_SINGLEDATA */
#define ADC_SINGLEDATA_SINGLEDATA_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_SINGLEDATA_DEFAULT      0x00000000        /**< Mode DEFAULT for ADC_SINGLEDATA */

/** Bit fields for ADC SCANDATA */
#define _ADC_SCANDATA_RESETVALUE                0x00000000        /**< Default value for ADC_SCANDATA */
#define _ADC_SCANDATA_MASK                      0xFFFFFFFF        /**< Mask for ADC_SCANDATA */
#define _ADC_SCANDATA_SCANDATA_SHIFT            0                 /**< Shift value for ADC_SCANDATA */
#define _ADC_SCANDATA_SCANDATA_MASK             0xFFFFFFFF        /**< Bit mask for ADC_SCANDATA */
#define ADC_SCANDATA_SCANDATA_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_SCANDATA */
#define _ADC_SCANDATA_SCANDATA_DEFAULT          0x00000000        /**< Mode DEFAULT for ADC_SCANDATA */

/** Bit fields for ADC SINGLEDATAP */
#define _ADC_SINGLEDATAP_RESETVALUE             0x00000000        /**< Default value for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_MASK                   0xFFFFFFFF        /**< Mask for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_SINGLEDATA_SHIFT       0                 /**< Shift value for ADC_SINGLEDATA */
#define _ADC_SINGLEDATAP_SINGLEDATA_MASK        0xFFFFFFFF        /**< Bit mask for ADC_SINGLEDATA */
#define ADC_SINGLEDATAP_SINGLEDATA_DEFAULT      (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_SINGLEDATA_DEFAULT     0x00000000        /**< Mode DEFAULT for ADC_SINGLEDATAP */

/** Bit fields for ADC SCANDATAP */
#define _ADC_SCANDATAP_RESETVALUE               0x00000000        /**< Default value for ADC_SCANDATAP */
#define _ADC_SCANDATAP_MASK                     0xFFFFFFFF        /**< Mask for ADC_SCANDATAP */
#define _ADC_SCANDATAP_SCANDATAP_SHIFT          0                 /**< Shift value for ADC_SCANDATAP */
#define _ADC_SCANDATAP_SCANDATAP_MASK           0xFFFFFFFF        /**< Bit mask for ADC_SCANDATAP */
#define ADC_SCANDATAP_SCANDATAP_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_SCANDATAP */
#define _ADC_SCANDATAP_SCANDATAP_DEFAULT        0x00000000        /**< Mode DEFAULT for ADC_SCANDATAP */

/** Bit fields for ADC CAL */
#define _ADC_CAL_RESETVALUE                     0x3F003F00         /**< Default value for ADC_CAL */
#define _ADC_CAL_MASK                           0x7F7F7F7F         /**< Mask for ADC_CAL */
#define _ADC_CAL_SINGLEOFFSET_SHIFT             0                  /**< Shift value for ADC_SINGLEOFFSET */
#define _ADC_CAL_SINGLEOFFSET_MASK              0x7F               /**< Bit mask for ADC_SINGLEOFFSET */
#define ADC_CAL_SINGLEOFFSET_DEFAULT            (0x00000000 << 0)  /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEOFFSET_DEFAULT           0x00000000         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEGAIN_SHIFT               8                  /**< Shift value for ADC_SINGLEGAIN */
#define _ADC_CAL_SINGLEGAIN_MASK                0x7F00             /**< Bit mask for ADC_SINGLEGAIN */
#define ADC_CAL_SINGLEGAIN_DEFAULT              (0x0000003F << 8)  /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEGAIN_DEFAULT             0x0000003F         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANOFFSET_SHIFT               16                 /**< Shift value for ADC_SCANOFFSET */
#define _ADC_CAL_SCANOFFSET_MASK                0x7F0000           /**< Bit mask for ADC_SCANOFFSET */
#define ADC_CAL_SCANOFFSET_DEFAULT              (0x00000000 << 16) /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANOFFSET_DEFAULT             0x00000000         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANGAIN_SHIFT                 24                 /**< Shift value for ADC_SCANGAIN */
#define _ADC_CAL_SCANGAIN_MASK                  0x7F000000         /**< Bit mask for ADC_SCANGAIN */
#define ADC_CAL_SCANGAIN_DEFAULT                (0x0000003F << 24) /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANGAIN_DEFAULT               0x0000003F         /**< Mode DEFAULT for ADC_CAL */

/** Bit fields for ADC ROUTE */
#define _ADC_ROUTE_RESETVALUE                   0x00000000        /**< Default value for ADC_ROUTE */
#define _ADC_ROUTE_MASK                         0x00000001        /**< Mask for ADC_ROUTE */
#define ADC_ROUTE_VCMPEN                        (1 << 0)          /**< VCM Pin Output Enable */
#define _ADC_ROUTE_VCMPEN_SHIFT                 0                 /**< Shift value for ADC_VCMPEN */
#define _ADC_ROUTE_VCMPEN_MASK                  0x1               /**< Bit mask for ADC_VCMPEN */
#define ADC_ROUTE_VCMPEN_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for ADC_ROUTE */
#define _ADC_ROUTE_VCMPEN_DEFAULT               0x00000000        /**< Mode DEFAULT for ADC_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_DAC
 * @{
 */

/** Bit fields for DAC CTRL */
#define _DAC_CTRL_RESETVALUE              0x00000010         /**< Default value for DAC_CTRL */
#define _DAC_CTRL_MASK                    0x0037D3FF         /**< Mask for DAC_CTRL */
#define DAC_CTRL_DIFF                     (1 << 0)           /**< Differential Mode */
#define _DAC_CTRL_DIFF_SHIFT              0                  /**< Shift value for DAC_DIFF */
#define _DAC_CTRL_DIFF_MASK               0x1                /**< Bit mask for DAC_DIFF */
#define DAC_CTRL_DIFF_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_DIFF_DEFAULT            0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_SINEMODE                 (1 << 1)           /**< Sine Mode */
#define _DAC_CTRL_SINEMODE_SHIFT          1                  /**< Shift value for DAC_SINEMODE */
#define _DAC_CTRL_SINEMODE_MASK           0x2                /**< Bit mask for DAC_SINEMODE */
#define DAC_CTRL_SINEMODE_DEFAULT         (0x00000000 << 1)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_SINEMODE_DEFAULT        0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SHIFT          2                  /**< Shift value for DAC_CONVMODE */
#define _DAC_CTRL_CONVMODE_MASK           0xC                /**< Bit mask for DAC_CONVMODE */
#define DAC_CTRL_CONVMODE_DEFAULT         (0x00000000 << 2)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_CONVMODE_CONTINUOUS      (0x00000000 << 2)  /**< Shifted mode CONTINUOUS for DAC_CTRL */
#define DAC_CTRL_CONVMODE_SAMPLEHOLD      (0x00000001 << 2)  /**< Shifted mode SAMPLEHOLD for DAC_CTRL */
#define DAC_CTRL_CONVMODE_SAMPLEOFF       (0x00000002 << 2)  /**< Shifted mode SAMPLEOFF for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_DEFAULT        0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_CONTINUOUS     0x00000000         /**< Mode CONTINUOUS for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SAMPLEHOLD     0x00000001         /**< Mode SAMPLEHOLD for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SAMPLEOFF      0x00000002         /**< Mode SAMPLEOFF for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_SHIFT           4                  /**< Shift value for DAC_OUTMODE */
#define _DAC_CTRL_OUTMODE_MASK            0x30               /**< Bit mask for DAC_OUTMODE */
#define DAC_CTRL_OUTMODE_DISABLE          (0x00000000 << 4)  /**< Shifted mode DISABLE for DAC_CTRL */
#define DAC_CTRL_OUTMODE_DEFAULT          (0x00000001 << 4)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_OUTMODE_PIN              (0x00000001 << 4)  /**< Shifted mode PIN for DAC_CTRL */
#define DAC_CTRL_OUTMODE_ADC              (0x00000002 << 4)  /**< Shifted mode ADC for DAC_CTRL */
#define DAC_CTRL_OUTMODE_PINADC           (0x00000003 << 4)  /**< Shifted mode PINADC for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_DISABLE         0x00000000         /**< Mode DISABLE for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_DEFAULT         0x00000001         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_PIN             0x00000001         /**< Mode PIN for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_ADC             0x00000002         /**< Mode ADC for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_PINADC          0x00000003         /**< Mode PINADC for DAC_CTRL */
#define DAC_CTRL_OUTENPRS                 (1 << 6)           /**< PRS Controlled Output Enable */
#define _DAC_CTRL_OUTENPRS_SHIFT          6                  /**< Shift value for DAC_OUTENPRS */
#define _DAC_CTRL_OUTENPRS_MASK           0x40               /**< Bit mask for DAC_OUTENPRS */
#define DAC_CTRL_OUTENPRS_DEFAULT         (0x00000000 << 6)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_OUTENPRS_DEFAULT        0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_CH0PRESCRST              (1 << 7)           /**< Channel 0 Start Reset Prescaler */
#define _DAC_CTRL_CH0PRESCRST_SHIFT       7                  /**< Shift value for DAC_CH0PRESCRST */
#define _DAC_CTRL_CH0PRESCRST_MASK        0x80               /**< Bit mask for DAC_CH0PRESCRST */
#define DAC_CTRL_CH0PRESCRST_DEFAULT      (0x00000000 << 7)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CH0PRESCRST_DEFAULT     0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFSEL_SHIFT            8                  /**< Shift value for DAC_REFSEL */
#define _DAC_CTRL_REFSEL_MASK             0x300              /**< Bit mask for DAC_REFSEL */
#define DAC_CTRL_REFSEL_DEFAULT           (0x00000000 << 8)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_REFSEL_1V25              (0x00000000 << 8)  /**< Shifted mode 1V25 for DAC_CTRL */
#define DAC_CTRL_REFSEL_2V5               (0x00000001 << 8)  /**< Shifted mode 2V5 for DAC_CTRL */
#define DAC_CTRL_REFSEL_VDD               (0x00000002 << 8)  /**< Shifted mode VDD for DAC_CTRL */
#define _DAC_CTRL_REFSEL_DEFAULT          0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFSEL_1V25             0x00000000         /**< Mode 1V25 for DAC_CTRL */
#define _DAC_CTRL_REFSEL_2V5              0x00000001         /**< Mode 2V5 for DAC_CTRL */
#define _DAC_CTRL_REFSEL_VDD              0x00000002         /**< Mode VDD for DAC_CTRL */
#define DAC_CTRL_LPFEN                    (1 << 12)          /**< Low Pass Filter Enable */
#define _DAC_CTRL_LPFEN_SHIFT             12                 /**< Shift value for DAC_LPFEN */
#define _DAC_CTRL_LPFEN_MASK              0x1000             /**< Bit mask for DAC_LPFEN */
#define DAC_CTRL_LPFEN_DEFAULT            (0x00000000 << 12) /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFEN_DEFAULT           0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_SHIFT           14                 /**< Shift value for DAC_LPFFREQ */
#define _DAC_CTRL_LPFFREQ_MASK            0xC000             /**< Bit mask for DAC_LPFFREQ */
#define DAC_CTRL_LPFFREQ_DEFAULT          (0x00000000 << 14) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ0            (0x00000000 << 14) /**< Shifted mode FREQ0 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ1            (0x00000001 << 14) /**< Shifted mode FREQ1 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ2            (0x00000002 << 14) /**< Shifted mode FREQ2 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ3            (0x00000003 << 14) /**< Shifted mode FREQ3 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_DEFAULT         0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ0           0x00000000         /**< Mode FREQ0 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ1           0x00000001         /**< Mode FREQ1 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ2           0x00000002         /**< Mode FREQ2 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ3           0x00000003         /**< Mode FREQ3 for DAC_CTRL */
#define _DAC_CTRL_PRESC_SHIFT             16                 /**< Shift value for DAC_PRESC */
#define _DAC_CTRL_PRESC_MASK              0x70000            /**< Bit mask for DAC_PRESC */
#define DAC_CTRL_PRESC_DEFAULT            (0x00000000 << 16) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_PRESC_NODIVISION         (0x00000000 << 16) /**< Shifted mode NODIVISION for DAC_CTRL */
#define _DAC_CTRL_PRESC_DEFAULT           0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_PRESC_NODIVISION        0x00000000         /**< Mode NODIVISION for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_SHIFT           20                 /**< Shift value for DAC_REFRSEL */
#define _DAC_CTRL_REFRSEL_MASK            0x300000           /**< Bit mask for DAC_REFRSEL */
#define DAC_CTRL_REFRSEL_DEFAULT          (0x00000000 << 20) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_REFRSEL_8CYCLES          (0x00000000 << 20) /**< Shifted mode 8CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_16CYCLES         (0x00000001 << 20) /**< Shifted mode 16CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_32CYCLES         (0x00000002 << 20) /**< Shifted mode 32CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_64CYCLES         (0x00000003 << 20) /**< Shifted mode 64CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_DEFAULT         0x00000000         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_8CYCLES         0x00000000         /**< Mode 8CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_16CYCLES        0x00000001         /**< Mode 16CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_32CYCLES        0x00000002         /**< Mode 32CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_64CYCLES        0x00000003         /**< Mode 64CYCLES for DAC_CTRL */

/** Bit fields for DAC STATUS */
#define _DAC_STATUS_RESETVALUE            0x00000000        /**< Default value for DAC_STATUS */
#define _DAC_STATUS_MASK                  0x00000003        /**< Mask for DAC_STATUS */
#define DAC_STATUS_CH0DV                  (1 << 0)          /**< Channel 0 Data Valid */
#define _DAC_STATUS_CH0DV_SHIFT           0                 /**< Shift value for DAC_CH0DV */
#define _DAC_STATUS_CH0DV_MASK            0x1               /**< Bit mask for DAC_CH0DV */
#define DAC_STATUS_CH0DV_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_STATUS */
#define _DAC_STATUS_CH0DV_DEFAULT         0x00000000        /**< Mode DEFAULT for DAC_STATUS */
#define DAC_STATUS_CH1DV                  (1 << 1)          /**< Channel 1 Data Valid */
#define _DAC_STATUS_CH1DV_SHIFT           1                 /**< Shift value for DAC_CH1DV */
#define _DAC_STATUS_CH1DV_MASK            0x2               /**< Bit mask for DAC_CH1DV */
#define DAC_STATUS_CH1DV_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_STATUS */
#define _DAC_STATUS_CH1DV_DEFAULT         0x00000000        /**< Mode DEFAULT for DAC_STATUS */

/** Bit fields for DAC CH0CTRL */
#define _DAC_CH0CTRL_RESETVALUE           0x00000000        /**< Default value for DAC_CH0CTRL */
#define _DAC_CH0CTRL_MASK                 0x00000077        /**< Mask for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0EN                 (1 << 0)          /**< Channel 0 Enable */
#define _DAC_CH0CTRL_CH0EN_SHIFT          0                 /**< Shift value for DAC_CH0EN */
#define _DAC_CH0CTRL_CH0EN_MASK           0x1               /**< Bit mask for DAC_CH0EN */
#define DAC_CH0CTRL_CH0EN_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0EN_DEFAULT        0x00000000        /**< Mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0REFREN             (1 << 1)          /**< Channel 0 Automatic Refresh Enable */
#define _DAC_CH0CTRL_CH0REFREN_SHIFT      1                 /**< Shift value for DAC_CH0REFREN */
#define _DAC_CH0CTRL_CH0REFREN_MASK       0x2               /**< Bit mask for DAC_CH0REFREN */
#define DAC_CH0CTRL_CH0REFREN_DEFAULT     (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0REFREN_DEFAULT    0x00000000        /**< Mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSEN              (1 << 2)          /**< Channel 0 PRS Trigger Enable */
#define _DAC_CH0CTRL_CH0PRSEN_SHIFT       2                 /**< Shift value for DAC_CH0PRSEN */
#define _DAC_CH0CTRL_CH0PRSEN_MASK        0x4               /**< Bit mask for DAC_CH0PRSEN */
#define DAC_CH0CTRL_CH0PRSEN_DEFAULT      (0x00000000 << 2) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSEN_DEFAULT     0x00000000        /**< Mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_SHIFT      4                 /**< Shift value for DAC_CH0PRSSEL */
#define _DAC_CH0CTRL_CH0PRSSEL_MASK       0x70              /**< Bit mask for DAC_CH0PRSSEL */
#define DAC_CH0CTRL_CH0PRSSEL_DEFAULT     (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH0      (0x00000000 << 4) /**< Shifted mode PRSCH0 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH1      (0x00000001 << 4) /**< Shifted mode PRSCH1 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH2      (0x00000002 << 4) /**< Shifted mode PRSCH2 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH3      (0x00000003 << 4) /**< Shifted mode PRSCH3 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH4      (0x00000004 << 4) /**< Shifted mode PRSCH4 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH5      (0x00000005 << 4) /**< Shifted mode PRSCH5 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH6      (0x00000006 << 4) /**< Shifted mode PRSCH6 for DAC_CH0CTRL */
#define DAC_CH0CTRL_CH0PRSSEL_PRSCH7      (0x00000007 << 4) /**< Shifted mode PRSCH7 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_DEFAULT    0x00000000        /**< Mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH0     0x00000000        /**< Mode PRSCH0 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH1     0x00000001        /**< Mode PRSCH1 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH2     0x00000002        /**< Mode PRSCH2 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH3     0x00000003        /**< Mode PRSCH3 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH4     0x00000004        /**< Mode PRSCH4 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH5     0x00000005        /**< Mode PRSCH5 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH6     0x00000006        /**< Mode PRSCH6 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_CH0PRSSEL_PRSCH7     0x00000007        /**< Mode PRSCH7 for DAC_CH0CTRL */

/** Bit fields for DAC CH1CTRL */
#define _DAC_CH1CTRL_RESETVALUE           0x00000000        /**< Default value for DAC_CH1CTRL */
#define _DAC_CH1CTRL_MASK                 0x00000077        /**< Mask for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1EN                 (1 << 0)          /**< Channel 1 Enable */
#define _DAC_CH1CTRL_CH1EN_SHIFT          0                 /**< Shift value for DAC_CH1EN */
#define _DAC_CH1CTRL_CH1EN_MASK           0x1               /**< Bit mask for DAC_CH1EN */
#define DAC_CH1CTRL_CH1EN_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1EN_DEFAULT        0x00000000        /**< Mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1REFREN             (1 << 1)          /**< Channel 1 Automatic Refresh Enable */
#define _DAC_CH1CTRL_CH1REFREN_SHIFT      1                 /**< Shift value for DAC_CH1REFREN */
#define _DAC_CH1CTRL_CH1REFREN_MASK       0x2               /**< Bit mask for DAC_CH1REFREN */
#define DAC_CH1CTRL_CH1REFREN_DEFAULT     (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1REFREN_DEFAULT    0x00000000        /**< Mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSEN              (1 << 2)          /**< Channel 1 PRS Trigger Enable */
#define _DAC_CH1CTRL_CH1PRSEN_SHIFT       2                 /**< Shift value for DAC_CH1PRSEN */
#define _DAC_CH1CTRL_CH1PRSEN_MASK        0x4               /**< Bit mask for DAC_CH1PRSEN */
#define DAC_CH1CTRL_CH1PRSEN_DEFAULT      (0x00000000 << 2) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSEN_DEFAULT     0x00000000        /**< Mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_SHIFT      4                 /**< Shift value for DAC_CH1PRSSEL */
#define _DAC_CH1CTRL_CH1PRSSEL_MASK       0x70              /**< Bit mask for DAC_CH1PRSSEL */
#define DAC_CH1CTRL_CH1PRSSEL_DEFAULT     (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH0      (0x00000000 << 4) /**< Shifted mode PRSCH0 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH1      (0x00000001 << 4) /**< Shifted mode PRSCH1 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH2      (0x00000002 << 4) /**< Shifted mode PRSCH2 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH3      (0x00000003 << 4) /**< Shifted mode PRSCH3 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH4      (0x00000004 << 4) /**< Shifted mode PRSCH4 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH5      (0x00000005 << 4) /**< Shifted mode PRSCH5 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH6      (0x00000006 << 4) /**< Shifted mode PRSCH6 for DAC_CH1CTRL */
#define DAC_CH1CTRL_CH1PRSSEL_PRSCH7      (0x00000007 << 4) /**< Shifted mode PRSCH7 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_DEFAULT    0x00000000        /**< Mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH0     0x00000000        /**< Mode PRSCH0 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH1     0x00000001        /**< Mode PRSCH1 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH2     0x00000002        /**< Mode PRSCH2 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH3     0x00000003        /**< Mode PRSCH3 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH4     0x00000004        /**< Mode PRSCH4 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH5     0x00000005        /**< Mode PRSCH5 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH6     0x00000006        /**< Mode PRSCH6 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_CH1PRSSEL_PRSCH7     0x00000007        /**< Mode PRSCH7 for DAC_CH1CTRL */

/** Bit fields for DAC IEN */
#define _DAC_IEN_RESETVALUE               0x00000000        /**< Default value for DAC_IEN */
#define _DAC_IEN_MASK                     0x00000033        /**< Mask for DAC_IEN */
#define DAC_IEN_CH0                       (1 << 0)          /**< Channel 0 Conversion Complete Interrupt Enable */
#define _DAC_IEN_CH0_SHIFT                0                 /**< Shift value for DAC_CH0 */
#define _DAC_IEN_CH0_MASK                 0x1               /**< Bit mask for DAC_CH0 */
#define DAC_IEN_CH0_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH0_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH1                       (1 << 1)          /**< Channel 1 Conversion Complete Interrupt Enable */
#define _DAC_IEN_CH1_SHIFT                1                 /**< Shift value for DAC_CH1 */
#define _DAC_IEN_CH1_MASK                 0x2               /**< Bit mask for DAC_CH1 */
#define DAC_IEN_CH1_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH1_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH0UF                     (1 << 4)          /**< Channel 0 Conversion Data Underflow Interrupt Enable */
#define _DAC_IEN_CH0UF_SHIFT              4                 /**< Shift value for DAC_CH0UF */
#define _DAC_IEN_CH0UF_MASK               0x10              /**< Bit mask for DAC_CH0UF */
#define DAC_IEN_CH0UF_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH0UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH1UF                     (1 << 5)          /**< Channel 1 Conversion Data Underflow Interrupt Enable */
#define _DAC_IEN_CH1UF_SHIFT              5                 /**< Shift value for DAC_CH1UF */
#define _DAC_IEN_CH1UF_MASK               0x20              /**< Bit mask for DAC_CH1UF */
#define DAC_IEN_CH1UF_DEFAULT             (0x00000000 << 5) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH1UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IEN */

/** Bit fields for DAC IF */
#define _DAC_IF_RESETVALUE                0x00000000        /**< Default value for DAC_IF */
#define _DAC_IF_MASK                      0x00000033        /**< Mask for DAC_IF */
#define DAC_IF_CH0                        (1 << 0)          /**< Channel 0 Conversion Complete Interrupt Flag */
#define _DAC_IF_CH0_SHIFT                 0                 /**< Shift value for DAC_CH0 */
#define _DAC_IF_CH0_MASK                  0x1               /**< Bit mask for DAC_CH0 */
#define DAC_IF_CH0_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH0_DEFAULT               0x00000000        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH1                        (1 << 1)          /**< Channel 1 Conversion Complete Interrupt Flag */
#define _DAC_IF_CH1_SHIFT                 1                 /**< Shift value for DAC_CH1 */
#define _DAC_IF_CH1_MASK                  0x2               /**< Bit mask for DAC_CH1 */
#define DAC_IF_CH1_DEFAULT                (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH1_DEFAULT               0x00000000        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH0UF                      (1 << 4)          /**< Channel 0 Data Underflow Interrupt Flag */
#define _DAC_IF_CH0UF_SHIFT               4                 /**< Shift value for DAC_CH0UF */
#define _DAC_IF_CH0UF_MASK                0x10              /**< Bit mask for DAC_CH0UF */
#define DAC_IF_CH0UF_DEFAULT              (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH0UF_DEFAULT             0x00000000        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH1UF                      (1 << 5)          /**< Channel 1 Data Underflow Interrupt Flag */
#define _DAC_IF_CH1UF_SHIFT               5                 /**< Shift value for DAC_CH1UF */
#define _DAC_IF_CH1UF_MASK                0x20              /**< Bit mask for DAC_CH1UF */
#define DAC_IF_CH1UF_DEFAULT              (0x00000000 << 5) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH1UF_DEFAULT             0x00000000        /**< Mode DEFAULT for DAC_IF */

/** Bit fields for DAC IFS */
#define _DAC_IFS_RESETVALUE               0x00000000        /**< Default value for DAC_IFS */
#define _DAC_IFS_MASK                     0x00000033        /**< Mask for DAC_IFS */
#define DAC_IFS_CH0                       (1 << 0)          /**< Channel 0 Conversion Complete Interrupt Flag Set */
#define _DAC_IFS_CH0_SHIFT                0                 /**< Shift value for DAC_CH0 */
#define _DAC_IFS_CH0_MASK                 0x1               /**< Bit mask for DAC_CH0 */
#define DAC_IFS_CH0_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH0_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH1                       (1 << 1)          /**< Channel 1 Conversion Complete Interrupt Flag Set */
#define _DAC_IFS_CH1_SHIFT                1                 /**< Shift value for DAC_CH1 */
#define _DAC_IFS_CH1_MASK                 0x2               /**< Bit mask for DAC_CH1 */
#define DAC_IFS_CH1_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH1_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH0UF                     (1 << 4)          /**< Channel 0 Data Underflow Interrupt Flag Set */
#define _DAC_IFS_CH0UF_SHIFT              4                 /**< Shift value for DAC_CH0UF */
#define _DAC_IFS_CH0UF_MASK               0x10              /**< Bit mask for DAC_CH0UF */
#define DAC_IFS_CH0UF_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH0UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH1UF                     (1 << 5)          /**< Channel 1 Data Underflow Interrupt Flag Set */
#define _DAC_IFS_CH1UF_SHIFT              5                 /**< Shift value for DAC_CH1UF */
#define _DAC_IFS_CH1UF_MASK               0x20              /**< Bit mask for DAC_CH1UF */
#define DAC_IFS_CH1UF_DEFAULT             (0x00000000 << 5) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH1UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IFS */

/** Bit fields for DAC IFC */
#define _DAC_IFC_RESETVALUE               0x00000000        /**< Default value for DAC_IFC */
#define _DAC_IFC_MASK                     0x00000033        /**< Mask for DAC_IFC */
#define DAC_IFC_CH0                       (1 << 0)          /**< Channel 0 Conversion Complete Interrupt Flag Clear */
#define _DAC_IFC_CH0_SHIFT                0                 /**< Shift value for DAC_CH0 */
#define _DAC_IFC_CH0_MASK                 0x1               /**< Bit mask for DAC_CH0 */
#define DAC_IFC_CH0_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH0_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH1                       (1 << 1)          /**< Channel 1 Conversion Complete Interrupt Flag Clear */
#define _DAC_IFC_CH1_SHIFT                1                 /**< Shift value for DAC_CH1 */
#define _DAC_IFC_CH1_MASK                 0x2               /**< Bit mask for DAC_CH1 */
#define DAC_IFC_CH1_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH1_DEFAULT              0x00000000        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH0UF                     (1 << 4)          /**< Channel 0 Data Underflow Interrupt Flag Clear */
#define _DAC_IFC_CH0UF_SHIFT              4                 /**< Shift value for DAC_CH0UF */
#define _DAC_IFC_CH0UF_MASK               0x10              /**< Bit mask for DAC_CH0UF */
#define DAC_IFC_CH0UF_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH0UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH1UF                     (1 << 5)          /**< Channel 1 Data Underflow Interrupt Flag Clear */
#define _DAC_IFC_CH1UF_SHIFT              5                 /**< Shift value for DAC_CH1UF */
#define _DAC_IFC_CH1UF_MASK               0x20              /**< Bit mask for DAC_CH1UF */
#define DAC_IFC_CH1UF_DEFAULT             (0x00000000 << 5) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH1UF_DEFAULT            0x00000000        /**< Mode DEFAULT for DAC_IFC */

/** Bit fields for DAC CH0DATA */
#define _DAC_CH0DATA_RESETVALUE           0x00000000        /**< Default value for DAC_CH0DATA */
#define _DAC_CH0DATA_MASK                 0x00000FFF        /**< Mask for DAC_CH0DATA */
#define _DAC_CH0DATA_CH0DATA_SHIFT        0                 /**< Shift value for DAC_CH0DATA */
#define _DAC_CH0DATA_CH0DATA_MASK         0xFFF             /**< Bit mask for DAC_CH0DATA */
#define DAC_CH0DATA_CH0DATA_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_CH0DATA */
#define _DAC_CH0DATA_CH0DATA_DEFAULT      0x00000000        /**< Mode DEFAULT for DAC_CH0DATA */

/** Bit fields for DAC CH1DATA */
#define _DAC_CH1DATA_RESETVALUE           0x00000000        /**< Default value for DAC_CH1DATA */
#define _DAC_CH1DATA_MASK                 0x00000FFF        /**< Mask for DAC_CH1DATA */
#define _DAC_CH1DATA_CH1DATA_SHIFT        0                 /**< Shift value for DAC_CH1DATA */
#define _DAC_CH1DATA_CH1DATA_MASK         0xFFF             /**< Bit mask for DAC_CH1DATA */
#define DAC_CH1DATA_CH1DATA_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for DAC_CH1DATA */
#define _DAC_CH1DATA_CH1DATA_DEFAULT      0x00000000        /**< Mode DEFAULT for DAC_CH1DATA */

/** Bit fields for DAC COMBDATA */
#define _DAC_COMBDATA_RESETVALUE          0x00000000         /**< Default value for DAC_COMBDATA */
#define _DAC_COMBDATA_MASK                0x0FFF0FFF         /**< Mask for DAC_COMBDATA */
#define _DAC_COMBDATA_CH0CDATA_SHIFT      0                  /**< Shift value for DAC_CH0CDATA */
#define _DAC_COMBDATA_CH0CDATA_MASK       0xFFF              /**< Bit mask for DAC_CH0CDATA */
#define DAC_COMBDATA_CH0CDATA_DEFAULT     (0x00000000 << 0)  /**< Shifted mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH0CDATA_DEFAULT    0x00000000         /**< Mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH1CDATA_SHIFT      16                 /**< Shift value for DAC_CH1CDATA */
#define _DAC_COMBDATA_CH1CDATA_MASK       0xFFF0000          /**< Bit mask for DAC_CH1CDATA */
#define DAC_COMBDATA_CH1CDATA_DEFAULT     (0x00000000 << 16) /**< Shifted mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH1CDATA_DEFAULT    0x00000000         /**< Mode DEFAULT for DAC_COMBDATA */

/** Bit fields for DAC CAL */
#define _DAC_CAL_RESETVALUE               0x00400000         /**< Default value for DAC_CAL */
#define _DAC_CAL_MASK                     0x007F7F7F         /**< Mask for DAC_CAL */
#define _DAC_CAL_CH0OFFSET_SHIFT          0                  /**< Shift value for DAC_CH0OFFSET */
#define _DAC_CAL_CH0OFFSET_MASK           0x7F               /**< Bit mask for DAC_CH0OFFSET */
#define DAC_CAL_CH0OFFSET_DEFAULT         (0x00000000 << 0)  /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH0OFFSET_DEFAULT        0x00000000         /**< Mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH1OFFSET_SHIFT          8                  /**< Shift value for DAC_CH1OFFSET */
#define _DAC_CAL_CH1OFFSET_MASK           0x7F00             /**< Bit mask for DAC_CH1OFFSET */
#define DAC_CAL_CH1OFFSET_DEFAULT         (0x00000000 << 8)  /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH1OFFSET_DEFAULT        0x00000000         /**< Mode DEFAULT for DAC_CAL */
#define _DAC_CAL_GAIN_SHIFT               16                 /**< Shift value for DAC_GAIN */
#define _DAC_CAL_GAIN_MASK                0x7F0000           /**< Bit mask for DAC_GAIN */
#define DAC_CAL_GAIN_DEFAULT              (0x00000040 << 16) /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_GAIN_DEFAULT             0x00000040         /**< Mode DEFAULT for DAC_CAL */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_ACMP
 * @{
 */

/** Bit fields for ACMP CTRL */
#define _ACMP_CTRL_RESETVALUE              0x47000000         /**< Default value for ACMP_CTRL */
#define _ACMP_CTRL_MASK                    0xCF03077F         /**< Mask for ACMP_CTRL */
#define ACMP_CTRL_EN                       (1 << 0)           /**< Analog Comparator Enable */
#define _ACMP_CTRL_EN_SHIFT                0                  /**< Shift value for ACMP_EN */
#define _ACMP_CTRL_EN_MASK                 0x1                /**< Bit mask for ACMP_EN */
#define ACMP_CTRL_EN_DEFAULT               (0x00000000 << 0)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_EN_DEFAULT              0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_MUXEN                    (1 << 1)           /**< Input Mux Enable */
#define _ACMP_CTRL_MUXEN_SHIFT             1                  /**< Shift value for ACMP_MUXEN */
#define _ACMP_CTRL_MUXEN_MASK              0x2                /**< Bit mask for ACMP_MUXEN */
#define ACMP_CTRL_MUXEN_DEFAULT            (0x00000000 << 1)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_MUXEN_DEFAULT           0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL                 (1 << 2)           /**< Inactive Value */
#define _ACMP_CTRL_INACTVAL_SHIFT          2                  /**< Shift value for ACMP_INACTVAL */
#define _ACMP_CTRL_INACTVAL_MASK           0x4                /**< Bit mask for ACMP_INACTVAL */
#define ACMP_CTRL_INACTVAL_DEFAULT         (0x00000000 << 2)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL_LOW             (0x00000000 << 2)  /**< Shifted mode LOW for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL_HIGH            (0x00000001 << 2)  /**< Shifted mode HIGH for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_DEFAULT        0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_LOW            0x00000000         /**< Mode LOW for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_HIGH           0x00000001         /**< Mode HIGH for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV                  (1 << 3)           /**< Comparator GPIO Output Invert */
#define _ACMP_CTRL_GPIOINV_SHIFT           3                  /**< Shift value for ACMP_GPIOINV */
#define _ACMP_CTRL_GPIOINV_MASK            0x8                /**< Bit mask for ACMP_GPIOINV */
#define ACMP_CTRL_GPIOINV_DEFAULT          (0x00000000 << 3)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV_NOTINV           (0x00000000 << 3)  /**< Shifted mode NOTINV for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV_INV              (0x00000001 << 3)  /**< Shifted mode INV for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_DEFAULT         0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_NOTINV          0x00000000         /**< Mode NOTINV for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_INV             0x00000001         /**< Mode INV for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_SHIFT           4                  /**< Shift value for ACMP_HYSTSEL */
#define _ACMP_CTRL_HYSTSEL_MASK            0x70               /**< Bit mask for ACMP_HYSTSEL */
#define ACMP_CTRL_HYSTSEL_DEFAULT          (0x00000000 << 4)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST0            (0x00000000 << 4)  /**< Shifted mode HYST0 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST1            (0x00000001 << 4)  /**< Shifted mode HYST1 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST2            (0x00000002 << 4)  /**< Shifted mode HYST2 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST3            (0x00000003 << 4)  /**< Shifted mode HYST3 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST4            (0x00000004 << 4)  /**< Shifted mode HYST4 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST5            (0x00000005 << 4)  /**< Shifted mode HYST5 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST6            (0x00000006 << 4)  /**< Shifted mode HYST6 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST7            (0x00000007 << 4)  /**< Shifted mode HYST7 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_DEFAULT         0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST0           0x00000000         /**< Mode HYST0 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST1           0x00000001         /**< Mode HYST1 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST2           0x00000002         /**< Mode HYST2 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST3           0x00000003         /**< Mode HYST3 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST4           0x00000004         /**< Mode HYST4 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST5           0x00000005         /**< Mode HYST5 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST6           0x00000006         /**< Mode HYST6 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST7           0x00000007         /**< Mode HYST7 for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_SHIFT          8                  /**< Shift value for ACMP_WARMTIME */
#define _ACMP_CTRL_WARMTIME_MASK           0x700              /**< Bit mask for ACMP_WARMTIME */
#define ACMP_CTRL_WARMTIME_DEFAULT         (0x00000000 << 8)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_4CYCLES         (0x00000000 << 8)  /**< Shifted mode 4CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_8CYCLES         (0x00000001 << 8)  /**< Shifted mode 8CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_16CYCLES        (0x00000002 << 8)  /**< Shifted mode 16CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_32CYCLES        (0x00000003 << 8)  /**< Shifted mode 32CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_64CYCLES        (0x00000004 << 8)  /**< Shifted mode 64CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_128CYCLES       (0x00000005 << 8)  /**< Shifted mode 128CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_256CYCLES       (0x00000006 << 8)  /**< Shifted mode 256CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_512CYCLES       (0x00000007 << 8)  /**< Shifted mode 512CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_DEFAULT        0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_4CYCLES        0x00000000         /**< Mode 4CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_8CYCLES        0x00000001         /**< Mode 8CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_16CYCLES       0x00000002         /**< Mode 16CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_32CYCLES       0x00000003         /**< Mode 32CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_64CYCLES       0x00000004         /**< Mode 64CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_128CYCLES      0x00000005         /**< Mode 128CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_256CYCLES      0x00000006         /**< Mode 256CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_512CYCLES      0x00000007         /**< Mode 512CYCLES for ACMP_CTRL */
#define ACMP_CTRL_IRISE                    (1 << 16)          /**< Rising Edge Interrupt Sense */
#define _ACMP_CTRL_IRISE_SHIFT             16                 /**< Shift value for ACMP_IRISE */
#define _ACMP_CTRL_IRISE_MASK              0x10000            /**< Bit mask for ACMP_IRISE */
#define ACMP_CTRL_IRISE_DEFAULT            (0x00000000 << 16) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_IRISE_DISABLED           (0x00000000 << 16) /**< Shifted mode DISABLED for ACMP_CTRL */
#define ACMP_CTRL_IRISE_ENABLED            (0x00000001 << 16) /**< Shifted mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_DEFAULT           0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_DISABLED          0x00000000         /**< Mode DISABLED for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_ENABLED           0x00000001         /**< Mode ENABLED for ACMP_CTRL */
#define ACMP_CTRL_IFALL                    (1 << 17)          /**< Falling Edge Interrupt Sense */
#define _ACMP_CTRL_IFALL_SHIFT             17                 /**< Shift value for ACMP_IFALL */
#define _ACMP_CTRL_IFALL_MASK              0x20000            /**< Bit mask for ACMP_IFALL */
#define ACMP_CTRL_IFALL_DEFAULT            (0x00000000 << 17) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_IFALL_DISABLED           (0x00000000 << 17) /**< Shifted mode DISABLED for ACMP_CTRL */
#define ACMP_CTRL_IFALL_ENABLED            (0x00000001 << 17) /**< Shifted mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_DEFAULT           0x00000000         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_DISABLED          0x00000000         /**< Mode DISABLED for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_ENABLED           0x00000001         /**< Mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_BIASPROG_SHIFT          24                 /**< Shift value for ACMP_BIASPROG */
#define _ACMP_CTRL_BIASPROG_MASK           0xF000000          /**< Bit mask for ACMP_BIASPROG */
#define ACMP_CTRL_BIASPROG_DEFAULT         (0x00000007 << 24) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_BIASPROG_DEFAULT        0x00000007         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_HALFBIAS                 (1 << 30)          /**< Half Bias Current */
#define _ACMP_CTRL_HALFBIAS_SHIFT          30                 /**< Shift value for ACMP_HALFBIAS */
#define _ACMP_CTRL_HALFBIAS_MASK           0x40000000         /**< Bit mask for ACMP_HALFBIAS */
#define ACMP_CTRL_HALFBIAS_DEFAULT         (0x00000001 << 30) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_HALFBIAS_DEFAULT        0x00000001         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_FULLBIAS                 (1 << 31)          /**< Full Bias Current */
#define _ACMP_CTRL_FULLBIAS_SHIFT          31                 /**< Shift value for ACMP_FULLBIAS */
#define _ACMP_CTRL_FULLBIAS_MASK           0x80000000         /**< Bit mask for ACMP_FULLBIAS */
#define ACMP_CTRL_FULLBIAS_DEFAULT         (0x00000000 << 31) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_FULLBIAS_DEFAULT        0x00000000         /**< Mode DEFAULT for ACMP_CTRL */

/** Bit fields for ACMP INPUTSEL */
#define _ACMP_INPUTSEL_RESETVALUE          0x00010080         /**< Default value for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_MASK                0x31013FF7         /**< Mask for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_SHIFT        0                  /**< Shift value for ACMP_POSSEL */
#define _ACMP_INPUTSEL_POSSEL_MASK         0x7                /**< Bit mask for ACMP_POSSEL */
#define ACMP_INPUTSEL_POSSEL_DEFAULT       (0x00000000 << 0)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN0       (0x00000000 << 0)  /**< Shifted mode POSPIN0 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN1       (0x00000001 << 0)  /**< Shifted mode POSPIN1 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN2       (0x00000002 << 0)  /**< Shifted mode POSPIN2 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN3       (0x00000003 << 0)  /**< Shifted mode POSPIN3 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN4       (0x00000004 << 0)  /**< Shifted mode POSPIN4 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN5       (0x00000005 << 0)  /**< Shifted mode POSPIN5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN6       (0x00000006 << 0)  /**< Shifted mode POSPIN6 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_POSPIN7       (0x00000007 << 0)  /**< Shifted mode POSPIN7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_DEFAULT      0x00000000         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN0      0x00000000         /**< Mode POSPIN0 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN1      0x00000001         /**< Mode POSPIN1 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN2      0x00000002         /**< Mode POSPIN2 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN3      0x00000003         /**< Mode POSPIN3 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN4      0x00000004         /**< Mode POSPIN4 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN5      0x00000005         /**< Mode POSPIN5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN6      0x00000006         /**< Mode POSPIN6 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_POSPIN7      0x00000007         /**< Mode POSPIN7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_SHIFT        4                  /**< Shift value for ACMP_NEGSEL */
#define _ACMP_INPUTSEL_NEGSEL_MASK         0xF0               /**< Bit mask for ACMP_NEGSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN0       (0x00000000 << 4)  /**< Shifted mode NEGPIN0 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN1       (0x00000001 << 4)  /**< Shifted mode NEGPIN1 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN2       (0x00000002 << 4)  /**< Shifted mode NEGPIN2 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN3       (0x00000003 << 4)  /**< Shifted mode NEGPIN3 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN4       (0x00000004 << 4)  /**< Shifted mode NEGPIN4 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN5       (0x00000005 << 4)  /**< Shifted mode NEGPIN5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN6       (0x00000006 << 4)  /**< Shifted mode NEGPIN6 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGPIN7       (0x00000007 << 4)  /**< Shifted mode NEGPIN7 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_DEFAULT       (0x00000008 << 4)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEG1V25       (0x00000008 << 4)  /**< Shifted mode NEG1V25 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEG2V5        (0x00000009 << 4)  /**< Shifted mode NEG2V5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_NEGVDD        (0x0000000A << 4)  /**< Shifted mode NEGVDD for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CAPSENSE      (0x0000000B << 4)  /**< Shifted mode CAPSENSE for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN0      0x00000000         /**< Mode NEGPIN0 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN1      0x00000001         /**< Mode NEGPIN1 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN2      0x00000002         /**< Mode NEGPIN2 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN3      0x00000003         /**< Mode NEGPIN3 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN4      0x00000004         /**< Mode NEGPIN4 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN5      0x00000005         /**< Mode NEGPIN5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN6      0x00000006         /**< Mode NEGPIN6 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGPIN7      0x00000007         /**< Mode NEGPIN7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_DEFAULT      0x00000008         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEG1V25      0x00000008         /**< Mode NEG1V25 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEG2V5       0x00000009         /**< Mode NEG2V5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_NEGVDD       0x0000000A         /**< Mode NEGVDD for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CAPSENSE     0x0000000B         /**< Mode CAPSENSE for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_VDDLEVEL_SHIFT      8                  /**< Shift value for ACMP_VDDLEVEL */
#define _ACMP_INPUTSEL_VDDLEVEL_MASK       0x3F00             /**< Bit mask for ACMP_VDDLEVEL */
#define ACMP_INPUTSEL_VDDLEVEL_DEFAULT     (0x00000000 << 8)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_VDDLEVEL_DEFAULT    0x00000000         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_LPREF                (1 << 16)          /**< Low Power Reference Mode */
#define _ACMP_INPUTSEL_LPREF_SHIFT         16                 /**< Shift value for ACMP_LPREF */
#define _ACMP_INPUTSEL_LPREF_MASK          0x10000            /**< Bit mask for ACMP_LPREF */
#define ACMP_INPUTSEL_LPREF_DEFAULT        (0x00000001 << 16) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_LPREF_DEFAULT       0x00000001         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESEN              (1 << 24)          /**< Capacitive Sense Mode Internal Resistor Enable */
#define _ACMP_INPUTSEL_CSRESEN_SHIFT       24                 /**< Shift value for ACMP_CSRESEN */
#define _ACMP_INPUTSEL_CSRESEN_MASK        0x1000000          /**< Bit mask for ACMP_CSRESEN */
#define ACMP_INPUTSEL_CSRESEN_DEFAULT      (0x00000000 << 24) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESEN_DEFAULT     0x00000000         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_SHIFT      28                 /**< Shift value for ACMP_CSRESSEL */
#define _ACMP_INPUTSEL_CSRESSEL_MASK       0x30000000         /**< Bit mask for ACMP_CSRESSEL */
#define ACMP_INPUTSEL_CSRESSEL_DEFAULT     (0x00000000 << 28) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_30KOHM      (0x00000000 << 28) /**< Shifted mode 30KOHM for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_60KOHM      (0x00000001 << 28) /**< Shifted mode 60KOHM for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_90KOHM      (0x00000002 << 28) /**< Shifted mode 90KOHM for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_120KOHM     (0x00000003 << 28) /**< Shifted mode 120KOHM for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_DEFAULT    0x00000000         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_30KOHM     0x00000000         /**< Mode 30KOHM for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_60KOHM     0x00000001         /**< Mode 60KOHM for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_90KOHM     0x00000002         /**< Mode 90KOHM for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_120KOHM    0x00000003         /**< Mode 120KOHM for ACMP_INPUTSEL */

/** Bit fields for ACMP STATUS */
#define _ACMP_STATUS_RESETVALUE            0x00000000        /**< Default value for ACMP_STATUS */
#define _ACMP_STATUS_MASK                  0x00000003        /**< Mask for ACMP_STATUS */
#define ACMP_STATUS_ACMPACT                (1 << 0)          /**< Analog Comparator Active */
#define _ACMP_STATUS_ACMPACT_SHIFT         0                 /**< Shift value for ACMP_ACMPACT */
#define _ACMP_STATUS_ACMPACT_MASK          0x1               /**< Bit mask for ACMP_ACMPACT */
#define ACMP_STATUS_ACMPACT_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_STATUS */
#define _ACMP_STATUS_ACMPACT_DEFAULT       0x00000000        /**< Mode DEFAULT for ACMP_STATUS */
#define ACMP_STATUS_ACMPOUT                (1 << 1)          /**< Analog Comparator Output */
#define _ACMP_STATUS_ACMPOUT_SHIFT         1                 /**< Shift value for ACMP_ACMPOUT */
#define _ACMP_STATUS_ACMPOUT_MASK          0x2               /**< Bit mask for ACMP_ACMPOUT */
#define ACMP_STATUS_ACMPOUT_DEFAULT        (0x00000000 << 1) /**< Shifted mode DEFAULT for ACMP_STATUS */
#define _ACMP_STATUS_ACMPOUT_DEFAULT       0x00000000        /**< Mode DEFAULT for ACMP_STATUS */

/** Bit fields for ACMP IEN */
#define _ACMP_IEN_RESETVALUE               0x00000000        /**< Default value for ACMP_IEN */
#define _ACMP_IEN_MASK                     0x00000003        /**< Mask for ACMP_IEN */
#define ACMP_IEN_EDGE                      (1 << 0)          /**< Edge Trigger Interrupt Enable */
#define _ACMP_IEN_EDGE_SHIFT               0                 /**< Shift value for ACMP_EDGE */
#define _ACMP_IEN_EDGE_MASK                0x1               /**< Bit mask for ACMP_EDGE */
#define ACMP_IEN_EDGE_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_IEN */
#define _ACMP_IEN_EDGE_DEFAULT             0x00000000        /**< Mode DEFAULT for ACMP_IEN */
#define ACMP_IEN_WARMUP                    (1 << 1)          /**< Warm-up Interrupt Enable */
#define _ACMP_IEN_WARMUP_SHIFT             1                 /**< Shift value for ACMP_WARMUP */
#define _ACMP_IEN_WARMUP_MASK              0x2               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IEN_WARMUP_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for ACMP_IEN */
#define _ACMP_IEN_WARMUP_DEFAULT           0x00000000        /**< Mode DEFAULT for ACMP_IEN */

/** Bit fields for ACMP IF */
#define _ACMP_IF_RESETVALUE                0x00000000        /**< Default value for ACMP_IF */
#define _ACMP_IF_MASK                      0x00000003        /**< Mask for ACMP_IF */
#define ACMP_IF_EDGE                       (1 << 0)          /**< Edge Triggered Interrupt Flag */
#define _ACMP_IF_EDGE_SHIFT                0                 /**< Shift value for ACMP_EDGE */
#define _ACMP_IF_EDGE_MASK                 0x1               /**< Bit mask for ACMP_EDGE */
#define ACMP_IF_EDGE_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_IF */
#define _ACMP_IF_EDGE_DEFAULT              0x00000000        /**< Mode DEFAULT for ACMP_IF */
#define ACMP_IF_WARMUP                     (1 << 1)          /**< Warm-up Interrupt Flag */
#define _ACMP_IF_WARMUP_SHIFT              1                 /**< Shift value for ACMP_WARMUP */
#define _ACMP_IF_WARMUP_MASK               0x2               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IF_WARMUP_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for ACMP_IF */
#define _ACMP_IF_WARMUP_DEFAULT            0x00000000        /**< Mode DEFAULT for ACMP_IF */

/** Bit fields for ACMP IFS */
#define _ACMP_IFS_RESETVALUE               0x00000000        /**< Default value for ACMP_IFS */
#define _ACMP_IFS_MASK                     0x00000003        /**< Mask for ACMP_IFS */
#define ACMP_IFS_EDGE                      (1 << 0)          /**< Edge Triggered Interrupt Flag Set */
#define _ACMP_IFS_EDGE_SHIFT               0                 /**< Shift value for ACMP_EDGE */
#define _ACMP_IFS_EDGE_MASK                0x1               /**< Bit mask for ACMP_EDGE */
#define ACMP_IFS_EDGE_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_IFS */
#define _ACMP_IFS_EDGE_DEFAULT             0x00000000        /**< Mode DEFAULT for ACMP_IFS */
#define ACMP_IFS_WARMUP                    (1 << 1)          /**< Warm-up Interrupt Flag Set */
#define _ACMP_IFS_WARMUP_SHIFT             1                 /**< Shift value for ACMP_WARMUP */
#define _ACMP_IFS_WARMUP_MASK              0x2               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IFS_WARMUP_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for ACMP_IFS */
#define _ACMP_IFS_WARMUP_DEFAULT           0x00000000        /**< Mode DEFAULT for ACMP_IFS */

/** Bit fields for ACMP IFC */
#define _ACMP_IFC_RESETVALUE               0x00000000        /**< Default value for ACMP_IFC */
#define _ACMP_IFC_MASK                     0x00000003        /**< Mask for ACMP_IFC */
#define ACMP_IFC_EDGE                      (1 << 0)          /**< Edge Triggered Interrupt Flag Clear */
#define _ACMP_IFC_EDGE_SHIFT               0                 /**< Shift value for ACMP_EDGE */
#define _ACMP_IFC_EDGE_MASK                0x1               /**< Bit mask for ACMP_EDGE */
#define ACMP_IFC_EDGE_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_IFC */
#define _ACMP_IFC_EDGE_DEFAULT             0x00000000        /**< Mode DEFAULT for ACMP_IFC */
#define ACMP_IFC_WARMUP                    (1 << 1)          /**< Warm-up Interrupt Flag Clear */
#define _ACMP_IFC_WARMUP_SHIFT             1                 /**< Shift value for ACMP_WARMUP */
#define _ACMP_IFC_WARMUP_MASK              0x2               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IFC_WARMUP_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for ACMP_IFC */
#define _ACMP_IFC_WARMUP_DEFAULT           0x00000000        /**< Mode DEFAULT for ACMP_IFC */

/** Bit fields for ACMP ROUTE */
#define _ACMP_ROUTE_RESETVALUE             0x00000000        /**< Default value for ACMP_ROUTE */
#define _ACMP_ROUTE_MASK                   0x00000301        /**< Mask for ACMP_ROUTE */
#define ACMP_ROUTE_ACMPPEN                 (1 << 0)          /**< ACMP Output Pin Enable */
#define _ACMP_ROUTE_ACMPPEN_SHIFT          0                 /**< Shift value for ACMP_ACMPPEN */
#define _ACMP_ROUTE_ACMPPEN_MASK           0x1               /**< Bit mask for ACMP_ACMPPEN */
#define ACMP_ROUTE_ACMPPEN_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_ACMPPEN_DEFAULT        0x00000000        /**< Mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_SHIFT         8                 /**< Shift value for ACMP_LOCATION */
#define _ACMP_ROUTE_LOCATION_MASK          0x300             /**< Bit mask for ACMP_LOCATION */
#define ACMP_ROUTE_LOCATION_DEFAULT        (0x00000000 << 8) /**< Shifted mode DEFAULT for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC0           (0x00000000 << 8) /**< Shifted mode LOC0 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC1           (0x00000001 << 8) /**< Shifted mode LOC1 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC2           (0x00000002 << 8) /**< Shifted mode LOC2 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC3           (0x00000003 << 8) /**< Shifted mode LOC3 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_DEFAULT       0x00000000        /**< Mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC0          0x00000000        /**< Mode LOC0 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC1          0x00000001        /**< Mode LOC1 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC2          0x00000002        /**< Mode LOC2 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC3          0x00000003        /**< Mode LOC3 for ACMP_ROUTE */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_MSC
 * @{
 */

/** Bit fields for MSC CTRL */
#define _MSC_CTRL_RESETVALUE                    0x00000001        /**< Default value for MSC_CTRL */
#define _MSC_CTRL_MASK                          0x00000001        /**< Mask for MSC_CTRL */
#define MSC_CTRL_BUSFAULT                       (1 << 0)          /**< Bus Fault Response Enable */
#define _MSC_CTRL_BUSFAULT_SHIFT                0                 /**< Shift value for MSC_BUSFAULT */
#define _MSC_CTRL_BUSFAULT_MASK                 0x1               /**< Bit mask for MSC_BUSFAULT */
#define MSC_CTRL_BUSFAULT_GENERATE              (0x00000000 << 0) /**< Shifted mode GENERATE for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_DEFAULT               (0x00000001 << 0) /**< Shifted mode DEFAULT for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_IGNORE                (0x00000001 << 0) /**< Shifted mode IGNORE for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_GENERATE             0x00000000        /**< Mode GENERATE for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_DEFAULT              0x00000001        /**< Mode DEFAULT for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_IGNORE               0x00000001        /**< Mode IGNORE for MSC_CTRL */

/** Bit fields for MSC READCTRL */
#define _MSC_READCTRL_RESETVALUE                0x00000001        /**< Default value for MSC_READCTRL */
#define _MSC_READCTRL_MASK                      0x00000007        /**< Mask for MSC_READCTRL */
#define _MSC_READCTRL_MODE_SHIFT                0                 /**< Shift value for MSC_MODE */
#define _MSC_READCTRL_MODE_MASK                 0x7               /**< Bit mask for MSC_MODE */
#define MSC_READCTRL_MODE_WS0                   (0x00000000 << 0) /**< Shifted mode WS0 for MSC_READCTRL */
#define MSC_READCTRL_MODE_DEFAULT               (0x00000001 << 0) /**< Shifted mode DEFAULT for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1                   (0x00000001 << 0) /**< Shifted mode WS1 for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS0SCBTP              (0x00000002 << 0) /**< Shifted mode WS0SCBTP for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1SCBTP              (0x00000003 << 0) /**< Shifted mode WS1SCBTP for MSC_READCTRL */
#define MSC_READCTRL_MODE_RESERVED0             (0x00000004 << 0) /**< Shifted mode RESERVED0 for MSC_READCTRL */
#define MSC_READCTRL_MODE_RESERVED1             (0x00000005 << 0) /**< Shifted mode RESERVED1 for MSC_READCTRL */
#define MSC_READCTRL_MODE_RESERVED2             (0x00000006 << 0) /**< Shifted mode RESERVED2 for MSC_READCTRL */
#define MSC_READCTRL_MODE_RESERVED3             (0x00000007 << 0) /**< Shifted mode RESERVED3 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS0                  0x00000000        /**< Mode WS0 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_DEFAULT              0x00000001        /**< Mode DEFAULT for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1                  0x00000001        /**< Mode WS1 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS0SCBTP             0x00000002        /**< Mode WS0SCBTP for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1SCBTP             0x00000003        /**< Mode WS1SCBTP for MSC_READCTRL */
#define _MSC_READCTRL_MODE_RESERVED0            0x00000004        /**< Mode RESERVED0 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_RESERVED1            0x00000005        /**< Mode RESERVED1 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_RESERVED2            0x00000006        /**< Mode RESERVED2 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_RESERVED3            0x00000007        /**< Mode RESERVED3 for MSC_READCTRL */

/** Bit fields for MSC WRITECTRL */
#define _MSC_WRITECTRL_RESETVALUE               0x00000000        /**< Default value for MSC_WRITECTRL */
#define _MSC_WRITECTRL_MASK                     0x00000003        /**< Mask for MSC_WRITECTRL */
#define MSC_WRITECTRL_WREN                      (1 << 0)          /**< Enable Write/Erase Controller  */
#define _MSC_WRITECTRL_WREN_SHIFT               0                 /**< Shift value for MSC_WREN */
#define _MSC_WRITECTRL_WREN_MASK                0x1               /**< Bit mask for MSC_WREN */
#define MSC_WRITECTRL_WREN_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_WRITECTRL */
#define _MSC_WRITECTRL_WREN_DEFAULT             0x00000000        /**< Mode DEFAULT for MSC_WRITECTRL */
#define MSC_WRITECTRL_IRQERASEABORT             (1 << 1)          /**< Abort Page Erase on Interrupt */
#define _MSC_WRITECTRL_IRQERASEABORT_SHIFT      1                 /**< Shift value for MSC_IRQERASEABORT */
#define _MSC_WRITECTRL_IRQERASEABORT_MASK       0x2               /**< Bit mask for MSC_IRQERASEABORT */
#define MSC_WRITECTRL_IRQERASEABORT_DEFAULT     (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_WRITECTRL */
#define _MSC_WRITECTRL_IRQERASEABORT_DEFAULT    0x00000000        /**< Mode DEFAULT for MSC_WRITECTRL */

/** Bit fields for MSC WRITECMD */
#define _MSC_WRITECMD_RESETVALUE                0x00000000        /**< Default value for MSC_WRITECMD */
#define _MSC_WRITECMD_MASK                      0x0000001F        /**< Mask for MSC_WRITECMD */
#define MSC_WRITECMD_LADDRIM                    (1 << 0)          /**< Load MSC_ADDRB into ADDR */
#define _MSC_WRITECMD_LADDRIM_SHIFT             0                 /**< Shift value for MSC_LADDRIM */
#define _MSC_WRITECMD_LADDRIM_MASK              0x1               /**< Bit mask for MSC_LADDRIM */
#define MSC_WRITECMD_LADDRIM_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_LADDRIM_DEFAULT           0x00000000        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_ERASEPAGE                  (1 << 1)          /**< Erase Page */
#define _MSC_WRITECMD_ERASEPAGE_SHIFT           1                 /**< Shift value for MSC_ERASEPAGE */
#define _MSC_WRITECMD_ERASEPAGE_MASK            0x2               /**< Bit mask for MSC_ERASEPAGE */
#define MSC_WRITECMD_ERASEPAGE_DEFAULT          (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_ERASEPAGE_DEFAULT         0x00000000        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEEND                   (1 << 2)          /**< End Write Mode */
#define _MSC_WRITECMD_WRITEEND_SHIFT            2                 /**< Shift value for MSC_WRITEEND */
#define _MSC_WRITECMD_WRITEEND_MASK             0x4               /**< Bit mask for MSC_WRITEEND */
#define MSC_WRITECMD_WRITEEND_DEFAULT           (0x00000000 << 2) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITEEND_DEFAULT          0x00000000        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEONCE                  (1 << 3)          /**< Word Write-Once Trigger */
#define _MSC_WRITECMD_WRITEONCE_SHIFT           3                 /**< Shift value for MSC_WRITEONCE */
#define _MSC_WRITECMD_WRITEONCE_MASK            0x8               /**< Bit mask for MSC_WRITEONCE */
#define MSC_WRITECMD_WRITEONCE_DEFAULT          (0x00000000 << 3) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITEONCE_DEFAULT         0x00000000        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITETRIG                  (1 << 4)          /**< Word Write Sequence Trigger */
#define _MSC_WRITECMD_WRITETRIG_SHIFT           4                 /**< Shift value for MSC_WRITETRIG */
#define _MSC_WRITECMD_WRITETRIG_MASK            0x10              /**< Bit mask for MSC_WRITETRIG */
#define MSC_WRITECMD_WRITETRIG_DEFAULT          (0x00000000 << 4) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITETRIG_DEFAULT         0x00000000        /**< Mode DEFAULT for MSC_WRITECMD */

/** Bit fields for MSC ADDRB */
#define _MSC_ADDRB_RESETVALUE                   0x00000000        /**< Default value for MSC_ADDRB */
#define _MSC_ADDRB_MASK                         0xFFFFFFFF        /**< Mask for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_SHIFT                  0                 /**< Shift value for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_MASK                   0xFFFFFFFF        /**< Bit mask for MSC_ADDRB */
#define MSC_ADDRB_ADDRB_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_DEFAULT                0x00000000        /**< Mode DEFAULT for MSC_ADDRB */

/** Bit fields for MSC WDATA */
#define _MSC_WDATA_RESETVALUE                   0x00000000        /**< Default value for MSC_WDATA */
#define _MSC_WDATA_MASK                         0xFFFFFFFF        /**< Mask for MSC_WDATA */
#define _MSC_WDATA_WDATA_SHIFT                  0                 /**< Shift value for MSC_WDATA */
#define _MSC_WDATA_WDATA_MASK                   0xFFFFFFFF        /**< Bit mask for MSC_WDATA */
#define MSC_WDATA_WDATA_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_WDATA */
#define _MSC_WDATA_WDATA_DEFAULT                0x00000000        /**< Mode DEFAULT for MSC_WDATA */

/** Bit fields for MSC STATUS */
#define _MSC_STATUS_RESETVALUE                  0x00000008        /**< Default value for MSC_STATUS */
#define _MSC_STATUS_MASK                        0x0000003F        /**< Mask for MSC_STATUS */
#define MSC_STATUS_BUSY                         (1 << 0)          /**< Erase/Write Busy */
#define _MSC_STATUS_BUSY_SHIFT                  0                 /**< Shift value for MSC_BUSY */
#define _MSC_STATUS_BUSY_MASK                   0x1               /**< Bit mask for MSC_BUSY */
#define MSC_STATUS_BUSY_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_BUSY_DEFAULT                0x00000000        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_LOCKED                       (1 << 1)          /**< Access Locked */
#define _MSC_STATUS_LOCKED_SHIFT                1                 /**< Shift value for MSC_LOCKED */
#define _MSC_STATUS_LOCKED_MASK                 0x2               /**< Bit mask for MSC_LOCKED */
#define MSC_STATUS_LOCKED_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_LOCKED_DEFAULT              0x00000000        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_INVADDR                      (1 << 2)          /**< Invalid Write Address or Erase Page */
#define _MSC_STATUS_INVADDR_SHIFT               2                 /**< Shift value for MSC_INVADDR */
#define _MSC_STATUS_INVADDR_MASK                0x4               /**< Bit mask for MSC_INVADDR */
#define MSC_STATUS_INVADDR_DEFAULT              (0x00000000 << 2) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_INVADDR_DEFAULT             0x00000000        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WDATAREADY                   (1 << 3)          /**< WDATA Write Ready */
#define _MSC_STATUS_WDATAREADY_SHIFT            3                 /**< Shift value for MSC_WDATAREADY */
#define _MSC_STATUS_WDATAREADY_MASK             0x8               /**< Bit mask for MSC_WDATAREADY */
#define MSC_STATUS_WDATAREADY_DEFAULT           (0x00000001 << 3) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_WDATAREADY_DEFAULT          0x00000001        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WORDTIMEOUT                  (1 << 4)          /**< Flash Write Word Timeout */
#define _MSC_STATUS_WORDTIMEOUT_SHIFT           4                 /**< Shift value for MSC_WORDTIMEOUT */
#define _MSC_STATUS_WORDTIMEOUT_MASK            0x10              /**< Bit mask for MSC_WORDTIMEOUT */
#define MSC_STATUS_WORDTIMEOUT_DEFAULT          (0x00000000 << 4) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_WORDTIMEOUT_DEFAULT         0x00000000        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_ERASEABORTED                 (1 << 5)          /**< The Current Flash Erase Operation Aborted */
#define _MSC_STATUS_ERASEABORTED_SHIFT          5                 /**< Shift value for MSC_ERASEABORTED */
#define _MSC_STATUS_ERASEABORTED_MASK           0x20              /**< Bit mask for MSC_ERASEABORTED */
#define MSC_STATUS_ERASEABORTED_DEFAULT         (0x00000000 << 5) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_ERASEABORTED_DEFAULT        0x00000000        /**< Mode DEFAULT for MSC_STATUS */

/** Bit fields for MSC IF */
#define _MSC_IF_RESETVALUE                      0x00000000        /**< Default value for MSC_IF */
#define _MSC_IF_MASK                            0x00000003        /**< Mask for MSC_IF */
#define MSC_IF_ERASE                            (1 << 0)          /**< Erase Done Interrupt Read Flag */
#define _MSC_IF_ERASE_SHIFT                     0                 /**< Shift value for MSC_ERASE */
#define _MSC_IF_ERASE_MASK                      0x1               /**< Bit mask for MSC_ERASE */
#define MSC_IF_ERASE_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_IF */
#define _MSC_IF_ERASE_DEFAULT                   0x00000000        /**< Mode DEFAULT for MSC_IF */
#define MSC_IF_WRITE                            (1 << 1)          /**< Write Done Interrupt Read Flag */
#define _MSC_IF_WRITE_SHIFT                     1                 /**< Shift value for MSC_WRITE */
#define _MSC_IF_WRITE_MASK                      0x2               /**< Bit mask for MSC_WRITE */
#define MSC_IF_WRITE_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_IF */
#define _MSC_IF_WRITE_DEFAULT                   0x00000000        /**< Mode DEFAULT for MSC_IF */

/** Bit fields for MSC IFS */
#define _MSC_IFS_RESETVALUE                     0x00000000        /**< Default value for MSC_IFS */
#define _MSC_IFS_MASK                           0x00000003        /**< Mask for MSC_IFS */
#define MSC_IFS_ERASE                           (1 << 0)          /**< Erase Done Interrupt Set */
#define _MSC_IFS_ERASE_SHIFT                    0                 /**< Shift value for MSC_ERASE */
#define _MSC_IFS_ERASE_MASK                     0x1               /**< Bit mask for MSC_ERASE */
#define MSC_IFS_ERASE_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_IFS */
#define _MSC_IFS_ERASE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IFS */
#define MSC_IFS_WRITE                           (1 << 1)          /**< Write Done Interrupt Set */
#define _MSC_IFS_WRITE_SHIFT                    1                 /**< Shift value for MSC_WRITE */
#define _MSC_IFS_WRITE_MASK                     0x2               /**< Bit mask for MSC_WRITE */
#define MSC_IFS_WRITE_DEFAULT                   (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_IFS */
#define _MSC_IFS_WRITE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IFS */

/** Bit fields for MSC IFC */
#define _MSC_IFC_RESETVALUE                     0x00000000        /**< Default value for MSC_IFC */
#define _MSC_IFC_MASK                           0x00000003        /**< Mask for MSC_IFC */
#define MSC_IFC_ERASE                           (1 << 0)          /**< Erase Done Interrupt Clear */
#define _MSC_IFC_ERASE_SHIFT                    0                 /**< Shift value for MSC_ERASE */
#define _MSC_IFC_ERASE_MASK                     0x1               /**< Bit mask for MSC_ERASE */
#define MSC_IFC_ERASE_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_IFC */
#define _MSC_IFC_ERASE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IFC */
#define MSC_IFC_WRITE                           (1 << 1)          /**< Write Done Interrupt Clear */
#define _MSC_IFC_WRITE_SHIFT                    1                 /**< Shift value for MSC_WRITE */
#define _MSC_IFC_WRITE_MASK                     0x2               /**< Bit mask for MSC_WRITE */
#define MSC_IFC_WRITE_DEFAULT                   (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_IFC */
#define _MSC_IFC_WRITE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IFC */

/** Bit fields for MSC IEN */
#define _MSC_IEN_RESETVALUE                     0x00000000        /**< Default value for MSC_IEN */
#define _MSC_IEN_MASK                           0x00000003        /**< Mask for MSC_IEN */
#define MSC_IEN_ERASE                           (1 << 0)          /**< Erase Done Interrupt Enable */
#define _MSC_IEN_ERASE_SHIFT                    0                 /**< Shift value for MSC_ERASE */
#define _MSC_IEN_ERASE_MASK                     0x1               /**< Bit mask for MSC_ERASE */
#define MSC_IEN_ERASE_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_IEN */
#define _MSC_IEN_ERASE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IEN */
#define MSC_IEN_WRITE                           (1 << 1)          /**< Write Done Interrupt Enable */
#define _MSC_IEN_WRITE_SHIFT                    1                 /**< Shift value for MSC_WRITE */
#define _MSC_IEN_WRITE_MASK                     0x2               /**< Bit mask for MSC_WRITE */
#define MSC_IEN_WRITE_DEFAULT                   (0x00000000 << 1) /**< Shifted mode DEFAULT for MSC_IEN */
#define _MSC_IEN_WRITE_DEFAULT                  0x00000000        /**< Mode DEFAULT for MSC_IEN */

/** Bit fields for MSC LOCK */
#define _MSC_LOCK_RESETVALUE                    0x00000000        /**< Default value for MSC_LOCK */
#define _MSC_LOCK_MASK                          0x0000FFFF        /**< Mask for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_SHIFT                 0                 /**< Shift value for MSC_LOCKKEY */
#define _MSC_LOCK_LOCKKEY_MASK                  0xFFFF            /**< Bit mask for MSC_LOCKKEY */
#define MSC_LOCK_LOCKKEY_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCK                   (0x00000000 << 0) /**< Shifted mode LOCK for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCKED               (0x00000000 << 0) /**< Shifted mode UNLOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCKED                 (0x00000001 << 0) /**< Shifted mode LOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCK                 (0x00001B71 << 0) /**< Shifted mode UNLOCK for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_DEFAULT               0x00000000        /**< Mode DEFAULT for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCK                  0x00000000        /**< Mode LOCK for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCKED              0x00000000        /**< Mode UNLOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCKED                0x00000001        /**< Mode LOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCK                0x00001B71        /**< Mode UNLOCK for MSC_LOCK */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_EMU
 * @{
 */

/** Bit fields for EMU CTRL */
#define _EMU_CTRL_RESETVALUE                     0x00000000        /**< Default value for EMU_CTRL */
#define _EMU_CTRL_MASK                           0x0000000F        /**< Mask for EMU_CTRL */
#define EMU_CTRL_EMVREG                          (1 << 0)          /**< Energy Mode Voltage Regulator Control */
#define _EMU_CTRL_EMVREG_SHIFT                   0                 /**< Shift value for EMU_EMVREG */
#define _EMU_CTRL_EMVREG_MASK                    0x1               /**< Bit mask for EMU_EMVREG */
#define EMU_CTRL_EMVREG_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for EMU_CTRL */
#define EMU_CTRL_EMVREG_OFF                      (0x00000000 << 0) /**< Shifted mode OFF for EMU_CTRL */
#define EMU_CTRL_EMVREG_ON                       (0x00000001 << 0) /**< Shifted mode ON for EMU_CTRL */
#define _EMU_CTRL_EMVREG_DEFAULT                 0x00000000        /**< Mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EMVREG_OFF                     0x00000000        /**< Mode OFF for EMU_CTRL */
#define _EMU_CTRL_EMVREG_ON                      0x00000001        /**< Mode ON for EMU_CTRL */
#define EMU_CTRL_EM2BLOCK                        (1 << 1)          /**< Energy Mode 2 Block */
#define _EMU_CTRL_EM2BLOCK_SHIFT                 1                 /**< Shift value for EMU_EM2BLOCK */
#define _EMU_CTRL_EM2BLOCK_MASK                  0x2               /**< Bit mask for EMU_EM2BLOCK */
#define EMU_CTRL_EM2BLOCK_DEFAULT                (0x00000000 << 1) /**< Shifted mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM2BLOCK_DEFAULT               0x00000000        /**< Mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM4CTRL_SHIFT                  2                 /**< Shift value for EMU_EM4CTRL */
#define _EMU_CTRL_EM4CTRL_MASK                   0xC               /**< Bit mask for EMU_EM4CTRL */
#define EMU_CTRL_EM4CTRL_DEFAULT                 (0x00000000 << 2) /**< Shifted mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM4CTRL_DEFAULT                0x00000000        /**< Mode DEFAULT for EMU_CTRL */

/** Bit fields for EMU MEMCTRL */
#define _EMU_MEMCTRL_RESETVALUE                  0x00000000        /**< Default value for EMU_MEMCTRL */
#define _EMU_MEMCTRL_MASK                        0x00000007        /**< Mask for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_SHIFT             0                 /**< Shift value for EMU_POWERDOWN */
#define _EMU_MEMCTRL_POWERDOWN_MASK              0x7               /**< Bit mask for EMU_POWERDOWN */
#define EMU_MEMCTRL_POWERDOWN_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK3               (0x00000004 << 0) /**< Shifted mode BLK3 for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK23              (0x00000006 << 0) /**< Shifted mode BLK23 for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK123             (0x00000007 << 0) /**< Shifted mode BLK123 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_DEFAULT           0x00000000        /**< Mode DEFAULT for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK3              0x00000004        /**< Mode BLK3 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK23             0x00000006        /**< Mode BLK23 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK123            0x00000007        /**< Mode BLK123 for EMU_MEMCTRL */

/** Bit fields for EMU LOCK */
#define _EMU_LOCK_RESETVALUE                     0x00000000        /**< Default value for EMU_LOCK */
#define _EMU_LOCK_MASK                           0x0000FFFF        /**< Mask for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_SHIFT                  0                 /**< Shift value for EMU_LOCKKEY */
#define _EMU_LOCK_LOCKKEY_MASK                   0xFFFF            /**< Bit mask for EMU_LOCKKEY */
#define EMU_LOCK_LOCKKEY_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_LOCK                    (0x00000000 << 0) /**< Shifted mode LOCK for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_UNLOCKED                (0x00000000 << 0) /**< Shifted mode UNLOCKED for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_LOCKED                  (0x00000001 << 0) /**< Shifted mode LOCKED for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_UNLOCK                  (0x0000ADE8 << 0) /**< Shifted mode UNLOCK for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_DEFAULT                0x00000000        /**< Mode DEFAULT for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_LOCK                   0x00000000        /**< Mode LOCK for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_UNLOCKED               0x00000000        /**< Mode UNLOCKED for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_LOCKED                 0x00000001        /**< Mode LOCKED for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_UNLOCK                 0x0000ADE8        /**< Mode UNLOCK for EMU_LOCK */

/** Bit fields for EMU ATESTCTRL */
#define _EMU_ATESTCTRL_RESETVALUE                0x00000000         /**< Default value for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_MASK                      0x07FFFF0F         /**< Mask for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_ATESTSEL_SHIFT            0                  /**< Shift value for EMU_ATESTSEL */
#define _EMU_ATESTCTRL_ATESTSEL_MASK             0xF                /**< Bit mask for EMU_ATESTSEL */
#define EMU_ATESTCTRL_ATESTSEL_DEFAULT           (0x00000000 << 0)  /**< Shifted mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_ATESTSEL_DEFAULT          0x00000000         /**< Mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_ATESTBUS_SHIFT            8                  /**< Shift value for EMU_ATESTBUS */
#define _EMU_ATESTCTRL_ATESTBUS_MASK             0xFFFF00           /**< Bit mask for EMU_ATESTBUS */
#define EMU_ATESTCTRL_ATESTBUS_DEFAULT           (0x00000000 << 8)  /**< Shifted mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_ATESTBUS_DEFAULT          0x00000000         /**< Mode DEFAULT for EMU_ATESTCTRL */
#define EMU_ATESTCTRL_DACATESTINEN               (1 << 24)          /**< DAC Test Input Enable */
#define _EMU_ATESTCTRL_DACATESTINEN_SHIFT        24                 /**< Shift value for EMU_DACATESTINEN */
#define _EMU_ATESTCTRL_DACATESTINEN_MASK         0x1000000          /**< Bit mask for EMU_DACATESTINEN */
#define EMU_ATESTCTRL_DACATESTINEN_DEFAULT       (0x00000000 << 24) /**< Shifted mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_DACATESTINEN_DEFAULT      0x00000000         /**< Mode DEFAULT for EMU_ATESTCTRL */
#define EMU_ATESTCTRL_DAC_ATESTOUTEN             (1 << 25)          /**< DAC Test Output Enable */
#define _EMU_ATESTCTRL_DAC_ATESTOUTEN_SHIFT      25                 /**< Shift value for EMU_DAC_ATESTOUTEN */
#define _EMU_ATESTCTRL_DAC_ATESTOUTEN_MASK       0x2000000          /**< Bit mask for EMU_DAC_ATESTOUTEN */
#define EMU_ATESTCTRL_DAC_ATESTOUTEN_DEFAULT     (0x00000000 << 25) /**< Shifted mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_DAC_ATESTOUTEN_DEFAULT    0x00000000         /**< Mode DEFAULT for EMU_ATESTCTRL */
#define EMU_ATESTCTRL_ANATESTINEN                (1 << 26)          /**< Analog Test Input Enable */
#define _EMU_ATESTCTRL_ANATESTINEN_SHIFT         26                 /**< Shift value for EMU_ANATESTINEN */
#define _EMU_ATESTCTRL_ANATESTINEN_MASK          0x4000000          /**< Bit mask for EMU_ANATESTINEN */
#define EMU_ATESTCTRL_ANATESTINEN_DEFAULT        (0x00000000 << 26) /**< Shifted mode DEFAULT for EMU_ATESTCTRL */
#define _EMU_ATESTCTRL_ANATESTINEN_DEFAULT       0x00000000         /**< Mode DEFAULT for EMU_ATESTCTRL */

/** Bit fields for EMU AUXCTRL */
#define _EMU_AUXCTRL_RESETVALUE                  0x00000000        /**< Default value for EMU_AUXCTRL */
#define _EMU_AUXCTRL_MASK                        0x000000FF        /**< Mask for EMU_AUXCTRL */
#define _EMU_AUXCTRL_AUX_SHIFT                   0                 /**< Shift value for EMU_AUX */
#define _EMU_AUXCTRL_AUX_MASK                    0xFF              /**< Bit mask for EMU_AUX */
#define EMU_AUXCTRL_AUX_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for EMU_AUXCTRL */
#define EMU_AUXCTRL_AUX_HRCCLR                   (0x00000001 << 0) /**< Shifted mode HRCCLR for EMU_AUXCTRL */
#define _EMU_AUXCTRL_AUX_DEFAULT                 0x00000000        /**< Mode DEFAULT for EMU_AUXCTRL */
#define _EMU_AUXCTRL_AUX_HRCCLR                  0x00000001        /**< Mode HRCCLR for EMU_AUXCTRL */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_RMU
 * @{
 */

/** Bit fields for RMU CTRL */
#define _RMU_CTRL_RESETVALUE                 0x00000000        /**< Default value for RMU_CTRL */
#define _RMU_CTRL_MASK                       0x00000001        /**< Mask for RMU_CTRL */
#define RMU_CTRL_LOCKUPRDIS                  (1 << 0)          /**< Lockup Reset Disable */
#define _RMU_CTRL_LOCKUPRDIS_SHIFT           0                 /**< Shift value for RMU_LOCKUPRDIS */
#define _RMU_CTRL_LOCKUPRDIS_MASK            0x1               /**< Bit mask for RMU_LOCKUPRDIS */
#define RMU_CTRL_LOCKUPRDIS_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for RMU_CTRL */
#define _RMU_CTRL_LOCKUPRDIS_DEFAULT         0x00000000        /**< Mode DEFAULT for RMU_CTRL */

/** Bit fields for RMU RSTCAUSE */
#define _RMU_RSTCAUSE_RESETVALUE             0x00000000        /**< Default value for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_MASK                   0x0000007F        /**< Mask for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_PORST                   (1 << 0)          /**< Power On Reset */
#define _RMU_RSTCAUSE_PORST_SHIFT            0                 /**< Shift value for RMU_PORST */
#define _RMU_RSTCAUSE_PORST_MASK             0x1               /**< Bit mask for RMU_PORST */
#define RMU_RSTCAUSE_PORST_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_PORST_DEFAULT          0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_BODUNREGRST             (1 << 1)          /**< Brown Out Detector Unregulated Domain Reset */
#define _RMU_RSTCAUSE_BODUNREGRST_SHIFT      1                 /**< Shift value for RMU_BODUNREGRST */
#define _RMU_RSTCAUSE_BODUNREGRST_MASK       0x2               /**< Bit mask for RMU_BODUNREGRST */
#define RMU_RSTCAUSE_BODUNREGRST_DEFAULT     (0x00000000 << 1) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_BODUNREGRST_DEFAULT    0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_BODREGRST               (1 << 2)          /**< Brown Out Detector Regulated Domain Reset */
#define _RMU_RSTCAUSE_BODREGRST_SHIFT        2                 /**< Shift value for RMU_BODREGRST */
#define _RMU_RSTCAUSE_BODREGRST_MASK         0x4               /**< Bit mask for RMU_BODREGRST */
#define RMU_RSTCAUSE_BODREGRST_DEFAULT       (0x00000000 << 2) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_BODREGRST_DEFAULT      0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_EXTRST                  (1 << 3)          /**< External Pin Reset */
#define _RMU_RSTCAUSE_EXTRST_SHIFT           3                 /**< Shift value for RMU_EXTRST */
#define _RMU_RSTCAUSE_EXTRST_MASK            0x8               /**< Bit mask for RMU_EXTRST */
#define RMU_RSTCAUSE_EXTRST_DEFAULT          (0x00000000 << 3) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_EXTRST_DEFAULT         0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_WDOGRST                 (1 << 4)          /**< Watchdog Reset */
#define _RMU_RSTCAUSE_WDOGRST_SHIFT          4                 /**< Shift value for RMU_WDOGRST */
#define _RMU_RSTCAUSE_WDOGRST_MASK           0x10              /**< Bit mask for RMU_WDOGRST */
#define RMU_RSTCAUSE_WDOGRST_DEFAULT         (0x00000000 << 4) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_WDOGRST_DEFAULT        0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_LOCKUPRST               (1 << 5)          /**< LOCKUP Reset */
#define _RMU_RSTCAUSE_LOCKUPRST_SHIFT        5                 /**< Shift value for RMU_LOCKUPRST */
#define _RMU_RSTCAUSE_LOCKUPRST_MASK         0x20              /**< Bit mask for RMU_LOCKUPRST */
#define RMU_RSTCAUSE_LOCKUPRST_DEFAULT       (0x00000000 << 5) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_LOCKUPRST_DEFAULT      0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_SYSREQRST               (1 << 6)          /**< System Request Reset */
#define _RMU_RSTCAUSE_SYSREQRST_SHIFT        6                 /**< Shift value for RMU_SYSREQRST */
#define _RMU_RSTCAUSE_SYSREQRST_MASK         0x40              /**< Bit mask for RMU_SYSREQRST */
#define RMU_RSTCAUSE_SYSREQRST_DEFAULT       (0x00000000 << 6) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_SYSREQRST_DEFAULT      0x00000000        /**< Mode DEFAULT for RMU_RSTCAUSE */

/** Bit fields for RMU CMD */
#define _RMU_CMD_RESETVALUE                  0x00000000        /**< Default value for RMU_CMD */
#define _RMU_CMD_MASK                        0x00000001        /**< Mask for RMU_CMD */
#define RMU_CMD_RCCLR                        (1 << 0)          /**< Reset Cause Clear */
#define _RMU_CMD_RCCLR_SHIFT                 0                 /**< Shift value for RMU_RCCLR */
#define _RMU_CMD_RCCLR_MASK                  0x1               /**< Bit mask for RMU_RCCLR */
#define RMU_CMD_RCCLR_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for RMU_CMD */
#define _RMU_CMD_RCCLR_DEFAULT               0x00000000        /**< Mode DEFAULT for RMU_CMD */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_CMU
 * @{
 */

/** Bit fields for CMU CTRL */
#define _CMU_CTRL_RESETVALUE                       0x000C262C         /**< Default value for CMU_CTRL */
#define _CMU_CTRL_MASK                             0x00FE3EEF         /**< Mask for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_SHIFT                   0                  /**< Shift value for CMU_HFXOMODE */
#define _CMU_CTRL_HFXOMODE_MASK                    0x3                /**< Bit mask for CMU_HFXOMODE */
#define CMU_CTRL_HFXOMODE_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_XTAL                     (0x00000000 << 0)  /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_BUFEXTCLK                (0x00000001 << 0)  /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_DIGEXTCLK                (0x00000002 << 0)  /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_DEFAULT                 0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_XTAL                    0x00000000         /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_BUFEXTCLK               0x00000001         /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_DIGEXTCLK               0x00000002         /**< Mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_SHIFT                  2                  /**< Shift value for CMU_HFXOBOOST */
#define _CMU_CTRL_HFXOBOOST_MASK                   0xC                /**< Bit mask for CMU_HFXOBOOST */
#define CMU_CTRL_HFXOBOOST_50PCENT                 (0x00000000 << 2)  /**< Shifted mode 50PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_70PCENT                 (0x00000001 << 2)  /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_80PCENT                 (0x00000002 << 2)  /**< Shifted mode 80PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_DEFAULT                 (0x00000003 << 2)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_100PCENT                (0x00000003 << 2)  /**< Shifted mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_50PCENT                0x00000000         /**< Mode 50PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_70PCENT                0x00000001         /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_80PCENT                0x00000002         /**< Mode 80PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_DEFAULT                0x00000003         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_100PCENT               0x00000003         /**< Mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_SHIFT                 5                  /**< Shift value for CMU_HFXOBUFCUR */
#define _CMU_CTRL_HFXOBUFCUR_MASK                  0x60               /**< Bit mask for CMU_HFXOBUFCUR */
#define CMU_CTRL_HFXOBUFCUR_80PCENT                (0x00000000 << 5)  /**< Shifted mode 80PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBUFCUR_DEFAULT                (0x00000001 << 5)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOBUFCUR_100PCENT               (0x00000001 << 5)  /**< Shifted mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBUFCUR_120PCENT               (0x00000002 << 5)  /**< Shifted mode 120PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBUFCUR_150PCENT               (0x00000003 << 5)  /**< Shifted mode 150PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_80PCENT               0x00000000         /**< Mode 80PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_DEFAULT               0x00000001         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_100PCENT              0x00000001         /**< Mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_120PCENT              0x00000002         /**< Mode 120PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_150PCENT              0x00000003         /**< Mode 150PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOGLITCHDETEN                   (1 << 7)           /**< HFXO Glitch Detector Enable */
#define _CMU_CTRL_HFXOGLITCHDETEN_SHIFT            7                  /**< Shift value for CMU_HFXOGLITCHDETEN */
#define _CMU_CTRL_HFXOGLITCHDETEN_MASK             0x80               /**< Bit mask for CMU_HFXOGLITCHDETEN */
#define CMU_CTRL_HFXOGLITCHDETEN_DEFAULT           (0x00000000 << 7)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOGLITCHDETEN_DEFAULT          0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_SHIFT                9                  /**< Shift value for CMU_HFXOTIMEOUT */
#define _CMU_CTRL_HFXOTIMEOUT_MASK                 0x600              /**< Bit mask for CMU_HFXOTIMEOUT */
#define CMU_CTRL_HFXOTIMEOUT_8CYCLES               (0x00000000 << 9)  /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_256CYCLES             (0x00000001 << 9)  /**< Shifted mode 256CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_1KCYCLES              (0x00000002 << 9)  /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_DEFAULT               (0x00000003 << 9)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_16KCYCLES             (0x00000003 << 9)  /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_8CYCLES              0x00000000         /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_256CYCLES            0x00000001         /**< Mode 256CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_1KCYCLES             0x00000002         /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_DEFAULT              0x00000003         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_16KCYCLES            0x00000003         /**< Mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_SHIFT                   11                 /**< Shift value for CMU_LFXOMODE */
#define _CMU_CTRL_LFXOMODE_MASK                    0x1800             /**< Bit mask for CMU_LFXOMODE */
#define CMU_CTRL_LFXOMODE_DEFAULT                  (0x00000000 << 11) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_XTAL                     (0x00000000 << 11) /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_BUFEXTCLK                (0x00000001 << 11) /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_DIGEXTCLK                (0x00000002 << 11) /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_DEFAULT                 0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_XTAL                    0x00000000         /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_BUFEXTCLK               0x00000001         /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_DIGEXTCLK               0x00000002         /**< Mode DIGEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST                         (1 << 13)          /**< LFXO Start-up Boost Current */
#define _CMU_CTRL_LFXOBOOST_SHIFT                  13                 /**< Shift value for CMU_LFXOBOOST */
#define _CMU_CTRL_LFXOBOOST_MASK                   0x2000             /**< Bit mask for CMU_LFXOBOOST */
#define CMU_CTRL_LFXOBOOST_70PCENT                 (0x00000000 << 13) /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_DEFAULT                 (0x00000001 << 13) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_100PCENT                (0x00000001 << 13) /**< Shifted mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_70PCENT                0x00000000         /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_DEFAULT                0x00000001         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_100PCENT               0x00000001         /**< Mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR                        (1 << 17)          /**< LFXO Boost Buffer Current */
#define _CMU_CTRL_LFXOBUFCUR_SHIFT                 17                 /**< Shift value for CMU_LFXOBUFCUR */
#define _CMU_CTRL_LFXOBUFCUR_MASK                  0x20000            /**< Bit mask for CMU_LFXOBUFCUR */
#define CMU_CTRL_LFXOBUFCUR_DEFAULT                (0x00000000 << 17) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR_100PCENT               (0x00000000 << 17) /**< Shifted mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR_150PCENT               (0x00000001 << 17) /**< Shifted mode 150PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBUFCUR_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOBUFCUR_100PCENT              0x00000000         /**< Mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBUFCUR_150PCENT              0x00000001         /**< Mode 150PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_SHIFT                18                 /**< Shift value for CMU_LFXOTIMEOUT */
#define _CMU_CTRL_LFXOTIMEOUT_MASK                 0xC0000            /**< Bit mask for CMU_LFXOTIMEOUT */
#define CMU_CTRL_LFXOTIMEOUT_8CYCLES               (0x00000000 << 18) /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_1KCYCLES              (0x00000001 << 18) /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_16KCYCLES             (0x00000002 << 18) /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_DEFAULT               (0x00000003 << 18) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_32KCYCLES             (0x00000003 << 18) /**< Shifted mode 32KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_8CYCLES              0x00000000         /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_1KCYCLES             0x00000001         /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_16KCYCLES            0x00000002         /**< Mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_DEFAULT              0x00000003         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_32KCYCLES            0x00000003         /**< Mode 32KCYCLES for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_SHIFT                 20                 /**< Shift value for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_MASK                  0x700000           /**< Bit mask for CMU_CLKOUTSEL0 */
#define CMU_CTRL_CLKOUTSEL0_DEFAULT                (0x00000000 << 20) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFRCO                  (0x00000000 << 20) /**< Shifted mode HFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFXO                   (0x00000001 << 20) /**< Shifted mode HFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK2                 (0x00000002 << 20) /**< Shifted mode HFCLK2 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK4                 (0x00000003 << 20) /**< Shifted mode HFCLK4 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK8                 (0x00000004 << 20) /**< Shifted mode HFCLK8 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK16                (0x00000005 << 20) /**< Shifted mode HFCLK16 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_ULFRCO                 (0x00000006 << 20) /**< Shifted mode ULFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFRCO                 0x00000000         /**< Mode HFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFXO                  0x00000001         /**< Mode HFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK2                0x00000002         /**< Mode HFCLK2 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK4                0x00000003         /**< Mode HFCLK4 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK8                0x00000004         /**< Mode HFCLK8 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK16               0x00000005         /**< Mode HFCLK16 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_ULFRCO                0x00000006         /**< Mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1                        (1 << 23)          /**< Clock Output Select 1 */
#define _CMU_CTRL_CLKOUTSEL1_SHIFT                 23                 /**< Shift value for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_MASK                  0x800000           /**< Bit mask for CMU_CLKOUTSEL1 */
#define CMU_CTRL_CLKOUTSEL1_DEFAULT                (0x00000000 << 23) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFRCO                  (0x00000000 << 23) /**< Shifted mode LFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFXO                   (0x00000001 << 23) /**< Shifted mode LFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFRCO                 0x00000000         /**< Mode LFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFXO                  0x00000001         /**< Mode LFXO for CMU_CTRL */

/** Bit fields for CMU HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_RESETVALUE               0x00000000        /**< Default value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_MASK                     0x0000000F        /**< Mask for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_SHIFT       0                 /**< Shift value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_MASK        0xF               /**< Bit mask for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT      (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK        (0x00000000 << 0) /**< Shifted mode HFCLK for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2       (0x00000001 << 0) /**< Shifted mode HFCLK2 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4       (0x00000002 << 0) /**< Shifted mode HFCLK4 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8       (0x00000003 << 0) /**< Shifted mode HFCLK8 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16      (0x00000004 << 0) /**< Shifted mode HFCLK16 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32      (0x00000005 << 0) /**< Shifted mode HFCLK32 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64      (0x00000006 << 0) /**< Shifted mode HFCLK64 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128     (0x00000007 << 0) /**< Shifted mode HFCLK128 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256     (0x00000008 << 0) /**< Shifted mode HFCLK256 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512     (0x00000009 << 0) /**< Shifted mode HFCLK512 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT     0x00000000        /**< Mode DEFAULT for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK       0x00000000        /**< Mode HFCLK for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2      0x00000001        /**< Mode HFCLK2 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4      0x00000002        /**< Mode HFCLK4 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8      0x00000003        /**< Mode HFCLK8 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16     0x00000004        /**< Mode HFCLK16 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32     0x00000005        /**< Mode HFCLK32 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64     0x00000006        /**< Mode HFCLK64 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128    0x00000007        /**< Mode HFCLK128 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256    0x00000008        /**< Mode HFCLK256 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512    0x00000009        /**< Mode HFCLK512 for CMU_HFCORECLKDIV */

/** Bit fields for CMU HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_RESETVALUE                0x00000100        /**< Default value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_MASK                      0x0000010F        /**< Mask for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_SHIFT         0                 /**< Shift value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_MASK          0xF               /**< Bit mask for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK          (0x00000000 << 0) /**< Shifted mode HFCLK for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2         (0x00000001 << 0) /**< Shifted mode HFCLK2 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4         (0x00000002 << 0) /**< Shifted mode HFCLK4 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8         (0x00000003 << 0) /**< Shifted mode HFCLK8 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16        (0x00000004 << 0) /**< Shifted mode HFCLK16 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32        (0x00000005 << 0) /**< Shifted mode HFCLK32 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64        (0x00000006 << 0) /**< Shifted mode HFCLK64 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128       (0x00000007 << 0) /**< Shifted mode HFCLK128 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256       (0x00000008 << 0) /**< Shifted mode HFCLK256 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512       (0x00000009 << 0) /**< Shifted mode HFCLK512 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT       0x00000000        /**< Mode DEFAULT for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK         0x00000000        /**< Mode HFCLK for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2        0x00000001        /**< Mode HFCLK2 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4        0x00000002        /**< Mode HFCLK4 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8        0x00000003        /**< Mode HFCLK8 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16       0x00000004        /**< Mode HFCLK16 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32       0x00000005        /**< Mode HFCLK32 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64       0x00000006        /**< Mode HFCLK64 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128      0x00000007        /**< Mode HFCLK128 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256      0x00000008        /**< Mode HFCLK256 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512      0x00000009        /**< Mode HFCLK512 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKEN                 (1 << 8)          /**< HFPERCLK Enable */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_SHIFT          8                 /**< Shift value for CMU_HFPERCLKEN */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_MASK           0x100             /**< Bit mask for CMU_HFPERCLKEN */
#define CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT         (0x00000001 << 8) /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT        0x00000001        /**< Mode DEFAULT for CMU_HFPERCLKDIV */

/** Bit fields for CMU HFRCOCTRL */
#define _CMU_HFRCOCTRL_RESETVALUE                  0x00000380         /**< Default value for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_MASK                        0x0001F7FF         /**< Mask for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_SHIFT                0                  /**< Shift value for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_MASK                 0xFF               /**< Bit mask for CMU_TUNING */
#define CMU_HFRCOCTRL_TUNING_DEFAULT               (0x00000080 << 0)  /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_DEFAULT              0x00000080         /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_SHIFT                  8                  /**< Shift value for CMU_BAND */
#define _CMU_HFRCOCTRL_BAND_MASK                   0x700              /**< Bit mask for CMU_BAND */
#define CMU_HFRCOCTRL_BAND_1MHZ                    (0x00000000 << 8)  /**< Shifted mode 1MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_7MHZ                    (0x00000001 << 8)  /**< Shifted mode 7MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_11MHZ                   (0x00000002 << 8)  /**< Shifted mode 11MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_DEFAULT                 (0x00000003 << 8)  /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_14MHZ                   (0x00000003 << 8)  /**< Shifted mode 14MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_21MHZ                   (0x00000004 << 8)  /**< Shifted mode 21MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_28MHZ                   (0x00000005 << 8)  /**< Shifted mode 28MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_1MHZ                   0x00000000         /**< Mode 1MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_7MHZ                   0x00000001         /**< Mode 7MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_11MHZ                  0x00000002         /**< Mode 11MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_DEFAULT                0x00000003         /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_14MHZ                  0x00000003         /**< Mode 14MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_21MHZ                  0x00000004         /**< Mode 21MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_28MHZ                  0x00000005         /**< Mode 28MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_SUDELAY_SHIFT               12                 /**< Shift value for CMU_SUDELAY */
#define _CMU_HFRCOCTRL_SUDELAY_MASK                0x1F000            /**< Bit mask for CMU_SUDELAY */
#define CMU_HFRCOCTRL_SUDELAY_DEFAULT              (0x00000000 << 12) /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_SUDELAY_DEFAULT             0x00000000         /**< Mode DEFAULT for CMU_HFRCOCTRL */

/** Bit fields for CMU LFRCOCTRL */
#define _CMU_LFRCOCTRL_RESETVALUE                  0x00000040        /**< Default value for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_MASK                        0x0000007F        /**< Mask for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_SHIFT                0                 /**< Shift value for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_MASK                 0x7F              /**< Bit mask for CMU_TUNING */
#define CMU_LFRCOCTRL_TUNING_DEFAULT               (0x00000040 << 0) /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_DEFAULT              0x00000040        /**< Mode DEFAULT for CMU_LFRCOCTRL */

/** Bit fields for CMU AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_RESETVALUE               0x00000080        /**< Default value for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_MASK                     0x000000FF        /**< Mask for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_SHIFT             0                 /**< Shift value for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_MASK              0xFF              /**< Bit mask for CMU_TUNING */
#define CMU_AUXHFRCOCTRL_TUNING_DEFAULT            (0x00000080 << 0) /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_DEFAULT           0x00000080        /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */

/** Bit fields for CMU CALCTRL */
#define _CMU_CALCTRL_RESETVALUE                    0x00000000        /**< Default value for CMU_CALCTRL */
#define _CMU_CALCTRL_MASK                          0x00000007        /**< Mask for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_SHIFT                  0                 /**< Shift value for CMU_REFSEL */
#define _CMU_CALCTRL_REFSEL_MASK                   0x7               /**< Bit mask for CMU_REFSEL */
#define CMU_CALCTRL_REFSEL_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_HFXO                    (0x00000000 << 0) /**< Shifted mode HFXO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_LFXO                    (0x00000001 << 0) /**< Shifted mode LFXO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_HFRCO                   (0x00000002 << 0) /**< Shifted mode HFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_LFRCO                   (0x00000003 << 0) /**< Shifted mode LFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_AUXHFRCO                (0x00000004 << 0) /**< Shifted mode AUXHFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_DEFAULT                0x00000000        /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_HFXO                   0x00000000        /**< Mode HFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_LFXO                   0x00000001        /**< Mode LFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_HFRCO                  0x00000002        /**< Mode HFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_LFRCO                  0x00000003        /**< Mode LFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_AUXHFRCO               0x00000004        /**< Mode AUXHFRCO for CMU_CALCTRL */

/** Bit fields for CMU CALCNT */
#define _CMU_CALCNT_RESETVALUE                     0x00000000        /**< Default value for CMU_CALCNT */
#define _CMU_CALCNT_MASK                           0x000FFFFF        /**< Mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_SHIFT                   0                 /**< Shift value for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_MASK                    0xFFFFF           /**< Bit mask for CMU_CALCNT */
#define CMU_CALCNT_CALCNT_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_DEFAULT                 0x00000000        /**< Mode DEFAULT for CMU_CALCNT */

/** Bit fields for CMU OSCENCMD */
#define _CMU_OSCENCMD_RESETVALUE                   0x00000000        /**< Default value for CMU_OSCENCMD */
#define _CMU_OSCENCMD_MASK                         0x000003FF        /**< Mask for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN                       (1 << 0)          /**< HFRCO Enable */
#define _CMU_OSCENCMD_HFRCOEN_SHIFT                0                 /**< Shift value for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_MASK                 0x1               /**< Bit mask for CMU_HFRCOEN */
#define CMU_OSCENCMD_HFRCOEN_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFRCOEN_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS                      (1 << 1)          /**< HFRCO Disable */
#define _CMU_OSCENCMD_HFRCODIS_SHIFT               1                 /**< Shift value for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_MASK                0x2               /**< Bit mask for CMU_HFRCODIS */
#define CMU_OSCENCMD_HFRCODIS_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFRCODIS_DEFAULT             0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN                        (1 << 2)          /**< HFXO Enable */
#define _CMU_OSCENCMD_HFXOEN_SHIFT                 2                 /**< Shift value for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_MASK                  0x4               /**< Bit mask for CMU_HFXOEN */
#define CMU_OSCENCMD_HFXOEN_DEFAULT                (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFXOEN_DEFAULT               0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS                       (1 << 3)          /**< HFXO Disable */
#define _CMU_OSCENCMD_HFXODIS_SHIFT                3                 /**< Shift value for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_MASK                 0x8               /**< Bit mask for CMU_HFXODIS */
#define CMU_OSCENCMD_HFXODIS_DEFAULT               (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFXODIS_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN                    (1 << 4)          /**< AUXHFRCO Enable */
#define _CMU_OSCENCMD_AUXHFRCOEN_SHIFT             4                 /**< Shift value for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_MASK              0x10              /**< Bit mask for CMU_AUXHFRCOEN */
#define CMU_OSCENCMD_AUXHFRCOEN_DEFAULT            (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_AUXHFRCOEN_DEFAULT           0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS                   (1 << 5)          /**< AUXHFRCO Disable */
#define _CMU_OSCENCMD_AUXHFRCODIS_SHIFT            5                 /**< Shift value for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_MASK             0x20              /**< Bit mask for CMU_AUXHFRCODIS */
#define CMU_OSCENCMD_AUXHFRCODIS_DEFAULT           (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_AUXHFRCODIS_DEFAULT          0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN                       (1 << 6)          /**< LFRCO Enable */
#define _CMU_OSCENCMD_LFRCOEN_SHIFT                6                 /**< Shift value for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_MASK                 0x40              /**< Bit mask for CMU_LFRCOEN */
#define CMU_OSCENCMD_LFRCOEN_DEFAULT               (0x00000000 << 6) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFRCOEN_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS                      (1 << 7)          /**< LFRCO Disable */
#define _CMU_OSCENCMD_LFRCODIS_SHIFT               7                 /**< Shift value for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_MASK                0x80              /**< Bit mask for CMU_LFRCODIS */
#define CMU_OSCENCMD_LFRCODIS_DEFAULT              (0x00000000 << 7) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFRCODIS_DEFAULT             0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN                        (1 << 8)          /**< LFXO Enable */
#define _CMU_OSCENCMD_LFXOEN_SHIFT                 8                 /**< Shift value for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_MASK                  0x100             /**< Bit mask for CMU_LFXOEN */
#define CMU_OSCENCMD_LFXOEN_DEFAULT                (0x00000000 << 8) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFXOEN_DEFAULT               0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS                       (1 << 9)          /**< LFXO Disable */
#define _CMU_OSCENCMD_LFXODIS_SHIFT                9                 /**< Shift value for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_MASK                 0x200             /**< Bit mask for CMU_LFXODIS */
#define CMU_OSCENCMD_LFXODIS_DEFAULT               (0x00000000 << 9) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFXODIS_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_OSCENCMD */

/** Bit fields for CMU CMD */
#define _CMU_CMD_RESETVALUE                        0x00000000        /**< Default value for CMU_CMD */
#define _CMU_CMD_MASK                              0x0000000F        /**< Mask for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_SHIFT                    0                 /**< Shift value for CMU_HFCLKSEL */
#define _CMU_CMD_HFCLKSEL_MASK                     0x7               /**< Bit mask for CMU_HFCLKSEL */
#define CMU_CMD_HFCLKSEL_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFRCO                     (0x00000001 << 0) /**< Shifted mode HFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFXO                      (0x00000002 << 0) /**< Shifted mode HFXO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFRCO                     (0x00000003 << 0) /**< Shifted mode LFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFXO                      (0x00000004 << 0) /**< Shifted mode LFXO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFRCO                    0x00000001        /**< Mode HFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFXO                     0x00000002        /**< Mode HFXO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFRCO                    0x00000003        /**< Mode LFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFXO                     0x00000004        /**< Mode LFXO for CMU_CMD */
#define CMU_CMD_CALSTART                           (1 << 3)          /**< Calibration Start */
#define _CMU_CMD_CALSTART_SHIFT                    3                 /**< Shift value for CMU_CALSTART */
#define _CMU_CMD_CALSTART_MASK                     0x8               /**< Bit mask for CMU_CALSTART */
#define CMU_CMD_CALSTART_DEFAULT                   (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_CMD */
#define _CMU_CMD_CALSTART_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_CMD */

/** Bit fields for CMU LFCLKSEL */
#define _CMU_LFCLKSEL_RESETVALUE                   0x00000005        /**< Default value for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_MASK                         0x0000000F        /**< Mask for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_SHIFT                    0                 /**< Shift value for CMU_LFA */
#define _CMU_LFCLKSEL_LFA_MASK                     0x3               /**< Bit mask for CMU_LFA */
#define CMU_LFCLKSEL_LFA_DISABLED                  (0x00000000 << 0) /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_DEFAULT                   (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFRCO                     (0x00000001 << 0) /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFXO                      (0x00000002 << 0) /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2           (0x00000003 << 0) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_DISABLED                 0x00000000        /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_DEFAULT                  0x00000001        /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFRCO                    0x00000001        /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFXO                     0x00000002        /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2          0x00000003        /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_SHIFT                    2                 /**< Shift value for CMU_LFB */
#define _CMU_LFCLKSEL_LFB_MASK                     0xC               /**< Bit mask for CMU_LFB */
#define CMU_LFCLKSEL_LFB_DISABLED                  (0x00000000 << 2) /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_DEFAULT                   (0x00000001 << 2) /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFRCO                     (0x00000001 << 2) /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFXO                      (0x00000002 << 2) /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2           (0x00000003 << 2) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_DISABLED                 0x00000000        /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_DEFAULT                  0x00000001        /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFRCO                    0x00000001        /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFXO                     0x00000002        /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2          0x00000003        /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */

/** Bit fields for CMU STATUS */
#define _CMU_STATUS_RESETVALUE                     0x00000403         /**< Default value for CMU_STATUS */
#define _CMU_STATUS_MASK                           0x00007FFF         /**< Mask for CMU_STATUS */
#define CMU_STATUS_HFRCOENS                        (1 << 0)           /**< HFRCO Enable Status */
#define _CMU_STATUS_HFRCOENS_SHIFT                 0                  /**< Shift value for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_MASK                  0x1                /**< Bit mask for CMU_HFRCOENS */
#define CMU_STATUS_HFRCOENS_DEFAULT                (0x00000001 << 0)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCOENS_DEFAULT               0x00000001         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY                        (1 << 1)           /**< HFRCO Ready */
#define _CMU_STATUS_HFRCORDY_SHIFT                 1                  /**< Shift value for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_MASK                  0x2                /**< Bit mask for CMU_HFRCORDY */
#define CMU_STATUS_HFRCORDY_DEFAULT                (0x00000001 << 1)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCORDY_DEFAULT               0x00000001         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS                         (1 << 2)           /**< HFXO Enable Status */
#define _CMU_STATUS_HFXOENS_SHIFT                  2                  /**< Shift value for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_MASK                   0x4                /**< Bit mask for CMU_HFXOENS */
#define CMU_STATUS_HFXOENS_DEFAULT                 (0x00000000 << 2)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXOENS_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY                         (1 << 3)           /**< HFXO Ready */
#define _CMU_STATUS_HFXORDY_SHIFT                  3                  /**< Shift value for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_MASK                   0x8                /**< Bit mask for CMU_HFXORDY */
#define CMU_STATUS_HFXORDY_DEFAULT                 (0x00000000 << 3)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXORDY_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS                     (1 << 4)           /**< AUXHFRCO Enable Status */
#define _CMU_STATUS_AUXHFRCOENS_SHIFT              4                  /**< Shift value for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_MASK               0x10               /**< Bit mask for CMU_AUXHFRCOENS */
#define CMU_STATUS_AUXHFRCOENS_DEFAULT             (0x00000000 << 4)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_AUXHFRCOENS_DEFAULT            0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY                     (1 << 5)           /**< AUXHFRCO Ready */
#define _CMU_STATUS_AUXHFRCORDY_SHIFT              5                  /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_MASK               0x20               /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_STATUS_AUXHFRCORDY_DEFAULT             (0x00000000 << 5)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_AUXHFRCORDY_DEFAULT            0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS                        (1 << 6)           /**< LFRCO Enable Status */
#define _CMU_STATUS_LFRCOENS_SHIFT                 6                  /**< Shift value for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_MASK                  0x40               /**< Bit mask for CMU_LFRCOENS */
#define CMU_STATUS_LFRCOENS_DEFAULT                (0x00000000 << 6)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCOENS_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY                        (1 << 7)           /**< LFRCO Ready */
#define _CMU_STATUS_LFRCORDY_SHIFT                 7                  /**< Shift value for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_MASK                  0x80               /**< Bit mask for CMU_LFRCORDY */
#define CMU_STATUS_LFRCORDY_DEFAULT                (0x00000000 << 7)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCORDY_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS                         (1 << 8)           /**< LFXO Enable Status */
#define _CMU_STATUS_LFXOENS_SHIFT                  8                  /**< Shift value for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_MASK                   0x100              /**< Bit mask for CMU_LFXOENS */
#define CMU_STATUS_LFXOENS_DEFAULT                 (0x00000000 << 8)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXOENS_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY                         (1 << 9)           /**< LFXO Ready */
#define _CMU_STATUS_LFXORDY_SHIFT                  9                  /**< Shift value for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_MASK                   0x200              /**< Bit mask for CMU_LFXORDY */
#define CMU_STATUS_LFXORDY_DEFAULT                 (0x00000000 << 9)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXORDY_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOSEL                        (1 << 10)          /**< HFRCO Selected */
#define _CMU_STATUS_HFRCOSEL_SHIFT                 10                 /**< Shift value for CMU_HFRCOSEL */
#define _CMU_STATUS_HFRCOSEL_MASK                  0x400              /**< Bit mask for CMU_HFRCOSEL */
#define CMU_STATUS_HFRCOSEL_DEFAULT                (0x00000001 << 10) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCOSEL_DEFAULT               0x00000001         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSEL                         (1 << 11)          /**< HFXO Selected */
#define _CMU_STATUS_HFXOSEL_SHIFT                  11                 /**< Shift value for CMU_HFXOSEL */
#define _CMU_STATUS_HFXOSEL_MASK                   0x800              /**< Bit mask for CMU_HFXOSEL */
#define CMU_STATUS_HFXOSEL_DEFAULT                 (0x00000000 << 11) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXOSEL_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOSEL                        (1 << 12)          /**< HFRCO Selected */
#define _CMU_STATUS_LFRCOSEL_SHIFT                 12                 /**< Shift value for CMU_LFRCOSEL */
#define _CMU_STATUS_LFRCOSEL_MASK                  0x1000             /**< Bit mask for CMU_LFRCOSEL */
#define CMU_STATUS_LFRCOSEL_DEFAULT                (0x00000000 << 12) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCOSEL_DEFAULT               0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOSEL                         (1 << 13)          /**< HFXO Selected */
#define _CMU_STATUS_LFXOSEL_SHIFT                  13                 /**< Shift value for CMU_LFXOSEL */
#define _CMU_STATUS_LFXOSEL_MASK                   0x2000             /**< Bit mask for CMU_LFXOSEL */
#define CMU_STATUS_LFXOSEL_DEFAULT                 (0x00000000 << 13) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXOSEL_DEFAULT                0x00000000         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALBSY                          (1 << 14)          /**< Calibration Busy */
#define _CMU_STATUS_CALBSY_SHIFT                   14                 /**< Shift value for CMU_CALBSY */
#define _CMU_STATUS_CALBSY_MASK                    0x4000             /**< Bit mask for CMU_CALBSY */
#define CMU_STATUS_CALBSY_DEFAULT                  (0x00000000 << 14) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_CALBSY_DEFAULT                 0x00000000         /**< Mode DEFAULT for CMU_STATUS */

/** Bit fields for CMU IF */
#define _CMU_IF_RESETVALUE                         0x00000001        /**< Default value for CMU_IF */
#define _CMU_IF_MASK                               0x0000003F        /**< Mask for CMU_IF */
#define CMU_IF_HFRCORDY                            (1 << 0)          /**< HFRCO Ready Interrupt Flag */
#define _CMU_IF_HFRCORDY_SHIFT                     0                 /**< Shift value for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_MASK                      0x1               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IF_HFRCORDY_DEFAULT                    (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_HFRCORDY_DEFAULT                   0x00000001        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY                             (1 << 1)          /**< HFXO Ready Interrupt Flag */
#define _CMU_IF_HFXORDY_SHIFT                      1                 /**< Shift value for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_MASK                       0x2               /**< Bit mask for CMU_HFXORDY */
#define CMU_IF_HFXORDY_DEFAULT                     (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_HFXORDY_DEFAULT                    0x00000000        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY                            (1 << 2)          /**< LFRCO Ready Interrupt Flag */
#define _CMU_IF_LFRCORDY_SHIFT                     2                 /**< Shift value for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_MASK                      0x4               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IF_LFRCORDY_DEFAULT                    (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_LFRCORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY                             (1 << 3)          /**< LFXO Ready Interrupt Flag */
#define _CMU_IF_LFXORDY_SHIFT                      3                 /**< Shift value for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_MASK                       0x8               /**< Bit mask for CMU_LFXORDY */
#define CMU_IF_LFXORDY_DEFAULT                     (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_LFXORDY_DEFAULT                    0x00000000        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY                         (1 << 4)          /**< AUXHFRCO Ready Interrupt Flag */
#define _CMU_IF_AUXHFRCORDY_SHIFT                  4                 /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_MASK                   0x10              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IF_AUXHFRCORDY_DEFAULT                 (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_AUXHFRCORDY_DEFAULT                0x00000000        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY                              (1 << 5)          /**< Calibration Ready Interrupt Flag */
#define _CMU_IF_CALRDY_SHIFT                       5                 /**< Shift value for CMU_CALRDY */
#define _CMU_IF_CALRDY_MASK                        0x20              /**< Bit mask for CMU_CALRDY */
#define CMU_IF_CALRDY_DEFAULT                      (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_CALRDY_DEFAULT                     0x00000000        /**< Mode DEFAULT for CMU_IF */

/** Bit fields for CMU IFS */
#define _CMU_IFS_RESETVALUE                        0x00000000        /**< Default value for CMU_IFS */
#define _CMU_IFS_MASK                              0x0000003F        /**< Mask for CMU_IFS */
#define CMU_IFS_HFRCORDY                           (1 << 0)          /**< HFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_HFRCORDY_SHIFT                    0                 /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_MASK                     0x1               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IFS_HFRCORDY_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_HFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY                            (1 << 1)          /**< HFXO Ready Interrupt Flag Set */
#define _CMU_IFS_HFXORDY_SHIFT                     1                 /**< Shift value for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_MASK                      0x2               /**< Bit mask for CMU_HFXORDY */
#define CMU_IFS_HFXORDY_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_HFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY                           (1 << 2)          /**< LFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_LFRCORDY_SHIFT                    2                 /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_MASK                     0x4               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IFS_LFRCORDY_DEFAULT                   (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_LFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY                            (1 << 3)          /**< LFXO Ready Interrupt Flag Set */
#define _CMU_IFS_LFXORDY_SHIFT                     3                 /**< Shift value for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_MASK                      0x8               /**< Bit mask for CMU_LFXORDY */
#define CMU_IFS_LFXORDY_DEFAULT                    (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_LFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY                        (1 << 4)          /**< AUXHFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_AUXHFRCORDY_SHIFT                 4                 /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_MASK                  0x10              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IFS_AUXHFRCORDY_DEFAULT                (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_AUXHFRCORDY_DEFAULT               0x00000000        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY                             (1 << 5)          /**< Calibration Ready Interrupt Flag Set */
#define _CMU_IFS_CALRDY_SHIFT                      5                 /**< Shift value for CMU_CALRDY */
#define _CMU_IFS_CALRDY_MASK                       0x20              /**< Bit mask for CMU_CALRDY */
#define CMU_IFS_CALRDY_DEFAULT                     (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_CALRDY_DEFAULT                    0x00000000        /**< Mode DEFAULT for CMU_IFS */

/** Bit fields for CMU IFC */
#define _CMU_IFC_RESETVALUE                        0x00000000        /**< Default value for CMU_IFC */
#define _CMU_IFC_MASK                              0x0000003F        /**< Mask for CMU_IFC */
#define CMU_IFC_HFRCORDY                           (1 << 0)          /**< HFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFRCORDY_SHIFT                    0                 /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_MASK                     0x1               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IFC_HFRCORDY_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_HFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY                            (1 << 1)          /**< HFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFXORDY_SHIFT                     1                 /**< Shift value for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_MASK                      0x2               /**< Bit mask for CMU_HFXORDY */
#define CMU_IFC_HFXORDY_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_HFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY                           (1 << 2)          /**< LFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFRCORDY_SHIFT                    2                 /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_MASK                     0x4               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IFC_LFRCORDY_DEFAULT                   (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_LFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY                            (1 << 3)          /**< LFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFXORDY_SHIFT                     3                 /**< Shift value for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_MASK                      0x8               /**< Bit mask for CMU_LFXORDY */
#define CMU_IFC_LFXORDY_DEFAULT                    (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_LFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY                        (1 << 4)          /**< AUXHFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_AUXHFRCORDY_SHIFT                 4                 /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_MASK                  0x10              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IFC_AUXHFRCORDY_DEFAULT                (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_AUXHFRCORDY_DEFAULT               0x00000000        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY                             (1 << 5)          /**< Calibration Ready Interrupt Flag Clear */
#define _CMU_IFC_CALRDY_SHIFT                      5                 /**< Shift value for CMU_CALRDY */
#define _CMU_IFC_CALRDY_MASK                       0x20              /**< Bit mask for CMU_CALRDY */
#define CMU_IFC_CALRDY_DEFAULT                     (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_CALRDY_DEFAULT                    0x00000000        /**< Mode DEFAULT for CMU_IFC */

/** Bit fields for CMU IEN */
#define _CMU_IEN_RESETVALUE                        0x00000000        /**< Default value for CMU_IEN */
#define _CMU_IEN_MASK                              0x0000003F        /**< Mask for CMU_IEN */
#define CMU_IEN_HFRCORDY                           (1 << 0)          /**< HFRCO Ready Interrupt Enable */
#define _CMU_IEN_HFRCORDY_SHIFT                    0                 /**< Shift value for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_MASK                     0x1               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IEN_HFRCORDY_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_HFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY                            (1 << 1)          /**< HFXO Ready Interrupt Enable */
#define _CMU_IEN_HFXORDY_SHIFT                     1                 /**< Shift value for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_MASK                      0x2               /**< Bit mask for CMU_HFXORDY */
#define CMU_IEN_HFXORDY_DEFAULT                    (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_HFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY                           (1 << 2)          /**< LFRCO Ready Interrupt Enable */
#define _CMU_IEN_LFRCORDY_SHIFT                    2                 /**< Shift value for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_MASK                     0x4               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IEN_LFRCORDY_DEFAULT                   (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_LFRCORDY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY                            (1 << 3)          /**< LFXO Ready Interrupt Enable */
#define _CMU_IEN_LFXORDY_SHIFT                     3                 /**< Shift value for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_MASK                      0x8               /**< Bit mask for CMU_LFXORDY */
#define CMU_IEN_LFXORDY_DEFAULT                    (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_LFXORDY_DEFAULT                   0x00000000        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY                        (1 << 4)          /**< AUXHFRCO Ready Interrupt Enable */
#define _CMU_IEN_AUXHFRCORDY_SHIFT                 4                 /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_MASK                  0x10              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IEN_AUXHFRCORDY_DEFAULT                (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_AUXHFRCORDY_DEFAULT               0x00000000        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY                             (1 << 5)          /**< Calibration Ready Interrupt Enable */
#define _CMU_IEN_CALRDY_SHIFT                      5                 /**< Shift value for CMU_CALRDY */
#define _CMU_IEN_CALRDY_MASK                       0x20              /**< Bit mask for CMU_CALRDY */
#define CMU_IEN_CALRDY_DEFAULT                     (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_CALRDY_DEFAULT                    0x00000000        /**< Mode DEFAULT for CMU_IEN */

/** Bit fields for CMU HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_RESETVALUE               0x0000000F        /**< Default value for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_MASK                     0x0000000F        /**< Mask for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_AES                       (1 << 0)          /**< Advanced Encryption Standard Accelerator Clock Enable */
#define _CMU_HFCORECLKEN0_AES_SHIFT                0                 /**< Shift value for CMU_AES */
#define _CMU_HFCORECLKEN0_AES_MASK                 0x1               /**< Bit mask for CMU_AES */
#define CMU_HFCORECLKEN0_AES_DEFAULT               (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_AES_DEFAULT              0x00000001        /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_DMA                       (1 << 1)          /**< Direct Memory Access Controller Clock Enable */
#define _CMU_HFCORECLKEN0_DMA_SHIFT                1                 /**< Shift value for CMU_DMA */
#define _CMU_HFCORECLKEN0_DMA_MASK                 0x2               /**< Bit mask for CMU_DMA */
#define CMU_HFCORECLKEN0_DMA_DEFAULT               (0x00000001 << 1) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_DMA_DEFAULT              0x00000001        /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_LE                        (1 << 2)          /**< Low Energy Peripheral Interface Clock Enable */
#define _CMU_HFCORECLKEN0_LE_SHIFT                 2                 /**< Shift value for CMU_LE */
#define _CMU_HFCORECLKEN0_LE_MASK                  0x4               /**< Bit mask for CMU_LE */
#define CMU_HFCORECLKEN0_LE_DEFAULT                (0x00000001 << 2) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_LE_DEFAULT               0x00000001        /**< Mode DEFAULT for CMU_HFCORECLKEN0 */

/** Bit fields for CMU HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_RESETVALUE                0x0000FFFF         /**< Default value for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_MASK                      0x0000FFFF         /**< Mask for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0                     (1 << 0)           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_USART0_SHIFT              0                  /**< Shift value for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_MASK               0x1                /**< Bit mask for CMU_USART0 */
#define CMU_HFPERCLKEN0_USART0_DEFAULT             (0x00000001 << 0)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_USART0_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1                     (1 << 1)           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 1 Clock Enable */
#define _CMU_HFPERCLKEN0_USART1_SHIFT              1                  /**< Shift value for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_MASK               0x2                /**< Bit mask for CMU_USART1 */
#define CMU_HFPERCLKEN0_USART1_DEFAULT             (0x00000001 << 1)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_USART1_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART2                     (1 << 2)           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 2 Clock Enable */
#define _CMU_HFPERCLKEN0_USART2_SHIFT              2                  /**< Shift value for CMU_USART2 */
#define _CMU_HFPERCLKEN0_USART2_MASK               0x4                /**< Bit mask for CMU_USART2 */
#define CMU_HFPERCLKEN0_USART2_DEFAULT             (0x00000001 << 2)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_USART2_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0                     (1 << 4)           /**< Timer 0 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER0_SHIFT              4                  /**< Shift value for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_MASK               0x10               /**< Bit mask for CMU_TIMER0 */
#define CMU_HFPERCLKEN0_TIMER0_DEFAULT             (0x00000001 << 4)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_TIMER0_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1                     (1 << 5)           /**< Timer 1 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER1_SHIFT              5                  /**< Shift value for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_MASK               0x20               /**< Bit mask for CMU_TIMER1 */
#define CMU_HFPERCLKEN0_TIMER1_DEFAULT             (0x00000001 << 5)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_TIMER1_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER2                     (1 << 6)           /**< Timer 2 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER2_SHIFT              6                  /**< Shift value for CMU_TIMER2 */
#define _CMU_HFPERCLKEN0_TIMER2_MASK               0x40               /**< Bit mask for CMU_TIMER2 */
#define CMU_HFPERCLKEN0_TIMER2_DEFAULT             (0x00000001 << 6)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_TIMER2_DEFAULT            0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0                      (1 << 7)           /**< Analog Comparator 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP0_SHIFT               7                  /**< Shift value for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_MASK                0x80               /**< Bit mask for CMU_ACMP0 */
#define CMU_HFPERCLKEN0_ACMP0_DEFAULT              (0x00000001 << 7)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ACMP0_DEFAULT             0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1                      (1 << 8)           /**< Analog Comparator 1 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP1_SHIFT               8                  /**< Shift value for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_MASK                0x100              /**< Bit mask for CMU_ACMP1 */
#define CMU_HFPERCLKEN0_ACMP1_DEFAULT              (0x00000001 << 8)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ACMP1_DEFAULT             0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_PRS                        (1 << 10)          /**< Peripheral Reflex System Clock Enable */
#define _CMU_HFPERCLKEN0_PRS_SHIFT                 10                 /**< Shift value for CMU_PRS */
#define _CMU_HFPERCLKEN0_PRS_MASK                  0x400              /**< Bit mask for CMU_PRS */
#define CMU_HFPERCLKEN0_PRS_DEFAULT                (0x00000001 << 10) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_PRS_DEFAULT               0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_DAC0                       (1 << 11)          /**< Digital to Analog Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_DAC0_SHIFT                11                 /**< Shift value for CMU_DAC0 */
#define _CMU_HFPERCLKEN0_DAC0_MASK                 0x800              /**< Bit mask for CMU_DAC0 */
#define CMU_HFPERCLKEN0_DAC0_DEFAULT               (0x00000001 << 11) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_DAC0_DEFAULT              0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_GPIO                       (1 << 12)          /**< General purpose Input/Output Clock Enable */
#define _CMU_HFPERCLKEN0_GPIO_SHIFT                12                 /**< Shift value for CMU_GPIO */
#define _CMU_HFPERCLKEN0_GPIO_MASK                 0x1000             /**< Bit mask for CMU_GPIO */
#define CMU_HFPERCLKEN0_GPIO_DEFAULT               (0x00000001 << 12) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_GPIO_DEFAULT              0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_VCMP                       (1 << 13)          /**< Voltage Comparator Clock Enable */
#define _CMU_HFPERCLKEN0_VCMP_SHIFT                13                 /**< Shift value for CMU_VCMP */
#define _CMU_HFPERCLKEN0_VCMP_MASK                 0x2000             /**< Bit mask for CMU_VCMP */
#define CMU_HFPERCLKEN0_VCMP_DEFAULT               (0x00000001 << 13) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_VCMP_DEFAULT              0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0                       (1 << 14)          /**< Analog to Digital Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ADC0_SHIFT                14                 /**< Shift value for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_MASK                 0x4000             /**< Bit mask for CMU_ADC0 */
#define CMU_HFPERCLKEN0_ADC0_DEFAULT               (0x00000001 << 14) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ADC0_DEFAULT              0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0                       (1 << 15)          /**< I2C 0 Clock Enable */
#define _CMU_HFPERCLKEN0_I2C0_SHIFT                15                 /**< Shift value for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_MASK                 0x8000             /**< Bit mask for CMU_I2C0 */
#define CMU_HFPERCLKEN0_I2C0_DEFAULT               (0x00000001 << 15) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_I2C0_DEFAULT              0x00000001         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */

/** Bit fields for CMU SYNCBUSY */
#define _CMU_SYNCBUSY_RESETVALUE                   0x00000000        /**< Default value for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_MASK                         0x00000055        /**< Mask for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0                     (1 << 0)          /**< Low Frequency A Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFACLKEN0_SHIFT              0                 /**< Shift value for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_MASK               0x1               /**< Bit mask for CMU_LFACLKEN0 */
#define CMU_SYNCBUSY_LFACLKEN0_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFACLKEN0_DEFAULT            0x00000000        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0                     (1 << 2)          /**< Low Frequency A Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFAPRESC0_SHIFT              2                 /**< Shift value for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_MASK               0x4               /**< Bit mask for CMU_LFAPRESC0 */
#define CMU_SYNCBUSY_LFAPRESC0_DEFAULT             (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFAPRESC0_DEFAULT            0x00000000        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0                     (1 << 4)          /**< Low Frequency B Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFBCLKEN0_SHIFT              4                 /**< Shift value for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_MASK               0x10              /**< Bit mask for CMU_LFBCLKEN0 */
#define CMU_SYNCBUSY_LFBCLKEN0_DEFAULT             (0x00000000 << 4) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFBCLKEN0_DEFAULT            0x00000000        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0                     (1 << 6)          /**< Low Frequency B Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFBPRESC0_SHIFT              6                 /**< Shift value for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_MASK               0x40              /**< Bit mask for CMU_LFBPRESC0 */
#define CMU_SYNCBUSY_LFBPRESC0_DEFAULT             (0x00000000 << 6) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFBPRESC0_DEFAULT            0x00000000        /**< Mode DEFAULT for CMU_SYNCBUSY */

/** Bit fields for CMU FREEZE */
#define _CMU_FREEZE_RESETVALUE                     0x00000000        /**< Default value for CMU_FREEZE */
#define _CMU_FREEZE_MASK                           0x00000001        /**< Mask for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE                       (1 << 0)          /**< Register Update Freeze */
#define _CMU_FREEZE_REGFREEZE_SHIFT                0                 /**< Shift value for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_MASK                 0x1               /**< Bit mask for CMU_REGFREEZE */
#define CMU_FREEZE_REGFREEZE_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_UPDATE                (0x00000000 << 0) /**< Shifted mode UPDATE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_FREEZE                (0x00000001 << 0) /**< Shifted mode FREEZE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_UPDATE               0x00000000        /**< Mode UPDATE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_FREEZE               0x00000001        /**< Mode FREEZE for CMU_FREEZE */

/** Bit fields for CMU LFACLKEN0 */
#define _CMU_LFACLKEN0_RESETVALUE                  0x00000007        /**< Default value for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_MASK                        0x00000007        /**< Mask for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_RTC                          (1 << 0)          /**< Real-Time Counter Clock Enable */
#define _CMU_LFACLKEN0_RTC_SHIFT                   0                 /**< Shift value for CMU_RTC */
#define _CMU_LFACLKEN0_RTC_MASK                    0x1               /**< Bit mask for CMU_RTC */
#define CMU_LFACLKEN0_RTC_DEFAULT                  (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_RTC_DEFAULT                 0x00000001        /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0                     (1 << 1)          /**< Low Energy Timer 0 Clock Enable */
#define _CMU_LFACLKEN0_LETIMER0_SHIFT              1                 /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_MASK               0x2               /**< Bit mask for CMU_LETIMER0 */
#define CMU_LFACLKEN0_LETIMER0_DEFAULT             (0x00000001 << 1) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_LETIMER0_DEFAULT            0x00000001        /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LCD                          (1 << 2)          /**< Liquid Crystal Display Controller Clock Enable */
#define _CMU_LFACLKEN0_LCD_SHIFT                   2                 /**< Shift value for CMU_LCD */
#define _CMU_LFACLKEN0_LCD_MASK                    0x4               /**< Bit mask for CMU_LCD */
#define CMU_LFACLKEN0_LCD_DEFAULT                  (0x00000001 << 2) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_LCD_DEFAULT                 0x00000001        /**< Mode DEFAULT for CMU_LFACLKEN0 */

/** Bit fields for CMU LFBCLKEN0 */
#define _CMU_LFBCLKEN0_RESETVALUE                  0x00000003        /**< Default value for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_MASK                        0x00000003        /**< Mask for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0                      (1 << 0)          /**< Low Energy UART 0 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART0_SHIFT               0                 /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_MASK                0x1               /**< Bit mask for CMU_LEUART0 */
#define CMU_LFBCLKEN0_LEUART0_DEFAULT              (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_LEUART0_DEFAULT             0x00000001        /**< Mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART1                      (1 << 1)          /**< Low Energy UART 1 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART1_SHIFT               1                 /**< Shift value for CMU_LEUART1 */
#define _CMU_LFBCLKEN0_LEUART1_MASK                0x2               /**< Bit mask for CMU_LEUART1 */
#define CMU_LFBCLKEN0_LEUART1_DEFAULT              (0x00000001 << 1) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_LEUART1_DEFAULT             0x00000001        /**< Mode DEFAULT for CMU_LFBCLKEN0 */

/** Bit fields for CMU LFAPRESC0 */
#define _CMU_LFAPRESC0_RESETVALUE                  0x00000000        /**< Default value for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_MASK                        0x000003FF        /**< Mask for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_SHIFT                   0                 /**< Shift value for CMU_RTC */
#define _CMU_LFAPRESC0_RTC_MASK                    0xF               /**< Bit mask for CMU_RTC */
#define CMU_LFAPRESC0_RTC_DIV1                     (0x00000000 << 0) /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2                     (0x00000001 << 0) /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4                     (0x00000002 << 0) /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8                     (0x00000003 << 0) /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16                    (0x00000004 << 0) /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32                    (0x00000005 << 0) /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV64                    (0x00000006 << 0) /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV128                   (0x00000007 << 0) /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV256                   (0x00000008 << 0) /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV512                   (0x00000009 << 0) /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV1024                  (0x0000000A << 0) /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2048                  (0x0000000B << 0) /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4096                  (0x0000000C << 0) /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8192                  (0x0000000D << 0) /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16384                 (0x0000000E << 0) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32768                 (0x0000000F << 0) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV1                    0x00000000        /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2                    0x00000001        /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4                    0x00000002        /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8                    0x00000003        /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16                   0x00000004        /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32                   0x00000005        /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV64                   0x00000006        /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV128                  0x00000007        /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV256                  0x00000008        /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV512                  0x00000009        /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV1024                 0x0000000A        /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2048                 0x0000000B        /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4096                 0x0000000C        /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8192                 0x0000000D        /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16384                0x0000000E        /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32768                0x0000000F        /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_SHIFT              4                 /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_MASK               0xF0              /**< Bit mask for CMU_LETIMER0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1                (0x00000000 << 4) /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2                (0x00000001 << 4) /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4                (0x00000002 << 4) /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8                (0x00000003 << 4) /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16               (0x00000004 << 4) /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32               (0x00000005 << 4) /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV64               (0x00000006 << 4) /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV128              (0x00000007 << 4) /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV256              (0x00000008 << 4) /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV512              (0x00000009 << 4) /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1024             (0x0000000A << 4) /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2048             (0x0000000B << 4) /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4096             (0x0000000C << 4) /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8192             (0x0000000D << 4) /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16384            (0x0000000E << 4) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32768            (0x0000000F << 4) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1               0x00000000        /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2               0x00000001        /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4               0x00000002        /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8               0x00000003        /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16              0x00000004        /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32              0x00000005        /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV64              0x00000006        /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV128             0x00000007        /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV256             0x00000008        /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV512             0x00000009        /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1024            0x0000000A        /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2048            0x0000000B        /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4096            0x0000000C        /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8192            0x0000000D        /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16384           0x0000000E        /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32768           0x0000000F        /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LCD_SHIFT                   8                 /**< Shift value for CMU_LCD */
#define _CMU_LFAPRESC0_LCD_MASK                    0x300             /**< Bit mask for CMU_LCD */
#define CMU_LFAPRESC0_LCD_DIV16                    (0x00000000 << 8) /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LCD_DIV32                    (0x00000001 << 8) /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LCD_DIV64                    (0x00000002 << 8) /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LCD_DIV128                   (0x00000003 << 8) /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LCD_DIV16                   0x00000000        /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LCD_DIV32                   0x00000001        /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LCD_DIV64                   0x00000002        /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LCD_DIV128                  0x00000003        /**< Mode DIV128 for CMU_LFAPRESC0 */

/** Bit fields for CMU LFBPRESC0 */
#define _CMU_LFBPRESC0_RESETVALUE                  0x00000000        /**< Default value for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_MASK                        0x00000033        /**< Mask for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_SHIFT               0                 /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_MASK                0x3               /**< Bit mask for CMU_LEUART0 */
#define CMU_LFBPRESC0_LEUART0_DIV1                 (0x00000000 << 0) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV2                 (0x00000001 << 0) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV4                 (0x00000002 << 0) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV8                 (0x00000003 << 0) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV1                0x00000000        /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV2                0x00000001        /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV4                0x00000002        /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV8                0x00000003        /**< Mode DIV8 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_SHIFT               4                 /**< Shift value for CMU_LEUART1 */
#define _CMU_LFBPRESC0_LEUART1_MASK                0x30              /**< Bit mask for CMU_LEUART1 */
#define CMU_LFBPRESC0_LEUART1_DIV1                 (0x00000000 << 4) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV2                 (0x00000001 << 4) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV4                 (0x00000002 << 4) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV8                 (0x00000003 << 4) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV1                0x00000000        /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV2                0x00000001        /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV4                0x00000002        /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV8                0x00000003        /**< Mode DIV8 for CMU_LFBPRESC0 */

/** Bit fields for CMU PCNTCTRL */
#define _CMU_PCNTCTRL_RESETVALUE                   0x00000015        /**< Default value for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_MASK                         0x0000003F        /**< Mask for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN                    (1 << 0)          /**< PCNT0 Clock Enable */
#define _CMU_PCNTCTRL_PCNT0CLKEN_SHIFT             0                 /**< Shift value for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_MASK              0x1               /**< Bit mask for CMU_PCNT0CLKEN */
#define CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT            (0x00000001 << 0) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT           0x00000001        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL                   (1 << 1)          /**< PCNT0 Clock Select */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_SHIFT            1                 /**< Shift value for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_MASK             0x2               /**< Bit mask for CMU_PCNT0CLKSEL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT           (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK            (0x00000000 << 1) /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0           (0x00000001 << 1) /**< Shifted mode PCNT0S0 for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT          0x00000000        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK           0x00000000        /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0          0x00000001        /**< Mode PCNT0S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKEN                    (1 << 2)          /**< PCNT1 Clock Enable */
#define _CMU_PCNTCTRL_PCNT1CLKEN_SHIFT             2                 /**< Shift value for CMU_PCNT1CLKEN */
#define _CMU_PCNTCTRL_PCNT1CLKEN_MASK              0x4               /**< Bit mask for CMU_PCNT1CLKEN */
#define CMU_PCNTCTRL_PCNT1CLKEN_DEFAULT            (0x00000001 << 2) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKEN_DEFAULT           0x00000001        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL                   (1 << 3)          /**< PCNT1 Clock Select */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_SHIFT            3                 /**< Shift value for CMU_PCNT1CLKSEL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_MASK             0x8               /**< Bit mask for CMU_PCNT1CLKSEL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_DEFAULT           (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_LFACLK            (0x00000000 << 3) /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_PCNT1S0           (0x00000001 << 3) /**< Shifted mode PCNT1S0 for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_DEFAULT          0x00000000        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_LFACLK           0x00000000        /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_PCNT1S0          0x00000001        /**< Mode PCNT1S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKEN                    (1 << 4)          /**< PCNT2 Clock Enable */
#define _CMU_PCNTCTRL_PCNT2CLKEN_SHIFT             4                 /**< Shift value for CMU_PCNT2CLKEN */
#define _CMU_PCNTCTRL_PCNT2CLKEN_MASK              0x10              /**< Bit mask for CMU_PCNT2CLKEN */
#define CMU_PCNTCTRL_PCNT2CLKEN_DEFAULT            (0x00000001 << 4) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKEN_DEFAULT           0x00000001        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL                   (1 << 5)          /**< PCNT2 Clock Select */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_SHIFT            5                 /**< Shift value for CMU_PCNT2CLKSEL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_MASK             0x20              /**< Bit mask for CMU_PCNT2CLKSEL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_DEFAULT           (0x00000000 << 5) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_LFACLK            (0x00000000 << 5) /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_PCNT2S0           (0x00000001 << 5) /**< Shifted mode PCNT2S0 for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_DEFAULT          0x00000000        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_LFACLK           0x00000000        /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_PCNT2S0          0x00000001        /**< Mode PCNT2S0 for CMU_PCNTCTRL */

/** Bit fields for CMU LCDCTRL */
#define _CMU_LCDCTRL_RESETVALUE                    0x00000020        /**< Default value for CMU_LCDCTRL */
#define _CMU_LCDCTRL_MASK                          0x0000007F        /**< Mask for CMU_LCDCTRL */
#define _CMU_LCDCTRL_FDIV_SHIFT                    0                 /**< Shift value for CMU_FDIV */
#define _CMU_LCDCTRL_FDIV_MASK                     0x7               /**< Bit mask for CMU_FDIV */
#define CMU_LCDCTRL_FDIV_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_LCDCTRL */
#define _CMU_LCDCTRL_FDIV_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBOOSTEN                       (1 << 3)          /**< Voltage Boost Enable */
#define _CMU_LCDCTRL_VBOOSTEN_SHIFT                3                 /**< Shift value for CMU_VBOOSTEN */
#define _CMU_LCDCTRL_VBOOSTEN_MASK                 0x8               /**< Bit mask for CMU_VBOOSTEN */
#define CMU_LCDCTRL_VBOOSTEN_DEFAULT               (0x00000000 << 3) /**< Shifted mode DEFAULT for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBOOSTEN_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_SHIFT                  4                 /**< Shift value for CMU_VBFREQ */
#define _CMU_LCDCTRL_VBFREQ_MASK                   0x70              /**< Bit mask for CMU_VBFREQ */
#define CMU_LCDCTRL_VBFREQ_32KHZ                   (0x00000000 << 4) /**< Shifted mode 32KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_16KHZ                   (0x00000001 << 4) /**< Shifted mode 16KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_DEFAULT                 (0x00000002 << 4) /**< Shifted mode DEFAULT for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_8KHZ                    (0x00000002 << 4) /**< Shifted mode 8KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_4KHZ                    (0x00000003 << 4) /**< Shifted mode 4KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_2KHZ                    (0x00000004 << 4) /**< Shifted mode 2KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_1KHZ                    (0x00000005 << 4) /**< Shifted mode 1KHZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_512HZ                   (0x00000006 << 4) /**< Shifted mode 512HZ for CMU_LCDCTRL */
#define CMU_LCDCTRL_VBFREQ_256HZ                   (0x00000007 << 4) /**< Shifted mode 256HZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_32KHZ                  0x00000000        /**< Mode 32KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_16KHZ                  0x00000001        /**< Mode 16KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_DEFAULT                0x00000002        /**< Mode DEFAULT for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_8KHZ                   0x00000002        /**< Mode 8KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_4KHZ                   0x00000003        /**< Mode 4KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_2KHZ                   0x00000004        /**< Mode 2KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_1KHZ                   0x00000005        /**< Mode 1KHZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_512HZ                  0x00000006        /**< Mode 512HZ for CMU_LCDCTRL */
#define _CMU_LCDCTRL_VBFREQ_256HZ                  0x00000007        /**< Mode 256HZ for CMU_LCDCTRL */

/** Bit fields for CMU ROUTE */
#define _CMU_ROUTE_RESETVALUE                      0x00000000        /**< Default value for CMU_ROUTE */
#define _CMU_ROUTE_MASK                            0x00000007        /**< Mask for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT0PEN                       (1 << 0)          /**< CLKOUT0 Pin Enable */
#define _CMU_ROUTE_CLKOUT0PEN_SHIFT                0                 /**< Shift value for CMU_CLKOUT0PEN */
#define _CMU_ROUTE_CLKOUT0PEN_MASK                 0x1               /**< Bit mask for CMU_CLKOUT0PEN */
#define CMU_ROUTE_CLKOUT0PEN_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_CLKOUT0PEN_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT1PEN                       (1 << 1)          /**< CLKOUT1 Pin Enable */
#define _CMU_ROUTE_CLKOUT1PEN_SHIFT                1                 /**< Shift value for CMU_CLKOUT1PEN */
#define _CMU_ROUTE_CLKOUT1PEN_MASK                 0x2               /**< Bit mask for CMU_CLKOUT1PEN */
#define CMU_ROUTE_CLKOUT1PEN_DEFAULT               (0x00000000 << 1) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_CLKOUT1PEN_DEFAULT              0x00000000        /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION                         (1 << 2)          /**< I/O Location */
#define _CMU_ROUTE_LOCATION_SHIFT                  2                 /**< Shift value for CMU_LOCATION */
#define _CMU_ROUTE_LOCATION_MASK                   0x4               /**< Bit mask for CMU_LOCATION */
#define CMU_ROUTE_LOCATION_DEFAULT                 (0x00000000 << 2) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC0                    (0x00000000 << 2) /**< Shifted mode LOC0 for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC1                    (0x00000001 << 2) /**< Shifted mode LOC1 for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_DEFAULT                0x00000000        /**< Mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_LOC0                   0x00000000        /**< Mode LOC0 for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_LOC1                   0x00000001        /**< Mode LOC1 for CMU_ROUTE */

/** Bit fields for CMU LOCK */
#define _CMU_LOCK_RESETVALUE                       0x00000000        /**< Default value for CMU_LOCK */
#define _CMU_LOCK_MASK                             0x0000FFFF        /**< Mask for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_SHIFT                    0                 /**< Shift value for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_MASK                     0xFFFF            /**< Bit mask for CMU_LOCKKEY */
#define CMU_LOCK_LOCKKEY_DEFAULT                   (0x00000000 << 0) /**< Shifted mode DEFAULT for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCK                      (0x00000000 << 0) /**< Shifted mode LOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCKED                  (0x00000000 << 0) /**< Shifted mode UNLOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCKED                    (0x00000001 << 0) /**< Shifted mode LOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCK                    (0x0000580E << 0) /**< Shifted mode UNLOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_DEFAULT                  0x00000000        /**< Mode DEFAULT for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCK                     0x00000000        /**< Mode LOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCKED                 0x00000000        /**< Mode UNLOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCKED                   0x00000001        /**< Mode LOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCK                   0x0000580E        /**< Mode UNLOCK for CMU_LOCK */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_AES
 * @{
 */

/** Bit fields for AES CTRL */
#define _AES_CTRL_RESETVALUE            0x00000000        /**< Default value for AES_CTRL */
#define _AES_CTRL_MASK                  0x00000037        /**< Mask for AES_CTRL */
#define AES_CTRL_DECRYPT                (1 << 0)          /**< Decryption/Encryption Mode */
#define _AES_CTRL_DECRYPT_SHIFT         0                 /**< Shift value for AES_DECRYPT */
#define _AES_CTRL_DECRYPT_MASK          0x1               /**< Bit mask for AES_DECRYPT */
#define AES_CTRL_DECRYPT_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_CTRL */
#define _AES_CTRL_DECRYPT_DEFAULT       0x00000000        /**< Mode DEFAULT for AES_CTRL */
#define AES_CTRL_AES256                 (1 << 1)          /**< AES-256 Mode */
#define _AES_CTRL_AES256_SHIFT          1                 /**< Shift value for AES_AES256 */
#define _AES_CTRL_AES256_MASK           0x2               /**< Bit mask for AES_AES256 */
#define AES_CTRL_AES256_DEFAULT         (0x00000000 << 1) /**< Shifted mode DEFAULT for AES_CTRL */
#define _AES_CTRL_AES256_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_CTRL */
#define AES_CTRL_KEYBUFEN               (1 << 2)          /**< Key Buffer Enable */
#define _AES_CTRL_KEYBUFEN_SHIFT        2                 /**< Shift value for AES_KEYBUFEN */
#define _AES_CTRL_KEYBUFEN_MASK         0x4               /**< Bit mask for AES_KEYBUFEN */
#define AES_CTRL_KEYBUFEN_DEFAULT       (0x00000000 << 2) /**< Shifted mode DEFAULT for AES_CTRL */
#define _AES_CTRL_KEYBUFEN_DEFAULT      0x00000000        /**< Mode DEFAULT for AES_CTRL */
#define AES_CTRL_DATASTART              (1 << 4)          /**< AES_DATA Write Start */
#define _AES_CTRL_DATASTART_SHIFT       4                 /**< Shift value for AES_DATASTART */
#define _AES_CTRL_DATASTART_MASK        0x10              /**< Bit mask for AES_DATASTART */
#define AES_CTRL_DATASTART_DEFAULT      (0x00000000 << 4) /**< Shifted mode DEFAULT for AES_CTRL */
#define _AES_CTRL_DATASTART_DEFAULT     0x00000000        /**< Mode DEFAULT for AES_CTRL */
#define AES_CTRL_XORSTART               (1 << 5)          /**< AES_XORDATA Write Start */
#define _AES_CTRL_XORSTART_SHIFT        5                 /**< Shift value for AES_XORSTART */
#define _AES_CTRL_XORSTART_MASK         0x20              /**< Bit mask for AES_XORSTART */
#define AES_CTRL_XORSTART_DEFAULT       (0x00000000 << 5) /**< Shifted mode DEFAULT for AES_CTRL */
#define _AES_CTRL_XORSTART_DEFAULT      0x00000000        /**< Mode DEFAULT for AES_CTRL */

/** Bit fields for AES CMD */
#define _AES_CMD_RESETVALUE             0x00000000        /**< Default value for AES_CMD */
#define _AES_CMD_MASK                   0x00000003        /**< Mask for AES_CMD */
#define AES_CMD_START                   (1 << 0)          /**< Encryption/Decryption Start */
#define _AES_CMD_START_SHIFT            0                 /**< Shift value for AES_START */
#define _AES_CMD_START_MASK             0x1               /**< Bit mask for AES_START */
#define AES_CMD_START_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_CMD */
#define _AES_CMD_START_DEFAULT          0x00000000        /**< Mode DEFAULT for AES_CMD */
#define AES_CMD_STOP                    (1 << 1)          /**< Encryption/Decryption Stop */
#define _AES_CMD_STOP_SHIFT             1                 /**< Shift value for AES_STOP */
#define _AES_CMD_STOP_MASK              0x2               /**< Bit mask for AES_STOP */
#define AES_CMD_STOP_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for AES_CMD */
#define _AES_CMD_STOP_DEFAULT           0x00000000        /**< Mode DEFAULT for AES_CMD */

/** Bit fields for AES STATUS */
#define _AES_STATUS_RESETVALUE          0x00000000        /**< Default value for AES_STATUS */
#define _AES_STATUS_MASK                0x00000001        /**< Mask for AES_STATUS */
#define AES_STATUS_RUNNING              (1 << 0)          /**< AES Running */
#define _AES_STATUS_RUNNING_SHIFT       0                 /**< Shift value for AES_RUNNING */
#define _AES_STATUS_RUNNING_MASK        0x1               /**< Bit mask for AES_RUNNING */
#define AES_STATUS_RUNNING_DEFAULT      (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_STATUS */
#define _AES_STATUS_RUNNING_DEFAULT     0x00000000        /**< Mode DEFAULT for AES_STATUS */

/** Bit fields for AES IEN */
#define _AES_IEN_RESETVALUE             0x00000000        /**< Default value for AES_IEN */
#define _AES_IEN_MASK                   0x00000001        /**< Mask for AES_IEN */
#define AES_IEN_DONE                    (1 << 0)          /**< Encryption/Decryption Done Interrupt Enable */
#define _AES_IEN_DONE_SHIFT             0                 /**< Shift value for AES_DONE */
#define _AES_IEN_DONE_MASK              0x1               /**< Bit mask for AES_DONE */
#define AES_IEN_DONE_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_IEN */
#define _AES_IEN_DONE_DEFAULT           0x00000000        /**< Mode DEFAULT for AES_IEN */

/** Bit fields for AES IF */
#define _AES_IF_RESETVALUE              0x00000000        /**< Default value for AES_IF */
#define _AES_IF_MASK                    0x00000001        /**< Mask for AES_IF */
#define AES_IF_DONE                     (1 << 0)          /**< Encryption/Decryption Done Interrupt Flag */
#define _AES_IF_DONE_SHIFT              0                 /**< Shift value for AES_DONE */
#define _AES_IF_DONE_MASK               0x1               /**< Bit mask for AES_DONE */
#define AES_IF_DONE_DEFAULT             (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_IF */
#define _AES_IF_DONE_DEFAULT            0x00000000        /**< Mode DEFAULT for AES_IF */

/** Bit fields for AES IFS */
#define _AES_IFS_RESETVALUE             0x00000000        /**< Default value for AES_IFS */
#define _AES_IFS_MASK                   0x00000001        /**< Mask for AES_IFS */
#define AES_IFS_DONE                    (1 << 0)          /**< Encryption/Decryption Done Interrupt Flag Set */
#define _AES_IFS_DONE_SHIFT             0                 /**< Shift value for AES_DONE */
#define _AES_IFS_DONE_MASK              0x1               /**< Bit mask for AES_DONE */
#define AES_IFS_DONE_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_IFS */
#define _AES_IFS_DONE_DEFAULT           0x00000000        /**< Mode DEFAULT for AES_IFS */

/** Bit fields for AES IFC */
#define _AES_IFC_RESETVALUE             0x00000000        /**< Default value for AES_IFC */
#define _AES_IFC_MASK                   0x00000001        /**< Mask for AES_IFC */
#define AES_IFC_DONE                    (1 << 0)          /**< Encryption/Decryption Done Interrupt Flag Clear */
#define _AES_IFC_DONE_SHIFT             0                 /**< Shift value for AES_DONE */
#define _AES_IFC_DONE_MASK              0x1               /**< Bit mask for AES_DONE */
#define AES_IFC_DONE_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_IFC */
#define _AES_IFC_DONE_DEFAULT           0x00000000        /**< Mode DEFAULT for AES_IFC */

/** Bit fields for AES DATA */
#define _AES_DATA_RESETVALUE            0x00000000        /**< Default value for AES_DATA */
#define _AES_DATA_MASK                  0xFFFFFFFF        /**< Mask for AES_DATA */
#define _AES_DATA_DATA_SHIFT            0                 /**< Shift value for AES_DATA */
#define _AES_DATA_DATA_MASK             0xFFFFFFFF        /**< Bit mask for AES_DATA */
#define AES_DATA_DATA_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_DATA */
#define _AES_DATA_DATA_DEFAULT          0x00000000        /**< Mode DEFAULT for AES_DATA */

/** Bit fields for AES XORDATA */
#define _AES_XORDATA_RESETVALUE         0x00000000        /**< Default value for AES_XORDATA */
#define _AES_XORDATA_MASK               0xFFFFFFFF        /**< Mask for AES_XORDATA */
#define _AES_XORDATA_XORDATA_SHIFT      0                 /**< Shift value for AES_XORDATA */
#define _AES_XORDATA_XORDATA_MASK       0xFFFFFFFF        /**< Bit mask for AES_XORDATA */
#define AES_XORDATA_XORDATA_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_XORDATA */
#define _AES_XORDATA_XORDATA_DEFAULT    0x00000000        /**< Mode DEFAULT for AES_XORDATA */

/** Bit fields for AES KEYLA */
#define _AES_KEYLA_RESETVALUE           0x00000000        /**< Default value for AES_KEYLA */
#define _AES_KEYLA_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYLA */
#define _AES_KEYLA_KEYLA_SHIFT          0                 /**< Shift value for AES_KEYLA */
#define _AES_KEYLA_KEYLA_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYLA */
#define AES_KEYLA_KEYLA_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYLA */
#define _AES_KEYLA_KEYLA_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYLA */

/** Bit fields for AES KEYLB */
#define _AES_KEYLB_RESETVALUE           0x00000000        /**< Default value for AES_KEYLB */
#define _AES_KEYLB_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYLB */
#define _AES_KEYLB_KEYLB_SHIFT          0                 /**< Shift value for AES_KEYLB */
#define _AES_KEYLB_KEYLB_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYLB */
#define AES_KEYLB_KEYLB_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYLB */
#define _AES_KEYLB_KEYLB_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYLB */

/** Bit fields for AES KEYLC */
#define _AES_KEYLC_RESETVALUE           0x00000000        /**< Default value for AES_KEYLC */
#define _AES_KEYLC_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYLC */
#define _AES_KEYLC_KEYLC_SHIFT          0                 /**< Shift value for AES_KEYLC */
#define _AES_KEYLC_KEYLC_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYLC */
#define AES_KEYLC_KEYLC_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYLC */
#define _AES_KEYLC_KEYLC_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYLC */

/** Bit fields for AES KEYLD */
#define _AES_KEYLD_RESETVALUE           0x00000000        /**< Default value for AES_KEYLD */
#define _AES_KEYLD_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYLD */
#define _AES_KEYLD_KEYLD_SHIFT          0                 /**< Shift value for AES_KEYLD */
#define _AES_KEYLD_KEYLD_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYLD */
#define AES_KEYLD_KEYLD_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYLD */
#define _AES_KEYLD_KEYLD_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYLD */

/** Bit fields for AES KEYHA */
#define _AES_KEYHA_RESETVALUE           0x00000000        /**< Default value for AES_KEYHA */
#define _AES_KEYHA_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYHA */
#define _AES_KEYHA_KEYHA_SHIFT          0                 /**< Shift value for AES_KEYHA */
#define _AES_KEYHA_KEYHA_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYHA */
#define AES_KEYHA_KEYHA_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYHA */
#define _AES_KEYHA_KEYHA_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYHA */

/** Bit fields for AES KEYHB */
#define _AES_KEYHB_RESETVALUE           0x00000000        /**< Default value for AES_KEYHB */
#define _AES_KEYHB_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYHB */
#define _AES_KEYHB_KEYHB_SHIFT          0                 /**< Shift value for AES_KEYHB */
#define _AES_KEYHB_KEYHB_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYHB */
#define AES_KEYHB_KEYHB_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYHB */
#define _AES_KEYHB_KEYHB_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYHB */

/** Bit fields for AES KEYHC */
#define _AES_KEYHC_RESETVALUE           0x00000000        /**< Default value for AES_KEYHC */
#define _AES_KEYHC_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYHC */
#define _AES_KEYHC_KEYHC_SHIFT          0                 /**< Shift value for AES_KEYHC */
#define _AES_KEYHC_KEYHC_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYHC */
#define AES_KEYHC_KEYHC_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYHC */
#define _AES_KEYHC_KEYHC_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYHC */

/** Bit fields for AES KEYHD */
#define _AES_KEYHD_RESETVALUE           0x00000000        /**< Default value for AES_KEYHD */
#define _AES_KEYHD_MASK                 0xFFFFFFFF        /**< Mask for AES_KEYHD */
#define _AES_KEYHD_KEYHD_SHIFT          0                 /**< Shift value for AES_KEYHD */
#define _AES_KEYHD_KEYHD_MASK           0xFFFFFFFF        /**< Bit mask for AES_KEYHD */
#define AES_KEYHD_KEYHD_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for AES_KEYHD */
#define _AES_KEYHD_KEYHD_DEFAULT        0x00000000        /**< Mode DEFAULT for AES_KEYHD */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_GPIO
 * @{
 */

/** Bit fields for GPIO P_CTRL */
#define _GPIO_P_CTRL_RESETVALUE                           0x00000000        /**< Default value for GPIO_P_CTRL */
#define _GPIO_P_CTRL_MASK                                 0x00000003        /**< Mask for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_SHIFT                      0                 /**< Shift value for GPIO_DRIVEMODE */
#define _GPIO_P_CTRL_DRIVEMODE_MASK                       0x3               /**< Bit mask for GPIO_DRIVEMODE */
#define GPIO_P_CTRL_DRIVEMODE_DEFAULT                     (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_STANDARD                    (0x00000000 << 0) /**< Shifted mode STANDARD for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_LOWEST                      (0x00000001 << 0) /**< Shifted mode LOWEST for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_HIGH                        (0x00000002 << 0) /**< Shifted mode HIGH for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_LOW                         (0x00000003 << 0) /**< Shifted mode LOW for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_DEFAULT                    0x00000000        /**< Mode DEFAULT for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_STANDARD                   0x00000000        /**< Mode STANDARD for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_LOWEST                     0x00000001        /**< Mode LOWEST for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_HIGH                       0x00000002        /**< Mode HIGH for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_LOW                        0x00000003        /**< Mode LOW for GPIO_P_CTRL */

/** Bit fields for GPIO P_MODEL */
#define _GPIO_P_MODEL_RESETVALUE                          0x00000000         /**< Default value for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MASK                                0xFFFFFFFF         /**< Mask for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_SHIFT                         0                  /**< Shift value for GPIO_MODE0 */
#define _GPIO_P_MODEL_MODE0_MASK                          0xF                /**< Bit mask for GPIO_MODE0 */
#define GPIO_P_MODEL_MODE0_DEFAULT                        (0x00000000 << 0)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_DISABLED                       (0x00000000 << 0)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUT                          (0x00000001 << 0)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUTPULL                      (0x00000002 << 0)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUTPULLFILTER                (0x00000003 << 0)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_PUSHPULL                       (0x00000004 << 0)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_PUSHPULLDRIVE                  (0x00000005 << 0)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDOR                        (0x00000006 << 0)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDORPULLDOWN                (0x00000007 << 0)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDAND                       (0x00000008 << 0)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDFILTER                 (0x00000009 << 0)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDPULLUP                 (0x0000000A << 0)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDPULLUPFILTER           (0x0000000B << 0)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVE                  (0x0000000C << 0)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEFILTER            (0x0000000D << 0)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUP            (0x0000000E << 0)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 0)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_SHIFT                         4                  /**< Shift value for GPIO_MODE1 */
#define _GPIO_P_MODEL_MODE1_MASK                          0xF0               /**< Bit mask for GPIO_MODE1 */
#define GPIO_P_MODEL_MODE1_DEFAULT                        (0x00000000 << 4)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_DISABLED                       (0x00000000 << 4)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUT                          (0x00000001 << 4)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUTPULL                      (0x00000002 << 4)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUTPULLFILTER                (0x00000003 << 4)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_PUSHPULL                       (0x00000004 << 4)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_PUSHPULLDRIVE                  (0x00000005 << 4)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDOR                        (0x00000006 << 4)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDORPULLDOWN                (0x00000007 << 4)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDAND                       (0x00000008 << 4)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDFILTER                 (0x00000009 << 4)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDPULLUP                 (0x0000000A << 4)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDPULLUPFILTER           (0x0000000B << 4)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVE                  (0x0000000C << 4)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEFILTER            (0x0000000D << 4)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUP            (0x0000000E << 4)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 4)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_SHIFT                         8                  /**< Shift value for GPIO_MODE2 */
#define _GPIO_P_MODEL_MODE2_MASK                          0xF00              /**< Bit mask for GPIO_MODE2 */
#define GPIO_P_MODEL_MODE2_DEFAULT                        (0x00000000 << 8)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_DISABLED                       (0x00000000 << 8)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUT                          (0x00000001 << 8)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUTPULL                      (0x00000002 << 8)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUTPULLFILTER                (0x00000003 << 8)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_PUSHPULL                       (0x00000004 << 8)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_PUSHPULLDRIVE                  (0x00000005 << 8)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDOR                        (0x00000006 << 8)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDORPULLDOWN                (0x00000007 << 8)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDAND                       (0x00000008 << 8)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDFILTER                 (0x00000009 << 8)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDPULLUP                 (0x0000000A << 8)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDPULLUPFILTER           (0x0000000B << 8)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVE                  (0x0000000C << 8)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEFILTER            (0x0000000D << 8)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUP            (0x0000000E << 8)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 8)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_SHIFT                         12                 /**< Shift value for GPIO_MODE3 */
#define _GPIO_P_MODEL_MODE3_MASK                          0xF000             /**< Bit mask for GPIO_MODE3 */
#define GPIO_P_MODEL_MODE3_DEFAULT                        (0x00000000 << 12) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_DISABLED                       (0x00000000 << 12) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUT                          (0x00000001 << 12) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUTPULL                      (0x00000002 << 12) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUTPULLFILTER                (0x00000003 << 12) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_PUSHPULL                       (0x00000004 << 12) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_PUSHPULLDRIVE                  (0x00000005 << 12) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDOR                        (0x00000006 << 12) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDORPULLDOWN                (0x00000007 << 12) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDAND                       (0x00000008 << 12) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDFILTER                 (0x00000009 << 12) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDPULLUP                 (0x0000000A << 12) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDPULLUPFILTER           (0x0000000B << 12) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVE                  (0x0000000C << 12) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEFILTER            (0x0000000D << 12) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUP            (0x0000000E << 12) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 12) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_SHIFT                         16                 /**< Shift value for GPIO_MODE4 */
#define _GPIO_P_MODEL_MODE4_MASK                          0xF0000            /**< Bit mask for GPIO_MODE4 */
#define GPIO_P_MODEL_MODE4_DEFAULT                        (0x00000000 << 16) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_DISABLED                       (0x00000000 << 16) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUT                          (0x00000001 << 16) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUTPULL                      (0x00000002 << 16) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUTPULLFILTER                (0x00000003 << 16) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_PUSHPULL                       (0x00000004 << 16) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_PUSHPULLDRIVE                  (0x00000005 << 16) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDOR                        (0x00000006 << 16) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDORPULLDOWN                (0x00000007 << 16) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDAND                       (0x00000008 << 16) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDFILTER                 (0x00000009 << 16) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDPULLUP                 (0x0000000A << 16) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDPULLUPFILTER           (0x0000000B << 16) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVE                  (0x0000000C << 16) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEFILTER            (0x0000000D << 16) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUP            (0x0000000E << 16) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 16) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_SHIFT                         20                 /**< Shift value for GPIO_MODE5 */
#define _GPIO_P_MODEL_MODE5_MASK                          0xF00000           /**< Bit mask for GPIO_MODE5 */
#define GPIO_P_MODEL_MODE5_DEFAULT                        (0x00000000 << 20) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_DISABLED                       (0x00000000 << 20) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUT                          (0x00000001 << 20) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUTPULL                      (0x00000002 << 20) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUTPULLFILTER                (0x00000003 << 20) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_PUSHPULL                       (0x00000004 << 20) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_PUSHPULLDRIVE                  (0x00000005 << 20) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDOR                        (0x00000006 << 20) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDORPULLDOWN                (0x00000007 << 20) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDAND                       (0x00000008 << 20) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDFILTER                 (0x00000009 << 20) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDPULLUP                 (0x0000000A << 20) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDPULLUPFILTER           (0x0000000B << 20) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVE                  (0x0000000C << 20) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEFILTER            (0x0000000D << 20) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUP            (0x0000000E << 20) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 20) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_SHIFT                         24                 /**< Shift value for GPIO_MODE6 */
#define _GPIO_P_MODEL_MODE6_MASK                          0xF000000          /**< Bit mask for GPIO_MODE6 */
#define GPIO_P_MODEL_MODE6_DEFAULT                        (0x00000000 << 24) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_DISABLED                       (0x00000000 << 24) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUT                          (0x00000001 << 24) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUTPULL                      (0x00000002 << 24) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUTPULLFILTER                (0x00000003 << 24) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_PUSHPULL                       (0x00000004 << 24) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_PUSHPULLDRIVE                  (0x00000005 << 24) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDOR                        (0x00000006 << 24) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDORPULLDOWN                (0x00000007 << 24) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDAND                       (0x00000008 << 24) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDFILTER                 (0x00000009 << 24) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDPULLUP                 (0x0000000A << 24) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDPULLUPFILTER           (0x0000000B << 24) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVE                  (0x0000000C << 24) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEFILTER            (0x0000000D << 24) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUP            (0x0000000E << 24) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 24) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_SHIFT                         28                 /**< Shift value for GPIO_MODE7 */
#define _GPIO_P_MODEL_MODE7_MASK                          0xF0000000         /**< Bit mask for GPIO_MODE7 */
#define GPIO_P_MODEL_MODE7_DEFAULT                        (0x00000000 << 28) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_DISABLED                       (0x00000000 << 28) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUT                          (0x00000001 << 28) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUTPULL                      (0x00000002 << 28) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUTPULLFILTER                (0x00000003 << 28) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_PUSHPULL                       (0x00000004 << 28) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_PUSHPULLDRIVE                  (0x00000005 << 28) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDOR                        (0x00000006 << 28) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDORPULLDOWN                (0x00000007 << 28) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDAND                       (0x00000008 << 28) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDFILTER                 (0x00000009 << 28) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDPULLUP                 (0x0000000A << 28) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDPULLUPFILTER           (0x0000000B << 28) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVE                  (0x0000000C << 28) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEFILTER            (0x0000000D << 28) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUP            (0x0000000E << 28) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 28) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */

/** Bit fields for GPIO P_MODEH */
#define _GPIO_P_MODEH_RESETVALUE                          0x00000000         /**< Default value for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MASK                                0xFFFFFFFF         /**< Mask for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_SHIFT                         0                  /**< Shift value for GPIO_MODE8 */
#define _GPIO_P_MODEH_MODE8_MASK                          0xF                /**< Bit mask for GPIO_MODE8 */
#define GPIO_P_MODEH_MODE8_DEFAULT                        (0x00000000 << 0)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_DISABLED                       (0x00000000 << 0)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUT                          (0x00000001 << 0)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUTPULL                      (0x00000002 << 0)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUTPULLFILTER                (0x00000003 << 0)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_PUSHPULL                       (0x00000004 << 0)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_PUSHPULLDRIVE                  (0x00000005 << 0)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDOR                        (0x00000006 << 0)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDORPULLDOWN                (0x00000007 << 0)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDAND                       (0x00000008 << 0)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDFILTER                 (0x00000009 << 0)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDPULLUP                 (0x0000000A << 0)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDPULLUPFILTER           (0x0000000B << 0)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVE                  (0x0000000C << 0)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEFILTER            (0x0000000D << 0)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUP            (0x0000000E << 0)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 0)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_SHIFT                         4                  /**< Shift value for GPIO_MODE9 */
#define _GPIO_P_MODEH_MODE9_MASK                          0xF0               /**< Bit mask for GPIO_MODE9 */
#define GPIO_P_MODEH_MODE9_DEFAULT                        (0x00000000 << 4)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_DISABLED                       (0x00000000 << 4)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUT                          (0x00000001 << 4)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUTPULL                      (0x00000002 << 4)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUTPULLFILTER                (0x00000003 << 4)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_PUSHPULL                       (0x00000004 << 4)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_PUSHPULLDRIVE                  (0x00000005 << 4)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDOR                        (0x00000006 << 4)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDORPULLDOWN                (0x00000007 << 4)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDAND                       (0x00000008 << 4)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDFILTER                 (0x00000009 << 4)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDPULLUP                 (0x0000000A << 4)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDPULLUPFILTER           (0x0000000B << 4)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVE                  (0x0000000C << 4)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEFILTER            (0x0000000D << 4)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUP            (0x0000000E << 4)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUPFILTER      (0x0000000F << 4)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_DEFAULT                       0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_DISABLED                      0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUT                         0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUTPULL                     0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUTPULLFILTER               0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_PUSHPULL                      0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_PUSHPULLDRIVE                 0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDOR                       0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDORPULLDOWN               0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDAND                      0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDFILTER                0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDPULLUP                0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDPULLUPFILTER          0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVE                 0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEFILTER           0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUP           0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUPFILTER     0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_SHIFT                        8                  /**< Shift value for GPIO_MODE10 */
#define _GPIO_P_MODEH_MODE10_MASK                         0xF00              /**< Bit mask for GPIO_MODE10 */
#define GPIO_P_MODEH_MODE10_DEFAULT                       (0x00000000 << 8)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_DISABLED                      (0x00000000 << 8)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUT                         (0x00000001 << 8)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUTPULL                     (0x00000002 << 8)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUTPULLFILTER               (0x00000003 << 8)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_PUSHPULL                      (0x00000004 << 8)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_PUSHPULLDRIVE                 (0x00000005 << 8)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDOR                       (0x00000006 << 8)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDORPULLDOWN               (0x00000007 << 8)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDAND                      (0x00000008 << 8)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDFILTER                (0x00000009 << 8)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDPULLUP                (0x0000000A << 8)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDPULLUPFILTER          (0x0000000B << 8)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVE                 (0x0000000C << 8)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEFILTER           (0x0000000D << 8)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUP           (0x0000000E << 8)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 8)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_SHIFT                        12                 /**< Shift value for GPIO_MODE11 */
#define _GPIO_P_MODEH_MODE11_MASK                         0xF000             /**< Bit mask for GPIO_MODE11 */
#define GPIO_P_MODEH_MODE11_DEFAULT                       (0x00000000 << 12) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_DISABLED                      (0x00000000 << 12) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUT                         (0x00000001 << 12) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUTPULL                     (0x00000002 << 12) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUTPULLFILTER               (0x00000003 << 12) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_PUSHPULL                      (0x00000004 << 12) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_PUSHPULLDRIVE                 (0x00000005 << 12) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDOR                       (0x00000006 << 12) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDORPULLDOWN               (0x00000007 << 12) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDAND                      (0x00000008 << 12) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDFILTER                (0x00000009 << 12) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDPULLUP                (0x0000000A << 12) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDPULLUPFILTER          (0x0000000B << 12) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVE                 (0x0000000C << 12) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEFILTER           (0x0000000D << 12) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUP           (0x0000000E << 12) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 12) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_SHIFT                        16                 /**< Shift value for GPIO_MODE12 */
#define _GPIO_P_MODEH_MODE12_MASK                         0xF0000            /**< Bit mask for GPIO_MODE12 */
#define GPIO_P_MODEH_MODE12_DEFAULT                       (0x00000000 << 16) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_DISABLED                      (0x00000000 << 16) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUT                         (0x00000001 << 16) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUTPULL                     (0x00000002 << 16) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUTPULLFILTER               (0x00000003 << 16) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_PUSHPULL                      (0x00000004 << 16) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_PUSHPULLDRIVE                 (0x00000005 << 16) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDOR                       (0x00000006 << 16) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDORPULLDOWN               (0x00000007 << 16) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDAND                      (0x00000008 << 16) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDFILTER                (0x00000009 << 16) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDPULLUP                (0x0000000A << 16) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDPULLUPFILTER          (0x0000000B << 16) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVE                 (0x0000000C << 16) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEFILTER           (0x0000000D << 16) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUP           (0x0000000E << 16) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 16) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_SHIFT                        20                 /**< Shift value for GPIO_MODE13 */
#define _GPIO_P_MODEH_MODE13_MASK                         0xF00000           /**< Bit mask for GPIO_MODE13 */
#define GPIO_P_MODEH_MODE13_DEFAULT                       (0x00000000 << 20) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_DISABLED                      (0x00000000 << 20) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUT                         (0x00000001 << 20) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUTPULL                     (0x00000002 << 20) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUTPULLFILTER               (0x00000003 << 20) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_PUSHPULL                      (0x00000004 << 20) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_PUSHPULLDRIVE                 (0x00000005 << 20) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDOR                       (0x00000006 << 20) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDORPULLDOWN               (0x00000007 << 20) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDAND                      (0x00000008 << 20) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDFILTER                (0x00000009 << 20) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDPULLUP                (0x0000000A << 20) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDPULLUPFILTER          (0x0000000B << 20) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVE                 (0x0000000C << 20) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEFILTER           (0x0000000D << 20) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUP           (0x0000000E << 20) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 20) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_SHIFT                        24                 /**< Shift value for GPIO_MODE14 */
#define _GPIO_P_MODEH_MODE14_MASK                         0xF000000          /**< Bit mask for GPIO_MODE14 */
#define GPIO_P_MODEH_MODE14_DEFAULT                       (0x00000000 << 24) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_DISABLED                      (0x00000000 << 24) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUT                         (0x00000001 << 24) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUTPULL                     (0x00000002 << 24) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUTPULLFILTER               (0x00000003 << 24) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_PUSHPULL                      (0x00000004 << 24) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_PUSHPULLDRIVE                 (0x00000005 << 24) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDOR                       (0x00000006 << 24) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDORPULLDOWN               (0x00000007 << 24) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDAND                      (0x00000008 << 24) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDFILTER                (0x00000009 << 24) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDPULLUP                (0x0000000A << 24) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDPULLUPFILTER          (0x0000000B << 24) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVE                 (0x0000000C << 24) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEFILTER           (0x0000000D << 24) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUP           (0x0000000E << 24) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 24) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_SHIFT                        28                 /**< Shift value for GPIO_MODE15 */
#define _GPIO_P_MODEH_MODE15_MASK                         0xF0000000         /**< Bit mask for GPIO_MODE15 */
#define GPIO_P_MODEH_MODE15_DEFAULT                       (0x00000000 << 28) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_DISABLED                      (0x00000000 << 28) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUT                         (0x00000001 << 28) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUTPULL                     (0x00000002 << 28) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUTPULLFILTER               (0x00000003 << 28) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_PUSHPULL                      (0x00000004 << 28) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_PUSHPULLDRIVE                 (0x00000005 << 28) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDOR                       (0x00000006 << 28) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDORPULLDOWN               (0x00000007 << 28) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDAND                      (0x00000008 << 28) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDFILTER                (0x00000009 << 28) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDPULLUP                (0x0000000A << 28) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDPULLUPFILTER          (0x0000000B << 28) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVE                 (0x0000000C << 28) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEFILTER           (0x0000000D << 28) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUP           (0x0000000E << 28) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUPFILTER     (0x0000000F << 28) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_DEFAULT                      0x00000000         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_DISABLED                     0x00000000         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUT                        0x00000001         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUTPULL                    0x00000002         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUTPULLFILTER              0x00000003         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_PUSHPULL                     0x00000004         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_PUSHPULLDRIVE                0x00000005         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDOR                      0x00000006         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDORPULLDOWN              0x00000007         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDAND                     0x00000008         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDFILTER               0x00000009         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDPULLUP               0x0000000A         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDPULLUPFILTER         0x0000000B         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVE                0x0000000C         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEFILTER          0x0000000D         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUP          0x0000000E         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUPFILTER    0x0000000F         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */

/** Bit fields for GPIO P_DOUT */
#define _GPIO_P_DOUT_RESETVALUE                           0x00000000        /**< Default value for GPIO_P_DOUT */
#define _GPIO_P_DOUT_MASK                                 0x0000FFFF        /**< Mask for GPIO_P_DOUT */
#define _GPIO_P_DOUT_DOUT_SHIFT                           0                 /**< Shift value for GPIO_DOUT */
#define _GPIO_P_DOUT_DOUT_MASK                            0xFFFF            /**< Bit mask for GPIO_DOUT */
#define GPIO_P_DOUT_DOUT_DEFAULT                          (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUT */
#define _GPIO_P_DOUT_DOUT_DEFAULT                         0x00000000        /**< Mode DEFAULT for GPIO_P_DOUT */

/** Bit fields for GPIO P_DOUTSET */
#define _GPIO_P_DOUTSET_RESETVALUE                        0x00000000        /**< Default value for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_MASK                              0x0000FFFF        /**< Mask for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_SHIFT                     0                 /**< Shift value for GPIO_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_MASK                      0xFFFF            /**< Bit mask for GPIO_DOUTSET */
#define GPIO_P_DOUTSET_DOUTSET_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_DEFAULT                   0x00000000        /**< Mode DEFAULT for GPIO_P_DOUTSET */

/** Bit fields for GPIO P_DOUTCLR */
#define _GPIO_P_DOUTCLR_RESETVALUE                        0x00000000        /**< Default value for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_MASK                              0x0000FFFF        /**< Mask for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_SHIFT                     0                 /**< Shift value for GPIO_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_MASK                      0xFFFF            /**< Bit mask for GPIO_DOUTCLR */
#define GPIO_P_DOUTCLR_DOUTCLR_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_DEFAULT                   0x00000000        /**< Mode DEFAULT for GPIO_P_DOUTCLR */

/** Bit fields for GPIO P_DOUTTGL */
#define _GPIO_P_DOUTTGL_RESETVALUE                        0x00000000        /**< Default value for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_MASK                              0x0000FFFF        /**< Mask for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_SHIFT                     0                 /**< Shift value for GPIO_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_MASK                      0xFFFF            /**< Bit mask for GPIO_DOUTTGL */
#define GPIO_P_DOUTTGL_DOUTTGL_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_DEFAULT                   0x00000000        /**< Mode DEFAULT for GPIO_P_DOUTTGL */

/** Bit fields for GPIO P_DIN */
#define _GPIO_P_DIN_RESETVALUE                            0x00000000        /**< Default value for GPIO_P_DIN */
#define _GPIO_P_DIN_MASK                                  0x0000FFFF        /**< Mask for GPIO_P_DIN */
#define _GPIO_P_DIN_DIN_SHIFT                             0                 /**< Shift value for GPIO_DIN */
#define _GPIO_P_DIN_DIN_MASK                              0xFFFF            /**< Bit mask for GPIO_DIN */
#define GPIO_P_DIN_DIN_DEFAULT                            (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_P_DIN */
#define _GPIO_P_DIN_DIN_DEFAULT                           0x00000000        /**< Mode DEFAULT for GPIO_P_DIN */

/** Bit fields for GPIO P_PINLOCKN */
#define _GPIO_P_PINLOCKN_RESETVALUE                       0x0000FFFF        /**< Default value for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_MASK                             0x0000FFFF        /**< Mask for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_SHIFT                   0                 /**< Shift value for GPIO_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_MASK                    0xFFFF            /**< Bit mask for GPIO_PINLOCKN */
#define GPIO_P_PINLOCKN_PINLOCKN_DEFAULT                  (0x0000FFFF << 0) /**< Shifted mode DEFAULT for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_DEFAULT                 0x0000FFFF        /**< Mode DEFAULT for GPIO_P_PINLOCKN */

/** Bit fields for GPIO EXTIPSELL */
#define _GPIO_EXTIPSELL_RESETVALUE                        0x00000000         /**< Default value for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_MASK                              0x77777777         /**< Mask for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_SHIFT                   0                  /**< Shift value for GPIO_EXTIPSEL0 */
#define _GPIO_EXTIPSELL_EXTIPSEL0_MASK                    0x7                /**< Bit mask for GPIO_EXTIPSEL0 */
#define GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTA                    (0x00000000 << 0)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTB                    (0x00000001 << 0)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTC                    (0x00000002 << 0)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTD                    (0x00000003 << 0)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTE                    (0x00000004 << 0)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTF                    (0x00000005 << 0)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_SHIFT                   4                  /**< Shift value for GPIO_EXTIPSEL1 */
#define _GPIO_EXTIPSELL_EXTIPSEL1_MASK                    0x70               /**< Bit mask for GPIO_EXTIPSEL1 */
#define GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT                  (0x00000000 << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTA                    (0x00000000 << 4)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTB                    (0x00000001 << 4)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTC                    (0x00000002 << 4)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTD                    (0x00000003 << 4)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTE                    (0x00000004 << 4)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTF                    (0x00000005 << 4)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_SHIFT                   8                  /**< Shift value for GPIO_EXTIPSEL2 */
#define _GPIO_EXTIPSELL_EXTIPSEL2_MASK                    0x700              /**< Bit mask for GPIO_EXTIPSEL2 */
#define GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT                  (0x00000000 << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTA                    (0x00000000 << 8)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTB                    (0x00000001 << 8)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTC                    (0x00000002 << 8)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTD                    (0x00000003 << 8)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTE                    (0x00000004 << 8)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTF                    (0x00000005 << 8)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_SHIFT                   12                 /**< Shift value for GPIO_EXTIPSEL3 */
#define _GPIO_EXTIPSELL_EXTIPSEL3_MASK                    0x7000             /**< Bit mask for GPIO_EXTIPSEL3 */
#define GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT                  (0x00000000 << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTA                    (0x00000000 << 12) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTB                    (0x00000001 << 12) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTC                    (0x00000002 << 12) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTD                    (0x00000003 << 12) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTE                    (0x00000004 << 12) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTF                    (0x00000005 << 12) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_SHIFT                   16                 /**< Shift value for GPIO_EXTIPSEL4 */
#define _GPIO_EXTIPSELL_EXTIPSEL4_MASK                    0x70000            /**< Bit mask for GPIO_EXTIPSEL4 */
#define GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT                  (0x00000000 << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTA                    (0x00000000 << 16) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTB                    (0x00000001 << 16) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTC                    (0x00000002 << 16) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTD                    (0x00000003 << 16) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTE                    (0x00000004 << 16) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTF                    (0x00000005 << 16) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_SHIFT                   20                 /**< Shift value for GPIO_EXTIPSEL5 */
#define _GPIO_EXTIPSELL_EXTIPSEL5_MASK                    0x700000           /**< Bit mask for GPIO_EXTIPSEL5 */
#define GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT                  (0x00000000 << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTA                    (0x00000000 << 20) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTB                    (0x00000001 << 20) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTC                    (0x00000002 << 20) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTD                    (0x00000003 << 20) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTE                    (0x00000004 << 20) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTF                    (0x00000005 << 20) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_SHIFT                   24                 /**< Shift value for GPIO_EXTIPSEL6 */
#define _GPIO_EXTIPSELL_EXTIPSEL6_MASK                    0x7000000          /**< Bit mask for GPIO_EXTIPSEL6 */
#define GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT                  (0x00000000 << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTA                    (0x00000000 << 24) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTB                    (0x00000001 << 24) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTC                    (0x00000002 << 24) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTD                    (0x00000003 << 24) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTE                    (0x00000004 << 24) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTF                    (0x00000005 << 24) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_SHIFT                   28                 /**< Shift value for GPIO_EXTIPSEL7 */
#define _GPIO_EXTIPSELL_EXTIPSEL7_MASK                    0x70000000         /**< Bit mask for GPIO_EXTIPSEL7 */
#define GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT                  (0x00000000 << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTA                    (0x00000000 << 28) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTB                    (0x00000001 << 28) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTC                    (0x00000002 << 28) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTD                    (0x00000003 << 28) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTE                    (0x00000004 << 28) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTF                    (0x00000005 << 28) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELL */

/** Bit fields for GPIO EXTIPSELH */
#define _GPIO_EXTIPSELH_RESETVALUE                        0x00000000         /**< Default value for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_MASK                              0x77777777         /**< Mask for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_SHIFT                   0                  /**< Shift value for GPIO_EXTIPSEL8 */
#define _GPIO_EXTIPSELH_EXTIPSEL8_MASK                    0x7                /**< Bit mask for GPIO_EXTIPSEL8 */
#define GPIO_EXTIPSELH_EXTIPSEL8_DEFAULT                  (0x00000000 << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTA                    (0x00000000 << 0)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTB                    (0x00000001 << 0)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTC                    (0x00000002 << 0)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTD                    (0x00000003 << 0)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTE                    (0x00000004 << 0)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTF                    (0x00000005 << 0)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_SHIFT                   4                  /**< Shift value for GPIO_EXTIPSEL9 */
#define _GPIO_EXTIPSELH_EXTIPSEL9_MASK                    0x70               /**< Bit mask for GPIO_EXTIPSEL9 */
#define GPIO_EXTIPSELH_EXTIPSEL9_DEFAULT                  (0x00000000 << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTA                    (0x00000000 << 4)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTB                    (0x00000001 << 4)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTC                    (0x00000002 << 4)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTD                    (0x00000003 << 4)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTE                    (0x00000004 << 4)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTF                    (0x00000005 << 4)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_DEFAULT                 0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTA                   0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTB                   0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTC                   0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTD                   0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTE                   0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTF                   0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_SHIFT                  8                  /**< Shift value for GPIO_EXTIPSEL10 */
#define _GPIO_EXTIPSELH_EXTIPSEL10_MASK                   0x700              /**< Bit mask for GPIO_EXTIPSEL10 */
#define GPIO_EXTIPSELH_EXTIPSEL10_DEFAULT                 (0x00000000 << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTA                   (0x00000000 << 8)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTB                   (0x00000001 << 8)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTC                   (0x00000002 << 8)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTD                   (0x00000003 << 8)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTE                   (0x00000004 << 8)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTF                   (0x00000005 << 8)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_SHIFT                  12                 /**< Shift value for GPIO_EXTIPSEL11 */
#define _GPIO_EXTIPSELH_EXTIPSEL11_MASK                   0x7000             /**< Bit mask for GPIO_EXTIPSEL11 */
#define GPIO_EXTIPSELH_EXTIPSEL11_DEFAULT                 (0x00000000 << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTA                   (0x00000000 << 12) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTB                   (0x00000001 << 12) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTC                   (0x00000002 << 12) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTD                   (0x00000003 << 12) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTE                   (0x00000004 << 12) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTF                   (0x00000005 << 12) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_SHIFT                  16                 /**< Shift value for GPIO_EXTIPSEL12 */
#define _GPIO_EXTIPSELH_EXTIPSEL12_MASK                   0x70000            /**< Bit mask for GPIO_EXTIPSEL12 */
#define GPIO_EXTIPSELH_EXTIPSEL12_DEFAULT                 (0x00000000 << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTA                   (0x00000000 << 16) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTB                   (0x00000001 << 16) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTC                   (0x00000002 << 16) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTD                   (0x00000003 << 16) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTE                   (0x00000004 << 16) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTF                   (0x00000005 << 16) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_SHIFT                  20                 /**< Shift value for GPIO_EXTIPSEL13 */
#define _GPIO_EXTIPSELH_EXTIPSEL13_MASK                   0x700000           /**< Bit mask for GPIO_EXTIPSEL13 */
#define GPIO_EXTIPSELH_EXTIPSEL13_DEFAULT                 (0x00000000 << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTA                   (0x00000000 << 20) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTB                   (0x00000001 << 20) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTC                   (0x00000002 << 20) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTD                   (0x00000003 << 20) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTE                   (0x00000004 << 20) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTF                   (0x00000005 << 20) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_SHIFT                  24                 /**< Shift value for GPIO_EXTIPSEL14 */
#define _GPIO_EXTIPSELH_EXTIPSEL14_MASK                   0x7000000          /**< Bit mask for GPIO_EXTIPSEL14 */
#define GPIO_EXTIPSELH_EXTIPSEL14_DEFAULT                 (0x00000000 << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTA                   (0x00000000 << 24) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTB                   (0x00000001 << 24) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTC                   (0x00000002 << 24) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTD                   (0x00000003 << 24) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTE                   (0x00000004 << 24) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTF                   (0x00000005 << 24) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_SHIFT                  28                 /**< Shift value for GPIO_EXTIPSEL16 */
#define _GPIO_EXTIPSELH_EXTIPSEL16_MASK                   0x70000000         /**< Bit mask for GPIO_EXTIPSEL16 */
#define GPIO_EXTIPSELH_EXTIPSEL16_DEFAULT                 (0x00000000 << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTA                   (0x00000000 << 28) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTB                   (0x00000001 << 28) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTC                   (0x00000002 << 28) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTD                   (0x00000003 << 28) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTE                   (0x00000004 << 28) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL16_PORTF                   (0x00000005 << 28) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_DEFAULT                0x00000000         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTA                  0x00000000         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTB                  0x00000001         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTC                  0x00000002         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTD                  0x00000003         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTE                  0x00000004         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL16_PORTF                  0x00000005         /**< Mode PORTF for GPIO_EXTIPSELH */

/** Bit fields for GPIO EXTIRISE */
#define _GPIO_EXTIRISE_RESETVALUE                         0x00000000        /**< Default value for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_MASK                               0x0000FFFF        /**< Mask for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_SHIFT                     0                 /**< Shift value for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_MASK                      0xFFFF            /**< Bit mask for GPIO_EXTIRISE */
#define GPIO_EXTIRISE_EXTIRISE_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_DEFAULT                   0x00000000        /**< Mode DEFAULT for GPIO_EXTIRISE */

/** Bit fields for GPIO EXTIFALL */
#define _GPIO_EXTIFALL_RESETVALUE                         0x00000000        /**< Default value for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_MASK                               0x0000FFFF        /**< Mask for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_SHIFT                     0                 /**< Shift value for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_MASK                      0xFFFF            /**< Bit mask for GPIO_EXTIFALL */
#define GPIO_EXTIFALL_EXTIFALL_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_DEFAULT                   0x00000000        /**< Mode DEFAULT for GPIO_EXTIFALL */

/** Bit fields for GPIO IEN */
#define _GPIO_IEN_RESETVALUE                              0x00000000        /**< Default value for GPIO_IEN */
#define _GPIO_IEN_MASK                                    0x0000FFFF        /**< Mask for GPIO_IEN */
#define _GPIO_IEN_EXT_SHIFT                               0                 /**< Shift value for GPIO_EXT */
#define _GPIO_IEN_EXT_MASK                                0xFFFF            /**< Bit mask for GPIO_EXT */
#define GPIO_IEN_EXT_DEFAULT                              (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_IEN */
#define _GPIO_IEN_EXT_DEFAULT                             0x00000000        /**< Mode DEFAULT for GPIO_IEN */

/** Bit fields for GPIO IF */
#define _GPIO_IF_RESETVALUE                               0x00000000        /**< Default value for GPIO_IF */
#define _GPIO_IF_MASK                                     0x0000FFFF        /**< Mask for GPIO_IF */
#define _GPIO_IF_EXT_SHIFT                                0                 /**< Shift value for GPIO_EXT */
#define _GPIO_IF_EXT_MASK                                 0xFFFF            /**< Bit mask for GPIO_EXT */
#define GPIO_IF_EXT_DEFAULT                               (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_IF */
#define _GPIO_IF_EXT_DEFAULT                              0x00000000        /**< Mode DEFAULT for GPIO_IF */

/** Bit fields for GPIO IFS */
#define _GPIO_IFS_RESETVALUE                              0x00000000        /**< Default value for GPIO_IFS */
#define _GPIO_IFS_MASK                                    0x0000FFFF        /**< Mask for GPIO_IFS */
#define _GPIO_IFS_EXT_SHIFT                               0                 /**< Shift value for GPIO_EXT */
#define _GPIO_IFS_EXT_MASK                                0xFFFF            /**< Bit mask for GPIO_EXT */
#define GPIO_IFS_EXT_DEFAULT                              (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_IFS */
#define _GPIO_IFS_EXT_DEFAULT                             0x00000000        /**< Mode DEFAULT for GPIO_IFS */

/** Bit fields for GPIO IFC */
#define _GPIO_IFC_RESETVALUE                              0x00000000        /**< Default value for GPIO_IFC */
#define _GPIO_IFC_MASK                                    0x0000FFFF        /**< Mask for GPIO_IFC */
#define _GPIO_IFC_EXT_SHIFT                               0                 /**< Shift value for GPIO_EXT */
#define _GPIO_IFC_EXT_MASK                                0xFFFF            /**< Bit mask for GPIO_EXT */
#define GPIO_IFC_EXT_DEFAULT                              (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_IFC */
#define _GPIO_IFC_EXT_DEFAULT                             0x00000000        /**< Mode DEFAULT for GPIO_IFC */

/** Bit fields for GPIO ROUTE */
#define _GPIO_ROUTE_RESETVALUE                            0x00000003        /**< Default value for GPIO_ROUTE */
#define _GPIO_ROUTE_MASK                                  0x00000307        /**< Mask for GPIO_ROUTE */
#define GPIO_ROUTE_SWCLKPEN                               (1 << 0)          /**< Serial Wire Clock Pin Enable */
#define _GPIO_ROUTE_SWCLKPEN_SHIFT                        0                 /**< Shift value for GPIO_SWCLKPEN */
#define _GPIO_ROUTE_SWCLKPEN_MASK                         0x1               /**< Bit mask for GPIO_SWCLKPEN */
#define GPIO_ROUTE_SWCLKPEN_DEFAULT                       (0x00000001 << 0) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWCLKPEN_DEFAULT                      0x00000001        /**< Mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWDIOPEN                               (1 << 1)          /**< Serial Wire Data Pin Enable */
#define _GPIO_ROUTE_SWDIOPEN_SHIFT                        1                 /**< Shift value for GPIO_SWDIOPEN */
#define _GPIO_ROUTE_SWDIOPEN_MASK                         0x2               /**< Bit mask for GPIO_SWDIOPEN */
#define GPIO_ROUTE_SWDIOPEN_DEFAULT                       (0x00000001 << 1) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWDIOPEN_DEFAULT                      0x00000001        /**< Mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWVPEN                                 (1 << 2)          /**< Serial Wire Viewer Pin Enable */
#define _GPIO_ROUTE_SWVPEN_SHIFT                          2                 /**< Shift value for GPIO_SWVPEN */
#define _GPIO_ROUTE_SWVPEN_MASK                           0x4               /**< Bit mask for GPIO_SWVPEN */
#define GPIO_ROUTE_SWVPEN_DEFAULT                         (0x00000000 << 2) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWVPEN_DEFAULT                        0x00000000        /**< Mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_SHIFT                      8                 /**< Shift value for GPIO_SWLOCATION */
#define _GPIO_ROUTE_SWLOCATION_MASK                       0x300             /**< Bit mask for GPIO_SWLOCATION */
#define GPIO_ROUTE_SWLOCATION_DEFAULT                     (0x00000000 << 8) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC0                        (0x00000000 << 8) /**< Shifted mode LOC0 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC1                        (0x00000001 << 8) /**< Shifted mode LOC1 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC2                        (0x00000002 << 8) /**< Shifted mode LOC2 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC3                        (0x00000003 << 8) /**< Shifted mode LOC3 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_DEFAULT                    0x00000000        /**< Mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC0                       0x00000000        /**< Mode LOC0 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC1                       0x00000001        /**< Mode LOC1 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC2                       0x00000002        /**< Mode LOC2 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC3                       0x00000003        /**< Mode LOC3 for GPIO_ROUTE */

/** Bit fields for GPIO INSENSE */
#define _GPIO_INSENSE_RESETVALUE                          0x00000003        /**< Default value for GPIO_INSENSE */
#define _GPIO_INSENSE_MASK                                0x00000003        /**< Mask for GPIO_INSENSE */
#define GPIO_INSENSE_INTSENSE                             (1 << 0)          /**< Interrupt Sense Enable */
#define _GPIO_INSENSE_INTSENSE_SHIFT                      0                 /**< Shift value for GPIO_INTSENSE */
#define _GPIO_INSENSE_INTSENSE_MASK                       0x1               /**< Bit mask for GPIO_INTSENSE */
#define GPIO_INSENSE_INTSENSE_DEFAULT                     (0x00000001 << 0) /**< Shifted mode DEFAULT for GPIO_INSENSE */
#define _GPIO_INSENSE_INTSENSE_DEFAULT                    0x00000001        /**< Mode DEFAULT for GPIO_INSENSE */
#define GPIO_INSENSE_PRSSENSE                             (1 << 1)          /**< PRS Sense Enable */
#define _GPIO_INSENSE_PRSSENSE_SHIFT                      1                 /**< Shift value for GPIO_PRSSENSE */
#define _GPIO_INSENSE_PRSSENSE_MASK                       0x2               /**< Bit mask for GPIO_PRSSENSE */
#define GPIO_INSENSE_PRSSENSE_DEFAULT                     (0x00000001 << 1) /**< Shifted mode DEFAULT for GPIO_INSENSE */
#define _GPIO_INSENSE_PRSSENSE_DEFAULT                    0x00000001        /**< Mode DEFAULT for GPIO_INSENSE */

/** Bit fields for GPIO LOCK */
#define _GPIO_LOCK_RESETVALUE                             0x00000000        /**< Default value for GPIO_LOCK */
#define _GPIO_LOCK_MASK                                   0x0000FFFF        /**< Mask for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_SHIFT                          0                 /**< Shift value for GPIO_LOCKKEY */
#define _GPIO_LOCK_LOCKKEY_MASK                           0xFFFF            /**< Bit mask for GPIO_LOCKKEY */
#define GPIO_LOCK_LOCKKEY_DEFAULT                         (0x00000000 << 0) /**< Shifted mode DEFAULT for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_LOCK                            (0x00000000 << 0) /**< Shifted mode LOCK for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_UNLOCKED                        (0x00000000 << 0) /**< Shifted mode UNLOCKED for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_LOCKED                          (0x00000001 << 0) /**< Shifted mode LOCKED for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_UNLOCK                          (0x0000A534 << 0) /**< Shifted mode UNLOCK for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_DEFAULT                        0x00000000        /**< Mode DEFAULT for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_LOCK                           0x00000000        /**< Mode LOCK for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_UNLOCKED                       0x00000000        /**< Mode UNLOCKED for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_LOCKED                         0x00000001        /**< Mode LOCKED for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_UNLOCK                         0x0000A534        /**< Mode UNLOCK for GPIO_LOCK */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_PRS
 * @{
 */

/** Bit fields for PRS SWPULSE */
#define _PRS_SWPULSE_RESETVALUE              0x00000000        /**< Default value for PRS_SWPULSE */
#define _PRS_SWPULSE_MASK                    0x000000FF        /**< Mask for PRS_SWPULSE */
#define _PRS_SWPULSE_SWPULSE_SHIFT           0                 /**< Shift value for PRS_SWPULSE */
#define _PRS_SWPULSE_SWPULSE_MASK            0xFF              /**< Bit mask for PRS_SWPULSE */
#define PRS_SWPULSE_SWPULSE_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_SWPULSE_DEFAULT         0x00000000        /**< Mode DEFAULT for PRS_SWPULSE */

/** Bit fields for PRS SWLEVEL */
#define _PRS_SWLEVEL_RESETVALUE              0x00000000        /**< Default value for PRS_SWLEVEL */
#define _PRS_SWLEVEL_MASK                    0x000000FF        /**< Mask for PRS_SWLEVEL */
#define _PRS_SWLEVEL_SWLEVEL_SHIFT           0                 /**< Shift value for PRS_SWLEVEL */
#define _PRS_SWLEVEL_SWLEVEL_MASK            0xFF              /**< Bit mask for PRS_SWLEVEL */
#define PRS_SWLEVEL_SWLEVEL_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_SWLEVEL_DEFAULT         0x00000000        /**< Mode DEFAULT for PRS_SWLEVEL */

/** Bit fields for PRS CH_CTRL */
#define _PRS_CH_CTRL_RESETVALUE              0x00000000         /**< Default value for PRS_CH_CTRL */
#define _PRS_CH_CTRL_MASK                    0x033F0007         /**< Mask for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_SHIFT            0                  /**< Shift value for PRS_SIGSEL */
#define _PRS_CH_CTRL_SIGSEL_MASK             0x7                /**< Bit mask for PRS_SIGSEL */
#define PRS_CH_CTRL_SIGSEL_VCMPOUT           (0x00000000 << 0)  /**< Shifted mode VCMPOUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP0OUT          (0x00000000 << 0)  /**< Shifted mode ACMP0OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP1OUT          (0x00000000 << 0)  /**< Shifted mode ACMP1OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_DAC0CH0           (0x00000000 << 0)  /**< Shifted mode DAC0CH0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SINGLE        (0x00000000 << 0)  /**< Shifted mode ADC0SINGLE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0IRTX        (0x00000000 << 0)  /**< Shifted mode USART0IRTX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0UF          (0x00000000 << 0)  /**< Shifted mode TIMER0UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1UF          (0x00000000 << 0)  /**< Shifted mode TIMER1UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER2UF          (0x00000000 << 0)  /**< Shifted mode TIMER2UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCOF             (0x00000000 << 0)  /**< Shifted mode RTCOF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN0          (0x00000000 << 0)  /**< Shifted mode GPIOPIN0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN8          (0x00000000 << 0)  /**< Shifted mode GPIOPIN8 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_DAC0CH1           (0x00000001 << 0)  /**< Shifted mode DAC0CH1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SCAN          (0x00000001 << 0)  /**< Shifted mode ADC0SCAN for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0TXC         (0x00000001 << 0)  /**< Shifted mode USART0TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1TXC         (0x00000001 << 0)  /**< Shifted mode USART1TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2TXC         (0x00000001 << 0)  /**< Shifted mode USART2TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0OF          (0x00000001 << 0)  /**< Shifted mode TIMER0OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1OF          (0x00000001 << 0)  /**< Shifted mode TIMER1OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER2OF          (0x00000001 << 0)  /**< Shifted mode TIMER2OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCOMP0          (0x00000001 << 0)  /**< Shifted mode RTCCOMP0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN1          (0x00000001 << 0)  /**< Shifted mode GPIOPIN1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN9          (0x00000001 << 0)  /**< Shifted mode GPIOPIN9 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0RXDATAV     (0x00000002 << 0)  /**< Shifted mode USART0RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1RXDATAV     (0x00000002 << 0)  /**< Shifted mode USART1RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART2RXDATAV     (0x00000002 << 0)  /**< Shifted mode USART2RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC0         (0x00000002 << 0)  /**< Shifted mode TIMER0CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC0         (0x00000002 << 0)  /**< Shifted mode TIMER1CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER2CC0         (0x00000002 << 0)  /**< Shifted mode TIMER2CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCOMP1          (0x00000002 << 0)  /**< Shifted mode RTCCOMP1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN2          (0x00000002 << 0)  /**< Shifted mode GPIOPIN2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN10         (0x00000002 << 0)  /**< Shifted mode GPIOPIN10 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC1         (0x00000003 << 0)  /**< Shifted mode TIMER0CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC1         (0x00000003 << 0)  /**< Shifted mode TIMER1CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER2CC1         (0x00000003 << 0)  /**< Shifted mode TIMER2CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN3          (0x00000003 << 0)  /**< Shifted mode GPIOPIN3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN11         (0x00000003 << 0)  /**< Shifted mode GPIOPIN11 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC2         (0x00000004 << 0)  /**< Shifted mode TIMER0CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC2         (0x00000004 << 0)  /**< Shifted mode TIMER1CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER2CC2         (0x00000004 << 0)  /**< Shifted mode TIMER2CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN4          (0x00000004 << 0)  /**< Shifted mode GPIOPIN4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN12         (0x00000004 << 0)  /**< Shifted mode GPIOPIN12 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN5          (0x00000005 << 0)  /**< Shifted mode GPIOPIN5 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN13         (0x00000005 << 0)  /**< Shifted mode GPIOPIN13 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN6          (0x00000006 << 0)  /**< Shifted mode GPIOPIN6 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN14         (0x00000006 << 0)  /**< Shifted mode GPIOPIN14 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN7          (0x00000007 << 0)  /**< Shifted mode GPIOPIN7 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN15         (0x00000007 << 0)  /**< Shifted mode GPIOPIN15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_VCMPOUT          0x00000000         /**< Mode VCMPOUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP0OUT         0x00000000         /**< Mode ACMP0OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP1OUT         0x00000000         /**< Mode ACMP1OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_DAC0CH0          0x00000000         /**< Mode DAC0CH0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SINGLE       0x00000000         /**< Mode ADC0SINGLE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0IRTX       0x00000000         /**< Mode USART0IRTX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0UF         0x00000000         /**< Mode TIMER0UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1UF         0x00000000         /**< Mode TIMER1UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER2UF         0x00000000         /**< Mode TIMER2UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCOF            0x00000000         /**< Mode RTCOF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN0         0x00000000         /**< Mode GPIOPIN0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN8         0x00000000         /**< Mode GPIOPIN8 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_DAC0CH1          0x00000001         /**< Mode DAC0CH1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SCAN         0x00000001         /**< Mode ADC0SCAN for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0TXC        0x00000001         /**< Mode USART0TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1TXC        0x00000001         /**< Mode USART1TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2TXC        0x00000001         /**< Mode USART2TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0OF         0x00000001         /**< Mode TIMER0OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1OF         0x00000001         /**< Mode TIMER1OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER2OF         0x00000001         /**< Mode TIMER2OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCOMP0         0x00000001         /**< Mode RTCCOMP0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN1         0x00000001         /**< Mode GPIOPIN1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN9         0x00000001         /**< Mode GPIOPIN9 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0RXDATAV    0x00000002         /**< Mode USART0RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1RXDATAV    0x00000002         /**< Mode USART1RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART2RXDATAV    0x00000002         /**< Mode USART2RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC0        0x00000002         /**< Mode TIMER0CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC0        0x00000002         /**< Mode TIMER1CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER2CC0        0x00000002         /**< Mode TIMER2CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCOMP1         0x00000002         /**< Mode RTCCOMP1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN2         0x00000002         /**< Mode GPIOPIN2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN10        0x00000002         /**< Mode GPIOPIN10 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC1        0x00000003         /**< Mode TIMER0CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC1        0x00000003         /**< Mode TIMER1CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER2CC1        0x00000003         /**< Mode TIMER2CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN3         0x00000003         /**< Mode GPIOPIN3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN11        0x00000003         /**< Mode GPIOPIN11 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC2        0x00000004         /**< Mode TIMER0CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC2        0x00000004         /**< Mode TIMER1CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER2CC2        0x00000004         /**< Mode TIMER2CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN4         0x00000004         /**< Mode GPIOPIN4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN12        0x00000004         /**< Mode GPIOPIN12 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN5         0x00000005         /**< Mode GPIOPIN5 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN13        0x00000005         /**< Mode GPIOPIN13 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN6         0x00000006         /**< Mode GPIOPIN6 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN14        0x00000006         /**< Mode GPIOPIN14 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN7         0x00000007         /**< Mode GPIOPIN7 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN15        0x00000007         /**< Mode GPIOPIN15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_SHIFT         16                 /**< Shift value for PRS_SOURCESEL */
#define _PRS_CH_CTRL_SOURCESEL_MASK          0x3F0000           /**< Bit mask for PRS_SOURCESEL */
#define PRS_CH_CTRL_SOURCESEL_VCMP           (0x00000001 << 16) /**< Shifted mode VCMP for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP0          (0x00000002 << 16) /**< Shifted mode ACMP0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP1          (0x00000003 << 16) /**< Shifted mode ACMP1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_DAC0           (0x00000006 << 16) /**< Shifted mode DAC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ADC0           (0x00000008 << 16) /**< Shifted mode ADC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART0         (0x00000010 << 16) /**< Shifted mode USART0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART1         (0x00000011 << 16) /**< Shifted mode USART1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART2         (0x00000012 << 16) /**< Shifted mode USART2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER0         (0x0000001C << 16) /**< Shifted mode TIMER0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER1         (0x0000001D << 16) /**< Shifted mode TIMER1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER2         (0x0000001E << 16) /**< Shifted mode TIMER2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_RTC            (0x00000028 << 16) /**< Shifted mode RTC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOL          (0x00000030 << 16) /**< Shifted mode GPIOL for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOH          (0x00000031 << 16) /**< Shifted mode GPIOH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_VCMP          0x00000001         /**< Mode VCMP for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP0         0x00000002         /**< Mode ACMP0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP1         0x00000003         /**< Mode ACMP1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_DAC0          0x00000006         /**< Mode DAC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ADC0          0x00000008         /**< Mode ADC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART0        0x00000010         /**< Mode USART0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART1        0x00000011         /**< Mode USART1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART2        0x00000012         /**< Mode USART2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER0        0x0000001C         /**< Mode TIMER0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER1        0x0000001D         /**< Mode TIMER1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER2        0x0000001E         /**< Mode TIMER2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_RTC           0x00000028         /**< Mode RTC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOL         0x00000030         /**< Mode GPIOL for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOH         0x00000031         /**< Mode GPIOH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_SHIFT             24                 /**< Shift value for PRS_EDSEL */
#define _PRS_CH_CTRL_EDSEL_MASK              0x3000000          /**< Bit mask for PRS_EDSEL */
#define PRS_CH_CTRL_EDSEL_DEFAULT            (0x00000000 << 24) /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_OFF                (0x00000000 << 24) /**< Shifted mode OFF for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_POSEDGE            (0x00000001 << 24) /**< Shifted mode POSEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_NEGEDGE            (0x00000002 << 24) /**< Shifted mode NEGEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_BOTHEDGES          (0x00000003 << 24) /**< Shifted mode BOTHEDGES for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_DEFAULT           0x00000000         /**< Mode DEFAULT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_OFF               0x00000000         /**< Mode OFF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_POSEDGE           0x00000001         /**< Mode POSEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_NEGEDGE           0x00000002         /**< Mode NEGEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_BOTHEDGES         0x00000003         /**< Mode BOTHEDGES for PRS_CH_CTRL */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_DMA
 * @{
 */

/** Bit fields for DMA STATUS */
#define _DMA_STATUS_RESETVALUE                         0x10070000         /**< Default value for DMA_STATUS */
#define _DMA_STATUS_MASK                               0xF01F00F1         /**< Mask for DMA_STATUS */
#define DMA_STATUS_EN                                  (1 << 0)           /**< DMA Enable Status */
#define _DMA_STATUS_EN_SHIFT                           0                  /**< Shift value for DMA_EN */
#define _DMA_STATUS_EN_MASK                            0x1                /**< Bit mask for DMA_EN */
#define DMA_STATUS_EN_DEFAULT                          (0x00000000 << 0)  /**< Shifted mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_EN_DEFAULT                         0x00000000         /**< Mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_STATE_SHIFT                        4                  /**< Shift value for DMA_STATE */
#define _DMA_STATUS_STATE_MASK                         0xF0               /**< Bit mask for DMA_STATE */
#define DMA_STATUS_STATE_DEFAULT                       (0x00000000 << 4)  /**< Shifted mode DEFAULT for DMA_STATUS */
#define DMA_STATUS_STATE_IDLE                          (0x00000000 << 4)  /**< Shifted mode IDLE for DMA_STATUS */
#define DMA_STATUS_STATE_RDCHCTRLDATA                  (0x00000001 << 4)  /**< Shifted mode RDCHCTRLDATA for DMA_STATUS */
#define DMA_STATUS_STATE_RDSRCENDPTR                   (0x00000002 << 4)  /**< Shifted mode RDSRCENDPTR for DMA_STATUS */
#define DMA_STATUS_STATE_RDDSTENDPTR                   (0x00000003 << 4)  /**< Shifted mode RDDSTENDPTR for DMA_STATUS */
#define DMA_STATUS_STATE_RDSRCDATA                     (0x00000004 << 4)  /**< Shifted mode RDSRCDATA for DMA_STATUS */
#define DMA_STATUS_STATE_WRDSTDATA                     (0x00000005 << 4)  /**< Shifted mode WRDSTDATA for DMA_STATUS */
#define DMA_STATUS_STATE_WAITREQCLR                    (0x00000006 << 4)  /**< Shifted mode WAITREQCLR for DMA_STATUS */
#define DMA_STATUS_STATE_WRCHCTRLDATA                  (0x00000007 << 4)  /**< Shifted mode WRCHCTRLDATA for DMA_STATUS */
#define DMA_STATUS_STATE_STALLED                       (0x00000008 << 4)  /**< Shifted mode STALLED for DMA_STATUS */
#define DMA_STATUS_STATE_DONE                          (0x00000009 << 4)  /**< Shifted mode DONE for DMA_STATUS */
#define DMA_STATUS_STATE_PERSCATTRANS                  (0x0000000A << 4)  /**< Shifted mode PERSCATTRANS for DMA_STATUS */
#define _DMA_STATUS_STATE_DEFAULT                      0x00000000         /**< Mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_STATE_IDLE                         0x00000000         /**< Mode IDLE for DMA_STATUS */
#define _DMA_STATUS_STATE_RDCHCTRLDATA                 0x00000001         /**< Mode RDCHCTRLDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_RDSRCENDPTR                  0x00000002         /**< Mode RDSRCENDPTR for DMA_STATUS */
#define _DMA_STATUS_STATE_RDDSTENDPTR                  0x00000003         /**< Mode RDDSTENDPTR for DMA_STATUS */
#define _DMA_STATUS_STATE_RDSRCDATA                    0x00000004         /**< Mode RDSRCDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_WRDSTDATA                    0x00000005         /**< Mode WRDSTDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_WAITREQCLR                   0x00000006         /**< Mode WAITREQCLR for DMA_STATUS */
#define _DMA_STATUS_STATE_WRCHCTRLDATA                 0x00000007         /**< Mode WRCHCTRLDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_STALLED                      0x00000008         /**< Mode STALLED for DMA_STATUS */
#define _DMA_STATUS_STATE_DONE                         0x00000009         /**< Mode DONE for DMA_STATUS */
#define _DMA_STATUS_STATE_PERSCATTRANS                 0x0000000A         /**< Mode PERSCATTRANS for DMA_STATUS */
#define _DMA_STATUS_CHNUM_SHIFT                        16                 /**< Shift value for DMA_CHNUM */
#define _DMA_STATUS_CHNUM_MASK                         0x1F0000           /**< Bit mask for DMA_CHNUM */
#define DMA_STATUS_CHNUM_DEFAULT                       (0x00000007 << 16) /**< Shifted mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_CHNUM_DEFAULT                      0x00000007         /**< Mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_TEST_SHIFT                         28                 /**< Shift value for DMA_TEST */
#define _DMA_STATUS_TEST_MASK                          0xF0000000         /**< Bit mask for DMA_TEST */
#define DMA_STATUS_TEST_DEFAULT                        (0x00000001 << 28) /**< Shifted mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_TEST_DEFAULT                       0x00000001         /**< Mode DEFAULT for DMA_STATUS */

/** Bit fields for DMA CONFIG */
#define _DMA_CONFIG_RESETVALUE                         0x00000000        /**< Default value for DMA_CONFIG */
#define _DMA_CONFIG_MASK                               0x000000E1        /**< Mask for DMA_CONFIG */
#define DMA_CONFIG_EN                                  (1 << 0)          /**< Enable DMA */
#define _DMA_CONFIG_EN_SHIFT                           0                 /**< Shift value for DMA_EN */
#define _DMA_CONFIG_EN_MASK                            0x1               /**< Bit mask for DMA_EN */
#define DMA_CONFIG_EN_DEFAULT                          (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_EN_DEFAULT                         0x00000000        /**< Mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_CHPROT_SHIFT                       5                 /**< Shift value for DMA_CHPROT */
#define _DMA_CONFIG_CHPROT_MASK                        0xE0              /**< Bit mask for DMA_CHPROT */
#define DMA_CONFIG_CHPROT_DEFAULT                      (0x00000000 << 5) /**< Shifted mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_CHPROT_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_CONFIG */

/** Bit fields for DMA CTRLBASE */
#define _DMA_CTRLBASE_RESETVALUE                       0x00000000        /**< Default value for DMA_CTRLBASE */
#define _DMA_CTRLBASE_MASK                             0xFFFFFFFF        /**< Mask for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_SHIFT                   0                 /**< Shift value for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_MASK                    0xFFFFFFFF        /**< Bit mask for DMA_CTRLBASE */
#define DMA_CTRLBASE_CTRLBASE_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_DEFAULT                 0x00000000        /**< Mode DEFAULT for DMA_CTRLBASE */

/** Bit fields for DMA ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_RESETVALUE                    0x00000080        /**< Default value for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_MASK                          0xFFFFFFFF        /**< Mask for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_SHIFT             0                 /**< Shift value for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_MASK              0xFFFFFFFF        /**< Bit mask for DMA_ALTCTRLBASE */
#define DMA_ALTCTRLBASE_ALTCTRLBASE_DEFAULT            (0x00000080 << 0) /**< Shifted mode DEFAULT for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_DEFAULT           0x00000080        /**< Mode DEFAULT for DMA_ALTCTRLBASE */

/** Bit fields for DMA WAITSTATUS */
#define _DMA_WAITSTATUS_RESETVALUE                     0x000000FF        /**< Default value for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_MASK                           0xFFFFFFFF        /**< Mask for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_SHIFT               0                 /**< Shift value for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_MASK                0xFFFFFFFF        /**< Bit mask for DMA_WAITSTATUS */
#define DMA_WAITSTATUS_WAITSTATUS_DEFAULT              (0x000000FF << 0) /**< Shifted mode DEFAULT for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_DEFAULT             0x000000FF        /**< Mode DEFAULT for DMA_WAITSTATUS */

/** Bit fields for DMA CHSWREQ */
#define _DMA_CHSWREQ_RESETVALUE                        0x00000000        /**< Default value for DMA_CHSWREQ */
#define _DMA_CHSWREQ_MASK                              0x000000FF        /**< Mask for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CHSWREQ_SHIFT                     0                 /**< Shift value for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CHSWREQ_MASK                      0xFF              /**< Bit mask for DMA_CHSWREQ */
#define DMA_CHSWREQ_CHSWREQ_DEFAULT                    (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CHSWREQ_DEFAULT                   0x00000000        /**< Mode DEFAULT for DMA_CHSWREQ */

/** Bit fields for DMA CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_RESETVALUE                    0x00000000        /**< Default value for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_MASK                          0x000000FF        /**< Mask for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CHUSEBURSTS_SHIFT             0                 /**< Shift value for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CHUSEBURSTS_MASK              0xFF              /**< Bit mask for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CHUSEBURSTS_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CHUSEBURSTS_SINGLEANDBURST     (0x00000000 << 0) /**< Shifted mode SINGLEANDBURST for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CHUSEBURSTS_BURSTONLY          (0x00000001 << 0) /**< Shifted mode BURSTONLY for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CHUSEBURSTS_DEFAULT           0x00000000        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CHUSEBURSTS_SINGLEANDBURST    0x00000000        /**< Mode SINGLEANDBURST for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CHUSEBURSTS_BURSTONLY         0x00000001        /**< Mode BURSTONLY for DMA_CHUSEBURSTS */

/** Bit fields for DMA CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_RESETVALUE                    0x00000000        /**< Default value for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_MASK                          0x000000FF        /**< Mask for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CHUSEBURSTC_SHIFT             0                 /**< Shift value for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CHUSEBURSTC_MASK              0xFF              /**< Bit mask for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CHUSEBURSTC_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CHUSEBURSTC_DEFAULT           0x00000000        /**< Mode DEFAULT for DMA_CHUSEBURSTC */

/** Bit fields for DMA CHREQMASKS */
#define _DMA_CHREQMASKS_RESETVALUE                     0x00000000        /**< Default value for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_MASK                           0x000000FF        /**< Mask for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CHREQMASKS_SHIFT               0                 /**< Shift value for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CHREQMASKS_MASK                0xFF              /**< Bit mask for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CHREQMASKS_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CHREQMASKS_DEFAULT             0x00000000        /**< Mode DEFAULT for DMA_CHREQMASKS */

/** Bit fields for DMA CHREQMASKC */
#define _DMA_CHREQMASKC_RESETVALUE                     0x00000000        /**< Default value for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_MASK                           0x000000FF        /**< Mask for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CHREQMASKC_SHIFT               0                 /**< Shift value for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CHREQMASKC_MASK                0xFF              /**< Bit mask for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CHREQMASKC_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CHREQMASKC_DEFAULT             0x00000000        /**< Mode DEFAULT for DMA_CHREQMASKC */

/** Bit fields for DMA CHENS */
#define _DMA_CHENS_RESETVALUE                          0x00000000        /**< Default value for DMA_CHENS */
#define _DMA_CHENS_MASK                                0x000000FF        /**< Mask for DMA_CHENS */
#define _DMA_CHENS_CHENS_SHIFT                         0                 /**< Shift value for DMA_CHENS */
#define _DMA_CHENS_CHENS_MASK                          0xFF              /**< Bit mask for DMA_CHENS */
#define DMA_CHENS_CHENS_DEFAULT                        (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CHENS_DEFAULT                       0x00000000        /**< Mode DEFAULT for DMA_CHENS */

/** Bit fields for DMA CHENC */
#define _DMA_CHENC_RESETVALUE                          0x00000000        /**< Default value for DMA_CHENC */
#define _DMA_CHENC_MASK                                0x000000FF        /**< Mask for DMA_CHENC */
#define _DMA_CHENC_CHENC_SHIFT                         0                 /**< Shift value for DMA_CHENC */
#define _DMA_CHENC_CHENC_MASK                          0xFF              /**< Bit mask for DMA_CHENC */
#define DMA_CHENC_CHENC_DEFAULT                        (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CHENC_DEFAULT                       0x00000000        /**< Mode DEFAULT for DMA_CHENC */

/** Bit fields for DMA CHALTS */
#define _DMA_CHALTS_RESETVALUE                         0x00000000        /**< Default value for DMA_CHALTS */
#define _DMA_CHALTS_MASK                               0x000000FF        /**< Mask for DMA_CHALTS */
#define _DMA_CHALTS_CHALTS_SHIFT                       0                 /**< Shift value for DMA_CHALTS */
#define _DMA_CHALTS_CHALTS_MASK                        0xFF              /**< Bit mask for DMA_CHALTS */
#define DMA_CHALTS_CHALTS_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CHALTS_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_CHALTS */

/** Bit fields for DMA CHALTC */
#define _DMA_CHALTC_RESETVALUE                         0x00000000        /**< Default value for DMA_CHALTC */
#define _DMA_CHALTC_MASK                               0x000000FF        /**< Mask for DMA_CHALTC */
#define _DMA_CHALTC_CHALTC_SHIFT                       0                 /**< Shift value for DMA_CHALTC */
#define _DMA_CHALTC_CHALTC_MASK                        0xFF              /**< Bit mask for DMA_CHALTC */
#define DMA_CHALTC_CHALTC_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CHALTC_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_CHALTC */

/** Bit fields for DMA CHPRIS */
#define _DMA_CHPRIS_RESETVALUE                         0x00000000        /**< Default value for DMA_CHPRIS */
#define _DMA_CHPRIS_MASK                               0x000000FF        /**< Mask for DMA_CHPRIS */
#define _DMA_CHPRIS_CHPRIS_SHIFT                       0                 /**< Shift value for DMA_CHPRIS */
#define _DMA_CHPRIS_CHPRIS_MASK                        0xFF              /**< Bit mask for DMA_CHPRIS */
#define DMA_CHPRIS_CHPRIS_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CHPRIS_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_CHPRIS */

/** Bit fields for DMA CHPRIC */
#define _DMA_CHPRIC_RESETVALUE                         0x00000000        /**< Default value for DMA_CHPRIC */
#define _DMA_CHPRIC_MASK                               0x000000FF        /**< Mask for DMA_CHPRIC */
#define _DMA_CHPRIC_CHPRIC_SHIFT                       0                 /**< Shift value for DMA_CHPRIC */
#define _DMA_CHPRIC_CHPRIC_MASK                        0xFF              /**< Bit mask for DMA_CHPRIC */
#define DMA_CHPRIC_CHPRIC_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CHPRIC_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_CHPRIC */

/** Bit fields for DMA ERRORC */
#define _DMA_ERRORC_RESETVALUE                         0x00000000        /**< Default value for DMA_ERRORC */
#define _DMA_ERRORC_MASK                               0x00000001        /**< Mask for DMA_ERRORC */
#define DMA_ERRORC_ERRORC                              (1 << 0)          /**< Bus Error Clear */
#define _DMA_ERRORC_ERRORC_SHIFT                       0                 /**< Shift value for DMA_ERRORC */
#define _DMA_ERRORC_ERRORC_MASK                        0x1               /**< Bit mask for DMA_ERRORC */
#define DMA_ERRORC_ERRORC_DEFAULT                      (0x00000000 << 0) /**< Shifted mode DEFAULT for DMA_ERRORC */
#define _DMA_ERRORC_ERRORC_DEFAULT                     0x00000000        /**< Mode DEFAULT for DMA_ERRORC */

/** Bit fields for DMA IF */
#define _DMA_IF_RESETVALUE                             0x00000000         /**< Default value for DMA_IF */
#define _DMA_IF_MASK                                   0x800000FF         /**< Mask for DMA_IF */
#define _DMA_IF_DONE_SHIFT                             0                  /**< Shift value for DMA_DONE */
#define _DMA_IF_DONE_MASK                              0xFF               /**< Bit mask for DMA_DONE */
#define DMA_IF_DONE_DEFAULT                            (0x00000000 << 0)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_DONE_DEFAULT                           0x00000000         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_ERR                                     (1 << 31)          /**< DMA Error Interrupt Flag */
#define _DMA_IF_ERR_SHIFT                              31                 /**< Shift value for DMA_ERR */
#define _DMA_IF_ERR_MASK                               0x80000000         /**< Bit mask for DMA_ERR */
#define DMA_IF_ERR_DEFAULT                             (0x00000000 << 31) /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_ERR_DEFAULT                            0x00000000         /**< Mode DEFAULT for DMA_IF */

/** Bit fields for DMA IFS */
#define _DMA_IFS_RESETVALUE                            0x00000000         /**< Default value for DMA_IFS */
#define _DMA_IFS_MASK                                  0x800000FF         /**< Mask for DMA_IFS */
#define _DMA_IFS_DONE_SHIFT                            0                  /**< Shift value for DMA_DONE */
#define _DMA_IFS_DONE_MASK                             0xFF               /**< Bit mask for DMA_DONE */
#define DMA_IFS_DONE_DEFAULT                           (0x00000000 << 0)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_DONE_DEFAULT                          0x00000000         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_ERR                                    (1 << 31)          /**< DMA Error Interrupt Flag Set */
#define _DMA_IFS_ERR_SHIFT                             31                 /**< Shift value for DMA_ERR */
#define _DMA_IFS_ERR_MASK                              0x80000000         /**< Bit mask for DMA_ERR */
#define DMA_IFS_ERR_DEFAULT                            (0x00000000 << 31) /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_ERR_DEFAULT                           0x00000000         /**< Mode DEFAULT for DMA_IFS */

/** Bit fields for DMA IFC */
#define _DMA_IFC_RESETVALUE                            0x00000000         /**< Default value for DMA_IFC */
#define _DMA_IFC_MASK                                  0x800000FF         /**< Mask for DMA_IFC */
#define _DMA_IFC_DONE_SHIFT                            0                  /**< Shift value for DMA_DONE */
#define _DMA_IFC_DONE_MASK                             0xFF               /**< Bit mask for DMA_DONE */
#define DMA_IFC_DONE_DEFAULT                           (0x00000000 << 0)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_DONE_DEFAULT                          0x00000000         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_ERR                                    (1 << 31)          /**< DMA Error Interrupt Flag Clear */
#define _DMA_IFC_ERR_SHIFT                             31                 /**< Shift value for DMA_ERR */
#define _DMA_IFC_ERR_MASK                              0x80000000         /**< Bit mask for DMA_ERR */
#define DMA_IFC_ERR_DEFAULT                            (0x00000000 << 31) /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_ERR_DEFAULT                           0x00000000         /**< Mode DEFAULT for DMA_IFC */

/** Bit fields for DMA IEN */
#define _DMA_IEN_RESETVALUE                            0x00000000         /**< Default value for DMA_IEN */
#define _DMA_IEN_MASK                                  0x800000FF         /**< Mask for DMA_IEN */
#define _DMA_IEN_DONE_SHIFT                            0                  /**< Shift value for DMA_DONE */
#define _DMA_IEN_DONE_MASK                             0xFF               /**< Bit mask for DMA_DONE */
#define DMA_IEN_DONE_DEFAULT                           (0x00000000 << 0)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_DONE_DEFAULT                          0x00000000         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_ERR                                    (1 << 31)          /**< DMA Error Interrupt Flag Enable */
#define _DMA_IEN_ERR_SHIFT                             31                 /**< Shift value for DMA_ERR */
#define _DMA_IEN_ERR_MASK                              0x80000000         /**< Bit mask for DMA_ERR */
#define DMA_IEN_ERR_DEFAULT                            (0x00000000 << 31) /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_ERR_DEFAULT                           0x00000000         /**< Mode DEFAULT for DMA_IEN */

/** Bit fields for DMA CH_CTRL */
#define _DMA_CH_CTRL_RESETVALUE                        0x00000000         /**< Default value for DMA_CH_CTRL */
#define _DMA_CH_CTRL_MASK                              0x003F000F         /**< Mask for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_SHIFT                      0                  /**< Shift value for DMA_SIGSEL */
#define _DMA_CH_CTRL_SIGSEL_MASK                       0xF                /**< Bit mask for DMA_SIGSEL */
#define DMA_CH_CTRL_SIGSEL_VCMPOUT                     (0x00000000 << 0)  /**< Shifted mode VCMPOUT for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_ACMP0OUT                    (0x00000000 << 0)  /**< Shifted mode ACMP0OUT for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_ACMP1OUT                    (0x00000000 << 0)  /**< Shifted mode ACMP1OUT for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_DAC0CH0                     (0x00000000 << 0)  /**< Shifted mode DAC0CH0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_ADC0SINGLE                  (0x00000000 << 0)  /**< Shifted mode ADC0SINGLE for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0IRTX                  (0x00000000 << 0)  /**< Shifted mode USART0IRTX for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0UF                    (0x00000000 << 0)  /**< Shifted mode TIMER0UF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1UF                    (0x00000000 << 0)  /**< Shifted mode TIMER1UF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER2UF                    (0x00000000 << 0)  /**< Shifted mode TIMER2UF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_RTCOF                       (0x00000000 << 0)  /**< Shifted mode RTCOF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN0                    (0x00000000 << 0)  /**< Shifted mode GPIOPIN0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN8                    (0x00000000 << 0)  /**< Shifted mode GPIOPIN8 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_DAC0CH1                     (0x00000001 << 0)  /**< Shifted mode DAC0CH1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_ADC0SCAN                    (0x00000001 << 0)  /**< Shifted mode ADC0SCAN for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0TXC                   (0x00000001 << 0)  /**< Shifted mode USART0TXC for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART1TXC                   (0x00000001 << 0)  /**< Shifted mode USART1TXC for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART2TXC                   (0x00000001 << 0)  /**< Shifted mode USART2TXC for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0OF                    (0x00000001 << 0)  /**< Shifted mode TIMER0OF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1OF                    (0x00000001 << 0)  /**< Shifted mode TIMER1OF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER2OF                    (0x00000001 << 0)  /**< Shifted mode TIMER2OF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_RTCCOMP0                    (0x00000001 << 0)  /**< Shifted mode RTCCOMP0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN1                    (0x00000001 << 0)  /**< Shifted mode GPIOPIN1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN9                    (0x00000001 << 0)  /**< Shifted mode GPIOPIN9 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0RXDATAV               (0x00000002 << 0)  /**< Shifted mode USART0RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART1RXDATAV               (0x00000002 << 0)  /**< Shifted mode USART1RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART2RXDATAV               (0x00000002 << 0)  /**< Shifted mode USART2RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC0                   (0x00000002 << 0)  /**< Shifted mode TIMER0CC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC0                   (0x00000002 << 0)  /**< Shifted mode TIMER1CC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER2CC0                   (0x00000002 << 0)  /**< Shifted mode TIMER2CC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_RTCCOMP1                    (0x00000002 << 0)  /**< Shifted mode RTCCOMP1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN2                    (0x00000002 << 0)  /**< Shifted mode GPIOPIN2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN10                   (0x00000002 << 0)  /**< Shifted mode GPIOPIN10 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC1                   (0x00000003 << 0)  /**< Shifted mode TIMER0CC1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC1                   (0x00000003 << 0)  /**< Shifted mode TIMER1CC1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER2CC1                   (0x00000003 << 0)  /**< Shifted mode TIMER2CC1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN3                    (0x00000003 << 0)  /**< Shifted mode GPIOPIN3 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN11                   (0x00000003 << 0)  /**< Shifted mode GPIOPIN11 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC2                   (0x00000004 << 0)  /**< Shifted mode TIMER0CC2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC2                   (0x00000004 << 0)  /**< Shifted mode TIMER1CC2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER2CC2                   (0x00000004 << 0)  /**< Shifted mode TIMER2CC2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN4                    (0x00000004 << 0)  /**< Shifted mode GPIOPIN4 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN12                   (0x00000004 << 0)  /**< Shifted mode GPIOPIN12 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN5                    (0x00000005 << 0)  /**< Shifted mode GPIOPIN5 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN13                   (0x00000005 << 0)  /**< Shifted mode GPIOPIN13 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN6                    (0x00000006 << 0)  /**< Shifted mode GPIOPIN6 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN14                   (0x00000006 << 0)  /**< Shifted mode GPIOPIN14 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN7                    (0x00000007 << 0)  /**< Shifted mode GPIOPIN7 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_GPIOPIN15                   (0x00000007 << 0)  /**< Shifted mode GPIOPIN15 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_VCMPOUT                    0x00000000         /**< Mode VCMPOUT for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ACMP0OUT                   0x00000000         /**< Mode ACMP0OUT for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ACMP1OUT                   0x00000000         /**< Mode ACMP1OUT for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_DAC0CH0                    0x00000000         /**< Mode DAC0CH0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ADC0SINGLE                 0x00000000         /**< Mode ADC0SINGLE for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0IRTX                 0x00000000         /**< Mode USART0IRTX for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0UF                   0x00000000         /**< Mode TIMER0UF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1UF                   0x00000000         /**< Mode TIMER1UF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER2UF                   0x00000000         /**< Mode TIMER2UF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_RTCOF                      0x00000000         /**< Mode RTCOF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN0                   0x00000000         /**< Mode GPIOPIN0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN8                   0x00000000         /**< Mode GPIOPIN8 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_DAC0CH1                    0x00000001         /**< Mode DAC0CH1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ADC0SCAN                   0x00000001         /**< Mode ADC0SCAN for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0TXC                  0x00000001         /**< Mode USART0TXC for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART1TXC                  0x00000001         /**< Mode USART1TXC for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART2TXC                  0x00000001         /**< Mode USART2TXC for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0OF                   0x00000001         /**< Mode TIMER0OF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1OF                   0x00000001         /**< Mode TIMER1OF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER2OF                   0x00000001         /**< Mode TIMER2OF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_RTCCOMP0                   0x00000001         /**< Mode RTCCOMP0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN1                   0x00000001         /**< Mode GPIOPIN1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN9                   0x00000001         /**< Mode GPIOPIN9 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0RXDATAV              0x00000002         /**< Mode USART0RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART1RXDATAV              0x00000002         /**< Mode USART1RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART2RXDATAV              0x00000002         /**< Mode USART2RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC0                  0x00000002         /**< Mode TIMER0CC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC0                  0x00000002         /**< Mode TIMER1CC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER2CC0                  0x00000002         /**< Mode TIMER2CC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_RTCCOMP1                   0x00000002         /**< Mode RTCCOMP1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN2                   0x00000002         /**< Mode GPIOPIN2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN10                  0x00000002         /**< Mode GPIOPIN10 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC1                  0x00000003         /**< Mode TIMER0CC1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC1                  0x00000003         /**< Mode TIMER1CC1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER2CC1                  0x00000003         /**< Mode TIMER2CC1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN3                   0x00000003         /**< Mode GPIOPIN3 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN11                  0x00000003         /**< Mode GPIOPIN11 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC2                  0x00000004         /**< Mode TIMER0CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC2                  0x00000004         /**< Mode TIMER1CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER2CC2                  0x00000004         /**< Mode TIMER2CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN4                   0x00000004         /**< Mode GPIOPIN4 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN12                  0x00000004         /**< Mode GPIOPIN12 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN5                   0x00000005         /**< Mode GPIOPIN5 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN13                  0x00000005         /**< Mode GPIOPIN13 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN6                   0x00000006         /**< Mode GPIOPIN6 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN14                  0x00000006         /**< Mode GPIOPIN14 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN7                   0x00000007         /**< Mode GPIOPIN7 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_GPIOPIN15                  0x00000007         /**< Mode GPIOPIN15 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_SHIFT                   16                 /**< Shift value for DMA_SOURCESEL */
#define _DMA_CH_CTRL_SOURCESEL_MASK                    0x3F0000           /**< Bit mask for DMA_SOURCESEL */
#define DMA_CH_CTRL_SOURCESEL_VCMP                     (0x00000001 << 16) /**< Shifted mode VCMP for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_ACMP0                    (0x00000002 << 16) /**< Shifted mode ACMP0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_ACMP1                    (0x00000003 << 16) /**< Shifted mode ACMP1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_DAC0                     (0x00000006 << 16) /**< Shifted mode DAC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_ADC0                     (0x00000008 << 16) /**< Shifted mode ADC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_USART0                   (0x00000010 << 16) /**< Shifted mode USART0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_USART1                   (0x00000011 << 16) /**< Shifted mode USART1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_USART2                   (0x00000012 << 16) /**< Shifted mode USART2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_TIMER0                   (0x0000001C << 16) /**< Shifted mode TIMER0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_TIMER1                   (0x0000001D << 16) /**< Shifted mode TIMER1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_TIMER2                   (0x0000001E << 16) /**< Shifted mode TIMER2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_RTC                      (0x00000028 << 16) /**< Shifted mode RTC for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_GPIOL                    (0x00000030 << 16) /**< Shifted mode GPIOL for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_GPIOH                    (0x00000031 << 16) /**< Shifted mode GPIOH for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_VCMP                    0x00000001         /**< Mode VCMP for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_ACMP0                   0x00000002         /**< Mode ACMP0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_ACMP1                   0x00000003         /**< Mode ACMP1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_DAC0                    0x00000006         /**< Mode DAC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_ADC0                    0x00000008         /**< Mode ADC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_USART0                  0x00000010         /**< Mode USART0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_USART1                  0x00000011         /**< Mode USART1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_USART2                  0x00000012         /**< Mode USART2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_TIMER0                  0x0000001C         /**< Mode TIMER0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_TIMER1                  0x0000001D         /**< Mode TIMER1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_TIMER2                  0x0000001E         /**< Mode TIMER2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_RTC                     0x00000028         /**< Mode RTC for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_GPIOL                   0x00000030         /**< Mode GPIOL for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_GPIOH                   0x00000031         /**< Mode GPIOH for DMA_CH_CTRL */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_VCMP
 * @{
 */

/** Bit fields for VCMP CTRL */
#define _VCMP_CTRL_RESETVALUE               0x47000000         /**< Default value for VCMP_CTRL */
#define _VCMP_CTRL_MASK                     0x4F030715         /**< Mask for VCMP_CTRL */
#define VCMP_CTRL_EN                        (1 << 0)           /**< Voltage Supply Comparator Enable */
#define _VCMP_CTRL_EN_SHIFT                 0                  /**< Shift value for VCMP_EN */
#define _VCMP_CTRL_EN_MASK                  0x1                /**< Bit mask for VCMP_EN */
#define VCMP_CTRL_EN_DEFAULT                (0x00000000 << 0)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_EN_DEFAULT               0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_INACTVAL                  (1 << 2)           /**< Inactive Value */
#define _VCMP_CTRL_INACTVAL_SHIFT           2                  /**< Shift value for VCMP_INACTVAL */
#define _VCMP_CTRL_INACTVAL_MASK            0x4                /**< Bit mask for VCMP_INACTVAL */
#define VCMP_CTRL_INACTVAL_DEFAULT          (0x00000000 << 2)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_INACTVAL_DEFAULT         0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_HYSTEN                    (1 << 4)           /**< Hysteresis Enable */
#define _VCMP_CTRL_HYSTEN_SHIFT             4                  /**< Shift value for VCMP_HYSTEN */
#define _VCMP_CTRL_HYSTEN_MASK              0x10               /**< Bit mask for VCMP_HYSTEN */
#define VCMP_CTRL_HYSTEN_DEFAULT            (0x00000000 << 4)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_HYSTEN_DEFAULT           0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_SHIFT           8                  /**< Shift value for VCMP_WARMTIME */
#define _VCMP_CTRL_WARMTIME_MASK            0x700              /**< Bit mask for VCMP_WARMTIME */
#define VCMP_CTRL_WARMTIME_DEFAULT          (0x00000000 << 8)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_4CYCLES          (0x00000000 << 8)  /**< Shifted mode 4CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_8CYCLES          (0x00000001 << 8)  /**< Shifted mode 8CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_16CYCLES         (0x00000002 << 8)  /**< Shifted mode 16CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_32CYCLES         (0x00000003 << 8)  /**< Shifted mode 32CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_64CYCLES         (0x00000004 << 8)  /**< Shifted mode 64CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_128CYCLES        (0x00000005 << 8)  /**< Shifted mode 128CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_256CYCLES        (0x00000006 << 8)  /**< Shifted mode 256CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_512CYCLES        (0x00000007 << 8)  /**< Shifted mode 512CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_DEFAULT         0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_4CYCLES         0x00000000         /**< Mode 4CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_8CYCLES         0x00000001         /**< Mode 8CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_16CYCLES        0x00000002         /**< Mode 16CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_32CYCLES        0x00000003         /**< Mode 32CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_64CYCLES        0x00000004         /**< Mode 64CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_128CYCLES       0x00000005         /**< Mode 128CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_256CYCLES       0x00000006         /**< Mode 256CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_512CYCLES       0x00000007         /**< Mode 512CYCLES for VCMP_CTRL */
#define VCMP_CTRL_IRISE                     (1 << 16)          /**< Rising Edge Interrupt Sense */
#define _VCMP_CTRL_IRISE_SHIFT              16                 /**< Shift value for VCMP_IRISE */
#define _VCMP_CTRL_IRISE_MASK               0x10000            /**< Bit mask for VCMP_IRISE */
#define VCMP_CTRL_IRISE_DEFAULT             (0x00000000 << 16) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_IRISE_DEFAULT            0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_IFALL                     (1 << 17)          /**< Falling Edge Interrupt Sense */
#define _VCMP_CTRL_IFALL_SHIFT              17                 /**< Shift value for VCMP_IFALL */
#define _VCMP_CTRL_IFALL_MASK               0x20000            /**< Bit mask for VCMP_IFALL */
#define VCMP_CTRL_IFALL_DEFAULT             (0x00000000 << 17) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_IFALL_DEFAULT            0x00000000         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_BIASPROG_SHIFT           24                 /**< Shift value for VCMP_BIASPROG */
#define _VCMP_CTRL_BIASPROG_MASK            0xF000000          /**< Bit mask for VCMP_BIASPROG */
#define VCMP_CTRL_BIASPROG_DEFAULT          (0x00000007 << 24) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_BIASPROG_DEFAULT         0x00000007         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_HALFBIAS                  (1 << 30)          /**< Half Bias Current */
#define _VCMP_CTRL_HALFBIAS_SHIFT           30                 /**< Shift value for VCMP_HALFBIAS */
#define _VCMP_CTRL_HALFBIAS_MASK            0x40000000         /**< Bit mask for VCMP_HALFBIAS */
#define VCMP_CTRL_HALFBIAS_DEFAULT          (0x00000001 << 30) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_HALFBIAS_DEFAULT         0x00000001         /**< Mode DEFAULT for VCMP_CTRL */

/** Bit fields for VCMP INPUTSEL */
#define _VCMP_INPUTSEL_RESETVALUE           0x00000000        /**< Default value for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_MASK                 0x0000013F        /**< Mask for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_SHIFT      0                 /**< Shift value for VCMP_TRIGLEVEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_MASK       0x3F              /**< Bit mask for VCMP_TRIGLEVEL */
#define VCMP_INPUTSEL_TRIGLEVEL_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_DEFAULT    0x00000000        /**< Mode DEFAULT for VCMP_INPUTSEL */
#define VCMP_INPUTSEL_LPREF                 (1 << 8)          /**< Low Power Reference */
#define _VCMP_INPUTSEL_LPREF_SHIFT          8                 /**< Shift value for VCMP_LPREF */
#define _VCMP_INPUTSEL_LPREF_MASK           0x100             /**< Bit mask for VCMP_LPREF */
#define VCMP_INPUTSEL_LPREF_DEFAULT         (0x00000000 << 8) /**< Shifted mode DEFAULT for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_LPREF_DEFAULT        0x00000000        /**< Mode DEFAULT for VCMP_INPUTSEL */

/** Bit fields for VCMP STATUS */
#define _VCMP_STATUS_RESETVALUE             0x00000000        /**< Default value for VCMP_STATUS */
#define _VCMP_STATUS_MASK                   0x00000003        /**< Mask for VCMP_STATUS */
#define VCMP_STATUS_VCMPACT                 (1 << 0)          /**< Voltage Supply Comparator Active */
#define _VCMP_STATUS_VCMPACT_SHIFT          0                 /**< Shift value for VCMP_VCMPACT */
#define _VCMP_STATUS_VCMPACT_MASK           0x1               /**< Bit mask for VCMP_VCMPACT */
#define VCMP_STATUS_VCMPACT_DEFAULT         (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_STATUS */
#define _VCMP_STATUS_VCMPACT_DEFAULT        0x00000000        /**< Mode DEFAULT for VCMP_STATUS */
#define VCMP_STATUS_VCMPOUT                 (1 << 1)          /**< Voltage Supply Comparator Output */
#define _VCMP_STATUS_VCMPOUT_SHIFT          1                 /**< Shift value for VCMP_VCMPOUT */
#define _VCMP_STATUS_VCMPOUT_MASK           0x2               /**< Bit mask for VCMP_VCMPOUT */
#define VCMP_STATUS_VCMPOUT_DEFAULT         (0x00000000 << 1) /**< Shifted mode DEFAULT for VCMP_STATUS */
#define _VCMP_STATUS_VCMPOUT_DEFAULT        0x00000000        /**< Mode DEFAULT for VCMP_STATUS */

/** Bit fields for VCMP IEN */
#define _VCMP_IEN_RESETVALUE                0x00000000        /**< Default value for VCMP_IEN */
#define _VCMP_IEN_MASK                      0x00000003        /**< Mask for VCMP_IEN */
#define VCMP_IEN_EDGE                       (1 << 0)          /**< Edge Trigger Interrupt Enable */
#define _VCMP_IEN_EDGE_SHIFT                0                 /**< Shift value for VCMP_EDGE */
#define _VCMP_IEN_EDGE_MASK                 0x1               /**< Bit mask for VCMP_EDGE */
#define VCMP_IEN_EDGE_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_IEN */
#define _VCMP_IEN_EDGE_DEFAULT              0x00000000        /**< Mode DEFAULT for VCMP_IEN */
#define VCMP_IEN_WARMUP                     (1 << 1)          /**< Warm-up Interrupt Enable */
#define _VCMP_IEN_WARMUP_SHIFT              1                 /**< Shift value for VCMP_WARMUP */
#define _VCMP_IEN_WARMUP_MASK               0x2               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IEN_WARMUP_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for VCMP_IEN */
#define _VCMP_IEN_WARMUP_DEFAULT            0x00000000        /**< Mode DEFAULT for VCMP_IEN */

/** Bit fields for VCMP IF */
#define _VCMP_IF_RESETVALUE                 0x00000000        /**< Default value for VCMP_IF */
#define _VCMP_IF_MASK                       0x00000003        /**< Mask for VCMP_IF */
#define VCMP_IF_EDGE                        (1 << 0)          /**< Edge Triggered Interrupt Flag */
#define _VCMP_IF_EDGE_SHIFT                 0                 /**< Shift value for VCMP_EDGE */
#define _VCMP_IF_EDGE_MASK                  0x1               /**< Bit mask for VCMP_EDGE */
#define VCMP_IF_EDGE_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_IF */
#define _VCMP_IF_EDGE_DEFAULT               0x00000000        /**< Mode DEFAULT for VCMP_IF */
#define VCMP_IF_WARMUP                      (1 << 1)          /**< Warm-up Interrupt Flag */
#define _VCMP_IF_WARMUP_SHIFT               1                 /**< Shift value for VCMP_WARMUP */
#define _VCMP_IF_WARMUP_MASK                0x2               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IF_WARMUP_DEFAULT              (0x00000000 << 1) /**< Shifted mode DEFAULT for VCMP_IF */
#define _VCMP_IF_WARMUP_DEFAULT             0x00000000        /**< Mode DEFAULT for VCMP_IF */

/** Bit fields for VCMP IFS */
#define _VCMP_IFS_RESETVALUE                0x00000000        /**< Default value for VCMP_IFS */
#define _VCMP_IFS_MASK                      0x00000003        /**< Mask for VCMP_IFS */
#define VCMP_IFS_EDGE                       (1 << 0)          /**< Edge Triggered Interrupt Flag Set */
#define _VCMP_IFS_EDGE_SHIFT                0                 /**< Shift value for VCMP_EDGE */
#define _VCMP_IFS_EDGE_MASK                 0x1               /**< Bit mask for VCMP_EDGE */
#define VCMP_IFS_EDGE_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_IFS */
#define _VCMP_IFS_EDGE_DEFAULT              0x00000000        /**< Mode DEFAULT for VCMP_IFS */
#define VCMP_IFS_WARMUP                     (1 << 1)          /**< Warm-up Interrupt Flag Set */
#define _VCMP_IFS_WARMUP_SHIFT              1                 /**< Shift value for VCMP_WARMUP */
#define _VCMP_IFS_WARMUP_MASK               0x2               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IFS_WARMUP_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for VCMP_IFS */
#define _VCMP_IFS_WARMUP_DEFAULT            0x00000000        /**< Mode DEFAULT for VCMP_IFS */

/** Bit fields for VCMP IFC */
#define _VCMP_IFC_RESETVALUE                0x00000000        /**< Default value for VCMP_IFC */
#define _VCMP_IFC_MASK                      0x00000003        /**< Mask for VCMP_IFC */
#define VCMP_IFC_EDGE                       (1 << 0)          /**< Edge Triggered Interrupt Flag Clear */
#define _VCMP_IFC_EDGE_SHIFT                0                 /**< Shift value for VCMP_EDGE */
#define _VCMP_IFC_EDGE_MASK                 0x1               /**< Bit mask for VCMP_EDGE */
#define VCMP_IFC_EDGE_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for VCMP_IFC */
#define _VCMP_IFC_EDGE_DEFAULT              0x00000000        /**< Mode DEFAULT for VCMP_IFC */
#define VCMP_IFC_WARMUP                     (1 << 1)          /**< Warm-up Interrupt Flag Clear */
#define _VCMP_IFC_WARMUP_SHIFT              1                 /**< Shift value for VCMP_WARMUP */
#define _VCMP_IFC_WARMUP_MASK               0x2               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IFC_WARMUP_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for VCMP_IFC */
#define _VCMP_IFC_WARMUP_DEFAULT            0x00000000        /**< Mode DEFAULT for VCMP_IFC */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_LCD
 * @{
 */

/** Bit fields for LCD CTRL */
#define _LCD_CTRL_RESETVALUE               0x00000000        /**< Default value for LCD_CTRL */
#define _LCD_CTRL_MASK                     0x00000007        /**< Mask for LCD_CTRL */
#define LCD_CTRL_EN                        (1 << 0)          /**< LCD Enable */
#define _LCD_CTRL_EN_SHIFT                 0                 /**< Shift value for LCD_EN */
#define _LCD_CTRL_EN_MASK                  0x1               /**< Bit mask for LCD_EN */
#define LCD_CTRL_EN_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_CTRL */
#define _LCD_CTRL_EN_DEFAULT               0x00000000        /**< Mode DEFAULT for LCD_CTRL */
#define _LCD_CTRL_UDCTRL_SHIFT             1                 /**< Shift value for LCD_UDCTRL */
#define _LCD_CTRL_UDCTRL_MASK              0x6               /**< Bit mask for LCD_UDCTRL */
#define LCD_CTRL_UDCTRL_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for LCD_CTRL */
#define LCD_CTRL_UDCTRL_REGULAR            (0x00000000 << 1) /**< Shifted mode REGULAR for LCD_CTRL */
#define LCD_CTRL_UDCTRL_LFCEVENT           (0x00000001 << 1) /**< Shifted mode LFCEVENT for LCD_CTRL */
#define LCD_CTRL_UDCTRL_FRAMESTART         (0x00000002 << 1) /**< Shifted mode FRAMESTART for LCD_CTRL */
#define _LCD_CTRL_UDCTRL_DEFAULT           0x00000000        /**< Mode DEFAULT for LCD_CTRL */
#define _LCD_CTRL_UDCTRL_REGULAR           0x00000000        /**< Mode REGULAR for LCD_CTRL */
#define _LCD_CTRL_UDCTRL_LFCEVENT          0x00000001        /**< Mode LFCEVENT for LCD_CTRL */
#define _LCD_CTRL_UDCTRL_FRAMESTART        0x00000002        /**< Mode FRAMESTART for LCD_CTRL */

/** Bit fields for LCD DISPCTRL */
#define _LCD_DISPCTRL_RESETVALUE           0x000C1F00         /**< Default value for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MASK                 0x001D9F1F         /**< Mask for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_SHIFT            0                  /**< Shift value for LCD_MUX */
#define _LCD_DISPCTRL_MUX_MASK             0x3                /**< Bit mask for LCD_MUX */
#define LCD_DISPCTRL_MUX_DEFAULT           (0x00000000 << 0)  /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_MUX_STATIC            (0x00000000 << 0)  /**< Shifted mode STATIC for LCD_DISPCTRL */
#define LCD_DISPCTRL_MUX_DUPLEX            (0x00000001 << 0)  /**< Shifted mode DUPLEX for LCD_DISPCTRL */
#define LCD_DISPCTRL_MUX_TRIPLEX           (0x00000002 << 0)  /**< Shifted mode TRIPLEX for LCD_DISPCTRL */
#define LCD_DISPCTRL_MUX_QUADRUPLEX        (0x00000003 << 0)  /**< Shifted mode QUADRUPLEX for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_DEFAULT          0x00000000         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_STATIC           0x00000000         /**< Mode STATIC for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_DUPLEX           0x00000001         /**< Mode DUPLEX for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_TRIPLEX          0x00000002         /**< Mode TRIPLEX for LCD_DISPCTRL */
#define _LCD_DISPCTRL_MUX_QUADRUPLEX       0x00000003         /**< Mode QUADRUPLEX for LCD_DISPCTRL */
#define _LCD_DISPCTRL_BIAS_SHIFT           2                  /**< Shift value for LCD_BIAS */
#define _LCD_DISPCTRL_BIAS_MASK            0xC                /**< Bit mask for LCD_BIAS */
#define LCD_DISPCTRL_BIAS_DEFAULT          (0x00000000 << 2)  /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_BIAS_STATIC           (0x00000000 << 2)  /**< Shifted mode STATIC for LCD_DISPCTRL */
#define LCD_DISPCTRL_BIAS_ONEHALF          (0x00000001 << 2)  /**< Shifted mode ONEHALF for LCD_DISPCTRL */
#define LCD_DISPCTRL_BIAS_ONETHIRD         (0x00000002 << 2)  /**< Shifted mode ONETHIRD for LCD_DISPCTRL */
#define _LCD_DISPCTRL_BIAS_DEFAULT         0x00000000         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_BIAS_STATIC          0x00000000         /**< Mode STATIC for LCD_DISPCTRL */
#define _LCD_DISPCTRL_BIAS_ONEHALF         0x00000001         /**< Mode ONEHALF for LCD_DISPCTRL */
#define _LCD_DISPCTRL_BIAS_ONETHIRD        0x00000002         /**< Mode ONETHIRD for LCD_DISPCTRL */
#define LCD_DISPCTRL_WAVE                  (1 << 4)           /**< Waveform Selection */
#define _LCD_DISPCTRL_WAVE_SHIFT           4                  /**< Shift value for LCD_WAVE */
#define _LCD_DISPCTRL_WAVE_MASK            0x10               /**< Bit mask for LCD_WAVE */
#define LCD_DISPCTRL_WAVE_DEFAULT          (0x00000000 << 4)  /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_WAVE_LOWPOWER         (0x00000000 << 4)  /**< Shifted mode LOWPOWER for LCD_DISPCTRL */
#define LCD_DISPCTRL_WAVE_NORMAL           (0x00000001 << 4)  /**< Shifted mode NORMAL for LCD_DISPCTRL */
#define _LCD_DISPCTRL_WAVE_DEFAULT         0x00000000         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_WAVE_LOWPOWER        0x00000000         /**< Mode LOWPOWER for LCD_DISPCTRL */
#define _LCD_DISPCTRL_WAVE_NORMAL          0x00000001         /**< Mode NORMAL for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONLEV_SHIFT         8                  /**< Shift value for LCD_CONLEV */
#define _LCD_DISPCTRL_CONLEV_MASK          0x1F00             /**< Bit mask for LCD_CONLEV */
#define LCD_DISPCTRL_CONLEV_MIN            (0x00000000 << 8)  /**< Shifted mode MIN for LCD_DISPCTRL */
#define LCD_DISPCTRL_CONLEV_DEFAULT        (0x0000001F << 8)  /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_CONLEV_MAX            (0x0000001F << 8)  /**< Shifted mode MAX for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONLEV_MIN           0x00000000         /**< Mode MIN for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONLEV_DEFAULT       0x0000001F         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONLEV_MAX           0x0000001F         /**< Mode MAX for LCD_DISPCTRL */
#define LCD_DISPCTRL_CONCONF               (1 << 15)          /**< Contrast Configuration */
#define _LCD_DISPCTRL_CONCONF_SHIFT        15                 /**< Shift value for LCD_CONCONF */
#define _LCD_DISPCTRL_CONCONF_MASK         0x8000             /**< Bit mask for LCD_CONCONF */
#define LCD_DISPCTRL_CONCONF_DEFAULT       (0x00000000 << 15) /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_CONCONF_VLCD          (0x00000000 << 15) /**< Shifted mode VLCD for LCD_DISPCTRL */
#define LCD_DISPCTRL_CONCONF_GND           (0x00000001 << 15) /**< Shifted mode GND for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONCONF_DEFAULT      0x00000000         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONCONF_VLCD         0x00000000         /**< Mode VLCD for LCD_DISPCTRL */
#define _LCD_DISPCTRL_CONCONF_GND          0x00000001         /**< Mode GND for LCD_DISPCTRL */
#define LCD_DISPCTRL_VLCDSEL               (1 << 16)          /**< VLCD Selection */
#define _LCD_DISPCTRL_VLCDSEL_SHIFT        16                 /**< Shift value for LCD_VLCDSEL */
#define _LCD_DISPCTRL_VLCDSEL_MASK         0x10000            /**< Bit mask for LCD_VLCDSEL */
#define LCD_DISPCTRL_VLCDSEL_DEFAULT       (0x00000000 << 16) /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_VLCDSEL_VDD           (0x00000000 << 16) /**< Shifted mode VDD for LCD_DISPCTRL */
#define LCD_DISPCTRL_VLCDSEL_VEXTBOOST     (0x00000001 << 16) /**< Shifted mode VEXTBOOST for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VLCDSEL_DEFAULT      0x00000000         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VLCDSEL_VDD          0x00000000         /**< Mode VDD for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VLCDSEL_VEXTBOOST    0x00000001         /**< Mode VEXTBOOST for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_SHIFT          18                 /**< Shift value for LCD_VBLEV */
#define _LCD_DISPCTRL_VBLEV_MASK           0x1C0000           /**< Bit mask for LCD_VBLEV */
#define LCD_DISPCTRL_VBLEV_3V00            (0x00000000 << 18) /**< Shifted mode 3V00 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V09            (0x00000001 << 18) /**< Shifted mode 3V09 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V17            (0x00000002 << 18) /**< Shifted mode 3V17 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_DEFAULT         (0x00000003 << 18) /**< Shifted mode DEFAULT for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V26            (0x00000003 << 18) /**< Shifted mode 3V26 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V34            (0x00000004 << 18) /**< Shifted mode 3V34 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V43            (0x00000005 << 18) /**< Shifted mode 3V43 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V51            (0x00000006 << 18) /**< Shifted mode 3V51 for LCD_DISPCTRL */
#define LCD_DISPCTRL_VBLEV_3V60            (0x00000007 << 18) /**< Shifted mode 3V60 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V00           0x00000000         /**< Mode 3V00 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V09           0x00000001         /**< Mode 3V09 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V17           0x00000002         /**< Mode 3V17 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_DEFAULT        0x00000003         /**< Mode DEFAULT for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V26           0x00000003         /**< Mode 3V26 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V34           0x00000004         /**< Mode 3V34 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V43           0x00000005         /**< Mode 3V43 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V51           0x00000006         /**< Mode 3V51 for LCD_DISPCTRL */
#define _LCD_DISPCTRL_VBLEV_3V60           0x00000007         /**< Mode 3V60 for LCD_DISPCTRL */

/** Bit fields for LCD SEGEN */
#define _LCD_SEGEN_RESETVALUE              0x00000000        /**< Default value for LCD_SEGEN */
#define _LCD_SEGEN_MASK                    0x000003FF        /**< Mask for LCD_SEGEN */
#define _LCD_SEGEN_SEGEN_SHIFT             0                 /**< Shift value for LCD_SEGEN */
#define _LCD_SEGEN_SEGEN_MASK              0x3FF             /**< Bit mask for LCD_SEGEN */
#define LCD_SEGEN_SEGEN_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGEN */
#define _LCD_SEGEN_SEGEN_DEFAULT           0x00000000        /**< Mode DEFAULT for LCD_SEGEN */

/** Bit fields for LCD BACTRL */
#define _LCD_BACTRL_RESETVALUE             0x00000000         /**< Default value for LCD_BACTRL */
#define _LCD_BACTRL_MASK                   0x00FF01FF         /**< Mask for LCD_BACTRL */
#define LCD_BACTRL_BLINKEN                 (1 << 0)           /**< Blink Enable */
#define _LCD_BACTRL_BLINKEN_SHIFT          0                  /**< Shift value for LCD_BLINKEN */
#define _LCD_BACTRL_BLINKEN_MASK           0x1                /**< Bit mask for LCD_BLINKEN */
#define LCD_BACTRL_BLINKEN_DEFAULT         (0x00000000 << 0)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_BLINKEN_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_BLANK                   (1 << 1)           /**< Blank Display */
#define _LCD_BACTRL_BLANK_SHIFT            1                  /**< Shift value for LCD_BLANK */
#define _LCD_BACTRL_BLANK_MASK             0x2                /**< Bit mask for LCD_BLANK */
#define LCD_BACTRL_BLANK_DEFAULT           (0x00000000 << 1)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_BLANK_DEFAULT          0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_AEN                     (1 << 2)           /**< Animation Enable */
#define _LCD_BACTRL_AEN_SHIFT              2                  /**< Shift value for LCD_AEN */
#define _LCD_BACTRL_AEN_MASK               0x4                /**< Bit mask for LCD_AEN */
#define LCD_BACTRL_AEN_DEFAULT             (0x00000000 << 2)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_AEN_DEFAULT            0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_AREGASC_SHIFT          3                  /**< Shift value for LCD_AREGASC */
#define _LCD_BACTRL_AREGASC_MASK           0x18               /**< Bit mask for LCD_AREGASC */
#define LCD_BACTRL_AREGASC_DEFAULT         (0x00000000 << 3)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_AREGASC_NOSHIFT         (0x00000000 << 3)  /**< Shifted mode NOSHIFT for LCD_BACTRL */
#define LCD_BACTRL_AREGASC_SHIFTLEFT       (0x00000001 << 3)  /**< Shifted mode SHIFTLEFT for LCD_BACTRL */
#define LCD_BACTRL_AREGASC_SHIFTRIGHT      (0x00000002 << 3)  /**< Shifted mode SHIFTRIGHT for LCD_BACTRL */
#define _LCD_BACTRL_AREGASC_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_AREGASC_NOSHIFT        0x00000000         /**< Mode NOSHIFT for LCD_BACTRL */
#define _LCD_BACTRL_AREGASC_SHIFTLEFT      0x00000001         /**< Mode SHIFTLEFT for LCD_BACTRL */
#define _LCD_BACTRL_AREGASC_SHIFTRIGHT     0x00000002         /**< Mode SHIFTRIGHT for LCD_BACTRL */
#define _LCD_BACTRL_AREGBSC_SHIFT          5                  /**< Shift value for LCD_AREGBSC */
#define _LCD_BACTRL_AREGBSC_MASK           0x60               /**< Bit mask for LCD_AREGBSC */
#define LCD_BACTRL_AREGBSC_DEFAULT         (0x00000000 << 5)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_AREGBSC_NOSHIFT         (0x00000000 << 5)  /**< Shifted mode NOSHIFT for LCD_BACTRL */
#define LCD_BACTRL_AREGBSC_SHIFTLEFT       (0x00000001 << 5)  /**< Shifted mode SHIFTLEFT for LCD_BACTRL */
#define LCD_BACTRL_AREGBSC_SHIFTRIGHT      (0x00000002 << 5)  /**< Shifted mode SHIFTRIGHT for LCD_BACTRL */
#define _LCD_BACTRL_AREGBSC_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_AREGBSC_NOSHIFT        0x00000000         /**< Mode NOSHIFT for LCD_BACTRL */
#define _LCD_BACTRL_AREGBSC_SHIFTLEFT      0x00000001         /**< Mode SHIFTLEFT for LCD_BACTRL */
#define _LCD_BACTRL_AREGBSC_SHIFTRIGHT     0x00000002         /**< Mode SHIFTRIGHT for LCD_BACTRL */
#define LCD_BACTRL_ALOGSEL                 (1 << 7)           /**< Animate Logic Function Select */
#define _LCD_BACTRL_ALOGSEL_SHIFT          7                  /**< Shift value for LCD_ALOGSEL */
#define _LCD_BACTRL_ALOGSEL_MASK           0x80               /**< Bit mask for LCD_ALOGSEL */
#define LCD_BACTRL_ALOGSEL_DEFAULT         (0x00000000 << 7)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_ALOGSEL_AND             (0x00000000 << 7)  /**< Shifted mode AND for LCD_BACTRL */
#define LCD_BACTRL_ALOGSEL_OR              (0x00000001 << 7)  /**< Shifted mode OR for LCD_BACTRL */
#define _LCD_BACTRL_ALOGSEL_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_ALOGSEL_AND            0x00000000         /**< Mode AND for LCD_BACTRL */
#define _LCD_BACTRL_ALOGSEL_OR             0x00000001         /**< Mode OR for LCD_BACTRL */
#define LCD_BACTRL_FCEN                    (1 << 8)           /**< Frame Counter Enable */
#define _LCD_BACTRL_FCEN_SHIFT             8                  /**< Shift value for LCD_FCEN */
#define _LCD_BACTRL_FCEN_MASK              0x100              /**< Bit mask for LCD_FCEN */
#define LCD_BACTRL_FCEN_DEFAULT            (0x00000000 << 8)  /**< Shifted mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_FCEN_DEFAULT           0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_SHIFT          16                 /**< Shift value for LCD_FCPRESC */
#define _LCD_BACTRL_FCPRESC_MASK           0x30000            /**< Bit mask for LCD_FCPRESC */
#define LCD_BACTRL_FCPRESC_DEFAULT         (0x00000000 << 16) /**< Shifted mode DEFAULT for LCD_BACTRL */
#define LCD_BACTRL_FCPRESC_DIV1            (0x00000000 << 16) /**< Shifted mode DIV1 for LCD_BACTRL */
#define LCD_BACTRL_FCPRESC_DIV2            (0x00000001 << 16) /**< Shifted mode DIV2 for LCD_BACTRL */
#define LCD_BACTRL_FCPRESC_DIV4            (0x00000002 << 16) /**< Shifted mode DIV4 for LCD_BACTRL */
#define LCD_BACTRL_FCPRESC_DIV8            (0x00000003 << 16) /**< Shifted mode DIV8 for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_DIV1           0x00000000         /**< Mode DIV1 for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_DIV2           0x00000001         /**< Mode DIV2 for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_DIV4           0x00000002         /**< Mode DIV4 for LCD_BACTRL */
#define _LCD_BACTRL_FCPRESC_DIV8           0x00000003         /**< Mode DIV8 for LCD_BACTRL */
#define _LCD_BACTRL_FCTOP_SHIFT            18                 /**< Shift value for LCD_FCTOP */
#define _LCD_BACTRL_FCTOP_MASK             0xFC0000           /**< Bit mask for LCD_FCTOP */
#define LCD_BACTRL_FCTOP_DEFAULT           (0x00000000 << 18) /**< Shifted mode DEFAULT for LCD_BACTRL */
#define _LCD_BACTRL_FCTOP_DEFAULT          0x00000000         /**< Mode DEFAULT for LCD_BACTRL */

/** Bit fields for LCD STATUS */
#define _LCD_STATUS_RESETVALUE             0x00000000        /**< Default value for LCD_STATUS */
#define _LCD_STATUS_MASK                   0x0000010F        /**< Mask for LCD_STATUS */
#define _LCD_STATUS_ASTATE_SHIFT           0                 /**< Shift value for LCD_ASTATE */
#define _LCD_STATUS_ASTATE_MASK            0xF               /**< Bit mask for LCD_ASTATE */
#define LCD_STATUS_ASTATE_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_STATUS */
#define _LCD_STATUS_ASTATE_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_STATUS */
#define LCD_STATUS_BLINK                   (1 << 8)          /**< Blink State */
#define _LCD_STATUS_BLINK_SHIFT            8                 /**< Shift value for LCD_BLINK */
#define _LCD_STATUS_BLINK_MASK             0x100             /**< Bit mask for LCD_BLINK */
#define LCD_STATUS_BLINK_DEFAULT           (0x00000000 << 8) /**< Shifted mode DEFAULT for LCD_STATUS */
#define _LCD_STATUS_BLINK_DEFAULT          0x00000000        /**< Mode DEFAULT for LCD_STATUS */

/** Bit fields for LCD AREGA */
#define _LCD_AREGA_RESETVALUE              0x00000000        /**< Default value for LCD_AREGA */
#define _LCD_AREGA_MASK                    0x000000FF        /**< Mask for LCD_AREGA */
#define _LCD_AREGA_AREGA_SHIFT             0                 /**< Shift value for LCD_AREGA */
#define _LCD_AREGA_AREGA_MASK              0xFF              /**< Bit mask for LCD_AREGA */
#define LCD_AREGA_AREGA_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_AREGA */
#define _LCD_AREGA_AREGA_DEFAULT           0x00000000        /**< Mode DEFAULT for LCD_AREGA */

/** Bit fields for LCD AREGB */
#define _LCD_AREGB_RESETVALUE              0x00000000        /**< Default value for LCD_AREGB */
#define _LCD_AREGB_MASK                    0x000000FF        /**< Mask for LCD_AREGB */
#define _LCD_AREGB_AREGB_SHIFT             0                 /**< Shift value for LCD_AREGB */
#define _LCD_AREGB_AREGB_MASK              0xFF              /**< Bit mask for LCD_AREGB */
#define LCD_AREGB_AREGB_DEFAULT            (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_AREGB */
#define _LCD_AREGB_AREGB_DEFAULT           0x00000000        /**< Mode DEFAULT for LCD_AREGB */

/** Bit fields for LCD IF */
#define _LCD_IF_RESETVALUE                 0x00000000        /**< Default value for LCD_IF */
#define _LCD_IF_MASK                       0x00000001        /**< Mask for LCD_IF */
#define LCD_IF_FC                          (1 << 0)          /**< Frame Counter Interrupt Flag */
#define _LCD_IF_FC_SHIFT                   0                 /**< Shift value for LCD_FC */
#define _LCD_IF_FC_MASK                    0x1               /**< Bit mask for LCD_FC */
#define LCD_IF_FC_DEFAULT                  (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_IF */
#define _LCD_IF_FC_DEFAULT                 0x00000000        /**< Mode DEFAULT for LCD_IF */

/** Bit fields for LCD IFS */
#define _LCD_IFS_RESETVALUE                0x00000000        /**< Default value for LCD_IFS */
#define _LCD_IFS_MASK                      0x00000001        /**< Mask for LCD_IFS */
#define LCD_IFS_FC                         (1 << 0)          /**< Frame Counter Interrupt Flag Set */
#define _LCD_IFS_FC_SHIFT                  0                 /**< Shift value for LCD_FC */
#define _LCD_IFS_FC_MASK                   0x1               /**< Bit mask for LCD_FC */
#define LCD_IFS_FC_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_IFS */
#define _LCD_IFS_FC_DEFAULT                0x00000000        /**< Mode DEFAULT for LCD_IFS */

/** Bit fields for LCD IFC */
#define _LCD_IFC_RESETVALUE                0x00000000        /**< Default value for LCD_IFC */
#define _LCD_IFC_MASK                      0x00000001        /**< Mask for LCD_IFC */
#define LCD_IFC_FC                         (1 << 0)          /**< Frame Counter Interrupt Flag Clear */
#define _LCD_IFC_FC_SHIFT                  0                 /**< Shift value for LCD_FC */
#define _LCD_IFC_FC_MASK                   0x1               /**< Bit mask for LCD_FC */
#define LCD_IFC_FC_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_IFC */
#define _LCD_IFC_FC_DEFAULT                0x00000000        /**< Mode DEFAULT for LCD_IFC */

/** Bit fields for LCD IEN */
#define _LCD_IEN_RESETVALUE                0x00000000        /**< Default value for LCD_IEN */
#define _LCD_IEN_MASK                      0x00000001        /**< Mask for LCD_IEN */
#define LCD_IEN_FC                         (1 << 0)          /**< Frame Counter Interrupt Enable */
#define _LCD_IEN_FC_SHIFT                  0                 /**< Shift value for LCD_FC */
#define _LCD_IEN_FC_MASK                   0x1               /**< Bit mask for LCD_FC */
#define LCD_IEN_FC_DEFAULT                 (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_IEN */
#define _LCD_IEN_FC_DEFAULT                0x00000000        /**< Mode DEFAULT for LCD_IEN */

/** Bit fields for LCD SEGD0L */
#define _LCD_SEGD0L_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD0L */
#define _LCD_SEGD0L_MASK                   0xFFFFFFFF        /**< Mask for LCD_SEGD0L */
#define _LCD_SEGD0L_SEGD0L_SHIFT           0                 /**< Shift value for LCD_SEGD0L */
#define _LCD_SEGD0L_SEGD0L_MASK            0xFFFFFFFF        /**< Bit mask for LCD_SEGD0L */
#define LCD_SEGD0L_SEGD0L_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD0L */
#define _LCD_SEGD0L_SEGD0L_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD0L */

/** Bit fields for LCD SEGD1L */
#define _LCD_SEGD1L_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD1L */
#define _LCD_SEGD1L_MASK                   0xFFFFFFFF        /**< Mask for LCD_SEGD1L */
#define _LCD_SEGD1L_SEGD1L_SHIFT           0                 /**< Shift value for LCD_SEGD1L */
#define _LCD_SEGD1L_SEGD1L_MASK            0xFFFFFFFF        /**< Bit mask for LCD_SEGD1L */
#define LCD_SEGD1L_SEGD1L_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD1L */
#define _LCD_SEGD1L_SEGD1L_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD1L */

/** Bit fields for LCD SEGD2L */
#define _LCD_SEGD2L_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD2L */
#define _LCD_SEGD2L_MASK                   0xFFFFFFFF        /**< Mask for LCD_SEGD2L */
#define _LCD_SEGD2L_SEGD2L_SHIFT           0                 /**< Shift value for LCD_SEGD2L */
#define _LCD_SEGD2L_SEGD2L_MASK            0xFFFFFFFF        /**< Bit mask for LCD_SEGD2L */
#define LCD_SEGD2L_SEGD2L_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD2L */
#define _LCD_SEGD2L_SEGD2L_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD2L */

/** Bit fields for LCD SEGD3L */
#define _LCD_SEGD3L_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD3L */
#define _LCD_SEGD3L_MASK                   0xFFFFFFFF        /**< Mask for LCD_SEGD3L */
#define _LCD_SEGD3L_SEGD3L_SHIFT           0                 /**< Shift value for LCD_SEGD3L */
#define _LCD_SEGD3L_SEGD3L_MASK            0xFFFFFFFF        /**< Bit mask for LCD_SEGD3L */
#define LCD_SEGD3L_SEGD3L_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD3L */
#define _LCD_SEGD3L_SEGD3L_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD3L */

/** Bit fields for LCD SEGD0H */
#define _LCD_SEGD0H_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD0H */
#define _LCD_SEGD0H_MASK                   0x000000FF        /**< Mask for LCD_SEGD0H */
#define _LCD_SEGD0H_SEGD0H_SHIFT           0                 /**< Shift value for LCD_SEGD0H */
#define _LCD_SEGD0H_SEGD0H_MASK            0xFF              /**< Bit mask for LCD_SEGD0H */
#define LCD_SEGD0H_SEGD0H_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD0H */
#define _LCD_SEGD0H_SEGD0H_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD0H */

/** Bit fields for LCD SEGD1H */
#define _LCD_SEGD1H_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD1H */
#define _LCD_SEGD1H_MASK                   0x000000FF        /**< Mask for LCD_SEGD1H */
#define _LCD_SEGD1H_SEGD1H_SHIFT           0                 /**< Shift value for LCD_SEGD1H */
#define _LCD_SEGD1H_SEGD1H_MASK            0xFF              /**< Bit mask for LCD_SEGD1H */
#define LCD_SEGD1H_SEGD1H_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD1H */
#define _LCD_SEGD1H_SEGD1H_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD1H */

/** Bit fields for LCD SEGD2H */
#define _LCD_SEGD2H_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD2H */
#define _LCD_SEGD2H_MASK                   0x000000FF        /**< Mask for LCD_SEGD2H */
#define _LCD_SEGD2H_SEGD2H_SHIFT           0                 /**< Shift value for LCD_SEGD2H */
#define _LCD_SEGD2H_SEGD2H_MASK            0xFF              /**< Bit mask for LCD_SEGD2H */
#define LCD_SEGD2H_SEGD2H_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD2H */
#define _LCD_SEGD2H_SEGD2H_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD2H */

/** Bit fields for LCD SEGD3H */
#define _LCD_SEGD3H_RESETVALUE             0x00000000        /**< Default value for LCD_SEGD3H */
#define _LCD_SEGD3H_MASK                   0x000000FF        /**< Mask for LCD_SEGD3H */
#define _LCD_SEGD3H_SEGD3H_SHIFT           0                 /**< Shift value for LCD_SEGD3H */
#define _LCD_SEGD3H_SEGD3H_MASK            0xFF              /**< Bit mask for LCD_SEGD3H */
#define LCD_SEGD3H_SEGD3H_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_SEGD3H */
#define _LCD_SEGD3H_SEGD3H_DEFAULT         0x00000000        /**< Mode DEFAULT for LCD_SEGD3H */

/** Bit fields for LCD FREEZE */
#define _LCD_FREEZE_RESETVALUE             0x00000000        /**< Default value for LCD_FREEZE */
#define _LCD_FREEZE_MASK                   0x00000001        /**< Mask for LCD_FREEZE */
#define LCD_FREEZE_REGFREEZE               (1 << 0)          /**< Register Update Freeze */
#define _LCD_FREEZE_REGFREEZE_SHIFT        0                 /**< Shift value for LCD_REGFREEZE */
#define _LCD_FREEZE_REGFREEZE_MASK         0x1               /**< Bit mask for LCD_REGFREEZE */
#define LCD_FREEZE_REGFREEZE_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for LCD_FREEZE */
#define LCD_FREEZE_REGFREEZE_UPDATE        (0x00000000 << 0) /**< Shifted mode UPDATE for LCD_FREEZE */
#define LCD_FREEZE_REGFREEZE_FREEZE        (0x00000001 << 0) /**< Shifted mode FREEZE for LCD_FREEZE */
#define _LCD_FREEZE_REGFREEZE_DEFAULT      0x00000000        /**< Mode DEFAULT for LCD_FREEZE */
#define _LCD_FREEZE_REGFREEZE_UPDATE       0x00000000        /**< Mode UPDATE for LCD_FREEZE */
#define _LCD_FREEZE_REGFREEZE_FREEZE       0x00000001        /**< Mode FREEZE for LCD_FREEZE */

/** Bit fields for LCD SYNCBUSY */
#define _LCD_SYNCBUSY_RESETVALUE           0x00000000         /**< Default value for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_MASK                 0x00000FFF         /**< Mask for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_CTRL                  (1 << 0)           /**< LCD_CTRL Register Busy */
#define _LCD_SYNCBUSY_CTRL_SHIFT           0                  /**< Shift value for LCD_CTRL */
#define _LCD_SYNCBUSY_CTRL_MASK            0x1                /**< Bit mask for LCD_CTRL */
#define LCD_SYNCBUSY_CTRL_DEFAULT          (0x00000000 << 0)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_CTRL_DEFAULT         0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_BACTRL                (1 << 1)           /**< LCD_BACTRL Register Busy */
#define _LCD_SYNCBUSY_BACTRL_SHIFT         1                  /**< Shift value for LCD_BACTRL */
#define _LCD_SYNCBUSY_BACTRL_MASK          0x2                /**< Bit mask for LCD_BACTRL */
#define LCD_SYNCBUSY_BACTRL_DEFAULT        (0x00000000 << 1)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_BACTRL_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_AREGA                 (1 << 2)           /**< LCD_AREGA Register Busy */
#define _LCD_SYNCBUSY_AREGA_SHIFT          2                  /**< Shift value for LCD_AREGA */
#define _LCD_SYNCBUSY_AREGA_MASK           0x4                /**< Bit mask for LCD_AREGA */
#define LCD_SYNCBUSY_AREGA_DEFAULT         (0x00000000 << 2)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_AREGA_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_AREGB                 (1 << 3)           /**< LCD_AREGB Register Busy */
#define _LCD_SYNCBUSY_AREGB_SHIFT          3                  /**< Shift value for LCD_AREGB */
#define _LCD_SYNCBUSY_AREGB_MASK           0x8                /**< Bit mask for LCD_AREGB */
#define LCD_SYNCBUSY_AREGB_DEFAULT         (0x00000000 << 3)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_AREGB_DEFAULT        0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD0L                (1 << 4)           /**< LCD_SEGD0L Register Busy */
#define _LCD_SYNCBUSY_SEGD0L_SHIFT         4                  /**< Shift value for LCD_SEGD0L */
#define _LCD_SYNCBUSY_SEGD0L_MASK          0x10               /**< Bit mask for LCD_SEGD0L */
#define LCD_SYNCBUSY_SEGD0L_DEFAULT        (0x00000000 << 4)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD0L_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD1L                (1 << 5)           /**< LCD_SEGD1L Register Busy */
#define _LCD_SYNCBUSY_SEGD1L_SHIFT         5                  /**< Shift value for LCD_SEGD1L */
#define _LCD_SYNCBUSY_SEGD1L_MASK          0x20               /**< Bit mask for LCD_SEGD1L */
#define LCD_SYNCBUSY_SEGD1L_DEFAULT        (0x00000000 << 5)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD1L_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD2L                (1 << 6)           /**< LCD_SEGD2L Register Busy */
#define _LCD_SYNCBUSY_SEGD2L_SHIFT         6                  /**< Shift value for LCD_SEGD2L */
#define _LCD_SYNCBUSY_SEGD2L_MASK          0x40               /**< Bit mask for LCD_SEGD2L */
#define LCD_SYNCBUSY_SEGD2L_DEFAULT        (0x00000000 << 6)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD2L_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD3L                (1 << 7)           /**< LCD_SEGD3L Register Busy */
#define _LCD_SYNCBUSY_SEGD3L_SHIFT         7                  /**< Shift value for LCD_SEGD3L */
#define _LCD_SYNCBUSY_SEGD3L_MASK          0x80               /**< Bit mask for LCD_SEGD3L */
#define LCD_SYNCBUSY_SEGD3L_DEFAULT        (0x00000000 << 7)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD3L_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD0H                (1 << 8)           /**< LCD_SEGD0H Register Busy */
#define _LCD_SYNCBUSY_SEGD0H_SHIFT         8                  /**< Shift value for LCD_SEGD0H */
#define _LCD_SYNCBUSY_SEGD0H_MASK          0x100              /**< Bit mask for LCD_SEGD0H */
#define LCD_SYNCBUSY_SEGD0H_DEFAULT        (0x00000000 << 8)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD0H_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD1H                (1 << 9)           /**< LCD_SEGD1H Register Busy */
#define _LCD_SYNCBUSY_SEGD1H_SHIFT         9                  /**< Shift value for LCD_SEGD1H */
#define _LCD_SYNCBUSY_SEGD1H_MASK          0x200              /**< Bit mask for LCD_SEGD1H */
#define LCD_SYNCBUSY_SEGD1H_DEFAULT        (0x00000000 << 9)  /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD1H_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD2H                (1 << 10)          /**< LCD_SEGD2H Register Busy */
#define _LCD_SYNCBUSY_SEGD2H_SHIFT         10                 /**< Shift value for LCD_SEGD2H */
#define _LCD_SYNCBUSY_SEGD2H_MASK          0x400              /**< Bit mask for LCD_SEGD2H */
#define LCD_SYNCBUSY_SEGD2H_DEFAULT        (0x00000000 << 10) /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD2H_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */
#define LCD_SYNCBUSY_SEGD3H                (1 << 11)          /**< LCD_SEGD3H Register Busy */
#define _LCD_SYNCBUSY_SEGD3H_SHIFT         11                 /**< Shift value for LCD_SEGD3H */
#define _LCD_SYNCBUSY_SEGD3H_MASK          0x800              /**< Bit mask for LCD_SEGD3H */
#define LCD_SYNCBUSY_SEGD3H_DEFAULT        (0x00000000 << 11) /**< Shifted mode DEFAULT for LCD_SYNCBUSY */
#define _LCD_SYNCBUSY_SEGD3H_DEFAULT       0x00000000         /**< Mode DEFAULT for LCD_SYNCBUSY */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_RTC
 * @{
 */

/** Bit fields for RTC CTRL */
#define _RTC_CTRL_RESETVALUE             0x00000000        /**< Default value for RTC_CTRL */
#define _RTC_CTRL_MASK                   0x00000007        /**< Mask for RTC_CTRL */
#define RTC_CTRL_EN                      (1 << 0)          /**< RTC Enable */
#define _RTC_CTRL_EN_SHIFT               0                 /**< Shift value for RTC_EN */
#define _RTC_CTRL_EN_MASK                0x1               /**< Bit mask for RTC_EN */
#define RTC_CTRL_EN_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_EN_DEFAULT             0x00000000        /**< Mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_DEBUGRUN                (1 << 1)          /**< Debug Mode Run Enable */
#define _RTC_CTRL_DEBUGRUN_SHIFT         1                 /**< Shift value for RTC_DEBUGRUN */
#define _RTC_CTRL_DEBUGRUN_MASK          0x2               /**< Bit mask for RTC_DEBUGRUN */
#define RTC_CTRL_DEBUGRUN_DEFAULT        (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_DEBUGRUN_DEFAULT       0x00000000        /**< Mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_COMP0TOP                (1 << 2)          /**< Compare Channel 0 is Top Value */
#define _RTC_CTRL_COMP0TOP_SHIFT         2                 /**< Shift value for RTC_COMP0TOP */
#define _RTC_CTRL_COMP0TOP_MASK          0x4               /**< Bit mask for RTC_COMP0TOP */
#define RTC_CTRL_COMP0TOP_DEFAULT        (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_COMP0TOP_DISABLE        (0x00000000 << 2) /**< Shifted mode DISABLE for RTC_CTRL */
#define RTC_CTRL_COMP0TOP_ENABLE         (0x00000001 << 2) /**< Shifted mode ENABLE for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_DEFAULT       0x00000000        /**< Mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_DISABLE       0x00000000        /**< Mode DISABLE for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_ENABLE        0x00000001        /**< Mode ENABLE for RTC_CTRL */

/** Bit fields for RTC CNT */
#define _RTC_CNT_RESETVALUE              0x00000000        /**< Default value for RTC_CNT */
#define _RTC_CNT_MASK                    0x00FFFFFF        /**< Mask for RTC_CNT */
#define _RTC_CNT_CNT_SHIFT               0                 /**< Shift value for RTC_CNT */
#define _RTC_CNT_CNT_MASK                0xFFFFFF          /**< Bit mask for RTC_CNT */
#define RTC_CNT_CNT_DEFAULT              (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_CNT */
#define _RTC_CNT_CNT_DEFAULT             0x00000000        /**< Mode DEFAULT for RTC_CNT */

/** Bit fields for RTC COMP0 */
#define _RTC_COMP0_RESETVALUE            0x00000000        /**< Default value for RTC_COMP0 */
#define _RTC_COMP0_MASK                  0x00FFFFFF        /**< Mask for RTC_COMP0 */
#define _RTC_COMP0_COMP0_SHIFT           0                 /**< Shift value for RTC_COMP0 */
#define _RTC_COMP0_COMP0_MASK            0xFFFFFF          /**< Bit mask for RTC_COMP0 */
#define RTC_COMP0_COMP0_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_COMP0 */
#define _RTC_COMP0_COMP0_DEFAULT         0x00000000        /**< Mode DEFAULT for RTC_COMP0 */

/** Bit fields for RTC COMP1 */
#define _RTC_COMP1_RESETVALUE            0x00000000        /**< Default value for RTC_COMP1 */
#define _RTC_COMP1_MASK                  0x00FFFFFF        /**< Mask for RTC_COMP1 */
#define _RTC_COMP1_COMP1_SHIFT           0                 /**< Shift value for RTC_COMP1 */
#define _RTC_COMP1_COMP1_MASK            0xFFFFFF          /**< Bit mask for RTC_COMP1 */
#define RTC_COMP1_COMP1_DEFAULT          (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_COMP1 */
#define _RTC_COMP1_COMP1_DEFAULT         0x00000000        /**< Mode DEFAULT for RTC_COMP1 */

/** Bit fields for RTC IF */
#define _RTC_IF_RESETVALUE               0x00000000        /**< Default value for RTC_IF */
#define _RTC_IF_MASK                     0x00000007        /**< Mask for RTC_IF */
#define RTC_IF_OF                        (1 << 0)          /**< Overflow Interrupt Flag */
#define _RTC_IF_OF_SHIFT                 0                 /**< Shift value for RTC_OF */
#define _RTC_IF_OF_MASK                  0x1               /**< Bit mask for RTC_OF */
#define RTC_IF_OF_DEFAULT                (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_OF_DEFAULT               0x00000000        /**< Mode DEFAULT for RTC_IF */
#define RTC_IF_COMP0                     (1 << 1)          /**< Compare Match 0 Interrupt Flag */
#define _RTC_IF_COMP0_SHIFT              1                 /**< Shift value for RTC_COMP0 */
#define _RTC_IF_COMP0_MASK               0x2               /**< Bit mask for RTC_COMP0 */
#define RTC_IF_COMP0_DEFAULT             (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_COMP0_DEFAULT            0x00000000        /**< Mode DEFAULT for RTC_IF */
#define RTC_IF_COMP1                     (1 << 2)          /**< Compare Match 1 Interrupt Flag */
#define _RTC_IF_COMP1_SHIFT              2                 /**< Shift value for RTC_COMP1 */
#define _RTC_IF_COMP1_MASK               0x4               /**< Bit mask for RTC_COMP1 */
#define RTC_IF_COMP1_DEFAULT             (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_COMP1_DEFAULT            0x00000000        /**< Mode DEFAULT for RTC_IF */

/** Bit fields for RTC IFS */
#define _RTC_IFS_RESETVALUE              0x00000000        /**< Default value for RTC_IFS */
#define _RTC_IFS_MASK                    0x00000007        /**< Mask for RTC_IFS */
#define RTC_IFS_OF                       (1 << 0)          /**< Set Overflow Interrupt Flag */
#define _RTC_IFS_OF_SHIFT                0                 /**< Shift value for RTC_OF */
#define _RTC_IFS_OF_MASK                 0x1               /**< Bit mask for RTC_OF */
#define RTC_IFS_OF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for RTC_IFS */
#define RTC_IFS_COMP0                    (1 << 1)          /**< Set Compare match 0 Interrupt Flag */
#define _RTC_IFS_COMP0_SHIFT             1                 /**< Shift value for RTC_COMP0 */
#define _RTC_IFS_COMP0_MASK              0x2               /**< Bit mask for RTC_COMP0 */
#define RTC_IFS_COMP0_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IFS */
#define RTC_IFS_COMP1                    (1 << 2)          /**< Set Compare match 1 Interrupt Flag */
#define _RTC_IFS_COMP1_SHIFT             2                 /**< Shift value for RTC_COMP1 */
#define _RTC_IFS_COMP1_MASK              0x4               /**< Bit mask for RTC_COMP1 */
#define RTC_IFS_COMP1_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IFS */

/** Bit fields for RTC IFC */
#define _RTC_IFC_RESETVALUE              0x00000000        /**< Default value for RTC_IFC */
#define _RTC_IFC_MASK                    0x00000007        /**< Mask for RTC_IFC */
#define RTC_IFC_OF                       (1 << 0)          /**< Clear Overflow Interrupt Flag */
#define _RTC_IFC_OF_SHIFT                0                 /**< Shift value for RTC_OF */
#define _RTC_IFC_OF_MASK                 0x1               /**< Bit mask for RTC_OF */
#define RTC_IFC_OF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for RTC_IFC */
#define RTC_IFC_COMP0                    (1 << 1)          /**< Clear Compare match 0 Interrupt Flag */
#define _RTC_IFC_COMP0_SHIFT             1                 /**< Shift value for RTC_COMP0 */
#define _RTC_IFC_COMP0_MASK              0x2               /**< Bit mask for RTC_COMP0 */
#define RTC_IFC_COMP0_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IFC */
#define RTC_IFC_COMP1                    (1 << 2)          /**< Clear Compare match 1 Interrupt Flag */
#define _RTC_IFC_COMP1_SHIFT             2                 /**< Shift value for RTC_COMP1 */
#define _RTC_IFC_COMP1_MASK              0x4               /**< Bit mask for RTC_COMP1 */
#define RTC_IFC_COMP1_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IFC */

/** Bit fields for RTC IEN */
#define _RTC_IEN_RESETVALUE              0x00000000        /**< Default value for RTC_IEN */
#define _RTC_IEN_MASK                    0x00000007        /**< Mask for RTC_IEN */
#define RTC_IEN_OF                       (1 << 0)          /**< Overflow Interrupt Enable */
#define _RTC_IEN_OF_SHIFT                0                 /**< Shift value for RTC_OF */
#define _RTC_IEN_OF_MASK                 0x1               /**< Bit mask for RTC_OF */
#define RTC_IEN_OF_DEFAULT               (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_OF_DEFAULT              0x00000000        /**< Mode DEFAULT for RTC_IEN */
#define RTC_IEN_COMP0                    (1 << 1)          /**< Compare Match 0 Interrupt Enable */
#define _RTC_IEN_COMP0_SHIFT             1                 /**< Shift value for RTC_COMP0 */
#define _RTC_IEN_COMP0_MASK              0x2               /**< Bit mask for RTC_COMP0 */
#define RTC_IEN_COMP0_DEFAULT            (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_COMP0_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IEN */
#define RTC_IEN_COMP1                    (1 << 2)          /**< Compare Match 1 Interrupt Enable */
#define _RTC_IEN_COMP1_SHIFT             2                 /**< Shift value for RTC_COMP1 */
#define _RTC_IEN_COMP1_MASK              0x4               /**< Bit mask for RTC_COMP1 */
#define RTC_IEN_COMP1_DEFAULT            (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_COMP1_DEFAULT           0x00000000        /**< Mode DEFAULT for RTC_IEN */

/** Bit fields for RTC FREEZE */
#define _RTC_FREEZE_RESETVALUE           0x00000000        /**< Default value for RTC_FREEZE */
#define _RTC_FREEZE_MASK                 0x00000001        /**< Mask for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE             (1 << 0)          /**< Register Update Freeze */
#define _RTC_FREEZE_REGFREEZE_SHIFT      0                 /**< Shift value for RTC_REGFREEZE */
#define _RTC_FREEZE_REGFREEZE_MASK       0x1               /**< Bit mask for RTC_REGFREEZE */
#define RTC_FREEZE_REGFREEZE_DEFAULT     (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE_UPDATE      (0x00000000 << 0) /**< Shifted mode UPDATE for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE_FREEZE      (0x00000001 << 0) /**< Shifted mode FREEZE for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_DEFAULT    0x00000000        /**< Mode DEFAULT for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_UPDATE     0x00000000        /**< Mode UPDATE for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_FREEZE     0x00000001        /**< Mode FREEZE for RTC_FREEZE */

/** Bit fields for RTC SYNCBUSY */
#define _RTC_SYNCBUSY_RESETVALUE         0x00000000        /**< Default value for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_MASK               0x00000007        /**< Mask for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_CTRL                (1 << 0)          /**< RTC_CTRL Register Busy */
#define _RTC_SYNCBUSY_CTRL_SHIFT         0                 /**< Shift value for RTC_CTRL */
#define _RTC_SYNCBUSY_CTRL_MASK          0x1               /**< Bit mask for RTC_CTRL */
#define RTC_SYNCBUSY_CTRL_DEFAULT        (0x00000000 << 0) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_CTRL_DEFAULT       0x00000000        /**< Mode DEFAULT for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_COMP0               (1 << 1)          /**< RTC_COMP0 Register Busy */
#define _RTC_SYNCBUSY_COMP0_SHIFT        1                 /**< Shift value for RTC_COMP0 */
#define _RTC_SYNCBUSY_COMP0_MASK         0x2               /**< Bit mask for RTC_COMP0 */
#define RTC_SYNCBUSY_COMP0_DEFAULT       (0x00000000 << 1) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_COMP0_DEFAULT      0x00000000        /**< Mode DEFAULT for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_COMP1               (1 << 2)          /**< RTC_COMP1 Register Busy */
#define _RTC_SYNCBUSY_COMP1_SHIFT        2                 /**< Shift value for RTC_COMP1 */
#define _RTC_SYNCBUSY_COMP1_MASK         0x4               /**< Bit mask for RTC_COMP1 */
#define RTC_SYNCBUSY_COMP1_DEFAULT       (0x00000000 << 2) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_COMP1_DEFAULT      0x00000000        /**< Mode DEFAULT for RTC_SYNCBUSY */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_WDOG
 * @{
 */

/** Bit fields for WDOG CTRL */
#define _WDOG_CTRL_RESETVALUE            0x00000F00         /**< Default value for WDOG_CTRL */
#define _WDOG_CTRL_MASK                  0x00003F7F         /**< Mask for WDOG_CTRL */
#define WDOG_CTRL_EN                     (1 << 0)           /**< Watchdog Timer Enable */
#define _WDOG_CTRL_EN_SHIFT              0                  /**< Shift value for WDOG_EN */
#define _WDOG_CTRL_EN_MASK               0x1                /**< Bit mask for WDOG_EN */
#define WDOG_CTRL_EN_DEFAULT             (0x00000000 << 0)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EN_DEFAULT            0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_DEBUGRUN               (1 << 1)           /**< Debug Mode Run Enable */
#define _WDOG_CTRL_DEBUGRUN_SHIFT        1                  /**< Shift value for WDOG_DEBUGRUN */
#define _WDOG_CTRL_DEBUGRUN_MASK         0x2                /**< Bit mask for WDOG_DEBUGRUN */
#define WDOG_CTRL_DEBUGRUN_DEFAULT       (0x00000000 << 1)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_DEBUGRUN_DEFAULT      0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM2RUN                 (1 << 2)           /**< Energy Mode 2 Run Enable */
#define _WDOG_CTRL_EM2RUN_SHIFT          2                  /**< Shift value for WDOG_EM2RUN */
#define _WDOG_CTRL_EM2RUN_MASK           0x4                /**< Bit mask for WDOG_EM2RUN */
#define WDOG_CTRL_EM2RUN_DEFAULT         (0x00000000 << 2)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM2RUN_DEFAULT        0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM3RUN                 (1 << 3)           /**< Energy Mode 3 Run Enable */
#define _WDOG_CTRL_EM3RUN_SHIFT          3                  /**< Shift value for WDOG_EM3RUN */
#define _WDOG_CTRL_EM3RUN_MASK           0x8                /**< Bit mask for WDOG_EM3RUN */
#define WDOG_CTRL_EM3RUN_DEFAULT         (0x00000000 << 3)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM3RUN_DEFAULT        0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_LOCK                   (1 << 4)           /**< Configuration lock */
#define _WDOG_CTRL_LOCK_SHIFT            4                  /**< Shift value for WDOG_LOCK */
#define _WDOG_CTRL_LOCK_MASK             0x10               /**< Bit mask for WDOG_LOCK */
#define WDOG_CTRL_LOCK_DEFAULT           (0x00000000 << 4)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_LOCK_DEFAULT          0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM4BLOCK               (1 << 5)           /**< Energy Mode 4 Block */
#define _WDOG_CTRL_EM4BLOCK_SHIFT        5                  /**< Shift value for WDOG_EM4BLOCK */
#define _WDOG_CTRL_EM4BLOCK_MASK         0x20               /**< Bit mask for WDOG_EM4BLOCK */
#define WDOG_CTRL_EM4BLOCK_DEFAULT       (0x00000000 << 5)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM4BLOCK_DEFAULT      0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_SWOSCBLOCK             (1 << 6)           /**< Oscillator disabling by software block */
#define _WDOG_CTRL_SWOSCBLOCK_SHIFT      6                  /**< Shift value for WDOG_SWOSCBLOCK */
#define _WDOG_CTRL_SWOSCBLOCK_MASK       0x40               /**< Bit mask for WDOG_SWOSCBLOCK */
#define WDOG_CTRL_SWOSCBLOCK_DEFAULT     (0x00000000 << 6)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_SWOSCBLOCK_DEFAULT    0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_PERSEL_SHIFT          8                  /**< Shift value for WDOG_PERSEL */
#define _WDOG_CTRL_PERSEL_MASK           0xF00              /**< Bit mask for WDOG_PERSEL */
#define WDOG_CTRL_PERSEL_DEFAULT         (0x0000000F << 8)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_PERSEL_DEFAULT        0x0000000F         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_SHIFT          12                 /**< Shift value for WDOG_CLKSEL */
#define _WDOG_CTRL_CLKSEL_MASK           0x3000             /**< Bit mask for WDOG_CLKSEL */
#define WDOG_CTRL_CLKSEL_DEFAULT         (0x00000000 << 12) /**< Shifted mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_1KHZ            (0x00000000 << 12) /**< Shifted mode 1KHZ for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_LFRCO           (0x00000001 << 12) /**< Shifted mode LFRCO for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_LFXO            (0x00000002 << 12) /**< Shifted mode LFXO for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_DEFAULT        0x00000000         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_1KHZ           0x00000000         /**< Mode 1KHZ for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_LFRCO          0x00000001         /**< Mode LFRCO for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_LFXO           0x00000002         /**< Mode LFXO for WDOG_CTRL */

/** Bit fields for WDOG CMD */
#define _WDOG_CMD_RESETVALUE             0x00000000        /**< Default value for WDOG_CMD */
#define _WDOG_CMD_MASK                   0x00000001        /**< Mask for WDOG_CMD */
#define WDOG_CMD_CLEAR                   (1 << 0)          /**< Watchdog Timer Clear */
#define _WDOG_CMD_CLEAR_SHIFT            0                 /**< Shift value for WDOG_CLEAR */
#define _WDOG_CMD_CLEAR_MASK             0x1               /**< Bit mask for WDOG_CLEAR */
#define WDOG_CMD_CLEAR_DEFAULT           (0x00000000 << 0) /**< Shifted mode DEFAULT for WDOG_CMD */
#define WDOG_CMD_CLEAR_UNCHANGED         (0x00000000 << 0) /**< Shifted mode UNCHANGED for WDOG_CMD */
#define WDOG_CMD_CLEAR_CLEARED           (0x00000001 << 0) /**< Shifted mode CLEARED for WDOG_CMD */
#define _WDOG_CMD_CLEAR_DEFAULT          0x00000000        /**< Mode DEFAULT for WDOG_CMD */
#define _WDOG_CMD_CLEAR_UNCHANGED        0x00000000        /**< Mode UNCHANGED for WDOG_CMD */
#define _WDOG_CMD_CLEAR_CLEARED          0x00000001        /**< Mode CLEARED for WDOG_CMD */

/** Bit fields for WDOG SYNCBUSY */
#define _WDOG_SYNCBUSY_RESETVALUE        0x00000000        /**< Default value for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_MASK              0x00000003        /**< Mask for WDOG_SYNCBUSY */
#define WDOG_SYNCBUSY_CTRL               (1 << 0)          /**< WDOG_CTRL Register Busy */
#define _WDOG_SYNCBUSY_CTRL_SHIFT        0                 /**< Shift value for WDOG_CTRL */
#define _WDOG_SYNCBUSY_CTRL_MASK         0x1               /**< Bit mask for WDOG_CTRL */
#define WDOG_SYNCBUSY_CTRL_DEFAULT       (0x00000000 << 0) /**< Shifted mode DEFAULT for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_CTRL_DEFAULT      0x00000000        /**< Mode DEFAULT for WDOG_SYNCBUSY */
#define WDOG_SYNCBUSY_CMD                (1 << 1)          /**< WDOG_CMD Register Busy */
#define _WDOG_SYNCBUSY_CMD_SHIFT         1                 /**< Shift value for WDOG_CMD */
#define _WDOG_SYNCBUSY_CMD_MASK          0x2               /**< Bit mask for WDOG_CMD */
#define WDOG_SYNCBUSY_CMD_DEFAULT        (0x00000000 << 1) /**< Shifted mode DEFAULT for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_CMD_DEFAULT       0x00000000        /**< Mode DEFAULT for WDOG_SYNCBUSY */

/**
 * @}
 */

/**
 * @addtogroup EFM32G840F64_DEVINFO
 * @\{
 */
/** Bit fields for EFM32G840F64_DEVINFO */
#define _DEVINFO_UNIQUEL_MASK                (0xFFFFFFFF)
#define _DEVINFO_UNIQUEL_SHIFT               0
#define _DEVINFO_UNIQUEH_MASK                (0xFFFFFFFF)
#define _DEVINFO_UNIQUEH_SHIFT               0
#define _DEVINFO_MSIZE_FLASH_MASK            (0xFFFF0000)
#define _DEVINFO_MSIZE_FLASH_SHIFT           16
#define _DEVINFO_MSIZE_SRAM_MASK             (0x0000FFFF)
#define _DEVINFO_MSIZE_SRAM_SHIFT            0
#define _DEVINFO_PART_DEVICE_FAMILY_MASK     (0x00FF0000)
#define _DEVINFO_PART_DEVICE_FAMILY_SHIFT    16
#define _DEVINFO_PART_DEVICE_NUMBER_MASK     (0x0000FFFF)
#define _DEVINFO_PART_DEVICE_NUMBER_SHIFT    0

/**
 * @\}
 */

/**
 * @addtogroup EFM32G840F64_CALIB
 * @\{
 */

/** Bit fields for Calibration Special Registers */
#define _HFRCO_CALIBH_28MHZ_MASK     (0x000000FF)
#define _HFRCO_CALIBH_28MHZ_SHIFT    0
#define _HFRCO_CALIBL_21MHZ_MASK     (0xFF000000)
#define _HFRCO_CALIBL_21MHZ_SHIFT    24
#define _HFRCO_CALIBL_11MHZ_MASK     (0x00FF0000)
#define _HFRCO_CALIBL_11MHZ_SHIFT    16
#define _HFRCO_CALIBL_7MHZ_MASK      (0x0000FF00)
#define _HFRCO_CALIBL_7MHZ_SHIFT     8
#define _HFRCO_CALIBL_1MHZ_MASK      (0x000000FF)
#define _HFRCO_CALIBL_1MHZ_SHIFT     0
#define _ADC_CALIB_TEMP_MASK         (0xFF000000)
#define _ADC_CALIB_TEMP_SHIFT        24
#define _ADC_CALIB_TUNING_MASK       (0x00FFFFFF)
#define _ADC_CALIB_TUNING_SHIFT      0

/**
 * @\}
 */

/**************************************************************************//**
 *
 * Unlock codes
 *
 *****************************************************************************/
/** @addtogroup EFM32G840F64_MSC
 * @{
 */
#define MSC_UNLOCK_CODE      0x1B71 /**< MSC unlock code */
/**
 * @}
 *//** @addtogroup EFM32G840F64_EMU
 * @{
 */
#define EMU_UNLOCK_CODE      0xADE8 /**< EMU unlock code */
/**
 * @}
 *//** @addtogroup EFM32G840F64_CMU
 * @{
 */
#define CMU_UNLOCK_CODE      0x580E /**< CMU unlock code */
/**
 * @}
 *//** @addtogroup EFM32G840F64_GPIO
 * @{
 */
#define GPIO_UNLOCK_CODE     0xA534 /**< GPIO unlock code */
/**
 * @}
 *//** @addtogroup EFM32G840F64_TIMER
 * @{
 */
#define TIMER_UNLOCK_CODE    0xCE80 /**< TIMER unlock code */
/**
 * @}
 */

/**************************************************************************//**
 *
 * @defgroup EFM32G840F64_Alternate_Function EFM32G840F64 Alternate Function
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @defgroup EFM32G840F64_AF_Channels EFM32G840F64 AF Channels
 * @{
 *****************************************************************************/

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX          79
#define AFCHANLOC_MAX       4
/** Analog AF channels */
#define AFACHAN_MAX         37

/** Peripheral Alternate Function (AF) channels */
#define AF_CMU_CLKOUT0      0
#define AF_CMU_CLKOUT1      1
#define AF_EBI_ADDRDAT00    2
#define AF_EBI_ADDRDAT01    3
#define AF_EBI_ADDRDAT02    4
#define AF_EBI_ADDRDAT03    5
#define AF_EBI_ADDRDAT04    6
#define AF_EBI_ADDRDAT05    7
#define AF_EBI_ADDRDAT06    8
#define AF_EBI_ADDRDAT07    9
#define AF_EBI_ADDRDAT08    10
#define AF_EBI_ADDRDAT09    11
#define AF_EBI_ADDRDAT10    12
#define AF_EBI_ADDRDAT11    13
#define AF_EBI_ADDRDAT12    14
#define AF_EBI_ADDRDAT13    15
#define AF_EBI_ADDRDAT14    16
#define AF_EBI_ADDRDAT15    17
#define AF_EBI_CS0          18
#define AF_EBI_CS1          19
#define AF_EBI_CS2          20
#define AF_EBI_CS3          21
#define AF_EBI_WEn          22
#define AF_EBI_REn          23
#define AF_EBI_ARDY         24
#define AF_EBI_ALE          25
#define AF_TIMER0_CC0       26
#define AF_TIMER0_CC1       27
#define AF_TIMER0_CC2       28
#define AF_TIMER0_CCC0      29
#define AF_TIMER0_CCC1      30
#define AF_TIMER0_CCC2      31
#define AF_TIMER1_CC0       32
#define AF_TIMER1_CC1       33
#define AF_TIMER1_CC2       34
#define AF_TIMER1_CCC0      35
#define AF_TIMER1_CCC1      36
#define AF_TIMER1_CCC2      37
#define AF_TIMER2_CC0       38
#define AF_TIMER2_CC1       39
#define AF_TIMER2_CC2       40
#define AF_TIMER2_CCC0      41
#define AF_TIMER2_CCC1      42
#define AF_TIMER2_CCC2      43
#define AF_USART0_TX        44
#define AF_USART0_RX        45
#define AF_USART0_CLK       46
#define AF_USART0_CS        47
#define AF_USART1_TX        48
#define AF_USART1_RX        49
#define AF_USART1_CLK       50
#define AF_USART1_CS        51
#define AF_USART2_TX        52
#define AF_USART2_RX        53
#define AF_USART2_CLK       54
#define AF_USART2_CS        55
#define AF_UART0_TX         56
#define AF_UART0_RX         57
#define AF_UART0_CLK        58
#define AF_UART0_CS         59
#define AF_LEUART0_TX       60
#define AF_LEUART0_RX       61
#define AF_LEUART1_TX       62
#define AF_LEUART1_RX       63
#define AF_LETIMER0_OUT0    64
#define AF_LETIMER0_OUT1    65
#define AF_PCNT0_S0IN       66
#define AF_PCNT0_S1IN       67
#define AF_PCNT1_S0IN       68
#define AF_PCNT1_S1IN       69
#define AF_PCNT2_S0IN       70
#define AF_PCNT2_S1IN       71
#define AF_I2C0_SDA         72
#define AF_I2C0_SCL         73
#define AF_ACMP0_OUT        74
#define AF_ACMP1_OUT        75
#define AF_DBG_SWV          76
#define AF_DBG_SWDITMS      77
#define AF_DBG_SWCLKTCK     78

/** Analog AF channels */
#define AFA_MSC_TM0         0
#define AFA_MSC_TM1         1
#define AFA_MSC_TM2         2
#define AFA_ADC0_CH0        3
#define AFA_ADC0_CH1        4
#define AFA_ADC0_CH2        5
#define AFA_ADC0_CH3        6
#define AFA_ADC0_CH4        7
#define AFA_ADC0_CH5        8
#define AFA_ADC0_CH6        9
#define AFA_ADC0_CH7        10
#define AFA_ADC0_VCM        11
#define AFA_DAC0_OUT0       12
#define AFA_DAC0_OUT1       13
#define AFA_ACMP0_CH0       14
#define AFA_ACMP0_CH1       15
#define AFA_ACMP0_CH2       16
#define AFA_ACMP0_CH3       17
#define AFA_ACMP0_CH4       18
#define AFA_ACMP0_CH5       19
#define AFA_ACMP0_CH6       20
#define AFA_ACMP0_CH7       21
#define AFA_ACMP1_CH0       22
#define AFA_ACMP1_CH1       23
#define AFA_ACMP1_CH2       24
#define AFA_ACMP1_CH3       25
#define AFA_ACMP1_CH4       26
#define AFA_ACMP1_CH5       27
#define AFA_ACMP1_CH6       28
#define AFA_ACMP1_CH7       29
#define AFA_LCD_BCAP_P      30
#define AFA_LCD_BCAP_N      31
#define AFA_LCD_BEXT        32
#define AFA_HFXTAL_P        33
#define AFA_HFXTAL_N        34
#define AFA_LFXTAL_P        35
#define AFA_LFXTAL_N        36

/** Digital AF */
#define AF_TIMER_CC0(i)       (i == 0 ? AF_TIMER0_CC0 : i == 1 ? AF_TIMER1_CC0 : i == 2 ? AF_TIMER2_CC0 :  -1)
#define AF_UART_CLK(i)        (i == 0 ? AF_UART0_CLK :  -1)
#define AF_I2C_SDA(i)         (i == 0 ? AF_I2C0_SDA :  -1)
#define AF_TIMER_CC1(i)       (i == 0 ? AF_TIMER0_CC1 : i == 1 ? AF_TIMER1_CC1 : i == 2 ? AF_TIMER2_CC1 :  -1)
#define AF_USART_CS(i)        (i == 0 ? AF_USART0_CS : i == 1 ? AF_USART1_CS : i == 2 ? AF_USART2_CS :  -1)
#define AF_I2C_SCL(i)         (i == 0 ? AF_I2C0_SCL :  -1)
#define AF_TIMER_CC2(i)       (i == 0 ? AF_TIMER0_CC2 : i == 1 ? AF_TIMER1_CC2 : i == 2 ? AF_TIMER2_CC2 :  -1)
#define AF_USART_CLK(i)       (i == 0 ? AF_USART0_CLK : i == 1 ? AF_USART1_CLK : i == 2 ? AF_USART2_CLK :  -1)
#define AF_UART_RX(i)         (i == 0 ? AF_UART0_RX :  -1)
#define AF_UART_TX(i)         (i == 0 ? AF_UART0_TX :  -1)
#define AF_LETIMER_OUT1(i)    (i == 0 ? AF_LETIMER0_OUT1 :  -1)
#define AF_LEUART_RX(i)       (i == 0 ? AF_LEUART0_RX : i == 1 ? AF_LEUART1_RX :  -1)
#define AF_TIMER_CCC0(i)      (i == 0 ? AF_TIMER0_CCC0 : i == 1 ? AF_TIMER1_CCC0 : i == 2 ? AF_TIMER2_CCC0 :  -1)
#define AF_PCNT_S1IN(i)       (i == 0 ? AF_PCNT0_S1IN : i == 1 ? AF_PCNT1_S1IN : i == 2 ? AF_PCNT2_S1IN :  -1)
#define AF_LEUART_TX(i)       (i == 0 ? AF_LEUART0_TX : i == 1 ? AF_LEUART1_TX :  -1)
#define AF_TIMER_CCC2(i)      (i == 0 ? AF_TIMER0_CCC2 : i == 1 ? AF_TIMER1_CCC2 : i == 2 ? AF_TIMER2_CCC2 :  -1)
#define AF_TIMER_CCC1(i)      (i == 0 ? AF_TIMER0_CCC1 : i == 1 ? AF_TIMER1_CCC1 : i == 2 ? AF_TIMER2_CCC1 :  -1)
#define AF_USART_TX(i)        (i == 0 ? AF_USART0_TX : i == 1 ? AF_USART1_TX : i == 2 ? AF_USART2_TX :  -1)
#define AF_LETIMER_OUT0(i)    (i == 0 ? AF_LETIMER0_OUT0 :  -1)
#define AF_ACMP_OUT(i)        (i == 0 ? AF_ACMP0_OUT : i == 1 ? AF_ACMP1_OUT :  -1)
#define AF_USART_RX(i)        (i == 0 ? AF_USART0_RX : i == 1 ? AF_USART1_RX : i == 2 ? AF_USART2_RX :  -1)
#define AF_UART_CS(i)         (i == 0 ? AF_UART0_CS :  -1)
#define AF_PCNT_S0IN(i)       (i == 0 ? AF_PCNT0_S0IN : i == 1 ? AF_PCNT1_S0IN : i == 2 ? AF_PCNT2_S0IN :  -1)
#define AFA_DAC_OUT1(i)       (i == 0 ? AFA_DAC0_OUT1 :  -1)
#define AFA_DAC_OUT0(i)       (i == 0 ? AFA_DAC0_OUT0 :  -1)
#define AFA_ADC_CH7(i)        (i == 0 ? AFA_ADC0_CH7 :  -1)
#define AFA_ADC_VCM(i)        (i == 0 ? AFA_ADC0_VCM :  -1)
#define AFA_ACMP_CH1(i)       (i == 0 ? AFA_ACMP0_CH1 : i == 1 ? AFA_ACMP1_CH1 :  -1)
#define AFA_ADC_CH0(i)        (i == 0 ? AFA_ADC0_CH0 :  -1)
#define AFA_ACMP_CH0(i)       (i == 0 ? AFA_ACMP0_CH0 : i == 1 ? AFA_ACMP1_CH0 :  -1)
#define AFA_ACMP_CH3(i)       (i == 0 ? AFA_ACMP0_CH3 : i == 1 ? AFA_ACMP1_CH3 :  -1)
#define AFA_ADC_CH1(i)        (i == 0 ? AFA_ADC0_CH1 :  -1)
#define AFA_ACMP_CH2(i)       (i == 0 ? AFA_ACMP0_CH2 : i == 1 ? AFA_ACMP1_CH2 :  -1)
#define AFA_ADC_CH2(i)        (i == 0 ? AFA_ADC0_CH2 :  -1)
#define AFA_ADC_CH3(i)        (i == 0 ? AFA_ADC0_CH3 :  -1)
#define AFA_ADC_CH4(i)        (i == 0 ? AFA_ADC0_CH4 :  -1)
#define AFA_ADC_CH5(i)        (i == 0 ? AFA_ADC0_CH5 :  -1)
#define AFA_ADC_CH6(i)        (i == 0 ? AFA_ADC0_CH6 :  -1)
#define AFA_ACMP_CH5(i)       (i == 0 ? AFA_ACMP0_CH5 : i == 1 ? AFA_ACMP1_CH5 :  -1)
#define AFA_ACMP_CH4(i)       (i == 0 ? AFA_ACMP0_CH4 : i == 1 ? AFA_ACMP1_CH4 :  -1)
#define AFA_ACMP_CH7(i)       (i == 0 ? AFA_ACMP0_CH7 : i == 1 ? AFA_ACMP1_CH7 :  -1)
#define AFA_ACMP_CH6(i)       (i == 0 ? AFA_ACMP0_CH6 : i == 1 ? AFA_ACMP1_CH6 :  -1)

/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G840F64_AF_Ports EFM32G840F64 AF Ports
 * @{
 *****************************************************************************/

/** AF port for function f */
#define AF_CMU_CLKOUT0_PORT(f)      (f == 0 ? 0 : f == 1 ? 2 :  -1)
#define AF_CMU_CLKOUT1_PORT(f)      (f == 0 ? 0 : f == 1 ? 3 :  -1)
#define AF_EBI_ADDRDAT00_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT01_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT02_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT03_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT04_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT05_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT06_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT07_PORT(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT08_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT09_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT10_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT11_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT12_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT13_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT14_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT15_PORT(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_CS0_PORT(f)          (f == 0 ? 3 :  -1)
#define AF_EBI_CS1_PORT(f)          (f == 0 ? 3 :  -1)
#define AF_EBI_CS2_PORT(f)          (f == 0 ? 3 :  -1)
#define AF_EBI_CS3_PORT(f)          (f == 0 ? 3 :  -1)
#define AF_EBI_WEn_PORT(f)          (f == 0 ? 5 :  -1)
#define AF_EBI_REn_PORT(f)          (f == 0 ? 5 :  -1)
#define AF_EBI_ARDY_PORT(f)         (f == 0 ? 5 :  -1)
#define AF_EBI_ALE_PORT(f)          (f == 0 ? 5 :  -1)
#define AF_TIMER0_CC0_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 5 : f == 3 ? 3 :  -1)
#define AF_TIMER0_CC1_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 5 : f == 3 ? 3 :  -1)
#define AF_TIMER0_CC2_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 5 : f == 3 ? 3 :  -1)
#define AF_TIMER0_CCC0_PORT(f)      (f == 0 ? 0 : f == 1 ? 2 : f == 2 ? 5 : f == 3 ? 2 :  -1)
#define AF_TIMER0_CCC1_PORT(f)      (f == 0 ? 0 : f == 1 ? 2 : f == 2 ? 5 : f == 3 ? 2 :  -1)
#define AF_TIMER0_CCC2_PORT(f)      (f == 0 ? 0 : f == 1 ? 2 : f == 2 ? 5 : f == 3 ? 2 :  -1)
#define AF_TIMER1_CC0_PORT(f)       (f == 0 ? 2 : f == 1 ? 4 : f == 2 ? 1 :  -1)
#define AF_TIMER1_CC1_PORT(f)       (f == 0 ? 2 : f == 1 ? 4 : f == 2 ? 1 :  -1)
#define AF_TIMER1_CC2_PORT(f)       (f == 0 ? 2 : f == 1 ? 4 : f == 2 ? 1 :  -1)
#define AF_TIMER1_CCC0_PORT(f)      (-1)
#define AF_TIMER1_CCC1_PORT(f)      (-1)
#define AF_TIMER1_CCC2_PORT(f)      (-1)
#define AF_TIMER2_CC0_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 2 :  -1)
#define AF_TIMER2_CC1_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 2 :  -1)
#define AF_TIMER2_CC2_PORT(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 2 :  -1)
#define AF_TIMER2_CCC0_PORT(f)      (-1)
#define AF_TIMER2_CCC1_PORT(f)      (-1)
#define AF_TIMER2_CCC2_PORT(f)      (-1)
#define AF_USART0_TX_PORT(f)        (f == 0 ? 4 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_USART0_RX_PORT(f)        (f == 0 ? 4 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_USART0_CLK_PORT(f)       (f == 0 ? 4 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_USART0_CS_PORT(f)        (f == 0 ? 4 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_USART1_TX_PORT(f)        (f == 0 ? 2 : f == 1 ? 3 :  -1)
#define AF_USART1_RX_PORT(f)        (f == 0 ? 2 : f == 1 ? 3 :  -1)
#define AF_USART1_CLK_PORT(f)       (f == 0 ? 1 : f == 1 ? 3 :  -1)
#define AF_USART1_CS_PORT(f)        (f == 0 ? 1 : f == 1 ? 3 :  -1)
#define AF_USART2_TX_PORT(f)        (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_USART2_RX_PORT(f)        (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_USART2_CLK_PORT(f)       (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_USART2_CS_PORT(f)        (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_UART0_TX_PORT(f)         (f == 0 ? 5 : f == 1 ? 4 : f == 2 ? 0 : f == 3 ? 2 :  -1)
#define AF_UART0_RX_PORT(f)         (f == 0 ? 5 : f == 1 ? 4 : f == 2 ? 0 : f == 3 ? 2 :  -1)
#define AF_UART0_CLK_PORT(f)        (-1)
#define AF_UART0_CS_PORT(f)         (-1)
#define AF_LEUART0_TX_PORT(f)       (f == 0 ? 3 : f == 1 ? 1 : f == 2 ? 4 :  -1)
#define AF_LEUART0_RX_PORT(f)       (f == 0 ? 3 : f == 1 ? 1 : f == 2 ? 4 :  -1)
#define AF_LEUART1_TX_PORT(f)       (f == 0 ? 2 : f == 1 ? 0 :  -1)
#define AF_LEUART1_RX_PORT(f)       (f == 0 ? 2 : f == 1 ? 0 :  -1)
#define AF_LETIMER0_OUT0_PORT(f)    (f == 0 ? 3 : f == 1 ? 1 : f == 2 ? 5 : f == 3 ? 2 :  -1)
#define AF_LETIMER0_OUT1_PORT(f)    (f == 0 ? 3 : f == 1 ? 1 : f == 2 ? 5 : f == 3 ? 2 :  -1)
#define AF_PCNT0_S0IN_PORT(f)       (f == 0 ? 2 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_PCNT0_S1IN_PORT(f)       (f == 0 ? 2 : f == 1 ? 4 : f == 2 ? 2 :  -1)
#define AF_PCNT1_S0IN_PORT(f)       (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_PCNT1_S1IN_PORT(f)       (f == 0 ? 2 : f == 1 ? 1 :  -1)
#define AF_PCNT2_S0IN_PORT(f)       (f == 0 ? 3 : f == 1 ? 4 :  -1)
#define AF_PCNT2_S1IN_PORT(f)       (f == 0 ? 3 : f == 1 ? 4 :  -1)
#define AF_I2C0_SDA_PORT(f)         (f == 0 ? 0 : f == 1 ? 3 : f == 2 ? 2 : f == 3 ? 3 :  -1)
#define AF_I2C0_SCL_PORT(f)         (f == 0 ? 0 : f == 1 ? 3 : f == 2 ? 2 : f == 3 ? 3 :  -1)
#define AF_ACMP0_OUT_PORT(f)        (f == 0 ? 4 : f == 1 ? 4 :  -1)
#define AF_ACMP1_OUT_PORT(f)        (f == 0 ? 5 : f == 1 ? 4 :  -1)
#define AF_DBG_SWV_PORT(f)          (f == 0 ? 5 : f == 1 ? 2 :  -1)
#define AF_DBG_SWDITMS_PORT(f)      (f == 0 ? 5 : f == 1 ? 5 :  -1)
#define AF_DBG_SWCLKTCK_PORT(f)     (f == 0 ? 5 : f == 1 ? 5 :  -1)

/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G840F64_AF_Pins EFM32G840F64 AF Pins
 * @{
 *****************************************************************************/

/** AF pin for function f */
#define AF_CMU_CLKOUT0_PIN(f)      (f == 0 ? 2 : f == 1 ? 12 :  -1)
#define AF_CMU_CLKOUT1_PIN(f)      (f == 0 ? 1 : f == 1 ? 8 :  -1)
#define AF_EBI_ADDRDAT00_PIN(f)    (f == 0 ? 8 :  -1)
#define AF_EBI_ADDRDAT01_PIN(f)    (f == 0 ? 9 :  -1)
#define AF_EBI_ADDRDAT02_PIN(f)    (f == 0 ? 10 :  -1)
#define AF_EBI_ADDRDAT03_PIN(f)    (f == 0 ? 11 :  -1)
#define AF_EBI_ADDRDAT04_PIN(f)    (f == 0 ? 12 :  -1)
#define AF_EBI_ADDRDAT05_PIN(f)    (f == 0 ? 13 :  -1)
#define AF_EBI_ADDRDAT06_PIN(f)    (f == 0 ? 14 :  -1)
#define AF_EBI_ADDRDAT07_PIN(f)    (f == 0 ? 15 :  -1)
#define AF_EBI_ADDRDAT08_PIN(f)    (f == 0 ? 15 :  -1)
#define AF_EBI_ADDRDAT09_PIN(f)    (f == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT10_PIN(f)    (f == 0 ? 1 :  -1)
#define AF_EBI_ADDRDAT11_PIN(f)    (f == 0 ? 2 :  -1)
#define AF_EBI_ADDRDAT12_PIN(f)    (f == 0 ? 3 :  -1)
#define AF_EBI_ADDRDAT13_PIN(f)    (f == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT14_PIN(f)    (f == 0 ? 5 :  -1)
#define AF_EBI_ADDRDAT15_PIN(f)    (f == 0 ? 6 :  -1)
#define AF_EBI_CS0_PIN(f)          (f == 0 ? 9 :  -1)
#define AF_EBI_CS1_PIN(f)          (f == 0 ? 10 :  -1)
#define AF_EBI_CS2_PIN(f)          (f == 0 ? 11 :  -1)
#define AF_EBI_CS3_PIN(f)          (f == 0 ? 12 :  -1)
#define AF_EBI_WEn_PIN(f)          (f == 0 ? 4 :  -1)
#define AF_EBI_REn_PIN(f)          (f == 0 ? 5 :  -1)
#define AF_EBI_ARDY_PIN(f)         (f == 0 ? 2 :  -1)
#define AF_EBI_ALE_PIN(f)          (f == 0 ? 3 :  -1)
#define AF_TIMER0_CC0_PIN(f)       (f == 0 ? 0 : f == 1 ? 0 : f == 2 ? 6 : f == 3 ? 1 :  -1)
#define AF_TIMER0_CC1_PIN(f)       (f == 0 ? 1 : f == 1 ? 1 : f == 2 ? 7 : f == 3 ? 2 :  -1)
#define AF_TIMER0_CC2_PIN(f)       (f == 0 ? 2 : f == 1 ? 2 : f == 2 ? 8 : f == 3 ? 3 :  -1)
#define AF_TIMER0_CCC0_PIN(f)      (f == 0 ? 3 : f == 1 ? 13 : f == 2 ? 3 : f == 3 ? 13 :  -1)
#define AF_TIMER0_CCC1_PIN(f)      (f == 0 ? 4 : f == 1 ? 14 : f == 2 ? 4 : f == 3 ? 14 :  -1)
#define AF_TIMER0_CCC2_PIN(f)      (f == 0 ? 5 : f == 1 ? 15 : f == 2 ? 5 : f == 3 ? 15 :  -1)
#define AF_TIMER1_CC0_PIN(f)       (f == 0 ? 13 : f == 1 ? 10 : f == 2 ? 0 :  -1)
#define AF_TIMER1_CC1_PIN(f)       (f == 0 ? 14 : f == 1 ? 11 : f == 2 ? 1 :  -1)
#define AF_TIMER1_CC2_PIN(f)       (f == 0 ? 15 : f == 1 ? 12 : f == 2 ? 2 :  -1)
#define AF_TIMER1_CCC0_PIN(f)      (-1)
#define AF_TIMER1_CCC1_PIN(f)      (-1)
#define AF_TIMER1_CCC2_PIN(f)      (-1)
#define AF_TIMER2_CC0_PIN(f)       (f == 0 ? 8 : f == 1 ? 12 : f == 2 ? 8 :  -1)
#define AF_TIMER2_CC1_PIN(f)       (f == 0 ? 9 : f == 1 ? 13 : f == 2 ? 9 :  -1)
#define AF_TIMER2_CC2_PIN(f)       (f == 0 ? 10 : f == 1 ? 14 : f == 2 ? 10 :  -1)
#define AF_TIMER2_CCC0_PIN(f)      (-1)
#define AF_TIMER2_CCC1_PIN(f)      (-1)
#define AF_TIMER2_CCC2_PIN(f)      (-1)
#define AF_USART0_TX_PIN(f)        (f == 0 ? 10 : f == 1 ? 7 : f == 2 ? 11 :  -1)
#define AF_USART0_RX_PIN(f)        (f == 0 ? 11 : f == 1 ? 6 : f == 2 ? 10 :  -1)
#define AF_USART0_CLK_PIN(f)       (f == 0 ? 12 : f == 1 ? 5 : f == 2 ? 9 :  -1)
#define AF_USART0_CS_PIN(f)        (f == 0 ? 13 : f == 1 ? 4 : f == 2 ? 8 :  -1)
#define AF_USART1_TX_PIN(f)        (f == 0 ? 0 : f == 1 ? 0 :  -1)
#define AF_USART1_RX_PIN(f)        (f == 0 ? 1 : f == 1 ? 1 :  -1)
#define AF_USART1_CLK_PIN(f)       (f == 0 ? 7 : f == 1 ? 2 :  -1)
#define AF_USART1_CS_PIN(f)        (f == 0 ? 8 : f == 1 ? 3 :  -1)
#define AF_USART2_TX_PIN(f)        (f == 0 ? 2 : f == 1 ? 3 :  -1)
#define AF_USART2_RX_PIN(f)        (f == 0 ? 3 : f == 1 ? 4 :  -1)
#define AF_USART2_CLK_PIN(f)       (f == 0 ? 4 : f == 1 ? 5 :  -1)
#define AF_USART2_CS_PIN(f)        (f == 0 ? 5 : f == 1 ? 6 :  -1)
#define AF_UART0_TX_PIN(f)         (f == 0 ? 6 : f == 1 ? 0 : f == 2 ? 3 : f == 3 ? 14 :  -1)
#define AF_UART0_RX_PIN(f)         (f == 0 ? 7 : f == 1 ? 1 : f == 2 ? 4 : f == 3 ? 15 :  -1)
#define AF_UART0_CLK_PIN(f)        (-1)
#define AF_UART0_CS_PIN(f)         (-1)
#define AF_LEUART0_TX_PIN(f)       (f == 0 ? 4 : f == 1 ? 13 : f == 2 ? 14 :  -1)
#define AF_LEUART0_RX_PIN(f)       (f == 0 ? 5 : f == 1 ? 14 : f == 2 ? 15 :  -1)
#define AF_LEUART1_TX_PIN(f)       (f == 0 ? 6 : f == 1 ? 5 :  -1)
#define AF_LEUART1_RX_PIN(f)       (f == 0 ? 7 : f == 1 ? 6 :  -1)
#define AF_LETIMER0_OUT0_PIN(f)    (f == 0 ? 6 : f == 1 ? 11 : f == 2 ? 0 : f == 3 ? 4 :  -1)
#define AF_LETIMER0_OUT1_PIN(f)    (f == 0 ? 7 : f == 1 ? 12 : f == 2 ? 1 : f == 3 ? 5 :  -1)
#define AF_PCNT0_S0IN_PIN(f)       (f == 0 ? 13 : f == 1 ? 0 : f == 2 ? 0 :  -1)
#define AF_PCNT0_S1IN_PIN(f)       (f == 0 ? 14 : f == 1 ? 1 : f == 2 ? 1 :  -1)
#define AF_PCNT1_S0IN_PIN(f)       (f == 0 ? 4 : f == 1 ? 3 :  -1)
#define AF_PCNT1_S1IN_PIN(f)       (f == 0 ? 5 : f == 1 ? 4 :  -1)
#define AF_PCNT2_S0IN_PIN(f)       (f == 0 ? 0 : f == 1 ? 8 :  -1)
#define AF_PCNT2_S1IN_PIN(f)       (f == 0 ? 1 : f == 1 ? 9 :  -1)
#define AF_I2C0_SDA_PIN(f)         (f == 0 ? 0 : f == 1 ? 6 : f == 2 ? 6 : f == 3 ? 14 :  -1)
#define AF_I2C0_SCL_PIN(f)         (f == 0 ? 1 : f == 1 ? 7 : f == 2 ? 7 : f == 3 ? 15 :  -1)
#define AF_ACMP0_OUT_PIN(f)        (f == 0 ? 13 : f == 1 ? 2 :  -1)
#define AF_ACMP1_OUT_PIN(f)        (f == 0 ? 2 : f == 1 ? 3 :  -1)
#define AF_DBG_SWV_PIN(f)          (f == 0 ? 2 : f == 1 ? 15 :  -1)
#define AF_DBG_SWDITMS_PIN(f)      (f == 0 ? 1 : f == 1 ? 1 :  -1)
#define AF_DBG_SWCLKTCK_PIN(f)     (f == 0 ? 0 : f == 1 ? 0 :  -1)

/**
 * @}
 */

/** Grouped by channel c, function f */
#define AF_PORT(c, f)    (               \
    c == 0 ? AF_CMU_CLKOUT0_PORT(f) :    \
    c == 1 ? AF_CMU_CLKOUT1_PORT(f) :    \
    c == 2 ? AF_EBI_ADDRDAT00_PORT(f) :  \
    c == 3 ? AF_EBI_ADDRDAT01_PORT(f) :  \
    c == 4 ? AF_EBI_ADDRDAT02_PORT(f) :  \
    c == 5 ? AF_EBI_ADDRDAT03_PORT(f) :  \
    c == 6 ? AF_EBI_ADDRDAT04_PORT(f) :  \
    c == 7 ? AF_EBI_ADDRDAT05_PORT(f) :  \
    c == 8 ? AF_EBI_ADDRDAT06_PORT(f) :  \
    c == 9 ? AF_EBI_ADDRDAT07_PORT(f) :  \
    c == 10 ? AF_EBI_ADDRDAT08_PORT(f) : \
    c == 11 ? AF_EBI_ADDRDAT09_PORT(f) : \
    c == 12 ? AF_EBI_ADDRDAT10_PORT(f) : \
    c == 13 ? AF_EBI_ADDRDAT11_PORT(f) : \
    c == 14 ? AF_EBI_ADDRDAT12_PORT(f) : \
    c == 15 ? AF_EBI_ADDRDAT13_PORT(f) : \
    c == 16 ? AF_EBI_ADDRDAT14_PORT(f) : \
    c == 17 ? AF_EBI_ADDRDAT15_PORT(f) : \
    c == 18 ? AF_EBI_CS0_PORT(f) :       \
    c == 19 ? AF_EBI_CS1_PORT(f) :       \
    c == 20 ? AF_EBI_CS2_PORT(f) :       \
    c == 21 ? AF_EBI_CS3_PORT(f) :       \
    c == 22 ? AF_EBI_WEn_PORT(f) :       \
    c == 23 ? AF_EBI_REn_PORT(f) :       \
    c == 24 ? AF_EBI_ARDY_PORT(f) :      \
    c == 25 ? AF_EBI_ALE_PORT(f) :       \
    c == 26 ? AF_TIMER0_CC0_PORT(f) :    \
    c == 27 ? AF_TIMER0_CC1_PORT(f) :    \
    c == 28 ? AF_TIMER0_CC2_PORT(f) :    \
    c == 29 ? AF_TIMER0_CCC0_PORT(f) :   \
    c == 30 ? AF_TIMER0_CCC1_PORT(f) :   \
    c == 31 ? AF_TIMER0_CCC2_PORT(f) :   \
    c == 32 ? AF_TIMER1_CC0_PORT(f) :    \
    c == 33 ? AF_TIMER1_CC1_PORT(f) :    \
    c == 34 ? AF_TIMER1_CC2_PORT(f) :    \
    c == 35 ? AF_TIMER1_CCC0_PORT(f) :   \
    c == 36 ? AF_TIMER1_CCC1_PORT(f) :   \
    c == 37 ? AF_TIMER1_CCC2_PORT(f) :   \
    c == 38 ? AF_TIMER2_CC0_PORT(f) :    \
    c == 39 ? AF_TIMER2_CC1_PORT(f) :    \
    c == 40 ? AF_TIMER2_CC2_PORT(f) :    \
    c == 41 ? AF_TIMER2_CCC0_PORT(f) :   \
    c == 42 ? AF_TIMER2_CCC1_PORT(f) :   \
    c == 43 ? AF_TIMER2_CCC2_PORT(f) :   \
    c == 44 ? AF_USART0_TX_PORT(f) :     \
    c == 45 ? AF_USART0_RX_PORT(f) :     \
    c == 46 ? AF_USART0_CLK_PORT(f) :    \
    c == 47 ? AF_USART0_CS_PORT(f) :     \
    c == 48 ? AF_USART1_TX_PORT(f) :     \
    c == 49 ? AF_USART1_RX_PORT(f) :     \
    c == 50 ? AF_USART1_CLK_PORT(f) :    \
    c == 51 ? AF_USART1_CS_PORT(f) :     \
    c == 52 ? AF_USART2_TX_PORT(f) :     \
    c == 53 ? AF_USART2_RX_PORT(f) :     \
    c == 54 ? AF_USART2_CLK_PORT(f) :    \
    c == 55 ? AF_USART2_CS_PORT(f) :     \
    c == 56 ? AF_UART0_TX_PORT(f) :      \
    c == 57 ? AF_UART0_RX_PORT(f) :      \
    c == 58 ? AF_UART0_CLK_PORT(f) :     \
    c == 59 ? AF_UART0_CS_PORT(f) :      \
    c == 60 ? AF_LEUART0_TX_PORT(f) :    \
    c == 61 ? AF_LEUART0_RX_PORT(f) :    \
    c == 62 ? AF_LEUART1_TX_PORT(f) :    \
    c == 63 ? AF_LEUART1_RX_PORT(f) :    \
    c == 64 ? AF_LETIMER0_OUT0_PORT(f) : \
    c == 65 ? AF_LETIMER0_OUT1_PORT(f) : \
    c == 66 ? AF_PCNT0_S0IN_PORT(f) :    \
    c == 67 ? AF_PCNT0_S1IN_PORT(f) :    \
    c == 68 ? AF_PCNT1_S0IN_PORT(f) :    \
    c == 69 ? AF_PCNT1_S1IN_PORT(f) :    \
    c == 70 ? AF_PCNT2_S0IN_PORT(f) :    \
    c == 71 ? AF_PCNT2_S1IN_PORT(f) :    \
    c == 72 ? AF_I2C0_SDA_PORT(f) :      \
    c == 73 ? AF_I2C0_SCL_PORT(f) :      \
    c == 74 ? AF_ACMP0_OUT_PORT(f) :     \
    c == 75 ? AF_ACMP1_OUT_PORT(f) :     \
    c == 76 ? AF_DBG_SWV_PORT(f) :       \
    c == 77 ? AF_DBG_SWDITMS_PORT(f) :   \
    c == 78 ? AF_DBG_SWCLKTCK_PORT(f) :  \
    -1)

#define AF_PIN(c, f)     (              \
    c == 0 ? AF_CMU_CLKOUT0_PIN(f) :    \
    c == 1 ? AF_CMU_CLKOUT1_PIN(f) :    \
    c == 2 ? AF_EBI_ADDRDAT00_PIN(f) :  \
    c == 3 ? AF_EBI_ADDRDAT01_PIN(f) :  \
    c == 4 ? AF_EBI_ADDRDAT02_PIN(f) :  \
    c == 5 ? AF_EBI_ADDRDAT03_PIN(f) :  \
    c == 6 ? AF_EBI_ADDRDAT04_PIN(f) :  \
    c == 7 ? AF_EBI_ADDRDAT05_PIN(f) :  \
    c == 8 ? AF_EBI_ADDRDAT06_PIN(f) :  \
    c == 9 ? AF_EBI_ADDRDAT07_PIN(f) :  \
    c == 10 ? AF_EBI_ADDRDAT08_PIN(f) : \
    c == 11 ? AF_EBI_ADDRDAT09_PIN(f) : \
    c == 12 ? AF_EBI_ADDRDAT10_PIN(f) : \
    c == 13 ? AF_EBI_ADDRDAT11_PIN(f) : \
    c == 14 ? AF_EBI_ADDRDAT12_PIN(f) : \
    c == 15 ? AF_EBI_ADDRDAT13_PIN(f) : \
    c == 16 ? AF_EBI_ADDRDAT14_PIN(f) : \
    c == 17 ? AF_EBI_ADDRDAT15_PIN(f) : \
    c == 18 ? AF_EBI_CS0_PIN(f) :       \
    c == 19 ? AF_EBI_CS1_PIN(f) :       \
    c == 20 ? AF_EBI_CS2_PIN(f) :       \
    c == 21 ? AF_EBI_CS3_PIN(f) :       \
    c == 22 ? AF_EBI_WEn_PIN(f) :       \
    c == 23 ? AF_EBI_REn_PIN(f) :       \
    c == 24 ? AF_EBI_ARDY_PIN(f) :      \
    c == 25 ? AF_EBI_ALE_PIN(f) :       \
    c == 26 ? AF_TIMER0_CC0_PIN(f) :    \
    c == 27 ? AF_TIMER0_CC1_PIN(f) :    \
    c == 28 ? AF_TIMER0_CC2_PIN(f) :    \
    c == 29 ? AF_TIMER0_CCC0_PIN(f) :   \
    c == 30 ? AF_TIMER0_CCC1_PIN(f) :   \
    c == 31 ? AF_TIMER0_CCC2_PIN(f) :   \
    c == 32 ? AF_TIMER1_CC0_PIN(f) :    \
    c == 33 ? AF_TIMER1_CC1_PIN(f) :    \
    c == 34 ? AF_TIMER1_CC2_PIN(f) :    \
    c == 35 ? AF_TIMER1_CCC0_PIN(f) :   \
    c == 36 ? AF_TIMER1_CCC1_PIN(f) :   \
    c == 37 ? AF_TIMER1_CCC2_PIN(f) :   \
    c == 38 ? AF_TIMER2_CC0_PIN(f) :    \
    c == 39 ? AF_TIMER2_CC1_PIN(f) :    \
    c == 40 ? AF_TIMER2_CC2_PIN(f) :    \
    c == 41 ? AF_TIMER2_CCC0_PIN(f) :   \
    c == 42 ? AF_TIMER2_CCC1_PIN(f) :   \
    c == 43 ? AF_TIMER2_CCC2_PIN(f) :   \
    c == 44 ? AF_USART0_TX_PIN(f) :     \
    c == 45 ? AF_USART0_RX_PIN(f) :     \
    c == 46 ? AF_USART0_CLK_PIN(f) :    \
    c == 47 ? AF_USART0_CS_PIN(f) :     \
    c == 48 ? AF_USART1_TX_PIN(f) :     \
    c == 49 ? AF_USART1_RX_PIN(f) :     \
    c == 50 ? AF_USART1_CLK_PIN(f) :    \
    c == 51 ? AF_USART1_CS_PIN(f) :     \
    c == 52 ? AF_USART2_TX_PIN(f) :     \
    c == 53 ? AF_USART2_RX_PIN(f) :     \
    c == 54 ? AF_USART2_CLK_PIN(f) :    \
    c == 55 ? AF_USART2_CS_PIN(f) :     \
    c == 56 ? AF_UART0_TX_PIN(f) :      \
    c == 57 ? AF_UART0_RX_PIN(f) :      \
    c == 58 ? AF_UART0_CLK_PIN(f) :     \
    c == 59 ? AF_UART0_CS_PIN(f) :      \
    c == 60 ? AF_LEUART0_TX_PIN(f) :    \
    c == 61 ? AF_LEUART0_RX_PIN(f) :    \
    c == 62 ? AF_LEUART1_TX_PIN(f) :    \
    c == 63 ? AF_LEUART1_RX_PIN(f) :    \
    c == 64 ? AF_LETIMER0_OUT0_PIN(f) : \
    c == 65 ? AF_LETIMER0_OUT1_PIN(f) : \
    c == 66 ? AF_PCNT0_S0IN_PIN(f) :    \
    c == 67 ? AF_PCNT0_S1IN_PIN(f) :    \
    c == 68 ? AF_PCNT1_S0IN_PIN(f) :    \
    c == 69 ? AF_PCNT1_S1IN_PIN(f) :    \
    c == 70 ? AF_PCNT2_S0IN_PIN(f) :    \
    c == 71 ? AF_PCNT2_S1IN_PIN(f) :    \
    c == 72 ? AF_I2C0_SDA_PIN(f) :      \
    c == 73 ? AF_I2C0_SCL_PIN(f) :      \
    c == 74 ? AF_ACMP0_OUT_PIN(f) :     \
    c == 75 ? AF_ACMP1_OUT_PIN(f) :     \
    c == 76 ? AF_DBG_SWV_PIN(f) :       \
    c == 77 ? AF_DBG_SWDITMS_PIN(f) :   \
    c == 78 ? AF_DBG_SWCLKTCK_PIN(f) :  \
    -1)

/** AF channel output count for channel c */
#define AF_COUNT(c)      ( \
    c == 0 ? 2 :           \
    c == 1 ? 2 :           \
    c == 2 ? 1 :           \
    c == 3 ? 1 :           \
    c == 4 ? 1 :           \
    c == 5 ? 1 :           \
    c == 6 ? 1 :           \
    c == 7 ? 1 :           \
    c == 8 ? 1 :           \
    c == 9 ? 1 :           \
    c == 10 ? 1 :          \
    c == 11 ? 1 :          \
    c == 12 ? 1 :          \
    c == 13 ? 1 :          \
    c == 14 ? 1 :          \
    c == 15 ? 1 :          \
    c == 16 ? 1 :          \
    c == 17 ? 1 :          \
    c == 18 ? 1 :          \
    c == 19 ? 1 :          \
    c == 20 ? 1 :          \
    c == 21 ? 1 :          \
    c == 22 ? 1 :          \
    c == 23 ? 1 :          \
    c == 24 ? 1 :          \
    c == 25 ? 1 :          \
    c == 26 ? 4 :          \
    c == 27 ? 4 :          \
    c == 28 ? 4 :          \
    c == 29 ? 4 :          \
    c == 30 ? 4 :          \
    c == 31 ? 4 :          \
    c == 32 ? 3 :          \
    c == 33 ? 3 :          \
    c == 34 ? 3 :          \
    c == 35 ? 0 :          \
    c == 36 ? 0 :          \
    c == 37 ? 0 :          \
    c == 38 ? 3 :          \
    c == 39 ? 3 :          \
    c == 40 ? 3 :          \
    c == 41 ? 0 :          \
    c == 42 ? 0 :          \
    c == 43 ? 0 :          \
    c == 44 ? 3 :          \
    c == 45 ? 3 :          \
    c == 46 ? 3 :          \
    c == 47 ? 3 :          \
    c == 48 ? 2 :          \
    c == 49 ? 2 :          \
    c == 50 ? 2 :          \
    c == 51 ? 2 :          \
    c == 52 ? 2 :          \
    c == 53 ? 2 :          \
    c == 54 ? 2 :          \
    c == 55 ? 2 :          \
    c == 56 ? 4 :          \
    c == 57 ? 4 :          \
    c == 58 ? 0 :          \
    c == 59 ? 0 :          \
    c == 60 ? 3 :          \
    c == 61 ? 3 :          \
    c == 62 ? 2 :          \
    c == 63 ? 2 :          \
    c == 64 ? 4 :          \
    c == 65 ? 4 :          \
    c == 66 ? 3 :          \
    c == 67 ? 3 :          \
    c == 68 ? 2 :          \
    c == 69 ? 2 :          \
    c == 70 ? 2 :          \
    c == 71 ? 2 :          \
    c == 72 ? 4 :          \
    c == 73 ? 4 :          \
    c == 74 ? 2 :          \
    c == 75 ? 2 :          \
    c == 76 ? 2 :          \
    c == 77 ? 2 :          \
    c == 78 ? 2 :          \
    -1)

#endif

/**
 * @}
 */

/**
 * @}
 */

/**
 *  @brief Set the value of a bit field within a register.
 *
 *  @param REG
 *       The register to update
 *  @param MASK
 *       The mask for the bit field to update
 *  @param VALUE
 *       The value to write to the bit field
 *  @param OFFSET
 *       The number of bits that the field is offset within the register.
 *       0 (zero) means LSB.
 */
#define SET_BIT_FIELD(REG, MASK, VALUE, OFFSET) \
  REG = ((REG) &~(MASK)) | (((VALUE) << (OFFSET)) & (MASK));

/**
 * @}
 */

/**
 * @}
 */
