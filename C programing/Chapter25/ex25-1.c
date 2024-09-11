/*문제
프로그램 사용자로부터 문자열을 입력 받아서 입력 받은 문자열의 단어를 역으로 출력하는 프로그램을 작성해보자.
예를 들어서 "I am a boy"가 입력되면, 다음의 출력을 보여야 한다.
"boy a am I"
단! 문자열의 입력에 앞서 프로그램 사용자가 입력할 문자열의 최대길이 정보를 먼저 입력 받기로 하자.
그리고 그 길이만큼 메모리 공간을 동적으로 할당해서 문자열을 입력 받기로 하자.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int max_len, len, i;
    printf("Enter the maximum length of the string: ");
    scanf("%d", &max_len);
    getchar();  // \n문자 삭제

    char* str = (char*)malloc(sizeof(char)*(max_len+1));

    printf("Enter a string: ");
    fgets(str, max_len+1, stdin);
    str[strlen(str)-1]=0;   // \n문자 삭제
    len = strlen(str);

    for(i=len; i>0; i--)
    {
        if(str[i] == ' ')
        {
            printf("%s ", &str[i+1]);
            str[i] = 0;
        }
        i++;
    }
    printf("%s", &str[0]);
    free(str);
    return 0;
}