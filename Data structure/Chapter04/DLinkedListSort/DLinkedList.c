#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

// 리스트 초기화
void ListInit(List * plist)
{
	plist->head = (Node *)malloc(sizeof(Node));
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

// 노드 삽입
void FInsert(List * plist, LData data)
{
	Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = plist->head->next;
    plist->head->next = newNode;
    
    (plist->numOfData)++;
}

void SInsert(List *plist, LData data)
{
	Node * newNode = (Node *)malloc(sizeof(Node));	// 새 노드 생성
    Node * pred = plist->head;						// pred = 더미 노드
    newNode->data = data;							// 새 노드에 데이터 저장
    
    // 새 노드가 들어갈 위치를 찾기 위한 반복문
    while(pred->next != NULL && plist->comp(data, pred->next->data) != 0)
    	pred = pred->next;				// 다음 노드로 이동
    
    newNode->next = pred->next;		// 새 노드의 오른쪽 연결
    pred->next = newNode;			// 새 노드의 왼쪽 연결
    
    (plist->numOfData)++;			// 저장된 데이터의 수 +1
}

void LInsert(List * plist, LData data)
{
	if(plist->comp == NULL)
    	FInsert(plist, data);
    else
    	SInsert(plist, data);
}

// 데이터 조회
int LFirst(List * plist, LData * pdata)
{
	if(plist->head->next == NULL)
    	return FALSE;
    
    plist->before = plist->head;
    plist->cur = plist->head->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if(plist->cur->next == NULL)
    	return FALSE;
    
    plist->before = plist->cur;
    plist->cur = plist->cur->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

// 노드 삭제
LData LRemove(List * plist)
{
	Node * rpos = plist->cur;
    LData rdata = rpos->data;
    
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
    
    free(rpos);
    (plist->numOfData)--;
    return rdata;
}

// 데이터 전체 수 조회
int LCount(List * plist)
{
	return plist->numOfData;
}

// 정렬 기준 등록
void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
	plist->comp = comp;
}