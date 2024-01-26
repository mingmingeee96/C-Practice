#include <stdio.h>

int main()
{
	int result1;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result1 = num1 + num2;
	printf("%d + %d = %d \n\n", num1, num2, result1);	//  03-3 예제1

	int result2;
	int num3, num4, num5;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num3, &num4, &num5);

	result2 = num3 + num4 + num5;
	printf("%d + %d + %d = %d \n\n", num3, num4, num5, result2);	// 03-3 예제2

	return 0;
} 