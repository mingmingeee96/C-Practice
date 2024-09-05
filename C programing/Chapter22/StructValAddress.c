#include <stdio.h>

struct point
{
    int xpos, ypos;
};

struct person
{
    char name[20];
    int age;
    char phoneNum[20];
};

int main()
{
    struct point pos = {10, 20};
    struct person man = {"이승기", 21, "010-1212-3434"};

    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name);

    return 0;
}