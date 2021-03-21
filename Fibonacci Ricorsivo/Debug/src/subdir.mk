################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fibonacci\ Ricorsivo.cpp 

OBJS += \
./src/Fibonacci\ Ricorsivo.o 

CPP_DEPS += \
./src/Fibonacci\ Ricorsivo.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fibonacci\ Ricorsivo.o: ../src/Fibonacci\ Ricorsivo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Fibonacci Ricorsivo.d" -MT"src/Fibonacci\ Ricorsivo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


