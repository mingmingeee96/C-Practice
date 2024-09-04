/* 문제 3
프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력 받는다.
"이정선 29"
"한수정 7"
"오선주 17"
이름은 세 글자가 아닐 수도 있고 영문으로 입력될 수도 있다.
단, 이름과 나이 사이에만 공백이 삽입되어야 한다.
이러한 형식으로 두 사람의 정보를 입력 받아서 이름과 나이가 각각 같은지 다른지를 판단하여 출력하는 프로그램을 작성해보자.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Space(char str[])
{
    int len, i;
    len = strlen(str);
    for(i = 0; i < len; i++)
        if(str[i] ==' ')
            return 1;
    return -1;
}

int CompareName(char str1[], char str2[])
{
    int idx1=Space(str1);
    int idx2=Space(str2);

    if(idx1 != idx2)    // 이름의 길이가 다르면 다른 이름.
        return strncmp(str1, str2, idx1);
    else
        return strcmp(str1, str2);  // 이름이 같으면 1, 다르면 0 반환
}

int CompareAge(char str1[], char str2[])
{
    int idx1=Space(str1);
    int idx2=Space(str2);
    int age1, age2;

    age1 = atoi(&str1[idx1+1]);
    age2 = atoi(&str2[idx2+1]);

    if(age1==age2)
        return 1;
    else
        return 0;
}

int main() 
{
    char person1[30], person2[30];

    printf("사람 1 (이름 나이): ");
    fgets(person1, sizeof(person1), stdin);
    person1[strlen(person1) - 1] = 0;

    printf("사람 2 (이름 나이): ");
    fgets(person2, sizeof(person2), stdin);
    person2[strlen(person2) - 1] = 0;

    if(CompareName(person1, person2))
        puts("두 사람 이름이 같습니다.");
    else
        puts("두 사람 이름이 다릅니다.");
    
    if(CompareAge(person1, person2))
        puts("두 사람 나이가 같습니다.");
    else
        puts("두 사람 나이가 다릅니다.");

    return 0;
}