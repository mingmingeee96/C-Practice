/*도전 7
도전 6에서 구현한 프로그램의 문제점은 프로그램이 종료되고 나면 기존에 저장된 데이터가 전부 사라진다는 것이다. 이 문제점을 해결하자.
프로그램이 종료되기 전에 파일을 하나 생성해서 기존에 입력받은 데이터를 저장하고, 프로그램을 다시 실행하면 파일에 저장된 데이터를 읽어 들이는 방식으로 프로그램을 변경해보자.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch7_func.h"

int main() 
{
    int choice;

    // 데이터 로드
    LoadContacts();

    while (1) 
    {
        printf("*****MENU*****\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print All\n");
        printf("5. Exit\n");
        printf("Choose the item: ");
        scanf("%d", &choice);
        getchar(); // 개행 문자 처리

        switch (choice) 
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
                SaveContacts();  // 데이터 저장
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    }
}
