#include <iostream>
#include "punto.h"
using namespace std;

Punto::Punto(int x1,int y1)
{
    x = x1;
    y = y1;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

void Punto::display()
{
    cout <<"El punto es : (" << x << "," << y << ")" << endl;
}

/*Punto Punto::operator+(Punto p)
{
    int x1 = x + p.getX();
    int y1 = y + p.getY();

    Punto p3(x1,y1);

    return p3;
}*/

Punto Punto::operator+(Punto *p)
{
    int x1 = x + p->getX();
    int y1 = y + p->getY();

    Punto p3(x1,y1);

    return p3;
}

Punto Punto::operator+(Punto &p)
{
    int x1 = x + p.getX();
    int y1 = y + p.getY();

    Punto p3(x1,y1);

    return p3;
}