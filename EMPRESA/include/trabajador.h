#include <iostream>
#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <string>

using namespace std;

class trabajador
{
    int id,sueldo,fecha;
    string name;
    public:
        trabajador();
        trabajador(string name,int id,int sueldo);
        void Id(int id);
        void Name(string name);
        void Sueldo(int suel);
        void Fecha(int dia,int mes,int anio);
        void print();


    protected:
    private:
};

#endif // TRABAJADOR_H
