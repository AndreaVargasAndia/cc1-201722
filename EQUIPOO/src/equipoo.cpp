#include "equipoo.h"

#include "equipo.h"
#include <string>
equipoo::equipo()
{
    nombre="";
    tam=0;
    //ctor
}
void equipoo::setName(string n)
{
    nombre=n;
}
void equipoo::setTam(int t)
{
    tam=t;
}
void equipoo::Print()
{
    cout<<"Nombre"<<nombre;
    cout<<"Tamanio"<<tam;

}
