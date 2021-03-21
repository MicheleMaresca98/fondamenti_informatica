################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Matrice\ doppio\ dinamica\ in\ funzioni.cpp 

OBJS += \
./src/Matrice\ doppio\ dinamica\ in\ funzioni.o 

CPP_DEPS += \
./src/Matrice\ doppio\ dinamica\ in\ funzioni.d 


# Each subdirectory must supply rules for building sources it contributes
src/Matrice\ doppio\ dinamica\ in\ funzioni.o: ../src/Matrice\ doppio\ dinamica\ in\ funzioni.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Matrice doppio dinamica in funzioni.d" -MT"src/Matrice\ doppio\ dinamica\ in\ funzioni.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


