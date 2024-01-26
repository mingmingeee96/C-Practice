#include <stdio.h>

int main()
{
	int result1, result2;
	int num1, num2;

	printf("예제1 \n첫 번째 정수: ");
	scanf_s("%d", &num1);
	printf("두 번째 정수: ");
	scanf_s("%d", &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;

	printf("%d - %d = %d \n", num1, num2, result1);
	printf("%d x %d = %d \n\n", num1, num2, result2);	// chapter 3 - Q.1

	int num01, num02;
	printf("예제1의 또다른 답 \n첫 번째 정수: ");
	scanf_s("%d", &num01);
	printf("두 번째 정수: ");
	scanf_s("%d", &num02);
	printf("%d - %d = %d \n%d x %d = %d \n\n", num01, num02, num01 - num02, num01, num02, num01 * num02);	// chapter 3 - Q.1-1

	int result3;
	int num3, num4, num5;

	printf("예제2 \n세 개의 정수: ");
	scanf_s("%d %d %d", &num3, &num4, &num5);

	result3 = num3 * num4 + num5;

	printf("%d x %d + %d = %d \n\n", num3, num4, num5, result3);	// chapter 3 - Q.2

	int num03, num04, num05;
	printf("예제2의 또 다른 답 \n세 개의 정수: ");
	scanf_s("%d %d %d", &num03, &num04, &num05);
	printf("%d x %d + %d = %d \n\n", num03, num04, num05, num03 * num04 + num05);	// chapter 3 - Q.2-1

	int result4;
	int num6;

	printf("예제3 \n한 개의 정수: ");
	scanf_s("%d", &num6);

	result4 = num6 * num6;

	printf("이 수의 제곱: %d \n\n", result4);	// chapter 3 - Q.3

	int num06;
	printf("예제3의 또 다른 답 \n한개의 정수: ");
	scanf_s("%d", &num06);
	printf("이 수의 제곱: %d \n\n", num06 * num06);	// chapter 3 - Q.3-1

	int result5, result6;
	int num7, num8;

	printf("예제4 \n두 개의 정수: ");
	scanf_s("%d %d", &num7, &num8);

	result5 = num7 / num8;
	result6 = num7 % num8;

	printf("몫: %d, 나머지: %d \n\n", result5, result6);	// chapter 3 - Q.4

	int num07, num08;
	printf("예제4의 또 다른 답\n두 개의 정수: ");
	scanf_s("%d %d", &num07, &num08);
	printf("몫: %d, 나머지: %d \n\n", num07 / num08, num07 % num08);	// chapter 3 - Q.4-1

	int result7;
	int num9, num10, num11;

	printf("예제5 \n세 개의 정수: ");
	scanf_s("%d %d %d", &num9, &num10, &num11);

	result7 = (num9 - num10) * (num10 + num11) * (num11 % num9);

	printf("연산결과: %d", result7);	// chapter 3 - Q.5

	return 0;
}