#ifndef GRADE_H_INCLUDED
#define GRADE_H_INCLUDED


typedef struct{
    char code[10];  //nume materie
    double grade;   //nota materie
}grade;

void fillGrade(grade *g); //introduce nota prin referinta
void FillGrades(grade arr[], int size); //introduce mai multe note
void PrintGrade(grade g); //afiseaza nota
void printGrades(grade arr[], int size); //afiseaza note
#endif // GRADE_H_INCLUDED
