#include <stdio.h>

int main()
{
    FILE * fp = fopen("simple.txt", "wt");
    if(fp == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Kim \n", fp);
    fputs("Your name is Lee \n", fp);
    fclose(fp);
    return 0;
}