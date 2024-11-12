#include "SimpleHeap.h"

// 힙의 초기화
void HeapInit(Heap * ph)
{
    ph->numOfData = 0;
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

// 두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환
int GetHiPriChildIDX(Heap * ph, int idx)
{
    // 자식 노드가 존재하지 않는다면
    if(GetLChildIDX(idx) > ph->numOfData)
        return 0;

    // 자식 노드가 하나(왼쪽 자식 노드)만 존재한다면
    else if(GetLChildIDX(idx) == ph->numOfData)
        return GetLChildIDX(idx);

    // 자식 노드가 둘 다 존재한다면
    else
    {
        // 오른쪽 자식 노드의 우선순위가 높다면 (인덱스 값이 작다면)
        if(ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr)
            return GetRChildIDX(idx);
        
        // 왼쪽 자식 노드의 우선순위가 높다면
        else
            return GetLChildIDX(idx);
    }
}

// 힙에 데이터 저장
void HInsert(Heap * ph, HData data, Priority pr)
{
    int idx = ph->numOfData+1;		// 새 노드가 저장될 인덱스 값을 idx에 저장
    HeapElem nelem = {pr, data};	// 새 노드의 생성 및 초기화
	
    // 새 노드가 저장될 위치가 루트 노드의 위치가 아니라면 while문 반복
    while(idx != 1)
    {	
    	// 새 노드와 부모 노드의 우선순위 비교
        if(pr < (ph->heapArr[GetParentIDX(idx)].pr))	// 새 노드의 우선순위가 높다면
        {
        	// 부모 노드를 한 레벨 내리기
            ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
            
            // 새 노드를 한 레벨 올리기
            idx = GetParentIDX(idx);
        }
        else	// 새 노드의 우선순위가 높지 않다면
            break;
    }

    ph->heapArr[idx] = nelem;	// 새 노드를 배열에 저장
    ph->numOfData += 1;
}

// 힙에서 데이터 삭제
HData HDelete(Heap * ph)
{
    HData retData = (ph->heapArr[1].data);	// 반환을 위한 삭제할 데이터 저장
    HeapElem lastElem = ph->heapArr[ph->numOfData];	// 힙의 마지막 노드 저장
	
    // 아래의 변수 parentIdx에는 마지막 노드가 저장될 위치 정보가 저장됨.
    int parentIdx = 1;	// 루트 노드가 위치해야 할 인덱스 값 저장 (시작)
    int childIdx;
	
    // 루트 노드의 우선순위가 높은 자식 노드를 시작으로 반복문 시작
    while(childIdx = GetHiPriChildIDX(ph, parentIdx))
    {
        if(lastElem.pr <= ph->heapArr[childIdx].pr)	// 마지막 노드와 우선순위 비교
            break;	// 마지막 노드의 우선순위가 높은 경우 반복문 탈출
        
        // 마지막 노드보다 우선수위 높으니 비교대상 노드의 위치를 한 레벨 올리기
        ph->heapArr[parentIdx] = ph->heapArr[childIdx];
        // 마지막 노드가 저장될 위치 정보는 한 레벨 내리기
        parentIdx = childIdx;
    }	// 반복문을 탈출하면 parentIdx에는 마지막 노드의 위치 정보가 저장됨

    ph->heapArr[parentIdx] = lastElem;	// 마지막 노드 최종 저장
    ph->numOfData -= 1;	// 노드 갯수 하나 삭제
    return retData;	// 삭제된 노드 반환
}