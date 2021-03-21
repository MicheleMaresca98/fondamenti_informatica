################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Divisone\ ricorsiva.cpp 

OBJS += \
./src/Divisone\ ricorsiva.o 

CPP_DEPS += \
./src/Divisone\ ricorsiva.d 


# Each subdirectory must supply rules for building sources it contributes
src/Divisone\ ricorsiva.o: ../src/Divisone\ ricorsiva.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Divisone ricorsiva.d" -MT"src/Divisone\ ricorsiva.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


