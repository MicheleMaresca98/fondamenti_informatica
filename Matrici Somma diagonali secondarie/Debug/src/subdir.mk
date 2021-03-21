################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Matrici\ Somma\ diagonali\ secondarie.cpp 

OBJS += \
./src/Matrici\ Somma\ diagonali\ secondarie.o 

CPP_DEPS += \
./src/Matrici\ Somma\ diagonali\ secondarie.d 


# Each subdirectory must supply rules for building sources it contributes
src/Matrici\ Somma\ diagonali\ secondarie.o: ../src/Matrici\ Somma\ diagonali\ secondarie.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Matrici Somma diagonali secondarie.d" -MT"src/Matrici\ Somma\ diagonali\ secondarie.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


