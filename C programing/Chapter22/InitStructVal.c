#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
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
    
    printf("Point position: (%d, %d)\n", pos.xpos, pos.ypos);
    printf("Person's information: name - %s, age - %d, phone number - %s \n", man.name, man.age, man.phoneNum);
    
    return 0;
}