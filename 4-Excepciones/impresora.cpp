#include <iostream>
#include <string>
#include "impresora.h"

using namespace std;

Impresora::Impresora(string nom,int nh)
{
    nombre= nom;
    numhojas=nh;
}

void Impresora::imprimir(string texto)
{
    int hojas = texto.length()/10;

    if(hojas > numhojas)
    {
        //throw(101);
        //throw("Error : No hay hojas!!!!!");
        string men="Error como string";
        throw(men);
    }

    cout << "Soy la impresora :" << nombre << " e imprimo : " << texto << endl;
    cout << "Utilizé " << hojas << " hojas" << endl;
    numhojas = numhojas - hojas ;
    cout << "Me quedan " << numhojas << " hojas" << endl  << endl;

    
}

void Impresora::agregarHojas()
{
    numhojas = numhojas +100;
}