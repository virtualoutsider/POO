#ifndef GRANJA_H
#define GRANJA_H
#include "Animal.h"
#include "Caballo.h"
#include "Gallina.h"
#include "Vaca.h"
class Granja
{
    public:
        Granja();
        virtual ~Granja();
        void addanimal();
        void mostrarlista();
        void peso();
        void mejorGal();
        void masVel();
        void masEdad();
    protected:
        Animal * lista[100];
        int indice;
    private:
        bool buscar(int num);
};

#endif // GRANJA_H
