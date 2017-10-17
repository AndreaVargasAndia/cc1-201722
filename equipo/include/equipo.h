#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>

using namespace std;

class jugar
{
    public:
        int number[6]={1,2,3,4,5,6};
        int num[7];
        int agre[6]={5,5,3,2,2,4};
        int agresi[7];
        string name[7]={"a","b","c","d","e","f","g"};
        string n[7];
        string position[6]={"v","d","def","def","entr","vo"};
        string pos[7];

        int ttlr;
        int titular;
        jugar();
           jugar(int titular);




           void setAgresivity();//const int a);
           void setName();//string n);
           void setPos();//string pos);
           void setNum();//const int num);
           void print();


    //protected:
    //private:
};


