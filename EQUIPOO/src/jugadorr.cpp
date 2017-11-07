#include "jugadorr.h"

jugadorr::jugador()
{
    name="";
    number=0;
    position="";
    agre=0;
    //ctor
}

jugadorr::jugador(string n,int num,string pos,int agresi)
{
    name=n;
    number=num;
    position=pos;
    agre=agresi;
    //dtor
}
void jugadorr::setAgresivity(int agresi){
    agresi=agre;

}
void jugadorr::setName(string n){
    n=name;

}
void jugadorr::setPos(string pos){
    pos=position;

}
void jugadorr::setNum(int num){
    num=number;

}

void jugadorr::print(){
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
