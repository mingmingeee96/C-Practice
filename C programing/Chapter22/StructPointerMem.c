#include <stdio.h>

struct point
{
    int xpos, ypos;
};

struct circle
{
    double radius;
    struct point * center;
};

int main()
{
    struct point cen = {2, 7};
    double rad = 5.5;

    struct circle circ = {rad, &cen};
    printf("원의 반지름: %g \n", circ.radius);
    printf("원의 중심 [%d, %d] \n", circ.center->xpos, circ.center->ypos);

    return 0;
}