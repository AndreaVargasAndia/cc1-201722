#include <iostream>
#include <sstream>
#include "equipo.h"

#include <string>

using namespace std;

int main()
{
    jugar a;
    jugar b(5);
    b.print();
    b.setAgresivity();

    return 0;
}
