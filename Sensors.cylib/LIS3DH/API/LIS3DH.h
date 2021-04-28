/**
  *  \file           `$INSTANCE_NAME`.h
  *  \brief          Header file for LIS3DH interface.
  *
  *  \author         Davide Marzorati
  */
 
/*******************************************************************************
 * Copyright (c) 2021 Marzorati Davide
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
*******************************************************************************/

#ifndef __`$INSTANCE_NAME`_H__
    #define __`$INSTANCE_NAME`_H__
    
    #ifdef __cpluscplus 
        extern "C" {
    #endif
    
    #include "cytypes.h"
    #include "cyfitter.h"
        
    /***********************************
    *           API Constants          *
    ************************************/
    
    /**
     *  \brief          No error generated by API call.
     */
    #define `$INSTANCE_NAME`_OK             0
    
    /**
     *  \brief          I2C communication error occurred during API execution.
     */
    #define `$INSTANCE_NAME`_I2C_ERR        1
    
    /**
     *  \brief          Device not found on API bus error.
     */
    #define `$INSTANCE_NAME`_DEV_NOT_FOUND  2
    
    /**
     *  \brief          Parameter error when calling API.
     */
    #define `$INSTANCE_NAME`_CONF_ERR       3
    
    /***********************************
    *       Generic Functions          *
    ************************************/
    uint8_t `$INSTANCE_NAME`_Start(void);
    uint8_t `$INSTANCE_NAME`_Stop(void);
    
    /***********************************************
    *       Read/Write Register Functions          *
    ***********************************************/
    uint8_t `$INSTANCE_NAME`_ReadWhoAmI(uint8_t* value);
    
    /***********************************************
    *       Configuration Functions          *
    ***********************************************/
    uint8_t `$INSTANCE_NAME`_DisconnectPullUp(void);
    uint8_t `$INSTANCE_NAME`_ConnectPullUp(void);
    
    /***********************************************
    *           Acceleration Functions             *
    ***********************************************/
    uint8_t `$INSTANCE_NAME`_XAxisHasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_YAxisHasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_ZAxisHasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_AxisHasOverrun(uint8_t* overrun);
    
    uint8_t `$INSTANCE_NAME`_XAxisHasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_YAxisHasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_ZAxisHasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_AxisHasNewData(uint8_t* new_data);
    
    /***********************************************
    *               ADC Functions                  *
    ***********************************************/
    uint8_t `$INSTANCE_NAME`_ADC1HasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_ADC2HasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_ADC3HasOverrun(uint8_t* overrun);
    uint8_t `$INSTANCE_NAME`_ADCHasOverrun(uint8_t* overrun);
    
    uint8_t `$INSTANCE_NAME`_ADC1HasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_ADC2HasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_ADC3HasNewData(uint8_t* new_data);
    uint8_t `$INSTANCE_NAME`_ADCHasNewData(uint8_t* new_data);
    
    #ifdef __cpluscplus
        }
    #endif
    
#endif

/* [] END OF FILE */
