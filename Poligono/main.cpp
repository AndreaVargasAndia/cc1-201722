#include <iostream>
#include "poligono.h"

using namespace std;

void Area(poligono *ptr){
    ptr->area();
}

int main()
{
    Cuadrado c(4,4);
    Triangle t(2,5);
    Rectangle r(3,7);
    char*txt="Rectangle";
    addPoligon d();
    d.ingr(txt);

    //ArrPoligono[3];

    Area(&c);
    Area(&t);
    Area(&r);
    PoligonoArr *p[4];
    return 0;
}

