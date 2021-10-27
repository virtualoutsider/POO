#ifndef CUADRO_H
#define CUADRO_H

#include <Obra.h>


class Cuadro : public Obra
{
    public:
        Cuadro(int _codigo=0,string _nombre="",string _nombreart="",string _nacionalidad="",int _base=0,int _altura=0);
        ~Cuadro();
        void calcular_tam();
        void setAlt();
        Cuadro mayorAlt(Cuadro &C);
    protected:
        int base,altura;
    private:
};

#endif // CUADRO_H
