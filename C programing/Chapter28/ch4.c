/*도전 4
문자열을 저장하고 있는 파일을 열어서 A와 P로 시작하는 단어의 수를 세어서 출력하는 프로그램을 작성해보자.
단, 모든 단어는 공백문자(space bar, \t, \n)에 의해서 구분된다고 가정한다.

- 실행 예시
실행파일의 이름이 wordcnt.exe이고 대상파일의 이름이 text.txt인 경우의 실행의 예
c:\>wordcnt text.txt
A로 시작하는 단어의 수: 4
P로 시작하는 단어의 수: 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

int main(int argc, char *argv[])    // argc: 명령행 인자의 수, argv: 명령행 인자를 문자열 배열로 저장.
{
    if (argc != 2)  // 파일 이름이 인자로 제공되지 않으면 오류 메세지 출력하고 종료.
    {
        printf("사용법: %s <파일이름>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");   // 파일 열기. 실패시 perror 함수 사용하여 오류 메세지 출력하고 종료.
    if (file == NULL)
    {
        perror("파일을 열 수 없습니다");
        return 1;
    }

    char word[MAX_WORD_LENGTH]; // 각 단어 저장.
    int countA = 0, countP = 0;

    while (fscanf(file, "%s", word) == 1)   // fscanf으로 파일에서 단어 하나씩 읽어오기. %s로 공백으로 구분된 단어 읽음.
    {
        // 첫 글자를 대문자로 변환하여 비교
        char firstChar = toupper(word[0]);  // 단어의 첫 글자 대문자로 변환.
        if (firstChar == 'A') {
            countA++;   // A로 시작하는 단어 카운트.
        } else if (firstChar == 'P') {
            countP++;   // P로 시작하는 단어 카운트.
        }
    }

    fclose(file);

    printf("A로 시작하는 단어의 수: %d\n", countA);
    printf("P로 시작하는 단어의 수: %d\n", countP);

    return 0;
}