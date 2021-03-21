################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/converte\ decimale\ in\ binario.cpp 

OBJS += \
./src/converte\ decimale\ in\ binario.o 

CPP_DEPS += \
./src/converte\ decimale\ in\ binario.d 


# Each subdirectory must supply rules for building sources it contributes
src/converte\ decimale\ in\ binario.o: ../src/converte\ decimale\ in\ binario.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/converte decimale in binario.d" -MT"src/converte\ decimale\ in\ binario.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


