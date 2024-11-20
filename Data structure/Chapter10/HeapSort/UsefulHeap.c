#include "UsefulHeap.h"

// 힙의 초기화 (수정)
void HeapInit(Heap * ph, PriorityComp pc)
{
    ph->numOfData = 0;
    ph->comp = pc;
}

// 힙이 비었는지 확인
int HIsEmpty(Heap * ph)
{
    if(ph->numOfData == 0)
        return TRUE;
    else
        return FALSE;
}

// 부모 노드의 인덱스 값 반환
int GetParentIDX(int idx)
{
    return idx/2;
}

// 왼쪽 자식 노드의 인덱스 값 반환
int GetLChildIDX(int idx)
{
    return idx*2;
}

// 오른쪽 자식 노드의 인덱스 값 반환
int GetRChildIDX(int idx)
{
    return GetLChildIDX(idx)+1;
}

// 두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환 (수정)
int GetHiPriChildIDX(Heap * ph, int idx)
{
    if(GetLChildIDX(idx) > ph->numOfData)
        return 0;

    else if(GetLChildIDX(idx) == ph->numOfData)
        return GetLChildIDX(idx);

    else
    {
        // 수정
        if(ph->comp(ph->heapArr[GetLChildIDX(idx)], ph->heapArr[GetRChildIDX(idx)]) < 0)
            return GetRChildIDX(idx);

        else
            return GetLChildIDX(idx);
    }
}

// 힙에 데이터 저장 (수정)
void HInsert(Heap * ph, HData data)
{
    // 수정
    int idx = ph->numOfData+1;
    
    while(idx != 1)
    {	
    	// 수정
        if(ph->comp(data, ph->heapArr[GetParentIDX(idx)]) > 0)
        {
        	ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx);
        }
        else
            break;
    }

    ph->heapArr[idx] = data;
    ph->numOfData += 1;
}

// 힙에서 데이터 삭제 (수정)
HData HDelete(Heap * ph)
{   
    // 수정
    HData retData = ph->heapArr[1];
    HData lastElem = ph->heapArr[ph->numOfData];
	
    int parentIdx = 1;
    int childIdx;
	
    // 수정
    while(childIdx = GetHiPriChildIDX(ph, parentIdx))
    {
        if(ph->comp(lastElem, ph->heapArr[childIdx]) >=0)
            break;
        
        ph->heapArr[parentIdx] = ph->heapArr[childIdx];
        parentIdx = childIdx;
    }	

    ph->heapArr[parentIdx] = lastElem;
    ph->numOfData -= 1;
    return retData;
}