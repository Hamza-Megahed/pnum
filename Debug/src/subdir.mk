################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/clear_arr.c \
../src/free_arr.c \
../src/input_lim.c \
../src/main.c \
../src/menu.c \
../src/pnum.c 

OBJS += \
./src/clear_arr.o \
./src/free_arr.o \
./src/input_lim.o \
./src/main.o \
./src/menu.o \
./src/pnum.o 

C_DEPS += \
./src/clear_arr.d \
./src/free_arr.d \
./src/input_lim.d \
./src/main.d \
./src/menu.d \
./src/pnum.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


