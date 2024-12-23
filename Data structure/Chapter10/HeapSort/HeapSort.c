#include <stdio.h>
#include "UsefulHeap.h"

int PriComp(int n1, int n2)
{
    return n2-n1;   // 오름차순 정렬을 위한 문장
//  return n1-n2;   // 내림차순 정렬을 위한 문장
}

void HeapSort(int arr[], int n, PriorityComp pc)
{
    Heap heap;
    int i;

    HeapInit(&heap, pc);

    // 정렬대상을 가지고 힙을 구성
    for(i=0; i<n; i++)
        HInsert(&heap, arr[i]);
    
    // 순서대로 하나씩 꺼내어 정렬을 완성
    for(i=0; i<n; i++)
        arr[i] = HDelete(&heap);
}

int main()
{
    int arr[4] = {3, 4, 2, 1};
    int i;

    HeapSort(arr, sizeof(arr)/sizeof(int), PriComp);

    for(i=0; i<4; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}