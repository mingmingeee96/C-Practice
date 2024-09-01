#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*WhenOver5000.c 예제*/
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;	// sum이 5000이 넘을때 반복문 sum+=num을 탈출!
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n\n", num);

	/*ExceptMul2Mul3.c 예제*/
	num = 0;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n\n");

	/* 문제08-2 */
	// 문제1. 구구단 출력시 짝수 단만 출력. 단, 2x2, 4x4, 6x6, 8x8까지만 출력하기.

	int i = 0, j = 0;

	for (i = 1; i < 10; i++)
	{
		if (i % 2 != 0)	// 2로 나눠지지 않는다면
			continue;	// pass!
		for (j = 1; j < 10; j++)	// 2로 나눠진 것들 중
		{
			if (i < j)	// i가 j보다 작으면
				break;	// 출력 안해! 2x3이 되면 다시 위 반복문으로 돌아가 3x1 → 홀수라 출력 안되고, 4x1 부터 출력.
			printf("%d X %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}

	// 문제2
	int A, Z, result;
	printf("<99 만드는 숫자>\n");
	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
				continue;	// A와 Z가 같을 경우엔 패스!
			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
				printf("%d%d + %d%d = %d \n", A, Z, Z, A, result);
		}
	}

	/*
	08-3
	*/
	// EnglishSchool.c 예제
	num = 0;
	printf("\n1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE! \n");
		break;
	case 2:
		printf("2는 TWO! \n");
		break;
	case 3:
		printf("3은 Three! \n");
		break;
	case 4:
		printf("4는 FOUR! \n");
		break;
	case 5:
		printf("5는 FIVE! \n");
		break;
	default:
		printf("I Don't Know! \n");
	}
	
	printf("\n");

	// AdvanEnglishSchool.c 예제
	char sel;
	printf("M 오전, A 오후, E 저녁");
	printf("입력: ");
	scanf_s("%c", &sel, 1);

	switch (sel)
	{
	case 'M':
	case'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case'e':
		printf("Evening \n");
		break;	// 사실 안적어도 됨! ㅎㅎ 뒤에 default가 오지 않을거면!
	}

	// 문제
	int n = 0;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	if (0 <= n && n < 10)
		printf("0이상 10미만");

	else if (10 <= n && n < 20)
		printf("10이상 20미만");

	else if (20 <= n && n < 30)
		printf("20이상 30미만");

	else
		printf("30이상");
	
	// switch문으로 변경
	n = 0;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	switch (n / 10)  // 요런 아이디어! 10으로 나눴을때 몫을 보는 것!
	{
	case 0:  // 10미만이므로 몫이 0 / case 옆에는 정수가 와야한다.
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:  // 그 외의 것은 30이상으로 도출!
		printf("30이상");
	}

	// GoToBasic.c 예제
	num = 0;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;

TWO:
	printf("2를 입력하셨습니다! \n");
	goto END;

OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:

	return 0;
}