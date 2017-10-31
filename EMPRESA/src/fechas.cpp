#include "fechas.h"
#include <iostream>

using namespace std;

fechas::fechas()
{
    dia=0;
    mes=0;
    anio=0;
    number=0;
    //ctor
}

fechas::fechas(int day,int m,int year)
{
    dia=day;
    mes=m;
    anio=year;
    //dtor
}

void fechas::Print()
{
    //cout<<"\n";cout<<"\n";
    cout<<"FECHA = "<<dia<<"-"<<mes<<"-"<<anio;
    //cout<<"\n";cout<<"\n";
    //cout<<"MES (1-12) = ";
    if(mes>0 && mes<13){
            cout<<mes;
    }
    else{cout<<"numero incorrecto es del 1 al 12";}
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if(dia<32){
        //        cout<<"\t";
        //        cout<<"-Tiene 31 dias";
        }
        else{cout<<"\t";cout<<"El mes no tiene mas de 31 dias";}
    }
    if (mes==4 || mes==6|| mes==9 || mes==11){
        if(dia<31){
               // cout<<"\t";
               // cout<<"-Tiene 30 dias";
        }
        else{cout<<"\t";cout<<"-ERROR! El mes no tiene mas de 30 dias";}
    }

    bool x=true;
    //cout<<"\n";
    //cout<<"ANIO = "<<anio;
    //cout<<"\n";

    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
        {
            x=true;
            //cout<<"\t";
            //cout<<"-Es bisietro";
            if(mes==2){
                 //   cout<<"\n";
                 //   cout<<"DIA = "<<dia;
                    if(dia<30){
                        //cout<<"\t";
                        //cout<<"-Febrero tiene 29 dias y es bisiestro";
                        }
                    else{
                      //      cout<<"\t";
                      //      cout<<"-ERROR! Es anio bisiestro no puede tener mas de 29 dias";}
            }
        }
            else{cout<<"\n";cout<<"DIA = "<<dia;cout<<"\t";cout<<"-CORRECTO";}

        }

    else{
                    x=false;
                    //cout<<"\t";
                    //cout<<"-No es bisiestro";
                    //cout<<"\n";
                    //cout<<"DIA = "<<dia;
                    if(mes==2){
                         //   if(dia<29){cout<<"\t";cout<<"-Tiene 28 dias";}
                         //   else{cout<<"\t";cout<<"-ERROR! es un mes de 28 dias";}
                            }

    }

    cout<<"\n";
    //cout<<"DIA = "<<dia;
    cout<<"\n";cout<<"\n";
    //}
}

