#include <stdio.h>
int main()
{
	// 12-1 예제
	int num = 10;
	int pnum = &num;

	printf("%d %d\n\n", num, pnum);

	// PointerOperation.c 예제
	int num1 = 100, num2 = 100;
	int* ptr;

	ptr = &num1;
	(*ptr) += 30;

	ptr = &num2;
	(*ptr) -= 30;

	printf("num1: %d,\nnum2: %d \n\n", num1, num2);

	/*문제 12-1
	Q.2 포인터 변수를 사용하여 각 num 값 증감시키기, 
	포인터 변수가 가리키는 변수를 바꾼 후 각 num값 출력하기.*/
	int Num1 = 10, Num2 = 20;
	int* ptr1 = &Num1;
	int* ptr2 = &Num2;
	int* temp;
	(*ptr1) += 10;	// 변수 Num1을 포인터 변수 ptr1로 가리키고 10 증가시킨다.
	(*ptr2) -= 10;	// 변수 Num2를 포인터 변수 ptr2로 가리키고 10 감소시킨다.
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("%d %d", *ptr1, *ptr2);

	return 0;
}