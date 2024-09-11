/*문제
프로그램 사용자로부터 정수를 입력 받는다.
-1이 입력될 때까지 계속해서 입력 받아서,
프로그램 종료직전에 입력 받은 정수 전부를 순서대로 출력하는 프로그램을 작성해보자.
그런데 이 문제의 핵심은 프로그램 사용자가 몇 개의 정수를 입력할지 모른다는데 있다.
우선 길이가 5인 int형 배열을 힙에 할당한다.
배열이 꽉 찰 때마다 길이를 3씩 늘리기로 하자.
realloc 함수를 사용하면 상대적으로 쉽게 배열의 길이를 늘릴 수 있다.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(sizeof(int) * 5);
    int count = 0;

    while (1) {
        printf("Enter an integer (-1 to stop): ");
        scanf("%d", &arr[count]);

        if (arr[count] == -1) {
            break;
        }

        count++;

        if (count == 5) {
            arr = realloc(arr, sizeof(int) * (count + 3));
        }
    }

    printf("Entered integers in reverse order:\n");
    for (int i = 0; i <= count-1 ; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}