#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <string>

class Impresora
{
    private:
    std::string nombre;
    int numhojas;

    public:
    Impresora(std::string nom, int nh);
    void imprimir(std::string texto);
    void agregarHojas();
};
#endif 