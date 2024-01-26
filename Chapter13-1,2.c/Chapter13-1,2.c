#include <stdio.h>
int main()
{
	// ArrayNameType.c 예제
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름: %p \n", arr);	// 배열의 이름: 000000277837F878
	printf("첫 번째 요소: %p \n", &arr[0]);	// 첫 번째 요소 : 000000277837F878
	printf("두 번째 요소: %p \n", &arr[1]);	// 두 번째 요소 : 000000277837F87C
	printf("세 번째 요소: %p \n\n", &arr[2]);	// 세 번째 요소 : 000000277837F880 (16자리)
	// 각 배열의 주소값은 4byte 차이가 난다! (int형 배열이기 때문에)
	// arr = &arr[i];	// 이 문장은 컴파일 에러를 일으킨다.

	// ArrayNamePointerOperation.c 예제
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n\n", arr1[0], arr2[0]);

	// ArrayNameIsPointer.c 예제
	int arr3[3] = { 15, 25, 35 };
	int* ptr = &arr3[0];	// int * ptr = arr; 과 동일한 문장.

	printf("%d %d \n", ptr[0], arr3[0]);
	printf("%d %d \n", ptr[1], arr3[1]);
	printf("%d %d \n", ptr[2], arr3[2]);
	printf("%d %d \n\n", *ptr, *arr3);

	// PointerOperationResult.c 예제
	int num1 = 10, num2 = 20.2;
	int* ptr1 = &num1;
	double* ptr2 = &num2;

	printf("ptr1 + 1: %p ptr1 + 2: %p\n", ptr1 + 1, ptr1 + 2);	//	ptr1 + 1: 0000007369EFFB08 (+4) ptr1 + 2: 0000007369EFFB0C (+8)
	printf("ptr2 + 1: %p ptr2 + 2: %p\n", ptr2 + 1, ptr2 + 2);	// 	ptr2 + 1: 0000007369EFFB2C (+8) ptr2 + 2: 0000007369EFFB34 (+16)

	printf("ptr1 (origin): %p ptr2 (origin): %p \n", ptr1, ptr2);	//	ptr1(origin): 0000007369EFFB04 ptr2(origin): 0000007369EFFB24
	ptr1++;
	ptr2++;

	printf("ptr1++ : %p ptr2++ : %p \n\n", ptr1, ptr2);	//	ptr1++ : 0000007369EFFB08 (+4) ptr2++ : 0000007369EFFB2C (+8)

	// PointerBaseArrayAccess.c 예제
	int Arr1[3] = { 11, 22, 33 };
	int* ptr3 = Arr1;
	printf("%d %d %d\n", *ptr3, *(ptr3 + 1), *(ptr3 + 2));	// 각 ptr3[0], ptr3[1], ptr3[2]의 값을 가리켜 값 출력. (위치가 변한건 x)

	printf("%d ", *ptr3); ptr3++;	// ptr3[0] 출력 이후 ptr3[0] 가리키는 곳이 → ptr3[1] 위치로 이동.
	printf("%d ", *ptr3); ptr3++;
	printf("%d ", *ptr3); ptr3--;	// 출력 이후 감소.
	printf("%d ", *ptr3); ptr3--;
	printf("%d ", *ptr3); printf("\n\n");

	/* 문제 13-1 
	Q.1 길이 5인 배열 선언하고 값 1, 2, 3, 4, 5로 초기화,
	포인터 변수를 선언하여 각 배열 값 2씩 증가시키고 출력. */
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++)
		*(ptr + i) = *(ptr + i) + 2;	// * ptr += 2; ptr++;와 동일

	for (i = 0; i < 5; i++)
		printf("%d ", ptr[i]);

	printf("\n\n");

	/* Q.2 Q.1과 달리 배열 요소에 접근을 +2씩 하여 결과를 도출.*/
	int Arr[5] = { 1, 2, 3, 4, 5 };
	int* Ptr = Arr;
	int I;

	for (I = 0; I < 5; I++)
		*(Ptr + I) = *(Ptr + (I + 2));	// * (Ptr+I) += 2;와 동일

	for (I = 0; I < 5; I++)
		printf("%d ", Ptr[I]);

	printf("\n\n");

	/* Q.3 길이가 5인 배열 선언 및 1, 2, 3, 4, 5로 초기화.
	배열의 마지막 요소를 가리키는 포인터 선언,
	포인터 변수 감소하는 방향으로 모든 배열요소에 접근,
	배열에 저장된 모든 정수 더하여 그 결과 출력.*/
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int* ptr1 = &arr1[4];
	int x, sum = 0;

	for (x = 0; x < 5; x++)
		sum += *ptr1--;	// 배열을 뒤로 세는 손쉬운 방법.

	printf("배열 내 정수의 총합: %d \n\n", sum);

	/* Q.4 길이가 6인 int형 배열 선언 후 1, 2, 3, 4, 5, 6으로 초기화,
	배열에 저장된 순서 거꾸로 되도록 변경 */
	int arr2[6] = { 1, 2, 3, 4, 5, 6 };
	int* ptr_st = &arr2[0]; int* ptr_ed = &arr2[5];	// 시작과 끝에 포인트 변수를 만들고
	int X, temp = 0;

	for (X = 0; X < 3; X++)	// 1~6을 중간으로 나눠서
	{
		temp = *ptr_st;
		*ptr_st = *ptr_ed;
		*ptr_ed = temp;	// 바꿔주기
		ptr_st += 1;
		ptr_ed -= 1;
	}

	for (X = 0; X < 6; X++)
		printf("%d ", *(arr2 + X));	// 출력

	return 0;
}