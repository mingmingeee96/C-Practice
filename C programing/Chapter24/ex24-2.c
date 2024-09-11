/*문제
FILE 구조체의 포인터가 인자로 전달되면, 파일의 크기를 바이트 단위로 계산하여 반환하는 함수를 정의하자.
단! ftell 함수를 이용해서 구현해야 하며, 함수가 호출된 이후에도 파일 위치 지시자의 정보가 변경되어서는 안된다.
(파일의 크기를 계산하는 과정에서 변경시켰다면, 파일의 크기를 계산한 이후에는 되돌려 놓아야 한다.)*/

#include <stdio.h>
#include <string.h>

long GetFileSize(FILE * fp);

int main()
{
    char str[100];
    FILE * fp = fopen("ABC.txt", "rt");
    fgets(str, sizeof(str), fp);
    fputs(str, stdout);
    printf("파일의 크기: %ld \n", GetFileSize(fp));
    fgets(str, sizeof(str), fp);
    fputs(str, stdout);
    printf("파일의 크기: %ld \n", GetFileSize(fp));
    fgets(str, sizeof(str), fp);
    fputs(str, stdout);
    fclose(fp);
    return 0;
}

long GetFileSize(FILE * fp)
{
    long fpos;
    long fsize;
    fpos = ftell(fp);   // 파일 위치 지시자 정보 백업

    fseek(fp, 0, SEEK_END); 
    fsize = ftell(fp);
    fseek(fp, fpos, SEEK_SET);  // 파일 위치 지시자 정보 복구
    return fsize;
}