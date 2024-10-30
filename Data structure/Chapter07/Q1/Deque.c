#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

// 덱의 초기화
void DequeInit(Deque * pdeq)
{
    pdeq->head = NULL;
    pdeq->tail = NULL;
}

// 덱의 차고 빔 확인
int DQIsEmpty(Deque * pdeq)
{
    if(pdeq->head == NULL)
        return TRUE;
    else
        return FALSE;
}

// 덱에 데이터 추가
void DQAddFirst(Deque * pdeq, Data data)    // 머리
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = pdeq->head;

    if(DQIsEmpty(pdeq))
        pdeq->tail = newNode;
    else
        pdeq->head->prev = newNode;
    
    newNode->prev = NULL;
    pdeq->head = newNode;
}
void DQAddLast(Deque * pdeq, Data data)     // 꼬리
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = pdeq->tail;

    if(DQIsEmpty(pdeq))
        pdeq->head = newNode;
    else
        pdeq->tail->next = newNode;
    
    newNode->next = NULL;
    pdeq->tail = newNode;
}

// 덱에 데이터 제거 및 반환
Data DQRemoveFirst(Deque * pdeq)    // 머리
{
    Node * rnode = pdeq->head;
    Data rdata;
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }
    rdata = pdeq->head->data;

    pdeq->head = pdeq->head->next;
    free(rnode);

    if(pdeq->head == NULL)
        pdeq->tail = NULL;
    else  
        pdeq->head->prev = NULL;
    
    return rdata;
}
Data DQRemoveLast(Deque * pdeq)     // 꼬리
{
    Node * rnode = pdeq->tail;
    Data rdata;
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }
    rdata = pdeq->tail->data;

    pdeq->tail = pdeq->tail->prev;
    free(rnode);

    if(pdeq->tail == NULL)
        pdeq->head = NULL;
    else  
        pdeq->tail->next = NULL;
    
    return rdata;
}

// 덱에 데이터 반환
Data DQGetFirst(Deque * pdeq)   // 머리
{
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }
    return pdeq->head->data;
}
Data DQGetLast(Deque * pdeq)    // 꼬리
{
    if(DQIsEmpty(pdeq))
    {
        printf("Deque Memory Error!\n");
        exit(-1);
    }
    return pdeq->tail->data;
}