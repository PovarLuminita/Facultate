#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED



typedef struct
{
    char name;   // numele punctului
    double x;    //coordonata x
    double y;   // coordonata y
}point;


void showPoint(point p); //functie afisare punct ex A(2,3.4)
double dist(point a, point b); //calculare distanta intre 2 puncte
int eq(point a, point b); //verificare daca 2 puncte sunt egale
void FillPoints(point arr[], int size); //introducere nr de puncte
void PrintFillPoints(point arr[], int size); //afisare puncte
void FillPoint(point *p); //functie punct prin referinta
void Farthest(point arr[], int n); //afisare pereche cu distanta cea mai mare
#endif // POINT_H_INCLUDED
