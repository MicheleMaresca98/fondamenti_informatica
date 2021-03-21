################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bubble\ Sort\ efficiente\ parte\ A.cpp 

OBJS += \
./src/Bubble\ Sort\ efficiente\ parte\ A.o 

CPP_DEPS += \
./src/Bubble\ Sort\ efficiente\ parte\ A.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bubble\ Sort\ efficiente\ parte\ A.o: ../src/Bubble\ Sort\ efficiente\ parte\ A.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bubble Sort efficiente parte A.d" -MT"src/Bubble\ Sort\ efficiente\ parte\ A.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


