/**
 * @file    I2C_made.h
 * @brief   I2C header file
 * @details If you want to use I2C methods, Include I2C_made.h file.
*/

#include<stdint.h>

#ifndef I2C_COMMON
    #define I2C_COMMON
    
    #include "I2C.h"
    #include "I2C_2.h"
    #include <stdio.h>
    #include "FreeRTOS.h"
    #include "task.h"
    #include "semphr.h"
    
    
    #define I2C_DEBUG 0

    
    int I2C_Write(uint8_t device_addr, uint8_t reg_addr, uint8_t data);
    int I2C_Read(uint8_t device_addr, uint8_t reg_addr, uint8_t* data);
    int I2C_Read_Multiple(uint8_t device_addr, uint8_t reg_addr, uint8_t* data, uint8_t count);
    
    int I2C_2_Read_Multiple(uint8_t device, uint8_t start_regAdd, uint8_t *data, uint8_t count);
    int I2C_2_Write_Multiple(uint8_t device, uint8_t startAdd, uint8_t *data, uint8_t count);

    // Do not use
    void I2C_setup();
#endif
