/*문제
좌 상단의 x, y좌표가 [0, 0], 우 하단의 x, y 좌표가 [100, 100]인 좌표평면상의 직사각형 정보를 표현하기 위한
구조체 Rectangle을 정의하되, 다음 구조체 기반으로 정의해보자.
typedef struct point
{
    int xpos, ypos;
} Point;
그리고 Rectangle 구조체 변수를 인자로 전달받아서 해당 직사각형의 넓이를 계산해서 출력하는 함수와 
직사각형을 이루는 네 점의 좌표정보를 출력하는 함수를 각각 정의해보자.
단, 좌표평면상에서 직사각형을 표현하기 위해서 필요한 점의 갯수는 4개가 아닌 2개이니,
직사각형을 의미한 Rectangle 변수 내에는 두 점의 정보만 존재해야 한다.
*/

#include <stdio.h>

typedef struct point
{
    int xpos, ypos;
} Point;

typedef struct rectangle
{
    Point p1, p2;
} Rectangle;

void calculateArea(Point p1, Point p2)
{
    int width = p2.xpos - p1.xpos;
    int height = p2.ypos - p1.ypos;
    int area = width * height;
    printf("Rectangle area: %d\n", area);
}

void printRectanglePoints(Point p1, Point p2)
{   
    Point p3 = {p1.xpos, p2.ypos};
    Point p4 = {p2.xpos, p1.ypos};
    printf("Rectangle points: [%d, %d], [%d, %d], [%d, %d], [%d, %d]\n", 
            p1.xpos, p1.ypos, p3.xpos, p3.ypos, p2.xpos, p2.ypos, p4.xpos, p4.ypos);
}

int main()
{
    Point p1 = {0, 0};
    Point p2 = {100, 100};
    Rectangle rect = {p1, p2};
    
    calculateArea(rect.p1, rect.p2);
    printRectanglePoints(rect.p1, rect.p2);
    
    return 0;
}