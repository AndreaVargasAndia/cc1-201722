#include "jugador.h"
#include<string>

jugador::jugador()
{
    name="";
    number=0;
    position="";
    agre=0;
    //ctor
}

jugador::jugador(string n,int num,string pos,int agresi)
{
    name=n;
    number=num;
    position=pos;
    agre=agresi;
    //dtor
}
void jugador::setAgresivity(int agresi){
    agresi=agre;

}
void jugador::setName(string n){
    n=name;

}
void jugador::setPos(string pos){
    pos=position;

}
void jugador::setNum(int num){
    num=number;

}

void jugador::print(){
    cout<<"Nombre= "<<name;
    cout<<"\n";
    cout<<"Numero= "<<number;
    cout<<"\n";
    cout<<"Posicion= "<<position;
    cout<<"\n";
    if(agre>5)
    cout<<"Agresividad= "<<agre<<"es un pitbull";
    else
        cout<<"Agresividad= "<<agre<<"  no es un pitbull";

}
