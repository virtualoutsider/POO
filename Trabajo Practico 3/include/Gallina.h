#ifndef GALLINA_H
#define GALLINA_H

#include <Animal.h>


class Gallina : public Animal
{
    public:
        Gallina(int _numero,string _nombre,int _edad,int _huevos);
        virtual ~Gallina();
        void mostrar();
        int getHuevos(){return huevos;}

    protected:

    private:
        int huevos;
};

#endif // GALLINA_H
