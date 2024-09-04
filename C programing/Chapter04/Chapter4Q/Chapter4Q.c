#include <stdio.h>

int main()
{
	int num1;
	printf("정수: ");
	scanf_s("%d", &num1);
	printf("부호 변경: %d \n\n", ~num1+1);	// chapter 4 - Q.1
	
	int num2 = 3;
	num2 = num2 << 3;	// x8
	num2 = num2 >> 2;	// /4
	printf("%d \n", num2);	// chapter 4 - Q.2
	
	return 0;
}