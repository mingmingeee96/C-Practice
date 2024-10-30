#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE    1
#define FALSE   0

#define QUE_LEN     50 // 대기실 수용 인원(명)

typedef int Data;

typedef struct _cQueue
{
    int front;
    int rear;
    Data queArr[QUE_LEN];
} CQueue;

typedef CQueue Queue;

void QueueInit(Queue * pq);
int QIsEmpty(Queue * pq);

void Enqueue(Queue * pq, Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);

#endif