#include <iostream>
using namespace std;


class Base
{
    private:
    int varx;

    public:
    Base()
    {

    }
    Base(int x)
    {
        varx = x;
    }
    void display()
    {
        cout << "Display desde la clase Base" << endl;
        cout << "El valor de la variable x es :" << varx << endl;
    }

};

class Derivada : public Base
{
    private:
     int vary;

    public:
     Derivada(){}

     Derivada(int x,int y) : Base(x)
     {
         vary=y;
     }

     void display()
     {
         Base::display();
        cout << "Display desde la clase derivada" << endl;
        cout << "El valor de la variable y es :" << vary << endl;     }
};

int main(void)
{
    Base b(10);
    Derivada d(5,8);

    b.display();
    d.display();

    return 0;
}