/*문제
ex24-1-1.c에서 작성한 파일(mystory.txt)에 데이터를 추가하자.
추가할 데이터는 즐겨 먹는 음식의 정보와 취미이다.
입력의 형태는 다음과 같아야 한다.
#즐겨먹는 음식: 마라탕, 엽떡
#취미: 댄스
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("mystory.txt", "at");
    fputs("#즐겨먹는 음식: 마라탕, 엽떡 \n", fp);
    fputs("#취미: 댄스\n", fp);
    fclose(fp);
    return 0;
}