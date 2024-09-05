#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    char phoneNum[20];
};

int main()
{
    struct person man1, man2;
    strcpy(man1.name, "안성준");
    man1.age = 23;
    strcpy(man1.phoneNum, "010-1122-3344");

    printf("이름 입력: ");
    scanf("%s", man2.name);
    printf("나이 입력: ");
    scanf("%d", &(man2.age));
    printf("전화번호 입력: ");
    scanf("%s", man2.phoneNum);

    printf("<man1>\n이름: %s \n", man1.name);
    printf("나이: %d \n", man1.age);
    printf("전화번호: %s \n", man1.phoneNum);

    printf("<man2>\n이름: %s \n", man2.name);
    printf("나이: %d \n", man2.age);
    printf("전화번호: %s \n", man2.phoneNum);

    return 0;
}