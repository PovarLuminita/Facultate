#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "rectangle.h"

int main()
{
    point a = {'A', 5, 2};
    point b = {'B',6, 0.5};

    showPoint(a);
    showPoint(b);

    printf("dist : %lf \n", dist(a,b));
    printf("eq : %d \n", eq(a,a));


    rectangle r1 = {{'A',5,2}, {'B',2.5, 0.5}};
    printf("%lf \n", areaRect(r1));
    printf("%d \n", pointInRect(r1, b));

    rectangle r2 = {{'C',5,2}, {'D',3, 0.5}};
    printf("%d \n", rectInRect(r1,r2));

    point points[10];
    printf("Introduceti nr de puncte pe care le doriti \n");

    int n = 0;
    scanf("%d", &n);
    while(n < 0 || n > 10)
        scanf("%d", &n);

    FillPoints(points, n);
    PrintFillPoints(points, n);
    Farthest(points, n);
    return 0;
}
