#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>

using namespace std;


class poligono{
    protected:
        int lado,altura;
        int cnt;
    public:
        poligono();
        poligono(const int &l,const int &h):lado(l),altura(h){}
        virtual void area()=0;


};
class Triangle:public poligono{
            public:
                int b=2;
                Triangle(const int &l,const int &h):
                    poligono(l,h){}
                void area(){
                     int a;
                     a=(lado*altura)/b;
                     cout<<"Area /_\ = "<<a<<endl;
                     }
};
class Rectangle:public poligono{
public:
    Rectangle(const int &l,const int &h):
        poligono(l,h){}
    void area(){
        int a;
        a=lado*altura;
        cout<<"Area |___| = "<<a<<endl;
    }
};
class Cuadrado:public poligono{
public:
    Cuadrado(const int &l,const int &h):
        poligono(l,h){}
    void area(){
        int a;
        a=lado*altura;
        cout<<"Area |_|= "<<a<<endl;
    }
};

class addPoligon{
    public:
    char c;
    addPoligon();
    addPoligon(char*c);
    void ingr(char *c){
        int l;
        int a;
        cout <<"base";
        cin>>a;
        cout<<"altura";
        cin>>l;
        if(c=="Triangle"){

            Triangle(a,l).area();
            }
        if(c=="Rectangle"){
                Rectangle(a,l).area();
            }
        if(c=="Cuadrado"){

            Cuadrado(a,l).area();
            }
    }

};

class PoligonoArr{
    int tam;
    poligono **arr;
    PoligonoArr(int tam){
        this->tam=tam;
        arr=new poligono*[tam];
    }
};

#endif // POLIGONO_H
