#include <stdio.h>

int main()
{
	int num1 = 0xA7, num2 = 0X43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf("032의 10진수 정수 값: %d \n", num3);
	printf("024의 10진수 정수 값: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n\n", num3, num4, num3 + num4);	// 16진수와 8진수 예제
	
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;	// 이 연산을 총 100회 진행하게 됩니다.

	printf("0.1을 100번 더한 결과: %f \n\n", num);	// 부동 소수점 오차 예제

	int num01 = 15;	// 00000000 00000000 00000000 00001111
	int num02 = 20;	// 00000000 00000000 00000000 00010100
	int num03 = num01 & num02;	// num1과 num2의 비트단위 & 연산
	printf("AND 연산의 결과: %d \n\n", num03);	// 연산자: 비트단위 AND 예제

	int num003 = num01 | num02;
	printf("OR 연산의 결과: %d \n\n", num003);	// 연산자: 비트단위 OR 예제

	int num0003 = num01 ^ num02;
	printf("XOR 연산의 결과: %d \n\n", num0003);	// 연산자: 비트단위 XOR 예제

	int num001 = ~num01;
	printf("NOT 연산의 결과: %d \n\n", num001);	// 연산자: 비트단위 NOT 예제

	int result1 = num01 << 1;	// num의 비트 열을 왼쪽으로 1칸씩 이동
	int result2 = num01 << 2;	// num의 비트 열을 왼쪽으로 2칸씩 이동
	int result3 = num01 << 3;	// num의 비트 열을 왼쪽으로 3칸씩 이동

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n\n", result3);	// 연산자: 비트의 왼쪽 이동

	int num002 = -16;	// 11111111 11111111 11111111 11110000
	printf("2칸 오른쪽 이동의 결과: %d \n", num001 >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n\n", num002 >> 3);	// 연산자: 비트의 오른쪽 이동

	return 0;
}