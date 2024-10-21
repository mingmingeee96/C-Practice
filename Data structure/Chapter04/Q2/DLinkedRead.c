#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node * next;
} Node;

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    head = (Node *) malloc(sizeof(Node));   // 더미 노드 추가
    tail = head;

    // 데이터를 입력 받는 과정
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if(readData < 1)
            break;
        
        // 노드 추가 과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    printf("\n");

    // 입력 받은 데이터 출력
    printf("<입력 받은 데이터의 전체 출력>\n");
    if(head == NULL)
        printf("저장된 자연수가 없습니다.\n");
    else
    {
        cur = head;

        while(cur->next !=NULL) // 더미 노드 이후 두 번째 데이터부터 출력
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
        printf("\n\n");
    }

    // 메모리 해제과정
    if(head == NULL)
        return 0;       // 해제할 노드가 없음.
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;

        while(delNextNode != NULL)
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다. \n", delNode->data);
            free(delNode);
        }
    }
    return 0;
}