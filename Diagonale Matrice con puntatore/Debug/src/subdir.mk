################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Diagonale\ Matrice\ con\ puntatore.cpp 

OBJS += \
./src/Diagonale\ Matrice\ con\ puntatore.o 

CPP_DEPS += \
./src/Diagonale\ Matrice\ con\ puntatore.d 


# Each subdirectory must supply rules for building sources it contributes
src/Diagonale\ Matrice\ con\ puntatore.o: ../src/Diagonale\ Matrice\ con\ puntatore.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Diagonale Matrice con puntatore.d" -MT"src/Diagonale\ Matrice\ con\ puntatore.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


