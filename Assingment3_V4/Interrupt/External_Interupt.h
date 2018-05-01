/*
 * External_Interupt.h
 *  Created on: Aug 4, 2017
 *      Author: Hassan Ibrahim
 */

#ifndef External_Interupt_DEFENTIONS_H_
#define External_Interupt_DEFENTIONS_H_

#include "../all-includes.h"

/* DEFINING THE Registers FROM DATA SHEET P.327 */
/*SREG  is the Status register */
#define SREG *((u8 volatile*)(0x5F))
/*MCUCR is the MicroControllers Control register*/
#define MCUCR *((u8 volatile*)(0x55))
/*GICR is the General Interrupt Control Register*/
#define GICR *((u8 volatile*)(0x5B))
/*GIFR is the General Interrupt Flag Register*/
#define GIFR *((u8 volatile*)(0x5A))

// A function that Enables the interrupt Registers
void ExternalInterrupt_voidInitialzie();

// Disabling Global interrupt flag
void Cli();

#endif /* External_Interupt_DEFENTIONS_H_ */
