#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n\n", ch4, ch4);
	// 예제 1

	int x1, y1, x2, y2;	// x1, y1은 좌 상단의 좌표, x2, y2는우 하단의 좌표
	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &x2, &y2);

	printf("두 점이 이루는 직사각형의 넓이는 %d \n\n", (x2 - x1) * (y2 - y1));
	// 문제 1

	double num1, num2;
	
	printf("두 개의 실수: ");
	scanf_s("%lf %lf", &num1, &num2);
	
	printf("\n<두 수의 사칙연산> \n\n");
	printf("두 수의 더하기: %f \n", num1 + num2);
	printf("두 수의 빼기: %f \n", num1 - num2);
	printf("두 수의 곱하기: %f \n", num1 * num2);
	printf("두 수의 나누기: %f \n\n", num1 / num2);
	// 문제 2

	int A;

	printf("아스키 코드 값: ");
	scanf_s("%d", &A);
	printf("문자: %c\n", A);
	// 문제 4

	char B;

	printf("아스키 문자: ");
	scanf_s("%c", &B);
	printf("아스키 코드 값: %d \n", B);
	// 문제 5

	return 0;

}