#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0, random;
    printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
    while(i<5)
    {
        random = rand()%100;
        if(random<100)
        {
            printf("99이하 난수 출력: %d \n", random);
            i++;
        }
    }
    return 0;
}
