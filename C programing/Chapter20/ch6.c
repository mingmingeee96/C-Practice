#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com[3]={0}, user[3]={0}, count = 1;
    srand((int)time(NULL));

    // Generate random numbers for computer's choice
    for(int i=0; i<3; i++)
    {
        com[i]=rand()%10;
    }
    if(com[0]==com[1])
    {
        com[1]++;
        if(com[1]==10)
            com[1]=0;
    } else if(com[0]==com[2])
    {
        com[2]++;
        if(com[2]==10)
            com[2]=rand()%10;
    } else if(com[1]==com[2])
    {
        com[2]++;
        if(com[0]==10)
            com[0]=rand()%10;
    }

    // Game Start
    printf("Start Game!\n");
    while(1)
    {   
        int strike = 0, ball = 0;
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);
        for(int i = 0; i<3 ;i++)
        {
            for(int j=i+1;j<3;j++) //strike와 중복되면 안되기 때문에 j=i+1로 설정
                if(user[i]==com[j])
                    ball++;
            
            if(user[i]==com[i]) //숫자랑 위치까지 맞는지 확인하는 ball 함수
                strike++;
        }
        if(strike==3)
        {
            printf("%d번째 도전 결과: 3 strike, 0 ball!!\n\nGame Over!", count);
            break;
        }
        else
            printf("%d번째 도전 결과: %d strike, %d ball!!\n", count, strike, ball);
        count++;
    }
}
