#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void setAverage(student *s)
{
    double av = 0;
    for(int i = 0; i < 3; i++)
        av += s->grades[i].grade;
    av = av/3;

    s->average = av;
}

void bestStudent(student arr[], int n, char c)
{
    student best;
    for(int i = 0; i < n; i++)
    {
        if(arr[i].speciality == c)
            best = arr[i];
            break;
    }

    double currentBestGrade = bestGrade(best);

    for(int i = 0; i < n; i++ )
    {
        if(arr[i].speciality == c)
        {
            double grade = bestGrade(arr[i]);
            if(currentBestGrade < grade)
            {
                best = arr[i];
                currentBestGrade = grade;
            }
        }
    }

    printf("%d, %lf \n", best.id, currentBestGrade);
}


double bestGrade(student s)
{
    int maxGrade = s.grades[0].grade;

    for(int i = 1; i < 3; i++)
    {
        if(maxGrade < s.grades[i].grade)
            maxGrade = s.grades[i].grade;
    }

    return maxGrade;
}

int spNumber(student arr[], int n, char c)
{
  int count = 0;
  for(int i = 0 ; i < n; i++)
      if(arr[i].speciality == c)
        count++;
  return count;
}

void fillStudents(student arr[], int size)
{
    for(int i = 0; i < size; i++)
        fillStudent(&arr[i]);
}

void fillStudent(student *s)
{
    printf("id, registration year, spec: ");
    scanf("%d %s %c", &s->id, s->regYear, &s->speciality);
    FillGrades(s->grades, 3);
    setAverage(s);
    printf("\n");
}


void printStudent(student s)
{
    printf("%d %s %c %lf \n", s.id, s.regYear, s.speciality,  s.average);
}

void printStudents(student arr[], int n) {
    for(int i = 0; i < n; i++)
        printStudent(arr[i]);
}
