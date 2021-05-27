#ifndef PUNTO_H
#define PUNTO_H
class Punto
{
    private:
    int x;
    int y;

    public:
    Punto(int x1,int y1);
    int getX();
    int getY();
    void display();

    //Punto operator +(Punto p);
    Punto operator +(Punto *p);
    Punto operator +(Punto &p);
};

#endif