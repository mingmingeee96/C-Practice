/*도전1
간단한 도서 관리용 프로그램을 작성해보자.
[제목, 저자명, 페이지수]에 대한 정보를 저장할 수 있는 구조체를 정의하고, 구조체 배열을 선언해서 도서에 대한 정보를 저장하는 구조로 작성해 보자.
main 함수에서는 사용자로부터 3권의 도서에 대한 정보를 입력 받고, 입력이 끝나면 도서에 대한 내용을 출력해 주도록 하자.
*/

#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int page;
} Book;

int main()
{
    struct Book books[3];
    int i;

    printf("<도서 정보> - 입력\n");
    for(i = 0; i < 3; i++)
    {
        printf("저자: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        strtok(books[i].author, "\n");  // 개행 문자 제거

        printf("제목: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        strtok(books[i].title, "\n"); // 개행 문자 제거

        printf("페이지: ");
        scanf("%d", &books[i].page);
        getchar(); // 개행 문자 제거
        printf("\n");
    }

    printf("<도서 정보> - 출력\n");
    for(i = 0; i < 3; i++)
    {
        printf("도서 %d\n", i + 1);
        printf("제목: %s\n", books[i].title);
        printf("저자: %s\n", books[i].author);
        printf("페이지: %d\n", books[i].page);
        printf("\n");
    }

    return 0;
}