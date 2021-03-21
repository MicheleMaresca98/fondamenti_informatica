################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.cpp 

OBJS += \
./src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.o 

CPP_DEPS += \
./src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.d 


# Each subdirectory must supply rules for building sources it contributes
src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.o: ../src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Vettore eguaglia altro vettore mediante puntatori.d" -MT"src/Vettore\ eguaglia\ altro\ vettore\ mediante\ puntatori.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


