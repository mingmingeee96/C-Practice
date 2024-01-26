#include <stdio.h>

int main()
{
	int Num = 0;

	while (Num < 5)
	{
		printf("Hello world! %d \n", Num);
		Num++;
	}	// 예제 1

	int number = 0;

	while (number < 3)
	{
		printf("Hello World!! %d \n", number);
		number++;
	}	// 예제 2

	int dan = 0, num = 1;
	printf("몇 단? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}	// 구구단 예제

	int gugudan = 2, newdan = 0;

	while (gugudan < 10)	// 2단 부터 9단까지 반복
	{
		newdan = 1;	// 새로운 단 시작을 위함.
		while (newdan < 10)
		{
			printf("%d X %d = %d \n", gugudan, newdan, gugudan * newdan);
			newdan++;
		}
		gugudan++;	// 다음 단을 넘어가기 위한 증가
	}	// 구구단 반복 예시 (While문의 중첩)

	int num1 = 0, num2 = 1;
	printf("몇번 출력할까? ");
	scanf_s("%d", &num1);
	
	while (num2 < num1+1)
	{
		printf("Hello world! %d \n", num2);
		num2++;
	}	// 07-1 문제 1

	int num3 = 0, num4 = 1;
	printf("3의 배수 몇번 출력할까? ");
	scanf_s("%d", &num3);

	while (num4 < num3+1)
	{
		printf("%d ", num4 * 3);
		num4++;
	}	// 07-1 문제 2

	int total = 0, num5 = 1;

	while (num5 != 0)
	{
		printf("\n정수 입력 (0 입력시 종료): ");
		scanf_s("%d", &num5);
		total += num5;
	}
	printf("입력된 정수의 총 합:  %d \n", total);
	// 07-1 문제 3

	int Dan = 0, num6 = 1;
	printf("몇 단? (역순) ");
	scanf_s("%d", &Dan);

	while (num6 < 10)
	{
		printf("%d x %d = %d \n", Dan, (10-num6), Dan * (10 - num6));
		num6++;
	}	// 07-1 문제 4

	int Total = 0, i = 0;
	int num7, count;

	printf("입력할 정수 갯수는? ");
	scanf_s("%d", &num7);

	while (i < num7)
	{
		printf("정수 입력: ");
		scanf_s("%d", &count);
		Total += count;
		i++;
	}
	printf("입력의 평균: %f \n", (double)Total / num7);
	// 07-1 문제 5

	int Num1 = 0, I = 0, Sum = 0;
	while (I < 5)
	{
		printf("정수 입력 (1보다 큰 정수): ");
		scanf_s("%d", &Num1);

		while (Num1 < 1)
		{
			printf("정수 재 입력 (1보다 큰 정수): ");
			scanf_s("%d", &Num1);
		}
		Sum += Num1;
		Num1 = 0;
		I++;
	}
	printf("총 합: %d \n", Sum);
	// 07-2 문제 1

	int a = 0, b = 0;
	while (a < 5)
	{
		while (b < a)
		{
			printf("0 ");
			b++;
		}
		b = 0;	// 이거 꼭 넣어야함!!!! 안넣으면 ' 0 * '만 출력된다구우!!!
		printf("* \n");
		a++;
	}
	// 07-2 문제 2

	return 0;
}