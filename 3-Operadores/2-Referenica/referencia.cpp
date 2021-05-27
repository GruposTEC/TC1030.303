#include <iostream>
using namespace std;

void paso_valor(int n)
{
    n = n + 1;
    cout << "El valor de la variable n dentro de la funcion paso_valor es :" << n << endl;
    cout << "La direccion de n dentro de paso_valor es  ; " << &n << endl;
}

void paso_apuntador(int *n)
{
    *n = *n + 1;
    cout << "El valor de la variable n dentro de la funcion paso_apuntador es :" << *n << endl;
    cout << "La direccion de n dentro de paso_valor es  ; " << n << endl;

    int y;

    n = &y;
}

void paso_referencia(int &n)
{
    n = n + 1;
    cout << "El valor de la variable n dentro de la funcion paso_referencia es :" << n << endl;
    cout << "La direccion de n dentro de paso_valor es  ; " << &n << endl;
    int y;
    //&n = y; esto no se puede
}

int main(void)
{
    int num = 5;
    cout << "El valor de num es ; " << num << endl;
    cout << "La direccion de num es  ; " << &num << endl;

    //paso_valor(num);
    //paso_apuntador(&num);
    paso_referencia(num);

    cout << "El valor de num es ; " << num << endl;



   /* int *ap = NULL;
    ap = &num;
    
    *ap = 8;

    cout << "El valor de num es ; " << num << endl;
    
    cout << "La direccion a donde apunta ap es ; " << ap << endl;

    int &ref = num;
    cout << "El valor de la referenica es ; " << ref << endl;

    ref = 10;
    cout << "El valor de num es ; " << num << endl;
    cout << "La direccion de ref es  ; " << &ref << endl;
    */

    return 0;
}