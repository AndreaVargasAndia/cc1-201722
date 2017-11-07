#ifndef EQUIPO_H
#define EQUIPO_H
#include "jugador.h"
#include <string>

class equipo
{
    public:
        string nombre;
        int tam;
        jugador jugadores[11];
        equipo();
        void setName(string n);
        void setTam(int t){tam=t;}
        void print();
        jugador jugadores[11];
        for(int i=0;i<=tam;i++){
            juadores[i].jprint();
        }


    //dtor

        //virtual ~equipo();
    protected:
    private:
};

#endif // EQUIPO_H
