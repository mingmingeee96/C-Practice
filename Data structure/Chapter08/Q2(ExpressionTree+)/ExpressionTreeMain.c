#include <stdio.h>
#include "ExpressionTree.h"

int main()
{
    char exp[] = "12+7*";
    BTreeNode * eTree = MakeExpTree(exp);

    printf("Prefix Type Expression: ");
    ShowPrefixTypeExp(eTree);
    printf("\n");

    printf("Infix Type Expression: ");
    ShowInfixTypeExp(eTree);
    printf("\n");

    printf("Postfix Type Expression: ");
    ShowPostfixTypeExp(eTree);
    printf("\n");

    printf("Result of Calculation: %d \n", EvaluateExpTree(eTree));

    return 0;
}