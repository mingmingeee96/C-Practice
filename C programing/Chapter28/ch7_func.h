#ifndef CH7_FUNC_H
#define CH7_FUNC_H

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define TEL_LENGTH 15

typedef struct 
{
    char name[NAME_LENGTH];
    char tel[TEL_LENGTH];
} Contact;

void InsertContact();
void DeleteContact();
void SearchContact();
void PrintAllContacts();
void SaveContacts();    // 파일 저장 함수 추가
void LoadContacts();    // 파일 로드 함수 추가

#endif
