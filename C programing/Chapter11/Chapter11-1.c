#include<stdio.h>

int main()
{
	// ArrayAccess.c 예제
	int arr[5];
	int sum = 0, i;
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("배열요소에 저장된 값의 합: %d \n\n", sum);

	// ArrayInit.c 예제
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int ar1Len, ar2Len, ar3Len, j;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int);	//	배열 arr1의 길이 계산.
	ar2Len = sizeof(arr2) / sizeof(int);	//	배열 arr2의 길이 계산.
	ar3Len = sizeof(arr3) / sizeof(int);	//	배열 arr3의 길이 계산.

	for (j = 0; j < ar1Len; j++)
		printf("%d ", arr1[j]);
	printf("\n");

	for (j = 0; j < ar2Len; j++)
		printf("%d ", arr2[j]);
	printf("\n");

	for (j = 0; j < ar3Len; j++)
		printf("%d ", arr3[j]);
	printf("\n\n");


	// 문제 11-1 Q.1
	int Arr[5];
	int max, min, Sum, n;

	for (n = 0; n < 5; n++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &Arr[n]);
	}

	max = min = Sum = Arr[0];
	for (n = 1; n < 5; n++)
	{
		Sum += Arr[n];
		if (max < Arr[n])
			max = Arr[n];
		if (min > Arr[n])
			min = Arr[n];
	}

	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총 합: %d \n\n", Sum);

	// 문제 11-1 Q.2
	char Sen[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int x, Len;

	Len = sizeof(Sen) / sizeof(char);

	for (x = 0; x < Len; x++)
		printf("%c", Sen[x]);
	printf("\n\n");

	return 0;
}