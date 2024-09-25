#ifndef CH6_FUNC_H
#define CH6_FUNC_H

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define TEL_LENGTH 15

// 연락처 구조체 정의
typedef struct {
    char name[NAME_LENGTH];
    char tel[TEL_LENGTH];
} Contact;

// 함수 선언
void insertContact();
void deleteContact();
void searchContact();
void printAllContacts();

#endif
