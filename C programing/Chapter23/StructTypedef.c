#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};
typedef struct point Point;

typedef struct person
{
    char name[20];
    int age;
    char phoneNum[20];
} Person;

int main()
{
    Point pos = {10, 20};
    Person man = {"이승기", 21, "010-1212-3434"};
    
    printf("Point position: (%d, %d)\n", pos.xpos, pos.ypos);
    printf("Person's information: name - %s, age - %d, phone number - %s \n", man.name, man.age, man.phoneNum);
    
    return 0;
}