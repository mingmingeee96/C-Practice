#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

int main()
{
    Point p1 = {1, 2};
    Point p2;
    p2 = p1;    // 각 멤버 간 복사 진행

    printf("크기: %d \n", sizeof(p1));
    printf("p1: [%d, %d] \n", p1.xpos, p1.ypos);
    printf("크기: %d \n", sizeof(p2));
    printf("p2: [%d, %d] \n", p2.xpos, p2.ypos);

    return 0;
}