//Caso del diamante
//virtual base class
#include <iostream>

using std::cout;
using std::endl;

class A
{
    public:
    int a;
    void metodo()
    {
        cout << "Desde metodo en A" << endl;
    }
};

class B :   public A
{
    
};

class C:    public A
{
    
};

class D : public B, public C
{
    
};

int main(void)
{
    D obj;
    obj.metodo();
    obj.a = 10;
}