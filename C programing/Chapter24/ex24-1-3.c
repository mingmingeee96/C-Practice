/*문제
ex24-1-1.c와 ex24-1-2.c에서 생성한 파일(mystory.txt)에 저장된 정보 전체를 출력하는 프로그램을 작성하자.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("mystory.txt", "rt");
    char str[100];

    // mystory.txt 파일에서 100byte(str)만큼 읽어 str에 저장
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf(str);
    }

    fclose(fp);
    return 0;
}