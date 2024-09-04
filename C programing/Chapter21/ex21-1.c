#include <stdio.h>

int ConvChar(int ch)
{
    int term='a' - 'A';
    if(ch>='A' && ch<='Z')
        return ch+term;
    else if(ch>='a' && ch<='z')
        return ch-term;
    else
        return -1;
}

int main()
{
    int ch;
    printf("문자 입력: ");
    ch=getchar();
    ch=ConvChar(ch);
    if (ch==-1)
    {
        printf("범위를 벗어난 입력입니다.");
        return -1;
    }
    putchar(ch);    // 변환된 문자 출력
    return 0;
}

/*출력
문자 입력: a
A

문자 입력: min
M

문자 입력: 1
범위를 벗어난 입력입니다.
*/