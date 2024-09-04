#include <stdio.h>

/* 
- 4X4 배열
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33  

- 채워지는 순서
: 00 01 02 / 03 13 23 / 33 32 31 / 30 20 10 (한바퀴 도는 부분)
/ 11 12 / 22 21 ('그' 모양 부분)

- 5X5 배열
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44

- 채워지는 순서
: 00 01 02 03 / 04 14 24 34 / 44 43 42 41 / 40 30 20 10 (한바퀴 도는 부분)
/ 11 12 / 13 23 / 33 32 / 31 21 (한바퀴 도는 부분)
/ 22 (마지막 '.' 부분)
*/

void Snail(int(*arr)[100], int num);
void Output(int (*arr)[100], int num);

int main()
{
    int num;
    printf("100이하의 자연수 입력: ");
    scanf("%d", &num);  // 배열 크기 입력
    
    int arr[100][100];  // 4x4 배열 선어

    Snail(arr, num);  // 달팽이 배열 숫자 저장
    Output(arr, num);  // 2차원 배열 출력

    return 0;
}

void Snail(int (*arr)[100], int num)
{
    int i = 0, j = 0;
    int count = 1;
    int re = 0;

    if(num%2 == 0)  // 입력한 숫자가 짝수일 경우 (한바퀴씩 도는거 -> 마지막엔 '그' 모양으로 마무리.)
        re = (num/2)-1;
    else    // 입력한 숫자가 홀수일 경우 (한바퀴씩 도는거 -> 마지막엔 '.' 모양으로 마무리.)
        re = num/2;
    
    
    int round1_num = num-1;
    int round2_num = 0;

    for (int z = 0; z < re; z++)
    {
        for (; j < round1_num; j++) // 가로 + (한바퀴 부분에서 → 방향)
        {
            arr[i][j] = count;
            count++;
        }

        for (; i < round1_num; i++) // 세로 + (한바퀴 부분에서 ↓ 방향)
        {
            arr[i][j] = count;
            count++;
        }

        for (; j > round2_num; j--) // 가로 - (한바퀴 부분에서 ← 방향)
        {
            arr[i][j] = count;
            count++;
        }

        for (; i > (round2_num+1); i--) // 세로 - (한바퀴 부분에서 ↑ 방향)
        {
            arr[i][j] = count;
            count++;
        }

        round1_num--;
        round2_num++;
    }

    if(num%2==0)    // 짝수일 경우 '그' 모양으로 마무리.
    {
        for(; j<round1_num; j++)    // 가로 +
        {
            arr[i][j] = count;
            count++;
        }
        for(; i<round1_num; i++)    // 세로 +
        {
            arr[i][j] = count;
            count++;
        }
        arr[i][j] = count;
        count++;
        arr[i][j-1] = count;
    }
    else    // 홀수일 경우 '.' 모양으로 마무리.
    {
        arr[i][j] = count;
        count++;
        arr[i][j+1] = count;
    }
}

void Output(int (*arr)[100], int num)   // 출력
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}