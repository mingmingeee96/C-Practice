#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문제 17-1
void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr)
{
	int* max, * min;
	int i;

	max = min = &arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*maxPtr = max;
	*minPtr = min;
}

int main()
{
	// TriplePointer.c 예제
	int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d \n\n", **dptr, ***tptr);

	// 문제 17-1
	int* maxPtr, * minPtr;
	int arr[5] = { 0 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수 입력 %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	return 0;
}