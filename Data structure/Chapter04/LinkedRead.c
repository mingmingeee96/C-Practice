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

    // 데이터를 입력 받는 과정
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if(readData<1)
            break;
        
        // 노드 추가 과정
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            tail->next = newNode;
        
        tail = newNode;
    }
    printf("\n");

    // 입력 받은 데이터의 출력 과정
    printf("입력 받은 데이터의 전체 출력! \n");
    if(head == NULL)
        printf("저장된 자연수가 없습니다.");
    else
    {
        cur = head;
        printf("%d ", cur->data);

        while(cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    // 메모리 해체 과정
    if(head == NULL)
        return 0;       // 해제할 노드가 없음.
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;

        printf("%d을(를) 삭제합니다. \n", head->data);
        free(delNode);  // 첫 번째 노드 삭제.

        while(delNextNode != NULL)  // 두 번째 이후 노드 삭제.
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다. \n", delNode->data);
            free(delNode);
        }
    }
    return 0;
}