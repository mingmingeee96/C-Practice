#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
// 1번
void odd(int* a, int len)
{
	printf("홀수 출력: ");
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 1)
			printf("%d ", a[i]);
	}
	printf("\n");
}

void even(int* a, int len)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 0)
			count++;	// 홀수와 동일
	}
	printf("짝수 출력: ");
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 0)
		{
			count--;
			printf("%d", a[i]);
			if (count != 0)
				printf(", ");
		}
	}
}
int main(void)
{
	int a[10];
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &a[i]);
	}

	odd(a, sizeof(a) / sizeof(int));
	even(a, sizeof(a) / sizeof(int));

	return 0;
}

// 2번
int main()
{
	int n;
	printf("10진수 정수 입력: ");
	scanf_s("%d", &n);
	int two_word[100] = { 0 };  // 2진수 자리 넉넉하게 준비
	int i = 0;

	while (n > 0)
	{
		two_word[i] = n % 2;
		n /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)  // 반대로 표현해야되니깐
		printf("%d", two_word[j]);

	return 0;
}

// 3번
int main()
{
	int a[10] = { 0 };
	int count_e = 0;
	printf("총 10개의 숫자 입력\n");

	for (int i = 0; i < 10; i++)
	{
		int num=0;
		printf("입력: ");
		scanf_s("%d", &num);
		if (num % 2 == 0)
		{
			a[9 - count_e] = num;
			count_e++;
		}
		else {
			a[i - count_e] = num;
		}
	}
	//printf("배열 요소의 출력: %d %d %d %d %d %d %d %d %d %d",
	//	a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	
	return 0;
}

// 4번
int main()
{
	char str[101] = { 0 };
	printf("문자열 입력: ");
	scanf_s("%s", &str, 100);

	int len = strlen(str);
	int count = 0;
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])	// 팰린드롬인지 확인.
		{
			count++;	// 아닐경우 count
		}
	}
	if (count == 0)	// 다른게 없는 경우
		printf("회문 입니다.");	// 회문 인정 문구 출력.
	else
		printf("회문이 아닙니다.");
}
*/
// 5번
void BubbleSort(int ary[], int len)	// 내림차순 정렬
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - 1) - i; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[7] = { 0 };
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	BubbleSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
