#include <stdio.h>

int main()
{
	int num1 = 24, num2 = 3.14;	// 변수 num1, num2의 선언 및 초기화
	int num3 = 30, num4 = 40;	// 변수 num3, num4의 선언 및 초기화

	printf("num1: %d, num2: %d \n", num1, num2);
	num1 = 10;	// 변수 num1의 초기화
	num2 = 20;	// 변수 num2의 초기화

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d. num4: %d \n\n", num3, num4);

	num1 = 3;	// 예제
	num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
	return 0;
}