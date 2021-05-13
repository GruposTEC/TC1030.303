#include <iostream>
#include <string.h>

using namespace std;

class Base
{
    private:
    int datoprivado = 6;

    protected:
    int datoprotegido = 15;

    public:
    Base()
    {
        cout << "constructor base" << endl;
    }

    Base(int dp, int dpr)
    {
        datoprivado = dp;
        datoprotegido = dpr;
    }

    ~Base()
    {
        cout << "destructor base" << endl;
    }

    int datopublico = 10;

    int getDatoPrivado()
    {
        return datoprivado;
    }

};

class Derivada : public Base
{
    public:
    Derivada()
    {
        cout << "constructor derivada" << endl;
    }
    ~Derivada()
    {
        cout << "destructor derivado" << endl;
    }
    void display()
    {
        cout << "Dentro de display" << endl;
        cout << datoprotegido <<endl;
        //cout << datoprivado << endl;
    }
};

int main()
{
    Derivada ob;
    cout << ob.datopublico << endl;  
    cout << ob.getDatoPrivado() << endl; 
    ob.display();
    //cout << ob.datoprotegido << endl;

}