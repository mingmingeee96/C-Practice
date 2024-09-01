#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2DArrParam.c 예제
void ShowArr2DStyle(int(*arr)[4], int column)	// 배열 요소 전체 출력
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int Sum2DArr(int arr[][4], int column)	// 배열 요소의 합 반환
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	return sum;
}

int main()
{
	// 2DArrayAddress.c 예제
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("+) sizeof(arr2d[0][0]): %d \n", sizeof(arr2d[0][0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n\n", sizeof(arr2d[2]));

	// 2DArrPointerOp.c 예제
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1+1: %p \n", arr1 + 1);
	printf("arr1+2: %p \n\n", arr1 + 2);

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n\n", arr2 + 1);

	// 2DArrNameAndArrPtr.c 예제
	int Arr1[2][2] = {
		{1, 2}, {3, 4}
	};
	int Arr2[3][2] = {
	{1, 2}, {3, 4}, {5, 6}
	};
	int Arr3[4][2] = {
		{1, 2}, {3, 4}, {5, 6}, {7, 8}
	};

	int(*ptr)[2];
	int i;

	ptr = Arr1;
	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = Arr2;
	printf("** Show 3,2 arr2 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = Arr3;
	printf("** Show 4,2 arr3 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	printf("\n\n");

	// ArrPtrAndPtrArr.c 예제
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int Arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int j;

	int* whoA[4] = { &num1,&num2, &num3, &num4 };	// 포인터 배열
	int(*whoB)[4] = Arr2d;	// 배열 포인터

	printf("%d %d %d %d \n\n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", whoB[i][j]);
		printf("\n");
	}

	printf("\n\n");

	// 2DArrParam.c 예제
	int arr_1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr_2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };

	ShowArr2DStyle(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
	ShowArr2DStyle(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));
	printf("arr1의 합: %d \n", Sum2DArr(arr_1, sizeof(arr_1) / sizeof(arr_1[0])));
	printf("arr2의 합: %d \n\n", Sum2DArr(arr_2, sizeof(arr_2) / sizeof(arr_2[0])));

	// 2DArrAccessType.c 예제
	int a[3][2] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};

	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a+0));

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));

	printf("%d %d \n", a[2][1], (*(a + 2))[1]);
	printf("%d %d \n", a[2][1], *(a[2] + 1));
	printf("%d %d \n", a[2][1], *(*(a + 2) + 1));
	return 0;
}