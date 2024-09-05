/*문제
문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호' 그리고 정수 형태의 '급여정보'를 
저장할 수 있는 employee라는 이름의 구조체를 정의해보자.
그리고 나서 employee 구조체 변수를 하나 선언한 다음, 프로그램 사용자가 입력하는 정보로 이 변수를 채우자.
그리고 마지막으로 구조체 변수에 채워진 데이터를 출력해보자.*/

#include <stdio.h>

struct employee {
    char name[30];
    char id[15];
    int salary;
} person;

int main()
{
    printf("이름 입력: ");
    scanf("%s", person.name);
    printf("주민등록번호 입력: ");
    scanf("%s", person.id);
    printf("급여정보 입력: ");
    scanf("%d", &person.salary);

    printf("\n종업원 정보\n");
    printf("Name: %s\n", person.name);
    printf("ID: %s\n", person.id);
    printf("Salary: %d\n", person.salary);

    return 0;
}
