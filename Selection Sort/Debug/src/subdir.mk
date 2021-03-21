################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Selection\ Sort.cpp 

OBJS += \
./src/Selection\ Sort.o 

CPP_DEPS += \
./src/Selection\ Sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/Selection\ Sort.o: ../src/Selection\ Sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Selection Sort.d" -MT"src/Selection\ Sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


