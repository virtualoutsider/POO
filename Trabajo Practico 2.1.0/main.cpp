#include <iostream>
#include <stdlib.h>
#include "Obra.h"
#include "Cuadro.h"
#include "CentroCultural.h"
#include "Escultura.h"
using namespace std;
int menu(int op);
void datos();
int main()
{
    CentroCultural Almafuerte;
    int op = 1;
    while(op != 0){
        op = menu(op);
        switch(op){
            case 1:{
                Almafuerte.agregarObra();
                }
                break;
            case 2:{
                Almafuerte.mostrar();
                }
                break;
            case 3:{
                Almafuerte.obrasArgentinas();
                }
                break;
            case 4:{
                Almafuerte.mayorAltura();
                }
                break;
            case 0:{
                cout << "Adios";
                return 0;
                }
                break;

            default:{
                cout << "Error" << endl;
                }
                break;

        }
        system("pause");
        system("CLS");
    }
    return 0;
}

int menu(int op){
    cout << "=======Menu=======" << endl;
    cout << "1 - Agregar una obra" << endl;
    cout << "2 - Mostrar obras"<<endl;
    cout << "3 - Mostrar obras argentinas"<<endl;
    cout << "4 - Mostrar el cuadro mas alto"<<endl;
    cout << "0 - Salir" << endl;
    cout << "Ingrese opcion: ";
    cin >> op;
    cout << "==================" << endl;
    return op;
}


