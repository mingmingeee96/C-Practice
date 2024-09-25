/*도전5
두 개의 텍스트 파일이 같은지 다른지를 확인하는 프로그램을 작성해 보자.
단순히 공백문자 하나가 차이를 보여도 두 텍스트 파일은 다른 것으로 판별이 나야 한다.

- 실행 예시
다음은 실행파일의 이름이 comp.exe이고 비교의 대상이 되는 두 파일의 이름이 각각 d1.txt와 d2.txt인 경우의 실행의 예이다.
명령어: .\comp d1.txt d2.txt
두 개의 파일은 완전히 일치 합니다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("사용법: %s <파일1> <파일2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");
    
    if (file1 == NULL || file2 == NULL)
    {
        perror("파일을 열 수 없습니다");
        return 1;
    }

    char ch1, ch2;
    int areEqual = 1;  // 파일이 같다고 가정

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF)
        if (ch1 != ch2)
        {
            areEqual = 0;  // 파일이 다름
            break;
        }

    // 파일의 끝을 넘어선 경우: 하나의 파일이 더 길 경우
    if (areEqual && (fgetc(file1) != EOF || fgetc(file2) != EOF))
        areEqual = 0;  // 파일 길이가 다름

    fclose(file1);
    fclose(file2);

    if (areEqual)
        printf("두 개의 파일은 완전히 일치합니다.\n");
    else
        printf("두 개의 파일은 다릅니다.\n");

    return 0;
}
