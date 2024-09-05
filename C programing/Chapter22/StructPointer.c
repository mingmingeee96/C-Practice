#include <stdio.h>

struct point
{
    int xpos, ypos;
};

int main()
{
    struct point p1 = {1, 2};
    struct point p2 = {100, 200};
    struct point * pptr = &p1;

    (*pptr).xpos += 4;
    (*pptr).ypos += 5;
    printf("point1 [%d, %d]\n", pptr->xpos, pptr->ypos);

    pptr=&p2;
    pptr->xpos += 1;
    pptr->ypos += 2;
    printf("point2 [%d, %d]\n", (*pptr).xpos, (*pptr).ypos);

    return 0;
}