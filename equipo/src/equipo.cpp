#include "equipo.h"
#include <iostream>
jugar::jugar()
{
    name[7]={};
    number[6]={};
    position[6]={};
    agre[6]={};
    ttlr=0;


    //ctor
}

jugar::jugar(int titular)
{
    name[6]=n[6];
    number[6]=num[6];
    position[6]=pos[6];
    agre[6]=agresi[6];
    ttlr=titular;
    //dtor
}
void jugar::setAgresivity(){//int ttlr){
    //agresi=agre;
    for(int i=0;i<ttlr;i++){
        agresi[i]=agre[i];
        cout<<agre[i];
    }

}
void jugar::setName(){//string n){
    //n=name;
    for(int i=0;i<ttlr;i++){
        n[i]=name[i];
    }

}
void jugar::setPos(){//string pos){
    //pos=position;
    for(int i=0;i<ttlr;i++){
        pos[i]=position[i];
    }

}
void jugar::setNum(){//int ttlr){
    //num=number;
    for(int i=0;i<ttlr;i++){
        num[i]=number[i];
    }

}

void jugar::print(){

    cout<<"Nombre= "<<name;
    cout<<"\n";
    cout<<"Numero= "<<number;
    cout<<"\n";
    cout<<"Posicion= "<<position;
    cout<<"\n";
    cout<<"Agresividad= "<<agre<<"es un pitbull";




}
