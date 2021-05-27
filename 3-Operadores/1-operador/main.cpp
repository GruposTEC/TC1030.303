#include "punto.h"

int main(void)
{
    Punto p(5,6);
    p.display();

    Punto p3(7,9);
    p3.display();

    Punto p4 = p + p3;
    p4 = p + &p3;
    p4=  p + p3;

    p4.display();
}