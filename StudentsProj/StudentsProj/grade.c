#include <stdio.h>
#include <stdlib.h>
#include "grade.h"

void PrintGrade(grade g)
{
    printf("%s %.1lf \n", g.code, g.grade);
}

void fillGrade(grade *g)
{
    scanf(" %s", g->code);

    scanf(" %lf", &g->grade);
}

void FillGrades(grade arr[], int size)
{
    for(int i = 0; i < size; i++)
      {
         fillGrade(&arr[i]);
      }
}


void printGrades(grade arr[], int size)
{
     for(int i = 0; i < size; i++)
      {
         PrintGrade(arr[i]);
      }
}
