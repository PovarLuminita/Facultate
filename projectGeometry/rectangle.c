#include "rectangle.h"
#include <stdio.h>
#include <stdlib.h>

double areaRect(rectangle r)
{
   double area = (r.upperRight.x - r.lowerLeft.x) * (r.upperRight.y - r.lowerLeft.y);
   return area;
}

int pointInRect(rectangle r, point p)
{
    return ((p.x >= r.lowerLeft.x && p.x <= r.upperRight.x) &&
       (p.y >= r.lowerLeft.y && p.y <= r.upperRight.y));
}

int rectInRect(rectangle r1, rectangle r2)
{
    return (pointInRect(r1, r2.lowerLeft) &&
            pointInRect(r1, r2.upperRight));
}
