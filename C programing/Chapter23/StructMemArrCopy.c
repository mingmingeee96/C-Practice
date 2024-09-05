#include <stdio.h>

typedef struct person
{
    char name[20];
    int age;
    char phoneNum[20];
} Person;

void ShowPersonInfo(Person man)
{
    printf("이름: %s \n", man.name);
    printf("나이: %d \n", man.age);
    printf("전화번호: %s \n", man.phoneNum);
}

Person ReadPersonInfo(void)
{
    Person man;
    printf("이름? ");
    scanf("%s", man.name);
    printf("나이? ");
    scanf("%d", &man.age);
    printf("전화번호? ");
    scanf("%s", man.phoneNum);
    return man;
}

int main()
{
    Person man = ReadPersonInfo();
    ShowPersonInfo(man);
    return 0;
}