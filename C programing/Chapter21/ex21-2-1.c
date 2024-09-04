/*문제1
적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해보자.
예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 "A15#43"이라면,
이 문자열 중 아라비아 숫자는 1, 5, 4, 3이니 1+5+4+3의 연산결과가 출력되어야한다.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[101];
    int sum = 0;

    printf("문자열 입력: ");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
        if (input[i] >= '0' && input[i] <= '9')
            sum += input[i] - '0';

    printf("문자열의 총합: %d\n", sum);

    return 0;
}