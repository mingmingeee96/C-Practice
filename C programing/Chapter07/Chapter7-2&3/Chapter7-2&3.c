#include <stdio.h>

int main()
{
	int total=0, num = 0;
	do
	{
		total += num;
		num = num + 2;
	} while (num <= 100);
	printf("0이상 100이하 정수 중 짝수의 합: %d \n", total);
	printf("\n");
	// 07-3 문제 2

	int gugudan = 2, newdan = 1;
	do
	{
		printf("<%d단>\n", gugudan);
		do
		{
			printf("%d X %d = %d \n", gugudan, newdan, gugudan * newdan);
			newdan++;
		} while (newdan < 10);
		newdan = 1;
		gugudan++;
		printf("\n");
	} while (gugudan < 10);
	// 07-3 문제 3

	int Total = 0;
	int i, Num;
	printf("0부터 Num까지의 덧셈, Num 입력: ");
	scanf_s("%d", &Num);

	for (i = 0; i < Num + 1; i++)
	{
		Total += i;
	}

	printf("0부부터 Num까지의 덧셈 결과: %d\n", Total);
	// for문 예제1

	double TOTAL = 0.0, input = 0.0;
	int NUM = 0;

	for (; input >= 0.0;)
	{
		TOTAL += input;
		printf("실수 입력 ('-' to quit): ");
		scanf_s("%lf", &input);
		NUM++;
	}
	printf("평균: %f \n", (double)TOTAL / (NUM-1));
	// for문 예제2

	int num1, num2, sum;

	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	for (sum=0; num1 <= num2; num1++)
		sum += num1;

	printf("두 정수 사이의 숫자 모두의 합: %d \n", sum);
	// 07-4 문제 1 (for문)

	int start = 0, end = 0;
	sum = 0;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &start, &end);

	while (start <= end)
	{
		sum = 0;
		sum += start;
		start++;
	}
	printf("두 정수 사이의 숫자 모두의 합: %d \n", sum);
	// 07-4 문제 1 (while문)

	start = 0, end = 0, sum = 0;	// start = 0, end = 0 명령 생략 가능 → 아래 scanf_s에서 재지정 하기 때문.

	printf("두 정수 입력: ");
	scanf_s("%d %d", &start, &end);
	do
	{
		sum += start;
		start++;
	} while (start <= end);
	printf("두 정수 사이의 숫자 모두의 합: %d \n", sum);
	// 07-4 문제 1 (do~while문)

	int I = 1, n = 0, fac = 1;
	
	printf("<N! 구하기>\nN 입력: ");
	scanf_s("%d", &n);
	
	for (; I <= n; I++)
	{
		fac *= I;
	}
	printf("N! 값: %d \n", fac);
	// 07-4 문제 2 (for문)

	I = 1, n = 0, fac = 1;

	printf("\n<N! 구하기>\nN 입력: ");
	scanf_s("%d", &n);

	while (I <= n)
	{
		fac *= I;
		I++;
	}
	printf("N! 값: %d \n", fac);
	// 07-4 문제 2 (while문)

	I = 1, n = 0, fac = 1;

	printf("\n<N! 구하기>\nN 입력: ");
	scanf_s("%d", &n);

	do
	{
		fac *= I;
		I++;
	} while (I <= n);
	printf("N! 값: %d \n", fac);
	// 07-4 문제 2 (do~while문)


	for (gugudan = 2; gugudan < 10; gugudan++)
	{
		printf("<%d단>\n", gugudan);
		for (newdan = 1; newdan < 10; newdan++)
			printf("%d X %d = %d \n", gugudan, newdan, gugudan * newdan);
		printf("\n");
	}	// while문의 중첩, 07-3 문제 2의 for문 변형

	return 0;
}