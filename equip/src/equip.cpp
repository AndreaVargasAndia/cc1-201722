#include "equip.h"
#include <iostream>
using namespace std;


void equip::setIngresar(){
    cout<<"Nombre= ";
    cin>>name[10];
    //cout<<"\n";
    cout<<"Numero= ";
    cin>>number;
    //cout<<"\n";
    cout<<"Posicion= ";
    cin>>posit[10];
    //cout<<"\n";
    cout<<"Agresividad= ";
    cin>>agresi;
    cout<<"\n";


}
void equip::setPrint(){
    cout<<"\n";
    cout<<"Nombre= "<<name[10];
    cout<<"\n";
    cout<<"Numero= "<<number;
    cout<<"\n";
    cout<<"Posicion= "<<posit[10];
    cout<<"\n";
    if(agresi<5)
    cout<<"Agresividad= "<<agresi<<"esta tranquilo";
    else
        cout<<"Agresividad= "<<agresi<<"no esta tranquilo";



}
