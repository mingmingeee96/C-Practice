#include<stdio.h>

int main() 
{
	int blank, star, l, n, N;
	scanf_s("%d", &n);
	N = n;
	for (l = 1; l <= n; l++)
	{
		for (blank = 1; blank < N; blank++)
			printf(" ");
		for (star = 0; star < l; star++)
			printf("*");
		N--;  // 여기에 갯수 줄이는 것을 넣어야지 오류가 안났다.
		printf("\n");
	}
	return 0;
}