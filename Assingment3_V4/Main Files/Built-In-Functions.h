#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

#include "../all-includes.h"

/* Set_Bit --> Sets any bit ( ON )*/
/* To set a bit, We use ( OR ) as ( 0 --> Makes No change ) and ( 1 --> Sets ON )   */
#define Set_Bit(reg,bit)             reg|= 1<<bit
#define Set_Low_Nibble(reg)          reg|=0x0f
#define Set_High_Nibble(reg)         reg|=0xf0

/* Clr_Bit --> Sets any bit ( OFF ) == ( Clear any bit )*/
/* To clear a bit, We use ( And ) as ( 1 --> Makes No change ) and ( 0 --> Sets OFF )   */
#define Clr_Bit(reg,bit)             reg&=~(1<<bit)
#define Clr_Low_Nibble(reg)          reg&=0xf0
#define Clr_High_Nibble(reg)         reg&=0x0f

/* Toggle_Bit --> Flip any bit  */
/* To Flip a bit, We use ( Exclusive OR ) as ( 0 --> Makes No change ) and ( 1 --> Toggle )   */
#define Toggle_Bit(reg,bit)         reg^=(1<<bit)
#define Toggle_Low_Nibble(reg)      reg^=0x0f
#define Toggle_High_Nibble(reg)     reg^=0xf0

/* Get_Bit --> Gets any bit */
/* To get a bit, We use ( AND ) as ( 1 --> Makes No change ) and ( 0 --> Sets OFF )  */
#define Get_Bit(reg,bit)            ((reg>>bit)&(0x01))
#define Get_Low_Nibble(reg)         reg&0x0f
#define Get_High_Nibble(reg)        reg>>4

/* Assign_Bit --> Assigns any bit */
/* To assign a bit, We use ( If ) condition to Set or Clear  */
#define Assign_Bit(reg,bit,value)\
    do{if(value==0)            reg&=~(1<<bit);   \
    else if (value ==1)        reg|=(1<<bit);	 }while(0)

#define Assign_Low_Nibble(reg,value)            reg=(reg&0xf0)|(value&0x0f )
/*   do{if(value==0)            reg&=0xf0;
 else if (value ==1)        reg|=0x0f;   }while(0) */

#define Assign_High_Nibble(reg,value)       reg=(reg&0x0f)|(value <<4 )
/*  do{if(value==0)            reg&=0x0f;
 else if (value ==1)        reg|=0xf0;     }while(0)  */

#endif /* DEFINITIONS_H_ */
