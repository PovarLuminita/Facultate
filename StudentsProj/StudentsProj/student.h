#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "grade.h"

typedef struct
{
    int id;
    char regYear[5]; ///2000
    char speciality;
    grade grades[3]; //are note pentru 3 materii
    double average; //media notelor
}student;

void fillStudent(student *s); //introduce student prin referinta
void printStudent(student s); //afiseaza student
void setAverage(student *s); //calculeaza media notelor
void fillStudents(student arr[], int size); //introduce mai multi studenti
void printStudents(student arr[], int n); //afiseaza studentii
int spNumber(student arr[], int n, char c); //de cate ori apare o anumita specializare
double bestGrade(student s); //cea mai buna nota a studentului
void bestStudent(student arr[], int n, char c); //cel mai bun student

#endif // STUDENT_H_INCLUDED
