#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

int main()
{
    int i;
    Employee * pemp;

    // 리스트 초기화
    List list;
    ListInit(&list);

    // 동적 할당 및 노드 추가 (4개)
    pemp = (Employee *)malloc(sizeof(Employee));
    pemp->empnum = 24102101;
    strcpy(pemp->name, "Kim");
    LInsert(&list, pemp);

    pemp = (Employee *)malloc(sizeof(Employee));
    pemp->empnum = 24102102;
    strcpy(pemp->name, "Lee");
    LInsert(&list, pemp);

    pemp = (Employee *)malloc(sizeof(Employee));
    pemp->empnum = 24102103;
    strcpy(pemp->name, "Park");
    LInsert(&list, pemp);

    pemp = (Employee *)malloc(sizeof(Employee));
    pemp->empnum = 24102104;
    strcpy(pemp->name, "Choi");
    LInsert(&list, pemp);

    // 당직 확인
    char who[30];
    int days;
    printf("Who are you?");
    scanf("%s", who);

    printf("How many days do you want to know after that?");
    scanf("%d", &days);

    Employee * EmpWho;
    EmpWho = NightDuty(&list, who, days);
    if(EmpWho != NULL)
        ShowEmployeeInfo(EmpWho);
    else
        printf("There is no name who you are looking for.\n");

    // 메모리 해제
    if(LFirst(&list, &pemp))
    {
        free(pemp);

        for(i=0; i<LCount(&list)-1; i++)
            if(LNext(&list, &pemp))
                free(pemp);
        
    }

    return 0;
}