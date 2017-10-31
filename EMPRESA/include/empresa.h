#ifndef EMPRESA_H
#define EMPRESA_H
#include<string>
using namespace std;

class empresa
{
    public:
        int ruc;
        string name;
        //int ruc,name;
        empresa();
        empresa(int ruc,string name);

        void setRuc( int r);
        void setName(string nm);
        void print();

    protected:
    private:
};

#endif // EMPRESA_H
