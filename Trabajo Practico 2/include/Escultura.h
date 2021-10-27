#ifndef ESCULTURA_H
#define ESCULTURA_H

#include <Obra.h>


class Escultura : public Obra
{
    public:
        Escultura(int _codigo=0,string _nombre="",string _nombreart="",string _nacionalidad="",int _peso=0,int _volumen=0);
        ~Escultura();
        void calcular_tam();

    protected:
        int peso,volumen;
    private:
};

#endif // ESCULTURA_H
