//새 노드를 연결 리스트의 꼬리가 아닌 머리에 추가.

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node* next;
} Node;

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    // 데이터 입력 받기
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if(readData < 1)
            break;
        
        // 노드 추가
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    printf("\n");

    // 입력 받은 데이터 출력
    printf("<입력 받은 데이터의 전체 출력!\n");
    if(head == NULL)
        printf("저장된 자연수가 없습니다.\n");
    else
    {
        cur = head;
        printf("%d ", cur->data);   // 첫 번째 데이터 출력

        while(cur->next != NULL)    // 두 번째 이후 데이터 출력
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    // 메모리 해제
    if(head == NULL)
        return 0;   // 삭제할 노드(데이터) 없음.
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;

        printf("%d을(를) 삭제합니다. \n", head->data);
        free(delNode);  // 첫 번째 노드 삭제

        while(delNextNode != NULL)  // 두 번째 이후 노드 삭제
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다. \n", delNode->data);
            free(delNode);
        }
    }
    return 0;
}