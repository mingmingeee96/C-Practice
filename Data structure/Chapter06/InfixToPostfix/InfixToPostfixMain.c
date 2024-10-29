#include <stdio.h>
#include "InfixToPostfix.h"

int main()
{
    char exp1[] = "1+2*3";
    char exp2[] = "(1+2)*3";
    char exp3[] = "((1-2)+3)*(5-2)";

    printf("<Infix Notation(Origin)>\n");
    printf("%s \n", exp1);
    printf("%s \n", exp2);
    printf("%s \n", exp3);

    ConvToRPNExp(exp1);
    ConvToRPNExp(exp2);
    ConvToRPNExp(exp3);

    printf("<Postfix Notation(Fix)>\n");
    printf("%s \n", exp1);
    printf("%s \n", exp2);
    printf("%s \n", exp3);

    return 0;
}