#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main()
{
    Div val = IntDiv(10, 3);
    printf("quotient: %d \n", val.quotient);
    printf("remainder: %d \n", val.remainder);
    return 0;
}