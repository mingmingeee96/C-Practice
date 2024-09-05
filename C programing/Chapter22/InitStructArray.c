#include <stdio.h>

struct person
{
    char name[20];
    int age;
    char phoneNum[20];
};

int main()
{
    struct person arr[3] = {
        {"강호동", 43, "010-1212-3434"},
        {"이수근", 40, "010-5656-7878"},
        {"은지원", 39, "010-1234-5678"}
    };

    int i;
    for(i=0; i<3; i++)
        printf("이름: %s\t나이: %d\t전화번호: %s\n", arr[i].name, arr[i].age, arr[i].phoneNum);

    return 0;
}