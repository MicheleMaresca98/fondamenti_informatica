################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ordinamento\ vettore\ CrescenteDecrescente.cpp 

OBJS += \
./src/Ordinamento\ vettore\ CrescenteDecrescente.o 

CPP_DEPS += \
./src/Ordinamento\ vettore\ CrescenteDecrescente.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ordinamento\ vettore\ CrescenteDecrescente.o: ../src/Ordinamento\ vettore\ CrescenteDecrescente.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ordinamento vettore CrescenteDecrescente.d" -MT"src/Ordinamento\ vettore\ CrescenteDecrescente.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


