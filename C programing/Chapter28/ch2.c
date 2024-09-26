/*도전2
도전 1(ch1.c)에서 구현한 프로그램에 약간의 변경을 줘보자.
구조체 배열을 선언하는 것이 아니라, 구조체 포인터 배열을 선언하고 구조체 변수를 동적으로 할당하는 형태로 프로그램을 재 구현해 보자.
그리고 도전 1에서 구현한 방법보다 도전 2에서 구현한 방법이 지니는 장점이 무엇인지도 생각해보자.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int page;
};

int main() {
    struct Book **books;  // 구조체 포인터 배열
    int i;
    int num_books = 3;    // 도서 개수

    // 구조체 포인터 배열 동적 할당
    books = (struct Book **)malloc(num_books * sizeof(struct Book *));
    for (i = 0; i < num_books; i++) {
        books[i] = (struct Book *)malloc(sizeof(struct Book));
    }

    printf("<도서 정보> - 입력\n");
    for (i = 0; i < num_books; i++) {
        printf("저자: ");
        fgets(books[i]->author, sizeof(books[i]->author), stdin);
        strtok(books[i]->author, "\n");  // 개행 문자 제거

        printf("제목: ");
        fgets(books[i]->title, sizeof(books[i]->title), stdin);
        strtok(books[i]->title, "\n"); // 개행 문자 제거

        printf("페이지: ");
        scanf("%d", &books[i]->page);
        getchar(); // 개행 문자 제거
        printf("\n");
    }

    printf("<도서 정보> - 출력\n");
    for (i = 0; i < num_books; i++) {
        printf("도서 %d\n", i + 1);
        printf("제목: %s\n", books[i]->title);
        printf("저자: %s\n", books[i]->author);
        printf("페이지: %d\n", books[i]->page);
        printf("\n");
    }

    // 동적으로 할당한 메모리 해제
    for (i = 0; i < num_books; i++) {
        free(books[i]);
    }
    free(books);
    // system("leaks a.exe");
    return 0;
}
