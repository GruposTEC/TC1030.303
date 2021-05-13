
//    MODOS DE HERENCIA
//1.- public (visible a cualqiuera)
//2.- protected (visible a la clase base y sus subclases solamente)
//3.- private (visible solo a la clase base)

//---------------------------------------------------------------
//  CLASE BASE | CLASE DERIVADA  CLASE DERIVADA  CLASE DERIVADA |
//---------------------------------------------------------------
//             |  MODO public    MODO protected  MODO  private  |    <- Modos de herencia
//---------------------------------------------------------------
//  public     |    public         protected      private       |
//  protected  |    protected      protected      private       |
//  private    1    No heredado    No heredado    No heredado   |
// -------------------------------------------------------------

#include <iostream>
using std::cout;
using std::endl;

class Base 
{
    public:
    int x;

        void print()
    {
        cout << "print de la clase Base" << endl;
    }

};  
