#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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