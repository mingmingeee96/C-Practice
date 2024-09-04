#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    // SeedRandomNum.c 예제
	int seed, i;
    printf("씨드 값 입력: ");
    scanf("%d", &seed);
    srand(seed);	// 씨앗 심기.
    
    for(i=0;i<5;i++)
    	printf("정수 출력: %d \n", rand());	// 열매 수확.

    // TimeSeedRandomNum.c 예제
	int i;
    srand((int)time(NULL));	// 현재 시간을 이용해서 씨드 설정
    for(i=0; i<5; i++)
    	printf("정수 출력: %d \n", rand());
    */
    
    int i, random;
    srand((int)time(NULL));
    for(i=0; i<2; i++)
    {
        random = rand()%6+1;
        printf("주사위 %d의 결과 %d \n", i+1, random);
    }
    return 0;
}