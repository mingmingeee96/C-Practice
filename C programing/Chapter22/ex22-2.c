/*문제
22-1문제에서 정의한 employee라는 구조체를 기반으로 길이가 3인 배열을 선언하자.
그리고 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장한 다음,
배열에 저장된 데이터를 순서대로 출력해보자.*/

#include <stdio.h>

struct employee {
    char name[30];
    char id[15];
    int salary;
};

int main()
{
    struct employee employees[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("[종업원 %d]\n", i + 1);
        printf("이름 입력: ");
        scanf("%s", employees[i].name);
        printf("주민등록번호 입력: ");
        scanf("%s", employees[i].id);
        printf("급여정보 입력: ");
        scanf("%d", &employees[i].salary);
        printf("\n");
    }

    printf("종업원들 데이터:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[종업원 %d]\n", i + 1);
        printf("이름: %s\n", employees[i].name);
        printf("주민등록번호: %s\n", employees[i].id);
        printf("급여: %d\n\n", employees[i].salary);
    }

    return 0;
}