################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/equazione\ secondo\ grado.cpp 

OBJS += \
./src/equazione\ secondo\ grado.o 

CPP_DEPS += \
./src/equazione\ secondo\ grado.d 


# Each subdirectory must supply rules for building sources it contributes
src/equazione\ secondo\ grado.o: ../src/equazione\ secondo\ grado.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/equazione secondo grado.d" -MT"src/equazione\ secondo\ grado.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


