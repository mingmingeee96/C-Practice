#include <stdio.h>

int main()
{
    FILE * src = fopen("data.txt", "rt");
    FILE * des = fopen("data.txt", "wt");
    int ch;

    if(src == NULL || des == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while((ch = fgetc(src)) != EOF)
        fputc(ch, des);

    if(feof(src)!=0)
        puts("파일 복사 성공!");
    else
        puts("파일 복사 실패!");
    
    fclose(src);
    fclose(des);
    
    return 0;
}