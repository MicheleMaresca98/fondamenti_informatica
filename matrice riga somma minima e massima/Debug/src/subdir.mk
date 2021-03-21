################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/matrice\ riga\ somma\ minima\ e\ massima.cpp 

OBJS += \
./src/matrice\ riga\ somma\ minima\ e\ massima.o 

CPP_DEPS += \
./src/matrice\ riga\ somma\ minima\ e\ massima.d 


# Each subdirectory must supply rules for building sources it contributes
src/matrice\ riga\ somma\ minima\ e\ massima.o: ../src/matrice\ riga\ somma\ minima\ e\ massima.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/matrice riga somma minima e massima.d" -MT"src/matrice\ riga\ somma\ minima\ e\ massima.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


