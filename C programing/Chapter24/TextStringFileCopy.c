#include <stdio.h>

int main()
{
    FILE * src = fopen("src.txt", "rt");
    FILE * des = fopen("des.txt", "wt");
    char str[20];

    if(src == NULL || des == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while(fgets(str, sizeof(str), src)!=NULL)
        fputs(str, des);

    if(feof(src)!=0)
        puts("파일 복사 성공!");
    else
        puts("파일 복사 실패!");
    
    fclose(src);
    fclose(des);
    
    return 0;
}