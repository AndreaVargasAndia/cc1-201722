#include "trabajador.h"

trabajador::trabajador()
{
    name="";
    id=0;
    sueldo=0.0;

    //ctor
}

trabajador::trabajador(string n,int num,int suel)
{
    name=n;
    id=num;
    sueldo=suel;
    //dtor
}
void trabajador::Name(string n)
{
    name=n;
    cout<<"NOMBRE= "<<name;
}

void trabajador::Id(int num)
{
    num=id;
    cout<<"ID= "<<id;
}
void trabajador::Sueldo(int suel)
{
    sueldo=suel;
    cout<<"Sueldo= "<<sueldo;
}
