/*
 * DIO_Private.h
 *
 *  Created on: May 1, 2018
 *      Author: Hassan Ibrahim
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "../all-includes.h"

/* Read pin function */
extern u8 DIO_ReadPin(u8 u8PinNumber);

/* Defining PINS using ( enum ) method  */
typedef enum {
	/* Defining PORTA */
	DIO_PIN0_PPORTA,   // PIN 0
	DIO_PIN1_PPORTA,   // PIN 1
	DIO_PIN2_PPORTA,   // PIN 2
	DIO_PIN3_PPORTA,   // PIN 3
	DIO_PIN4_PPORTA,   // PIN 4
	DIO_PIN5_PPORTA,   // PIN 5
	DIO_PIN6_PPORTA,   // PIN 6
	DIO_PIN7_PPORTA,   // PIN 7

	/* Defining PORTB */
	DIO_PIN0_PPORTB,   // PIN 8
	DIO_PIN1_PPORTB,   // PIN 9
	DIO_PIN2_PPORTB,   // PIN 10
	DIO_PIN3_PPORTB,   // PIN 11
	DIO_PIN4_PPORTB,   // PIN 12
	DIO_PIN5_PPORTB,   // PIN 13
	DIO_PIN6_PPORTB,   // PIN 14
	DIO_PIN7_PPORTB,   // PIN 15

	/* Defining PORTC */
	DIO_PIN0_PPORTC,   // PIN 16
	DIO_PIN1_PPORTC,   // PIN 17
	DIO_PIN2_PPORTC,   // PIN 18
	DIO_PIN3_PPORTC,   // PIN 19
	DIO_PIN4_PPORTC,   // PIN 20
	DIO_PIN5_PPORTC,   // PIN 21
	DIO_PIN6_PPORTC,   // PIN 22
	DIO_PIN7_PPORTC,   // PIN 23

	/* Defining PORTD */
	DIO_PIN0_PPORTD,   // PIN 24
	DIO_PIN1_PPORTD,   // PIN 25
	DIO_PIN2_PPORTD,   // PIN 26
	DIO_PIN3_PPORTD,   // PIN 27
	DIO_PIN4_PPORTD,   // PIN 28
	DIO_PIN5_PPORTD,   // PIN 29
	DIO_PIN6_PPORTD,   // PIN 30
	DIO_PIN7_PPORTD,   // PIN 31

} PORTS;

#endif /* DIO_PRIVATE_H_ */
