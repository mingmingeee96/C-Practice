/*
1. 총 3명의 전화번호 정보를 리스트에 저장
2. 특정 이름을 대상으로 탐색을 진행하여 그 사람의 정보 출력
3. 특정 이름을 대상으로 탐색을 진행하여 그 사람의 전화번호 정보를 변경
4. 특정 이름을 대상으로 탐색을 진행하여 그 사람의 정보를 삭제
5. 끝으로 남아있는 모든 사람의 전화번호 정보를 출력
*/

#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main()
{
    List list;
    NameCard * pcard;
    ListInit(&list);

    // 3명의 전화번호 정보 리스트에 저장.
    pcard = MakeNameCard("김철수", "010-1122-3344");
    LInsert(&list, pcard);

    pcard = MakeNameCard("박영희", "010-5566-7788");
    LInsert(&list, pcard);

    pcard = MakeNameCard("이바둑", "010-1234-5678");
    LInsert(&list, pcard);

    // 김철수의 정보를 조회하여 출력
    if(LFirst(&list, &pcard))
        if(!NameCompare(pcard, "김철수"))
            ShowNameCardInfo(pcard);
        else
            while(LNext(&list, &pcard))
                if(!NameCompare(pcard, "김철수"))
                {
                    ShowNameCardInfo(pcard);
                    break;
                }

    // 박영희의 정보를 조회하여 전화번호 정보 변경.
    if(LFirst(&list, &pcard))
        if(!NameCompare(pcard, "박영희"))
            ChangePhoneNum(pcard, "010-9999-8888");
        else
            while(LNext(&list, &pcard))
                if(!NameCompare(pcard, "박영희"))
                {
                    ChangePhoneNum(pcard, "010-9999-8888");
                    break;
                }

    
    // 이바둑의 정보를 조회하여 정보 삭제.
    if(LFirst(&list, &pcard))
        if(!NameCompare(pcard, "이바둑"))
        {
            pcard = LRemove(&list);
            free(pcard);
        }
        else
            while(LNext(&list, &pcard))
                if(!NameCompare(pcard, "이바둑"))
                {
                    pcard = LRemove(&list);
                    free(pcard);
                    break;
                }

    // 모든 사람의 정보 출력
    printf("Now number of data: %d \n", LCount(&list));

    if(LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }

    return 0;
}