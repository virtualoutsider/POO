#ifndef CABALLO_H
#define CABALLO_H

#include <Animal.h>


class Caballo : public Animal
{
    public:
        Caballo(int _numero,string _nombre,int _edad,float _velocidad);
        void mostrar();
        virtual ~Caballo();
        float getVel(){return velocidad;}
    protected:

    private:
        float velocidad;
};

#endif // CABALLO_H
