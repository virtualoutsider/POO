#ifndef VACA_H
#define VACA_H

#include <Animal.h>


class Vaca : public Animal
{
    public:
        Vaca(int _numero,string _nombre,int _edad,float _peso);
        virtual ~Vaca();
        void mostrar();
        float getPeso(){return peso;}

    protected:

    private:
        float peso;
};

#endif // VACA_H
