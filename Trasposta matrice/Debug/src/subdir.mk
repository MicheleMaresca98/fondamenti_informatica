################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Trasposta\ matrice.cpp 

OBJS += \
./src/Trasposta\ matrice.o 

CPP_DEPS += \
./src/Trasposta\ matrice.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trasposta\ matrice.o: ../src/Trasposta\ matrice.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trasposta matrice.d" -MT"src/Trasposta\ matrice.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


