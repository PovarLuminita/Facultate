#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "point.h"

typedef struct{
    point upperRight; // punct cu coordonate x y dreapta sus
    point lowerLeft; // punct cu coordonate x y stanga jos

}rectangle;

double areaRect(rectangle r); //calculeaza aria
int pointInRect(rectangle r, point p); //verifica daca punctul e in dreptunghi
int rectInRect(rectangle r1, rectangle r2); //verifica daca dreptunghiul r2 e in dreptunghiul r1

#endif // RECTANGLE_H_INCLUDED
