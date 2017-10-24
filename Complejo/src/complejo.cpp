#include "complejo.h"

complejo::complejo(double a, double b)
{
    a=0;
    b=0;
    //ctor
}
complejo::complejo c1(int a,int b)
{
    x=a;
    y=b;
    //dtor
}
complejo::complejo c2(int a,int b)
{
    x=a;
    y=b;
    //dtor
}
complejo::complejo c3(int x,int y)
{
    x=a;
    y=b;
    //dtor
}
void complejo::setSuma(complejo c1,complejo c2){
    double x=c1.a+c2.a;
    double y=c1.b+c2.b;

}
void complejo::setResta(complejo c1,complejo c2){
    double x=c1.a-c2.a;
    double y=c1.b-c2.b;

}
void complejo::setMulti(complejo c1,complejo c2){
    double x=c1.a*c2.a-c1.b*c2.b;
    double y=c1.a*c2.b-c1.b*c2.a;

}
void complejo::setDivi(complejo c1,complejo c2){
    double w=c2.a*c2.a+c2.b*c2.b;
    double x=(c1.a*c2.a+c1.b*c2.b)/w;
    double y=(c1.b*c2.a-c1.a*c2.b)/w;

}

void jugar::print(){
    cout<<"Nombre= "<<x;
    cout<<"\n";
    cout<<"Numero= "<<y;
    cout<<"\n";

}

