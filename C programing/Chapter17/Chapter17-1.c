#include <stdio.h>

// PointerSwapFail.c 예제

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

// PointerSwapSuccess.c 예제
void SwapIntPtrS(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main()
{
	// DoublePointerAccess.c 예제
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%16p %16p \n", ptr, *dptr);
	printf("%16g %16g \n", num, **dptr);
	ptr2 = *dptr;	// ptr2 = ptr과 같은 문장
	*ptr2 = 10.99;
	printf("%16g %16g \n\n", num, **dptr);

	// PointerSwapFail.c 예제
	int num1 = 10, num2 = 20;
	int* ptr_1, * ptr_2;
	ptr_1 = &num1, ptr_2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr_1, *ptr_2);

	SwapIntPtr(ptr_1, ptr_2);
	printf("*ptr1, *ptr2: %d %d \n\n", *ptr_1, *ptr_2);

	// PointerSwapSuccess.c 예제
	int Num1 = 10, Num2 = 20;
	int* Ptr1, * Ptr2;
	Ptr1 = &Num1, Ptr2 = &Num2;
	printf("*ptr1, *ptr2: %d %d \n", *Ptr1, *Ptr2);

	SwapIntPtrS(&Ptr1, &Ptr2);	// 주소 값 전달.
	printf("*ptr1, *ptr2: %d %d \n\n", *Ptr1, *Ptr2);

	// PointerArrayType.c 예제
	int n1 = 10, n2 = 20, n3 = 30;
	int* pt1 = &n1;
	int* pt2 = &n2;
	int* pt3 = &n3;

	int* ptrArr[] = { pt1,pt2,pt3 };
	int** dpt = ptrArr;
	
	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n\n", *(dpt[0]), *(dpt[1]), *(dpt[2]));
	return 0;
}