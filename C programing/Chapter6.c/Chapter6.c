#include <stdio.h>

int main()
{
	printf("앞집 강아지가 말했다.\n\"멍~! 멍~!\"\n정말 귀엽다!\n\n");

	int MyAge = 27;
	printf("제 나이는 10진수로 %d살,\n16진수로 %X살입니다.\n\n", MyAge, MyAge);	// %X라서 결과값의 알파벳 대문자
	// %x로 입력했다면 결과값의 알파벳도 소문자!

	int num1 = 7, num2 = 13;
	printf("%o %#o\n", num1, num1);
	printf("%x %#x\n\n", num2, num2);	// 8진수, 16진수 서식문자 예제

	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);	// e 표기법 기반의 출력
	printf("% \n", 0.12345678);
	printf("%e \n\n", 0.12345678);	// e 표기법 기반의 출력

	double d1 = 1.23e-3;	// 0.00123
	double d2 = 1.23e-4;	// 0.000123
	double d3 = 1.23e-5;	// 0.0000123
	double d4 = 1.23e-6;	// 0.00000123

	printf("%g \n", d1);	// %f 스타일 출력
	printf("%g \n", d2);	// %f 스타일 출력
	printf("%g \n", d3);	// %e 스타일 출력
	printf("%g \n\n", d4);	// %e 스타일 출력

	printf("%s, %s, %s \n\n", "AAA", "BBB", "CCC");

	printf("%-8s %16s %5s \n", "이  름", "전공학과", "학년");
	printf("%-8s %16s %5s \n", "김민정", "건설시스템공학과", "2");
	printf("%-8s %16s %5s \n", "김호준", "컴퓨터공학", "4");
	printf("%-8s %16s %5s \n\n", "김명준", "국제경영학과", "3");
	/* 여기까지가 printf함수에 관한 예시들*/

	int Num1, Num2, Num3;
	printf("세 개의 정수 입력: ");	// 12 12 12 입력
	scanf_s("%d %o %x", &Num1, &Num2, &Num3);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n\n", Num1, Num2, Num3);	// 12 10 18 출력

	float number1;
	double number2;
	long double number3;

	printf("실수 입력1 (e 표기법으로): ");	// 1.1e-3 입력
	scanf_s("%f", &number1);
	printf("입력된 실수 %f \n", number1);	// 0.001100으로 출력

	printf("실수 입력2 (e 표기법으로): ");	// 0.1e+2 입력
	scanf_s("%lf", &number2);
	printf("입력된 실수 %f \n", number2);	// 10.000000으로 출력

	printf("실수 입력3 (e 표기법으로): ");	// 0.17e-4 입력
	scanf_s("%Lf", &number3);
	printf("입력된 실수 %Lf \n", number3);	// 0.000017으로 출력

	return 0;
}