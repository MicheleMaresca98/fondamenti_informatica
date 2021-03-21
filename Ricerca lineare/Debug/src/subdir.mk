################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ricerca\ lineare.cpp 

OBJS += \
./src/Ricerca\ lineare.o 

CPP_DEPS += \
./src/Ricerca\ lineare.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ricerca\ lineare.o: ../src/Ricerca\ lineare.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ricerca lineare.d" -MT"src/Ricerca\ lineare.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


