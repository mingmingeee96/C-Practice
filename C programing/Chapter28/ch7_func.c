#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch7_func.h"

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void InsertContact() 
{
    if (contactCount >= MAX_CONTACTS)
    {
        printf("전화번호 목록이 가득 찼다.(100/100)\n\n");
        return;
    }

    printf("[INSERT]\n");
    printf("Input Name: ");
    fgets(contacts[contactCount].name, NAME_LENGTH, stdin);
    strtok(contacts[contactCount].name, "\n"); // 개행 문자 제거

    printf("Input Tel Number: ");
    fgets(contacts[contactCount].tel, TEL_LENGTH, stdin);
    strtok(contacts[contactCount].tel, "\n"); // 개행 문자 제거

    contactCount++;
    printf("\t\t\tData Inserted\n\n");
}

void DeleteContact() 
{
    char name[NAME_LENGTH];
    printf("[DELETE]\n");
    printf("Input Name that You Want to Delete: ");
    fgets(name, NAME_LENGTH, stdin);
    strtok(name, "\n"); // 개행 문자 제거

    for (int i = 0; i < contactCount; i++) 
    {
        if (strcmp(contacts[i].name, name) == 0) 
        {
            for (int j = i; j < contactCount - 1; j++) 
            {
                contacts[j] = contacts[j + 1]; // 데이터 이동
            }
            contactCount--;
            printf("\t\t\tData Deleted\n\n");
            return;
        }
    }
    printf("No such contact found with the name '%s'.\n\n", name);
}

void SearchContact() 
{
    char name[NAME_LENGTH];
    printf("[SEARCH]\n");
    printf("Input Name that You Want to Find: ");
    fgets(name, NAME_LENGTH, stdin);
    strtok(name, "\n"); // 개행 문자 제거

    for (int i = 0; i < contactCount; i++) 
    {
        if (strcmp(contacts[i].name, name) == 0) 
        {
            printf("[Data]\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Tel: %s\n", contacts[i].tel);
            printf("\t\t\tData Searched\n\n");
            return;
        }
    }
    printf("No contact found with the name '%s'.\n\n", name);
}

void PrintAllContacts() 
{
    printf("[Print All Data]\n");
    for (int i = 0; i < contactCount; i++) 
    {
        printf("Name: %s\tTel: %s\n", contacts[i].name, contacts[i].tel);
    }
    printf("\t\t\tData Printed\n\n");
}

void SaveContacts() 
{
    FILE *file = fopen("phonebook.txt", "w");
    if (file == NULL) 
    {
        perror("Unable to open file for writing.\n");
        return;
    }
    for (int i = 0; i < contactCount; i++) 
    {
        fprintf(file, "%s\n%s\n", contacts[i].name, contacts[i].tel);
    }
    fclose(file);
    printf("Contacts saved to phonebook.txt\n\n");
}

void LoadContacts() 
{
    FILE *file = fopen("phonebook.txt", "r");
    if (file == NULL) 
    {
        printf("No existing contact data found. Starting fresh.\n");
        return;
    }
    while (fscanf(file, "%[^\n]\n%[^\n]\n", contacts[contactCount].name, contacts[contactCount].tel) == 2) 
    {
        contactCount++;
    }
    fclose(file);
    printf("Contacts loaded from phonebook.txt\n\n");
}
