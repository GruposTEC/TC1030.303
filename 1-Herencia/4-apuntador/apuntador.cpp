#include <iostream>

using namespace std;

void basico()
{
    int num = 5;

    //int *ap = NULL;

    int *ap = &num;

    cout << "Numero es : " << num << endl;
    cout << "Apunto a  : " << ap << endl;

    //ap = &num;

    cout << "Apunto a  : " << ap << endl;
    cout << "Lo que hay en esa direc : " << *ap << endl;
}

void arreglo()
{
    int x[] = {257,1,2,3,4};

    int *ap =&x[0];
    
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Lo que hay en esa direc : " << *ap << endl;
        ap++;
    }
    

    unsigned char *ap2 = (unsigned char *)&x[0];

    for(int i = 0 ; i < 4 ; i ++)
    {
        cout << "Byte numero : "  << i << " contenido : " << (int)*ap2 << endl;
        ap2++;
    }
}



int main()
{
    //basico();
    arreglo();
}