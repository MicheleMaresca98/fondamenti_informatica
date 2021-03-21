################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bubble\ sort\ efficiente\ parte\ b.cpp 

OBJS += \
./src/Bubble\ sort\ efficiente\ parte\ b.o 

CPP_DEPS += \
./src/Bubble\ sort\ efficiente\ parte\ b.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bubble\ sort\ efficiente\ parte\ b.o: ../src/Bubble\ sort\ efficiente\ parte\ b.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bubble sort efficiente parte b.d" -MT"src/Bubble\ sort\ efficiente\ parte\ b.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


