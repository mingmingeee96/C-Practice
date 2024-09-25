/*도전 6
전화번호 관리 프로그램을 작성해 보자.
이 프로그램이 기본적으로 지녀야 하는 기능은 다음과 같다.

- 입력: 이름과 전화번호의 입력
- 삭제: 이름을 입력하여 해당 이름의 정보 삭제
- 검색: 이름을 입력하여 해당 이름의 정보 출력
- 전체 출력: 저장된 모든 이름과 전화번호 정보를 출력

실행 예시와 비슷하게 동작하는 전화번호 관리 프로그램을 구현하기 바란다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 함수 참조
void InsertContact();
void DeleteContact();
void SearchContact();
void PrintAllContacts();

int main()
{
    int choice;

    while(1)
    {
        printf("*****MENU*****\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print All\n");
        printf("5. Exit\n");
        printf("Choose the item: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                InsertContact();
                break;
            case 2:
                DeleteContact();
                break;
            case 3:
                SearchContact();
                break;
            case 4:
                PrintAllContacts();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    }
}