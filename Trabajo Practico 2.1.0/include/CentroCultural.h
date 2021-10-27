#ifndef CENTROCULTURAL_H
#define CENTROCULTURAL_H
#include "Obra.h"
#include "Cuadro.h"
#include "Escultura.h"
class CentroCultural
{
    public:
        CentroCultural();
        ~CentroCultural();
        void agregarObra();
        Obra * mayorAltura();
        void mostrar();
        Obra * obrasArgentinas();
    protected:
        int indice;
        Obra * listita[20];
    private:
        bool buscar(int);
};

#endif // CENTROCULTURAL_H
