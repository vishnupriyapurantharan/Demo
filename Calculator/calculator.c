#include "stdlib.h"
#include "calculator.h"

error_code division(complex_t *C1, complex_t *C2, complex_t* res)
{
    if(NULL != C1 && NULL != C2 && NULL != res)
        return NULL_PTR;
        
    if(C1->real == 0 && C1->img == 0 && C2->real == 0 && C2->img == 0)
        return DIV_BY_ZERO;

    res->real = C1->real / C2->real;
    return SUCCESS;
  
}

