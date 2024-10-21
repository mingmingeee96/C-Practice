#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int WhoIsPrecede(Point * d1, Point * d2)
{
	if(d1->xpos < d2->xpos)
    	return 0;	// d1 x 좌표가 정렬 순서상 앞선다.
    else if(d1->xpos == d2->xpos)
    {
        if(d1->ypos < d2->ypos)
            return 0;    // d1 y좌표가 정렬 순서상 앞선다.
        else
            return 1;    // d2 y좌표가 정렬 순서상 앞서거나 같다.
    }
    else
    	return 1;	// d2가 정렬 순서상 앞서거나 같다.
}

int main()
{
    List list;
    Point compPos;
    Point * ppos;

    ListInit(&list);

    // 정렬 기준 등록
    SetSortRule(&list, WhoIsPrecede);

    // 4개의 데이터 저장 ///////
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);

    // 저장된 데이터의 출력
    printf("Now number of data: %d \n", LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n\n");

    // xpos가 2인 모든 데이터 삭제 ///////
    compPos.xpos = 2;
    compPos.ypos = 0;

    if(LFirst(&list, &ppos))
    {
        if(PointComp(ppos, &compPos)==1)
        {
            ppos=LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos))
        {
            if(PointComp(ppos, &compPos)==1)
            {
                ppos=LRemove(&list);
                free(ppos);
            }
        }
    }

    // 삭제 후 남은 데이터 전체 출력 ///////
    printf("Now number of data: %d \n", LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n");
    return 0;
}