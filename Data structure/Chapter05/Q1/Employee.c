#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

// 원형 연결 리스트 함수 구현
void ListInit(List * plist)
{
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

void LInsertFront(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if(plist->tail == NULL) 
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}

	(plist->numOfData)++;
}

void LInsert(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if(plist->tail == NULL) 
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else 
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
	if(plist->tail == NULL)
		return FALSE;

	plist->before = plist->tail;
	plist->cur = plist->tail->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List * plist, Data * pdata)
{
	if(plist->tail == NULL)
		return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List * plist)
{
	Node * rpos = plist->cur;
	Data rdata = rpos->data;

	if(rpos == plist->tail)
	{
		if(plist->tail == plist->tail->next)
			plist->tail = NULL;
		else
			plist->tail = plist->before;
	}

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}


// 당직 직원 함수 구현
Employee * NightDuty(List * plist, char * name, int day)
{
    int i, num;
    Employee *emp;

    num = LCount(plist);

    LFirst(plist, &emp);

    if(strcmp(emp->name, name) != 0)
    {
        for(i=0; i<num; i++)
        {
            LNext(plist, &emp);

            if(strcmp(emp->name, name) == 0)
                break;
        }

        if(i >= num-1)
            return NULL;
    }

    for(i=0; i<day; i++)
        LNext(plist, &emp);
    
    return emp;
}

void ShowEmployeeInfo(Employee * emp)
{
    printf("Employee name: %s\n", emp->name);
    printf("Employee number: %d\n", emp->empnum);
}