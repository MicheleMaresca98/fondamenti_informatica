################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ricerca\ Binaria.cpp 

OBJS += \
./src/Ricerca\ Binaria.o 

CPP_DEPS += \
./src/Ricerca\ Binaria.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ricerca\ Binaria.o: ../src/Ricerca\ Binaria.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ricerca Binaria.d" -MT"src/Ricerca\ Binaria.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


