################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Potenza\ Ricorsiva.cpp 

OBJS += \
./src/Potenza\ Ricorsiva.o 

CPP_DEPS += \
./src/Potenza\ Ricorsiva.d 


# Each subdirectory must supply rules for building sources it contributes
src/Potenza\ Ricorsiva.o: ../src/Potenza\ Ricorsiva.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Potenza Ricorsiva.d" -MT"src/Potenza\ Ricorsiva.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


