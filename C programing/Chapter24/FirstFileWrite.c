#include <stdio.h>

int main()
{
    FILE * fp = fopen("data.txt", "wt");
    if(fp == NULL)
    {
        printf("파일오픈 실패!");
        return -1;  // 비정상적 종료를 의미하기 위해 -1 반환
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp); // 스트림 종료
    return 0;
}