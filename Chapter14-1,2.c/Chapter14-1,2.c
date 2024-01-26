#include <stdio.h>

// ArrayParam.c 예제
void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

// ArrayParamAccess.c 예제
void AddArayElem(int* param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

// CallByValueSwap.c 예제
void Swap(int n1, int n2)	// 값만 전달받아 함수 내에서 계산.
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2: %d %d \n", n1, n2);	// 함수 내에서는 값이 변했지만 main 함수에는 적용 x.
}

// CallByRefSwap.c 예제
void swap(int* ptr1, int* ptr2)	// 주소 값을 전달받아 계산.
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;	// 함수 밖, main 함수에도 값이 전달되어 계산 적용.
}

/* 문제 14-1
Q.1 Call-by-value와 Call-by-reference로 제곱 문제 풀어보기 */

int SquareByValue(int square)
{
	return square * square;
}

void SquareByReference(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

/* Q.2 정수 세개 순서 바꾸기 */

void Swap3(int ptr1[], int ptr2[], int ptr3[])
{
	int temp1 = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp1;
}

int main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	printf("\n");

	int arr[3] = { 1, 2, 3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	Swap(num1, num2);
	printf("Call by Value num1 num2: %d %d \n", num1, num2);	// 값이 바뀌지 않음.

	swap(&num1, &num2);
	printf("Call by Reference num1 num2: %d %d \n", num1, num2);	// 값이 바뀜.

	int value;
	printf("정수 입력: ");
	scanf_s("%d", &value);
	printf("Call By Value : %d \n", SquareByValue(value));
	SquareByReference(&value);
	printf("Call By Reference : %d \n", value);

	int um1, um2, um3;
	printf("세 개의 정수값 입력: ");
	scanf_s("%d %d %d", &um1, &um2, &um3);
	Swap3(&um1, &um2, &um3);
	printf("바뀐 세 개의 정수: %d %d %d \n", um1, um2, um3);

	return 0;
}