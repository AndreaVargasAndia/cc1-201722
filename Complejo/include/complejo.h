#ifndef COMPLEJO_H
#define COMPLEJO_H


class complejo
{
    public:
        int a,b;
           complejo();
           c1(double a ,double b);
           c2(double a,double b);
           c3(double ,double);
           void setSuma(complejo c1,complejo c2);
           void setResta(complejo c1,complejo c2);
           void setMulti(complejo c1,complejo c2);
           void setDivi(complejo c1,complejo c2);

           void print();
    protected:
    private:
};

#endif // COMPLEJO_H
