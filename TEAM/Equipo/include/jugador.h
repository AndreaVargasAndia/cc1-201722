#ifndef JUGADOR_H
#define JUGADOR_H

#include<string>
class jugador
{
    public:
        int number,agre;
        string name,position;
           jugar();
           jugar(string name,int number,string position,int agre);
           void setAgresivity(int a);
           void setName(string n);
           void setPos(string pos);
           void setNum(int num);
           void print();
    protected:
    private:
};

#endif // JUGADOR_H
