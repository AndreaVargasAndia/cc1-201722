#ifndef FECHAS_H
#define FECHAS_H


class fechas
{
    public:
        int dia,mes,anio,number;
        fechas();
        fechas(int dia,int mes,int anio);
        void setDia(int day);
        void setMes(int m);
        void setAnio(int year);
        void Print();
    private:
};

#endif // FECHAS_H
