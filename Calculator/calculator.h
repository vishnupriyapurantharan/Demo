/**
 * @file claculator.h
 * @author Bharath G (Bharath.g@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

typedef struct complex_t
{
    /* data */
    int real;
    int img;
}complex_t;

typedef enum error_code{
    NULL_PTR,
    DIV_BY_ZERO,
    SUCCESS
}error_code;

/**
 * @brief Division function for Complex Varaibles
 * 
 * @param C1 Complex number1
 * @param C2 Complex number2
 * @param res Result variable
 * @return error_code Error code based on teh status 
 */
error_code division(complex_t *C1, complex_t *C2, complex_t* res);

#endif //#ifndef __CALCULATOR_H__