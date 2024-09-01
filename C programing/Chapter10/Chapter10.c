#include <stdio.h>
int mult(int n)
{	
	static int a = 1;
	if (n == 0)
		return a;
	else
	{
		a *= 2;
		mult(n - 1);
	}
	return a;
}

int main()
{
	int n;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	printf("2의 %d승은 %d\n", n, mult(n));

	return 0;
}