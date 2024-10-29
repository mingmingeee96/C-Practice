#include <stdio.h>
#include "ListBaseStack.h"
#include "PostCalculator.h"

int main()
{
    char postExp1[] = "42*8+";
    char postExp2[] = "123+*4/";

    printf("<Postfix Calculation>\n");
    printf("%s = %d \n", postExp1, EvalRPNExp(postExp1));
    printf("%s = %d \n", postExp2, EvalRPNExp(postExp2));

    return 0;
}