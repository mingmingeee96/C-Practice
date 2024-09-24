#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main()
{
    printf("Triangle Area(base 4, height 2): %g \n", TriangleArea(4, 2));
    printf("Circle Area(rad 3): %g \n", CircleArea(3));

    printf("Rectangle Round(base 2.5, height 5.2): %g \n", RectangleRound(2.5, 5.2));
    printf("Square Round(side 3): %g \n", SquareRound(3));
    return 0;
}