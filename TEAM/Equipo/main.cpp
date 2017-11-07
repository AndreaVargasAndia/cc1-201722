#include <iostream>
#include <string>
#include "jugador.h"
#include "equipo.h"


using namespace std;

int main()
{
    int m=2;
    equipo equipo;
    equipo.setName("Juventus");
    equipo.setTam(m);
    jugador jugadores[11];
    //jugador[0]=j("troll",23,"vol",3)
    for(int i=0;i<m;i++)
    {
        jugadores[i].setname("trevor");
        jugadores[i].setNum(4);
        jugadores[i].setPos("defensa");
        jugadores[i].setAgresivity(5);
    }
    equipo.print();
    cout << "Hello world!" << endl;
    return 0;
}
