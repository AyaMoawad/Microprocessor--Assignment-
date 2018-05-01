################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Interrupt/External_Interupt.c \
../Interrupt/ISR.c 

OBJS += \
./Interrupt/External_Interupt.o \
./Interrupt/ISR.o 

C_DEPS += \
./Interrupt/External_Interupt.d \
./Interrupt/ISR.d 


# Each subdirectory must supply rules for building sources it contributes
Interrupt/%.o: ../Interrupt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


