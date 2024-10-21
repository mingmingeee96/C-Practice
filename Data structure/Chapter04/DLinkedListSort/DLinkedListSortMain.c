#include <stdio.h>
#include "DLinkedList.h"

int WhoIsPrecede(int d1, int d2)
{
	if(d1 < d2)
    	return 0;	// d1이 정렬 순서상 앞선다.
    else
    	return 1;	// d2가 정렬 순서상 앞서거나 같다.
}

int main()
{
    // 리스트의 생성 및 초기화
    List list;
    int data;
    ListInit(&list);

    // 정렬 기준 등록
    SetSortRule(&list, WhoIsPrecede);

    // 5개의 데이터 저장
    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);

    // 저장된 데이터의 전체 출력
    printf("Current Number of data: %d\n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    // 숫자 22를 검색하여 모두 삭제
    if(LFirst(&list, &data))
    {
        if(data == 22)
            LRemove(&list);

        while(LNext(&list, &data))
        {
            if(data == 22)
                LRemove(&list);
        }
    }

    // 삭제 후 남은 데이터 전체 출력
    printf("Now Number of data: %d\n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;
}