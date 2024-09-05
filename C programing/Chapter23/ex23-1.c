/*문제
다음 구조체의 두 변수를 대상으로 저장된 값을 서로 바꿔주는 함수를 정의하고 이를 호출하는 예제를 작성해보자.
typedef struct point
{
    int xpos, ypos;
} Point;
예를 들어서 다음과 같이 두 개의 구조체 변수가 선언된 상태에서
Point p1 = {2, 4};
Point p2 = {5, 7};
이 두 구조체 변수를 대상으로, 혹은 두 구조체 변수의 주소 값을 대상을 SwapPoint라는 이름의 함수를 호출하면
p1의 xpos, ypos에는 각각 5, 7이, p2의 xpos, ypos에는 각각 2, 3가 저장되어야 한다.
*/

#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

void SwapPoint(Point* p1, Point* p2)
{
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
// 구조체 변수를 대상으로 바꾸려면 어떻게 할 수 있을까?

int main()
{
    Point p1 = {2, 4};
    Point p2 = {5, 7};
    printf("Before Swap: p1[%d, %d], p2[%d, %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
    SwapPoint(&p1, &p2);
    printf("After Swap: p1[%d, %d], p2[%d, %d]\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
    return 0;
}