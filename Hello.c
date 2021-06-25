/**
 * @file Hello.c
 * @author Bharath G (Bharath.g@ltts.com)
 * @brief First C Program file
 * @version 0.1
 * @date 2021-06-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"

int Var = 100;
int main()
{
    for(int index = 0; index< 10; index++)
        printf("Welcome to STEPin Program, Var = %d", Var+index);
    
    printf("Hi Everyone !! Prithvi Here, Parallel Commit from other side the planet ");
    return 0;
}

/* gcc filename.c -o hello.exe */
