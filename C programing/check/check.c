#include<stdio.h>

int main() 
{
	int count[10] = { 0 };
	int i, N, max;

	scanf_s("%d", &N);
	
	while (N > 0)
	{
		count[N % 10]++;
		N /= 10;
	}

	count[6] = (count[6] + count[9] + 1) / 2;

	max = 0;
	for (i = 0; i < 9; i++)
		if (max < count[i])
			max = count[i];

	printf("%d", max);
	return 0;
}