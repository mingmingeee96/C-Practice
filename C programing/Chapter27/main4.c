#include <stdio.h>
#include "stdiv.h"

extern Div IntDiv(int num1, int num2);

int main()
{
    Div val = IntDiv(5, 2);
    printf("quotient: %d \n", val.quotient);
    printf("remainder: %d \n", val.remainder);
    return 0;
}