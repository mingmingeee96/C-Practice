/*문제
원주율 PI를 매크로 상수로 정의하고 이를 이용해서 원의 넓이를 구하는 매크로 함수 AREA를 정의해보자.*/

#include <stdio.h>

#define PI 3.1415
#define AREA(R) ((PI) * (R) * (R))

int main()
{
    double rad;
    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &rad);
    printf("원의 넓이: %f \n", AREA(rad));
    return 0;
}