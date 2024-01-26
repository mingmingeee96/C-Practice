#include <stdio.h>
int main()
{
	int n, N = 1;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	for (int k = 1; k <= n; k++)
		N *= 2;

	printf("2의 %d승은 %d", n, N);

	return 0;
}