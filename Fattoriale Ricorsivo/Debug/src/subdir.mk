################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fattoriale\ Ricorsivo.cpp 

OBJS += \
./src/Fattoriale\ Ricorsivo.o 

CPP_DEPS += \
./src/Fattoriale\ Ricorsivo.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fattoriale\ Ricorsivo.o: ../src/Fattoriale\ Ricorsivo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Fattoriale Ricorsivo.d" -MT"src/Fattoriale\ Ricorsivo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


