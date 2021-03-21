################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Matrice\ elimina\ colonna.cpp 

OBJS += \
./src/Matrice\ elimina\ colonna.o 

CPP_DEPS += \
./src/Matrice\ elimina\ colonna.d 


# Each subdirectory must supply rules for building sources it contributes
src/Matrice\ elimina\ colonna.o: ../src/Matrice\ elimina\ colonna.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Matrice elimina colonna.d" -MT"src/Matrice\ elimina\ colonna.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


