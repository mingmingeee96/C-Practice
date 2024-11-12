#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char * str1, char * str2)
{
    return strlen(str2) - strlen(str1);
}

int main()
{
    PQueue pq;
    PQueueInit(&pq, DataPriorityComp);

    PEnqueue(&pq, "Apple");
    PEnqueue(&pq, "Banana");
    PEnqueue(&pq, "Cherry");
    PEnqueue(&pq, "Grape");
    PEnqueue(&pq, "Orange");
    PEnqueue(&pq, "Kiwi");
    PEnqueue(&pq, "Mango");
    PEnqueue(&pq, "Pineapple");
    PEnqueue(&pq, "Strawberry");
    PEnqueue(&pq, "Watermelon");

    while(!PQIsEmpty(&pq))
        printf("%s \n", PDequeue(&pq));

    return 0;
}