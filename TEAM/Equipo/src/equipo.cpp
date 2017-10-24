#include "equipo.h"
#include <string>
equipo::equipo()
{
    nombre="";
    tam=0;
    //ctor
}
void equipo::setName(string n)
{
    nombre=n;
}
void equipo::setTam(int t)
{
    tam=t;
}
void equipo::print()
{
    cout<<"Nombre"<<nombre;
    cout<<"Tamanio"<<tam;

}
