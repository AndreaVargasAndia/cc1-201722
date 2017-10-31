#include <iostream>
#include "empresa.h"
#include "trabajador.h"
#include "fechas.h"
#include<string>
using namespace std;

int main()
{
    int cntem;
    empresa c(201435270,"Bangar");
    fechas h(27,2,2011);
    h.Print();
    c.print();
    cout<<"Cuantos empleados"<<"\n";
    cin>>cntem;
//    enum depart{
//        logistica=0;
//        almacen=1;
//        recursos=2;
//    }
//    cout<< depart  l.1;

    return 0;
}
