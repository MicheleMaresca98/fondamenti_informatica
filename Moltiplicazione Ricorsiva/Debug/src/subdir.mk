################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Moltiplicazione\ Ricorsiva.cpp 

OBJS += \
./src/Moltiplicazione\ Ricorsiva.o 

CPP_DEPS += \
./src/Moltiplicazione\ Ricorsiva.d 


# Each subdirectory must supply rules for building sources it contributes
src/Moltiplicazione\ Ricorsiva.o: ../src/Moltiplicazione\ Ricorsiva.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Moltiplicazione Ricorsiva.d" -MT"src/Moltiplicazione\ Ricorsiva.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


