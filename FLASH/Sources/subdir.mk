################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/gpio.c" \
"../Sources/main.c" \
"../Sources/reles.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/gpio.c \
../Sources/main.c \
../Sources/reles.c \
../Sources/sa_mtb.c \

OBJS += \
./Sources/gpio.o \
./Sources/main.o \
./Sources/reles.o \
./Sources/sa_mtb.o \

C_DEPS += \
./Sources/gpio.d \
./Sources/main.d \
./Sources/reles.d \
./Sources/sa_mtb.d \

OBJS_QUOTED += \
"./Sources/gpio.o" \
"./Sources/main.o" \
"./Sources/reles.o" \
"./Sources/sa_mtb.o" \

C_DEPS_QUOTED += \
"./Sources/gpio.d" \
"./Sources/main.d" \
"./Sources/reles.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/gpio.o \
./Sources/main.o \
./Sources/reles.o \
./Sources/sa_mtb.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/gpio.o: ../Sources/gpio.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/gpio.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/gpio.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/reles.o: ../Sources/reles.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/reles.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/reles.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '


