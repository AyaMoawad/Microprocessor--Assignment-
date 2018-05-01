/*
 * ADC.h
 *
 *  Created on: Aug 26, 2017
 *      Author:  Hassan Ibrahim
 */

#ifndef ADC_H_
#define ADC_H_

#include "../all-includes.h"

/* DEFINING THE ADC Registers FROM DATA SHEET P.327 */
/*ADMUX  is the definition of the ADC multiplexer */
#define ADMUX *((u8 volatile*)(0x27))
/*ADCSRA is the definition of the ADC control and status register */
#define ADCSRA *((u8 volatile*)(0x26))
/*ADCH is the definition of the ADC High */
#define ADCH *((u8 volatile*)(0x25))
/*ADCL is the definition of the ADC Low*/
#define ADCL *((u8 volatile*)(0x24))
/*SFIOR is the definition of the Special funciton IO register*/
#define SFIOR *((u8 volatile*)(0x50))

/*ADC initialization*/
extern void ADC_voidInitializeADC(void);

/*ADC READ*/
extern u8 ADC_u8ReadADC(void);

#endif /* ADC_H_ */
