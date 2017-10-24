#include <iostream>
#include "fechas.h"
using namespace std;

int main()
{
    fechas h(27,2,2011);
    h.Print();
    h.setAgregar(30);

    return 0;
}
