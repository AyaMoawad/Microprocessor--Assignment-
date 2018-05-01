/*


* DIO.h
 *  Created on: Aug 4, 2017
 *      Author: ihass
 */

#ifndef DIO_DEFENTIONS_H_
#define DIO_DEFENTIONS_H_

#include "../all-includes.h"

/* DEFINING THE PORTA FROM DATA SHEET P.327 */
/*DDRA  is the definition of the whole port*/
#define DDRA *((u8 volatile*)(0x3A))
/*PORTA is the definition of the OUTPUT Pins*/
#define PORTA *((u8 volatile*)(0x3B))
/*PINA is the definition of the INPUT Pins*/
#define PINA *((u8 volatile*)(0x39))



/* DEFINING THE PORTB FROM DATA SHEET P.327 */
/*DDRB  is the definition of the whole port*/
#define DDRB *((u8 volatile*)(0x37))
/*PORTB is the definition of the OUTPUT Pins*/
#define PORTB *((u8 volatile*)(0x38))
/*PINB is the definition of the INPUT Pins*/
#define PINB *((u8 volatile*)(0x36))



/* DEFINING THE PORTC FROM DATA SHEET P.327 */
/*DDRC  is the definition of the whole port*/
#define DDRC *((u8 volatile*)(0x34))
/*PORTC is the definition of the OUTPUT Pins*/
#define PORTC *((u8 volatile*)(0x35))
/*PINC is the definition of the INPUT Pins*/
#define PINC *((u8 volatile*)(0x33))




/* DEFINING THE PORTD FROM DATA SHEET P.327 */
/*DDRD  is the definition of the whole port*/
#define DDRD *((u8 volatile*)(0x31))
/*PORTD is the definition of the OUTPUT Pins*/
#define PORTD *((u8 volatile*)(0x32))
/*PIND is the definition of the INPUT Pins*/
#define PIND *((u8 volatile*)(0x30))

#endif /* DIO_DEFENTIONS_H_ */
