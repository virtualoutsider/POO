#include <iostream>
#include <stdlib.h>
#include "Caballo.h"
#include "Gallina.h"
#include "Vaca.h"
#include "Granja.h"
using namespace std;

int menu(int op){
    cout << "======Menu======" << endl;
    cout << "1 - Ingresar animales en la granja" << endl;
    cout << "2 - Mostrar los animales" << endl;
    cout << "3 - Peso total y maximo entre las vacas" << endl;
    cout << "4 - Mostrar la gallina que pone mas huevos" << endl;
    cout << "5 - Mostrar el caballo mas veloz" << endl;
    cout << "6 - Conseguir el animal con mas edad" << endl;
    cout << "0 - Salir" << endl;
    cout << "Opcion: "; cin  >> op;
    return op;
}

int main()
{
    Granja LoDeMarta;
    int op=1;
    while (op != 0){
        op = menu(op);
        switch(op){
        case 1:
            LoDeMarta.addanimal();
            break;
        case 2:
            LoDeMarta.mostrarlista();
            break;
        case 3:
            LoDeMarta.peso();
            break;
        case 4:
            LoDeMarta.mejorGal();
            break;
        case 5:
            LoDeMarta.masVel();
            break;
        case 6:
            LoDeMarta.masEdad();
            break;
        case 0:
            cout << "Hasta la proxima..." << endl;
            return 0;
        }
        system("pause");
        system("cls");
    }
    return 0;
}
