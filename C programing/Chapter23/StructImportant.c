#include <stdio.h>

typedef struct student
{
    char name[20];      // 학생 이름
    char stdnum[20];    // 학생 학번
    char school[20];    // 학교 이름
    char major[20];     // 선택 전공
    int year;           // 학년
} Student;

void ShowStudentInfo(Student * sptr)
{
    printf("학생 이름: %s \n", sptr->name);
    printf("학생 학번: %s \n", sptr->stdnum);
    printf("학교 이름: %s \n", sptr->school);
    printf("선택 전공: %s \n", sptr->major);
    printf("학년: %d \n", sptr->year);
}

int main()
{
    Student arr[7];
    int i;

    for(i=0; i<7; i++)
    {
        printf("<학생 %d>\n", i+1);
        printf("이름: ");
        scanf("%s", arr[i].name);
        printf("학번: ");
        scanf("%s", arr[i].stdnum);
        printf("학교: ");
        scanf("%s", arr[i].school);
        printf("선택 전공: ");
        scanf("%s", arr[i].major);
        printf("학년: ");
        scanf("%d", &arr[i].year);
    }

    printf("\n<모든 학생 정보>\n");
    for(i=0; i<7; i++)
        ShowStudentInfo(&arr[i]);
        
    return 0;
}