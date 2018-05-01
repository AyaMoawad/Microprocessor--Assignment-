/*This C file has the detailed  declarations of the functions */


#include "../all-includes.h"

// Reading Pin function
extern u8  DIO_ReadPin ( u8 u8PinNumber )
{
	u8 Port, Pin, x;
	Port = u8PinNumber /8 ;
	Pin  = u8PinNumber %8 ;

	if (Port == 0)
	{
		x= Get_Bit(PINA,Pin);
	}

	else if (Port == 1)
	{
		x= Get_Bit(PINB,Pin);
	}

	else if (Port == 2)
	{
		x= Get_Bit(PINC,Pin);
	}

	else if (Port == 3)
	{
		x= Get_Bit(PIND,Pin);
	}

	return x;

}
