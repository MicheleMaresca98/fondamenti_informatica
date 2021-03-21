################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Matrice\ trasposta\ allocazione\ dinamica.cpp 

OBJS += \
./src/Matrice\ trasposta\ allocazione\ dinamica.o 

CPP_DEPS += \
./src/Matrice\ trasposta\ allocazione\ dinamica.d 


# Each subdirectory must supply rules for building sources it contributes
src/Matrice\ trasposta\ allocazione\ dinamica.o: ../src/Matrice\ trasposta\ allocazione\ dinamica.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Matrice trasposta allocazione dinamica.d" -MT"src/Matrice\ trasposta\ allocazione\ dinamica.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


