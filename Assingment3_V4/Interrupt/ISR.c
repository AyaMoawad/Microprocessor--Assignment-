/*
 * ISR.c
 *
 *  Created on: Apr 25, 2018
 *      Author: ihass
 */

#include "../all-includes.h"
#include "avr/interrupt.h"

// Extern Global variables
extern u8 mode;    // Variable for the mode of MCU

// Global Variable : The code is starting with interrupt function : So counter make no change in the rest of code
u8 count;	  // Variable for counting the interrupt function

// Mode3
// Interrupt function for Vector INT0
ISR( INT0_vect) {
	count++;
	if (count >= 2) {
		mode = 0x03;
	}
}
