#ifndef JUGADORR_H
#define JUGADORR_H
#include<string>
using namespace std;
class jugadorr
{
    public:
        int number,agre;
        string name,position;
           jugadorr();
           jugadorr(string name,int number,string position,int agre);
           void setAgresivity(int a);
           void setName(string n);
           void setPos(string pos);
           void setNum(int num);
           void print();
    protected:
    private:
};

#endif // JUGADORR_H
