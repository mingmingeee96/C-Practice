/*
- 실행 예시
*****MENU*****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 1
[INSERT]
Input Name: Yoon
Input Tel Number: 333-4444
				Data Inserted
                
*****MENU*****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 2
[DELETE]
Input Name that You Want to Delete: Yoon
				Data Deleted
                
*****MENU*****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 3
[SEARCH]
Input Name that You Want to Find: Yoon
[Data]
Name: Yoon
Tel: 333-4444
				Data Searched

*****MENU*****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 4
[Print All Data]
Name: Yoon	Tel: 333-4444
				Data Printed
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch6_func.h"   // 헤더 파일 포함

// 전화번호 목록
Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void InsertContact()
{
    if(contactCount >= MAX_CONTACTS)
    {
        printf("전화번호 목록이 가득 찼다.(100/100)\n\n");
        return;
    }

    printf("[INSERT]\n");
    printf("Input Name: ");
    fgets(contacts[contactCount].name, NAME_LENGTH, stdin);
    strtok(contacts[contactCount].name, "\n");

    printf("Input Tel Number: ");
    fgets(contacts[contactCount].tel, TEL_LENGTH, stdin);
    strtok(contacts[contactCount].tel, "\n");

    contactCount++;
    printf("\t\t\tData Inserted\n\n");
}

void DeleteContact()
{
    char name[NAME_LENGTH];
    printf("[DELETE]\n");
    printf("Input Name that You Want to Delete: ");
    fgets(name, NAME_LENGTH, stdin);
    strtok(name, "\n");

    for(int i = 0; i < contactCount; i++)
    {
        if(strcmp(contacts[i].name, name) == 0)
        {
            for(int j = i; j < contactCount - 1; j++)
            {
                strcpy(contacts[j].name, contacts[j + 1].name);
                strcpy(contacts[j].tel, contacts[j + 1].tel);
            }
            contactCount--;
            printf("\t\t\tData Deleted\n\n");
            return;
        }
    }
    printf("No such contact found with the name '%s'\n\n", name);
}

void SearchContact()
{
    char name[NAME_LENGTH];
    printf("[SEARCH]\n");
    printf("Input Name that You Want to Find: ");
    fgets(name, NAME_LENGTH, stdin);
    strtok(name, "\n");
    
    for(int i = 0; i < contactCount; i++)
    {
        if(strcmp(contacts[i].name, name) == 0)
        {
            printf("[Data]\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Tel: %s\n", contacts[i].tel);
            printf("\t\t\tData Searched\n\n");
            return;
        }
    }
    printf("No such contact found with the name '%s'\n\n", name);
}

void PrintAllContacts()
{
    printf("[Print All Data]\n");
    for(int i = 0; i < contactCount; i++)
    {
        printf("Name: %s\tTel: %s\n", contacts[i].name, contacts[i].tel);
    }
    printf("\t\t\tData Printed\n\n");
}