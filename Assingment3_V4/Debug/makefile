################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Interrupt/subdir.mk
-include DIO/subdir.mk
-include ADC/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Assingment3_V4.lss \

FLASH_IMAGE += \
Assingment3_V4.hex \

EEPROM_IMAGE += \
Assingment3_V4.eep \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Assingment3_V4.elf secondary-outputs

# Tool invocations
Assingment3_V4.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Assingment3_V4.map -mmcu=atmega32 -o "Assingment3_V4.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Assingment3_V4.lss: Assingment3_V4.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Assingment3_V4.elf  >"Assingment3_V4.lss"
	@echo 'Finished building: $@'
	@echo ' '

Assingment3_V4.hex: Assingment3_V4.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Assingment3_V4.elf  "Assingment3_V4.hex"
	@echo 'Finished building: $@'
	@echo ' '

Assingment3_V4.eep: Assingment3_V4.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Assingment3_V4.elf  "Assingment3_V4.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Assingment3_V4.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Assingment3_V4.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Assingment3_V4.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm32 -Uflash:w:Assingment3_V4.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Assingment3_V4.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
