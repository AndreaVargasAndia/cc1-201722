#include <iostream>
#include <sstream>
#include "equip.h"
#include <string>

using namespace std;

int main()
{
    int m=2;
    equip j[m];

    for(int i=0;i<m;i++){
        j[i].setIngresar();
    }
    cout<<"\n";

    for(int i=0;i<m;i++){
        j[i].setPrint();
    }
    return 0;
}
