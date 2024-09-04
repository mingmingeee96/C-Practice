/*문제2
다음과 같이 총 3개의 배열을 선언한다.
char str1[20];
char str2[20];
char str3[40];
그리고는 str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력 받되, fgets 함수호출을 통해서 입력 받는다.
이어서 str1에 저장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이자.
그리고 마지막으로 str3에 저장된 문자열을 출력하자.
단, str1과 str2에 저장된 문자열에서 \n은 소멸시켜야 한다.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    char str3[40];

    printf("문자열 1 입력: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // \n 제거

    printf("문장려 2 입력: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // \n 제거

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("문자열 3 출력: %s\n", str3);

    return 0;
}