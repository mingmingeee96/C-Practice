/*문제
세 개의 정수를 인자로 받아서 이 세 정수의 덧셈결과와 곱셈결과를 반환하는 매크로 함수를 각각 정의해보자.*/

#include <stdio.h>

#define ADD(A, B, C) ((A) + (B) + (C))
#define MULT(A, B, C) ((A) * (B) * (C))

int main()
{
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("세 개의 정수 합: %d\n", ADD(num1, num2, num3));
    printf("세 개의 정수 곱: %d\n", MULT(num1, num2, num3));
    
    return 0;
}
