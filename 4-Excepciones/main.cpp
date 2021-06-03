#include <iostream>
#include <string>
#include "impresora.h"

using namespace std;

int main(void)
{
    Impresora mia("Brother XL", 10);
    try
    {
        mia.imprimir("Voy a  imprimir lo que sea para gastar hojas");
        mia.imprimir("Voy a  imprimir lo que sea para gastar hojas");
        mia.imprimir("Voy a  imprimir lo que sea para gastar hojas");
        mia.imprimir("Voy a  imprimir lo que sea para gastar hojas");
    }
    catch(int &err)
    {
        cout << "Error tipo entero : " << err << endl;
        mia.agregarHojas();
    }
    catch(string &err)
    {
        cout << err << endl;
         mia.agregarHojas();
    }
    catch(const char *err)
    {
        cout << err << endl;
        
    }
    catch(...)
    {
        cout << "Atrapa todo" << endl;
        mia.agregarHojas();
    }
    mia.imprimir("Ya con hojas voy a  imprimir lo que sea para gastar hojas");
    
    




    return 0;
}