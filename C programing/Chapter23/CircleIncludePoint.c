#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

typedef struct circle
{
    Point center;
    double radius;
} Circle;

void ShowCircleInfo(Circle *cptr)
{
    printf("Circle center: [%d, %d] \n", (cptr->center).xpos, (cptr->center).ypos);
    printf("Circle radius: %g \n\n", cptr->radius);
}

int main()
{
    Circle c1 = {{1, 2}, 3.5};
    Circle c2 = {{2, 4}, 3.9};
    
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    
    return 0;
}