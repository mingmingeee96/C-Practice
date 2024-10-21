#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#define TRUE 1
#define FALSE 0

// 직원 구조체
typedef struct _Employee
{
    char name[30];
    int empnum;
} Employee;


typedef Employee * Data;

// 원형 연결 리스트
typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _CLL
{
	Node * tail;
	Node * cur;
	Node * before;
	int numOfData;
} CList;


typedef CList List;


// 직원 당직 함수 구현
Employee * NightDuty(List * plist, char * name, int day);
void ShowEmployeeInfo(Employee * emp);


// 원형 연결 리스트 함수 구현
void ListInit(List * plist);
void LInsert(List * plist, Data data);
void LInsertFront(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
Data LRemove(List * plist);
int LCount(List * plist);

#endif