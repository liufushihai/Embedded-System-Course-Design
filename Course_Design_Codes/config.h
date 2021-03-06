/****************************************Copyright (c)**************************************************

********************************************************************************************************/
//这一段无需改动
#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE 0
#endif

typedef unsigned char  uint8;                   /* 无符号8位整型变量                        */
typedef signed   char  int8;                    /* 有符号8位整型变量                        */
typedef unsigned short uint16;                  /* 无符号16位整型变量                       */
typedef signed   short int16;                   /* 有符号16位整型变量                       */
typedef unsigned int   uint32;                  /* 无符号32位整型变量                       */
typedef signed   int   int32;                   /* 有符号32位整型变量                       */
typedef float          fp32;                    /* 单精度浮点数（32位长度）                 */
typedef double         fp64;                    /* 双精度浮点数（64位长度）                 */


/********************************/
/*      ARM的特殊代码           */
/********************************/
//这一段无需改动

#include    "LPC2294.h"


/********************************/
/*     应用程序配置             */
/********************************/
//以下根据需要改动

/********************************/
/*     本例子的配置             */
/********************************/
/* 系统设置, Fosc、Fcclk、Fcco、Fpclk必须定义*/
#define Fosc            11059200                    //晶振频率,10MHz~25MHz，应当与实际一至
#define Fcclk           (Fosc * 4)                  //系统频率，必须为Fosc的整数倍(1~32)，且<=60MHZ
#define Fcco            (Fcclk * 4)                 //CCO频率，必须为Fcclk的2、4、8、16倍，范围为156MHz~320MHz
#define Fpclk           (Fcclk / 4) * 1             //VPB时钟频率，只能为(Fcclk / 4)的1 ~ 4倍

#include    "target.h"              //这一句不能删除

// LPC21000 misc uart0 definitions
#define UART0_PCB_PINSEL_CFG     (INT32U)0x00000005
#define UART0_INT_BIT            (INT32U)0x0040
#define LCR_DISABLE_LATCH_ACCESS (INT32U)0x00000000
#define LCR_ENABLE_LATCH_ACCESS  (INT32U)0x00000080
#define LCR_DISABLE_BREAK_TRANS  (INT32U)0x00000000
#define LCR_ODD_PARITY           (INT32U)0x00000000
#define LCR_ENABLE_PARITY        (INT32U)0x00000008
#define LCR_1_STOP_BIT           (INT32U)0x00000000
#define LCR_CHAR_LENGTH_8        (INT32U)0x00000003 
#define LSR_THR_EMPTY            (INT32U)0x00000020

/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/
