#include <iostream>
#include "jugadorr.h"
#include "equipoo.h"

using namespace std;
class cantJugador{
public:
    int total=24;
    int *tt;
    int tam;
    cantJugador(int tam)
    {
        tt=new int[tam];
        this->tam=tam;
    }
    cantJugador(cantJugador &h)
    {
        tt=new int[h.tam];
        this->tam=h.tam;
    }
    ~cantJugador()
    {
        delete[] tt;
    }
};
int main()
{
    int m=2,p[100],i;
    cantJugador jd(m);
    jd.tt[0]=m;
    cout<<jd.tt[0]<<endl;
    equipoo equipo;
    equipo.setName("Juventus");
    equipo.setTam(m);
    p[0]= jugar j1("man",12,"del",3);
    p[1]= jugar j2("man",12,"del",3);
    p[2]= jugar j3("man",12,"del",3);
    for(int i=0;i<m;i++)
    {
        p[i].print();
    }
    equipo.print();
    cout << "Hello world!" << endl;
    return 0;
}
