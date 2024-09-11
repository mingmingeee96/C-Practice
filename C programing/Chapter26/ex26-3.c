/*문제
두 값의 크기를 비교하여 큰 값을 반환하는 매크로 함수 MAX를 정의해보자.
참고로 이는 조건 연산자를 이용해서 정의하는 것이 좋다.*/

#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))

int main() {
    int num1, num2;

    printf("두 정수를 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("둘 중 큰 값: %d\n", MAX(num1, num2));

    return 0;
}