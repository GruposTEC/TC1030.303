#include <iostream>
using namespace std;

class FiguraGeometrica
{
    protected:
    int ancho,alto;

    public:
    FiguraGeometrica(int an,int al)
    {
        ancho =an;
        alto=al;
    }

    virtual void sacarArea() =0;
    
};

class Cuadrado : public FiguraGeometrica
{
    public:
    Cuadrado(int an,int al) :FiguraGeometrica(an,al)
    {
        cout << "Cred¿ado el cuadrado" << endl;
    }

    void sacarArea()
    {
        cout << " El area del cuadrado es : " << ancho*alto  << endl;
    }
};

class Triangulo : public FiguraGeometrica
{
    public:
    Triangulo(int an,int al) :FiguraGeometrica(an,al)
    {
        cout << "Creado el triangulo" << endl;
    }

    void sacarArea()
    {
        cout << " El area del triangulo es : " << ancho*alto/2  << endl;
    }
};

void calculoAreaFiguras(FiguraGeometrica *ap) //Programar en lo general
{
    ap->sacarArea();
}

int main()
{
    //FiguraGeometrica fg(5,4);
    //fg.sacarArea();

    Cuadrado c(7,3);
    //c.sacarArea();

    Triangulo t(7,3);
    t.sacarArea();

    FiguraGeometrica * ap = NULL;

    ap = &c;
    calculoAreaFiguras(ap);
    ap = &t;
    calculoAreaFiguras(ap);
    

    return 0;
}