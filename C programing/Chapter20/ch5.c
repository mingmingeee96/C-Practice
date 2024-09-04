#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int select=0, com, win = 0, same = 0, lose = 0;

    srand((int)time(NULL)); // 컴퓨터 시간을 정수로 반환. 랜덤 수를 넣기 위함.
    while(1)
    {   
        com = rand()%3+1; // 컴퓨터가 내는 가위 바위 보
        printf("1. 바위 2. 가위 3. 보: ");
        scanf("%d",&select);
        /*
        com | select
        1   |   1    (same)
        1   |   2    (lose)
        1   |   3    (win)
        2   |   1    (win)
        2   |   2    (same)
        2   |   3    (lose)
        3   |   1    (lose)
        3   |   2    (win)
        3   |   3    (same)
        */
        if(com==1)
        {
            if(com==select)
            {
                printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
                same++;
            } else if(select==2)
            {
                printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다!\n");
                lose++;
            } else
            {
                printf("당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다!\n");
                win++;
            }
        } else if(com==2)
        {
            if(select==1)
            {
                printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
                win++;
            } else if(select==com)
            {
                printf("당신은 가위 선택, 컴퓨터는 가위 선택, 당신이 비겼습니다!\n");
                same++;
            } else
            {
                printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!\n");
                lose++;
            }
        } else
        {
            if(select==1)
            {
                printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
                lose++;
            } else if(select==2)
            {
                printf("당신은 가위 선택, 컴퓨터는 보 선택, 당신이 이겼습니다!\n");
                win++;
            } else
            {
                printf("당신은 보 선택, 컴퓨터는 보 선택, 당신이 비겼습니다!\n");
                same++;
            }
        }

        if(lose>0)
        {
            printf("\n게임의 결과: %d승, %d무", win, same);
            break;
        }
    }
}
