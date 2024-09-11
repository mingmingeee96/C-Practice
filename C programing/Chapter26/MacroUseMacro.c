#include <stdio.h>
#define PI 3.14
#define PRODUCT(X,Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R))*PI)

int main()
{
    double rad = 2.1;
    printf("Radius: %f\narea: %g \n", rad, CIRCLE_AREA(rad));
    return 0;
}