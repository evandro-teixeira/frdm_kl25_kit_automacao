################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/entradas.c" \
"../Sources/gpio.c" \
"../Sources/init_cpu.c" \
"../Sources/main.c" \
"../Sources/reles.c" \
"../Sources/sa_mtb.c" \
"../Sources/saidas.c" \
"../Sources/serial.c" \
"../Sources/uart.c" \

C_SRCS += \
../Sources/entradas.c \
../Sources/gpio.c \
../Sources/init_cpu.c \
../Sources/main.c \
../Sources/reles.c \
../Sources/sa_mtb.c \
../Sources/saidas.c \
../Sources/serial.c \
../Sources/uart.c \

OBJS += \
./Sources/entradas_c.obj \
./Sources/gpio_c.obj \
./Sources/init_cpu_c.obj \
./Sources/main_c.obj \
./Sources/reles_c.obj \
./Sources/sa_mtb_c.obj \
./Sources/saidas_c.obj \
./Sources/serial_c.obj \
./Sources/uart_c.obj \

C_DEPS += \
./Sources/entradas.d \
./Sources/gpio.d \
./Sources/init_cpu.d \
./Sources/main.d \
./Sources/reles.d \
./Sources/sa_mtb.d \
./Sources/saidas.d \
./Sources/serial.d \
./Sources/uart.d \

OBJS_QUOTED += \
"./Sources/entradas_c.obj" \
"./Sources/gpio_c.obj" \
"./Sources/init_cpu_c.obj" \
"./Sources/main_c.obj" \
"./Sources/reles_c.obj" \
"./Sources/sa_mtb_c.obj" \
"./Sources/saidas_c.obj" \
"./Sources/serial_c.obj" \
"./Sources/uart_c.obj" \

C_DEPS_QUOTED += \
"./Sources/entradas.d" \
"./Sources/gpio.d" \
"./Sources/init_cpu.d" \
"./Sources/main.d" \
"./Sources/reles.d" \
"./Sources/sa_mtb.d" \
"./Sources/saidas.d" \
"./Sources/serial.d" \
"./Sources/uart.d" \

OBJS_OS_FORMAT += \
./Sources/entradas_c.obj \
./Sources/gpio_c.obj \
./Sources/init_cpu_c.obj \
./Sources/main_c.obj \
./Sources/reles_c.obj \
./Sources/sa_mtb_c.obj \
./Sources/saidas_c.obj \
./Sources/serial_c.obj \
./Sources/uart_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/entradas_c.obj: ../Sources/entradas.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/entradas.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/entradas_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/gpio_c.obj: ../Sources/gpio.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/gpio.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/gpio_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/init_cpu_c.obj: ../Sources/init_cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/init_cpu.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/init_cpu_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/main_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/reles_c.obj: ../Sources/reles.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/reles.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/reles_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb_c.obj: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/sa_mtb_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/saidas_c.obj: ../Sources/saidas.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/saidas.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/saidas_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/serial_c.obj: ../Sources/serial.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/serial.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/serial_c.obj"
	@echo 'Finished building: $<'
	@echo ' '

Sources/uart_c.obj: ../Sources/uart.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/uart.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -g3 -gdwarf-2 -gstrict-dwarf -o"Sources/uart_c.obj"
	@echo 'Finished building: $<'
	@echo ' '


