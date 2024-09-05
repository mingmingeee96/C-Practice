#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

Point AddPoint(Point p1, Point p2)
{
    Point p = {p1.xpos+p2.xpos, p1.ypos+p2.ypos};
    return p;
}

Point MinPoint(Point p1, Point p2)
{
    Point p = {p1.xpos-p2.xpos, p1.ypos-p2.ypos};
    return p;
}

int main()
{
    Point p1 = {5, 6};
    Point p2 = {2, 9};
    Point result;

    result = AddPoint(p1, p2);
    printf("구조체 변수 덧셈: [%d, %d]\n", result.xpos, result.ypos);
    
    result = MinPoint(p1, p2);
    printf("구조체 변수 뺄셈: [%d, %d]\n", result.xpos, result.ypos);
    
    return 0;
}