#ifndef CENTROCULTURAL_H
#define CENTROCULTURAL_H
#include "Obra.h"

class CentroCultural
{
    public:
        CentroCultural();
        ~CentroCultural();
        void agregarObra(Obra * O);
    protected:
        int indice;
        Obra * listita[20];
    private:
};

#endif // CENTROCULTURAL_H
