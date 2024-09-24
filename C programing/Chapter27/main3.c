#include <stdio.h>

typedef struct div
{
    int quotient;   // 몫
    int remainder;  // 나머지
} Div;

extern Div IntDiv(int num1, int num2);

int main()
{
    Div val = IntDiv(5, 2);
    printf("quotient: %d \n", val.quotient);
    printf("remainder: %d \n", val.remainder);
    return 0;
}