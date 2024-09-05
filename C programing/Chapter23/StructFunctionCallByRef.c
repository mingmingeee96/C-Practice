#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

void OrgSymTrans(Point * ptr)
{
    ptr->xpos = (ptr->xpos) * -1;
    ptr->ypos = -ptr->ypos; // 위와 동일
}

void ShowPosition(Point pos)
{
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main()
{
    Point pos = {7, -5};
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);
    return 0;
}