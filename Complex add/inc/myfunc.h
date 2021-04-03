/**
 * @file myfunc.h
 * @author Subham Kumar Panda
 * @brief  complex Calculator
 * @version 0.1
 * @date 2021-04-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef _MYFUNCH_
#define _MYFUNCH_

typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

/**
 * @brief function sum adds two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t sum(complex_t num1, complex_t num2);

/**
 * @brief function mul multiplies two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t mul(complex_t num1, complex_t num2);

/**
 * @brief function sub substracts the two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t sub(complex_t num1, complex_t num2);

/**
 * @brief function div divides the two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t div(complex_t num1, complex_t num2);

#endif