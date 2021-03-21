################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Insertion\ Sort.cpp 

OBJS += \
./src/Insertion\ Sort.o 

CPP_DEPS += \
./src/Insertion\ Sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/Insertion\ Sort.o: ../src/Insertion\ Sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Insertion Sort.d" -MT"src/Insertion\ Sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


