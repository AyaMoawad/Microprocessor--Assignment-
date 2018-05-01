/*
 * main.c
 *
 *  Created on: May 1, 2018
 *      Author: Hassan Ibrahim
 *
 *  This project is working in 3 modes, There is a push button that controls the modes
 *	When button is clicked MCU enter mode1 : Pack of LEDs is increasingly open
 *	When clicked again MCU enter mode2 : Pack of LEDs is decreasingly close
 *	Second push button is clicked entered mode3 : Interrupt function is released
 *
 */

#define F_CPU 4000000ul
#include "all-includes.h"

// Global Variables Initialization
u8 mode = 0x01;    // Variable for the mode of MCU
u8 counter = 0;	   // Counter for LEDs

int main() {

	// Local Variables Initialization
	u8 adcREAD = 0;    // ADC Read

	// Ports Initialization
	DDRA = 0x00;
	DDRB = 0xff;
	DDRC = 0xff;
	DDRD = 0xff;

	// ADC Initialization
	ADC_voidInitializeADC();

	// Interrupt Initialization
	ExternalInterrupt_voidInitialzie();

	while (1) {

		// Mode1
		// Incrementing LEDs
		if (mode == 0x01) {
			PORTB = PORTD = 0X00;

			// Checking counter
			if (counter == 8) {
				counter %= 8;
				PORTC = 0x00;
				_delay_ms(500);
			}

			// Increasing counter
			Set_Bit(PORTC, counter);
			counter += 1;

			// Checking if the button is pressed or not
			if (DIO_ReadPin(DIO_PIN0_PPORTA) == 1) {
				mode = 0x02;
			}

			_delay_ms(500);
		} // End of mode1

		// Mode2
		// Decrementing LEDs
		if (mode == 0x02) {
			PORTB = PORTD = 0X00;

			// Checking counter
			if (counter == 0) {
				counter = 8;
				PORTC = 0x00;
				_delay_ms(500);
			}

			// Decreasing counter
			counter -= 1;
			Set_Bit(PORTC, counter);

			// Checking if the button is pressed or not
			if (DIO_ReadPin(DIO_PIN0_PPORTA) == 1) {
				mode = 0x01;
			}

			_delay_ms(500);
		} // End of mode2

		// Mode3
		// Interrupt Mode : Implementing Interrupt function
		if (mode == 3) {
			// Turning on Interrupt Led
			PORTD = 0x08;
			// Reading the value of variable resistor
			adcREAD = ADC_u8ReadADC();
			PORTC = adcREAD;
			// Assigning Higher Nibble
			Assign_High_Nibble(PORTB, (adcREAD * 5) / 255);
			// Assigning Lower Nibble
			Assign_Low_Nibble(PORTB, (int ) (((adcREAD * 5) % 255) / 28));
			_delay_ms(500);

			// Checking if the button is pressed or not
			if (DIO_ReadPin(DIO_PIN0_PPORTA) == 1) {
				mode = 0x01;
				counter = 0x00;
			}
		} // End of mode3

	} // End of while
	return 0;

}
