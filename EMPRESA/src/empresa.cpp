#include <iostream>
#include "empresa.h"
#include<string>

using namespace std;

empresa::empresa()
{
    name="";
    ruc=0;
   //ctor
}

empresa::empresa(int r,string nm)
{
    ruc=r;
    name=nm;
     //dtor
}
void empresa::setName(string nm)
{
    name=nm;
}
void empresa::setRuc(int r)
{
    ruc=r;
}
void empresa::print()
{
    cout<<"Empresa  "<<name<<endl;
    cout<<"Ruc  "<<ruc<<endl;
}
