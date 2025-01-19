
#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include <math.h>

void showPoint(point p)
{
    printf("%c(%.1lf,%.1lf)\n", p.name, p.x, p.y);
}



double dist(point a, point b)
{
    double dist = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y ), 2));
    return dist;
}

int eq(point a, point b)
{
    double distance = dist(a,b);
    if(distance < 0.000001)
        return 1;
    return 0;
}

void FillPoints(point arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("introdu punctul %d \n", i+1);
        //fflush(stdin); sau pun space inainte sa citesc
        //scanf(" %c %lf %lf", &arr[i].name, &arr[i].x, &arr[i].y);
        FillPoint(&arr[i]);
    }
}

void PrintFillPoints(point arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        showPoint(arr[i]);
    }
}

void FillPoint(point *p)
{
     scanf(" %c %lf %lf", &p->name, &p->x, &p->y);
}


void Farthest(point arr[], int n)
{
    point p1 = arr[0];
    point p2 = arr[1];
    double longest = dist(p1, p2);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n && j != i; j++)
            if(dist(arr[i],arr[j]) > longest)
            {
                p1 = arr[i];
                p2 = arr[j];
                longest = dist(arr[i],arr[j]);
            }

    printf("farthest pair : \n");
    showPoint(p1);
    showPoint(p2);
    printf("with the distance %lf \n", longest);
}
