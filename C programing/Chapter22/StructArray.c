#include <stdio.h>

struct point
{
    int xpos, ypos;
};

int main()
{
    struct point arr[3];
    int i;

    for(i=0; i<3; i++)
    {
        printf("점%d의 좌표 입력: ", i+1);
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for(i=0; i<3; i++)
        printf("(%d, %d) ", arr[i].xpos, arr[i].ypos);
    
    return 0;
}