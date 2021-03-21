################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fattoriale\ iterativo.cpp 

OBJS += \
./src/Fattoriale\ iterativo.o 

CPP_DEPS += \
./src/Fattoriale\ iterativo.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fattoriale\ iterativo.o: ../src/Fattoriale\ iterativo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Fattoriale iterativo.d" -MT"src/Fattoriale\ iterativo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


