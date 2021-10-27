#include "Granja.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <typeinfo>
using namespace std;
Granja::Granja()
{
    indice =0;
}

Granja::~Granja()
{
    for(int i=0;i<indice;i++){
        delete lista[i];
    }
    //dtor
}
void Granja::addanimal()
{
    int numero,huevos,edad;
    string nombre;
    float variable;
    int opcion = 1;
    while (opcion != 0){
        cout << "Ingrese que animal quiere anadir\n1 - Caballo\n2 - Gallina\n3 - Vaca\n0 - Salir\nOpcion: ";
        cin >> opcion;
        switch(opcion){
        case 1:
            cout << "======Ingresara un caballo======" << endl;
            cout << "Ingrese el numero del animal: "; cin >> numero;
            if(buscar(numero) == true){
                cout << "Ingrese el nombre del caballo: "; cin >> nombre;
                cout << "Ingrese la edad: ";cin >> edad;
                cout << "Ingrese la velocidad de este: "; cin >> variable;
                lista[indice] = new Caballo(numero,nombre,edad,variable);
                indice++;
            }else{
                cout <<"Ese numero de animal ya existe" << endl;
                break;
            }
            break;
        case 2:
            cout << "======Ingresara una Gallina======" << endl;
            cout << "Ingrese el numero del animal: "; cin >> numero;
            if(buscar(numero) == true){
                cout << "Ingrese el nombre de la gallina: "; cin >> nombre;
                cout << "Ingrese la edad: ";cin >> edad;
                cout << "Ingrese la cantidad de huevos puestos por este: "; cin >> huevos;
                lista[indice] = new Gallina(numero,nombre,edad,huevos);
                indice++;
            }else{
                cout <<"Ese numero de animal ya existe" << endl;
                break;
            }
            break;
        case 3:
            cout << "======Ingresara una Vaca======" << endl;
            cout << "Ingrese el numero del animal: "; cin >> numero;
            if(buscar(numero) == true){
                cout << "Ingrese el nombre de la vaca: "; cin >> nombre;
                cout << "Ingrese la edad: ";cin >> edad;
                cout << "Ingrese el peso de este: "; cin >> variable;
                lista[indice] = new Vaca(numero,nombre,edad,variable);
                indice++;
            }else{
                cout <<"Ese numero de animal ya existe" << endl;
                break;
            }
            break;
        case 0:
            cout <<"Saliendo..." <<endl;
            return;
            break;
        default:
            cout << "Opcion incorrecta..." << endl;
            break;
        }
        system("pause");
        system("cls");
    }
}
bool Granja::buscar(int num){
    for(int i = 0;i<indice;i++){
        if(lista[i]->getNum() == num){
            return false;
        }
    }
    return true;
}
void Granja::mostrarlista()
{
    if(indice > 0){
        cout << "=====Mostrando animales=====" << endl;
        cout << "Tiene un total de " << indice << " animal/es" << endl;
        for(int i = 0;i < indice;i++){
            lista[i]->mostrar();
            cout << "===================="<<endl;
        }
    }else{
        cout << "No existen animales en la granja" << endl;
    }
}
void Granja::peso()
{
    float _max=0;
    float amount=0;
    string strmax = "";
    if (indice > 0){
        for(int i = 0;i<indice;i++){
            if(lista[i]->gettypeid() == "Vaca"){
                if (lista[i]->getPeso() > _max){
                    _max = lista[i]->getPeso();
                    amount += lista[i]->getPeso();
                    strmax = "El peso maximo es de la vaca " + lista[i]->getNom() + " con " + to_string(_max) + "kg";
                }
            }
        }
        cout << strmax << endl;
        cout << "El peso total de las vacas es: " << amount << endl;
    }else{
       cout << "No existen animales en la granja" << endl;
    }
}
void Granja::mejorGal()
{
    int _max = 0;
    string strmax = "";
    if (indice > 0){
        for(int i=0;i < indice;i++){
            if(lista[i]->gettypeid() == "Gallina"){
                if(lista[i]->getHuevos() > _max){
                    _max = lista[i]->getHuevos();
                    strmax = "La gallina " + lista[i]->getNom() + " es la que puso mas huevos (" + to_string(_max) + ")";
                }
            }
        }
        cout << strmax;
    }else{
        cout << "No existen animales en la granja" << endl;
    }
}

void Granja::masVel()
{
    int _max = 0;
    string strmax = "";
    if(indice > 0){
        for(int i=0;i < indice;i++){
            if(lista[i]->gettypeid() == "Caballo"){
                if(lista[i]->getVel() > _max){
                    _max = lista[i]->getVel();
                    strmax = "El caballo " + lista[i]->getNom() + " es el mas veloz (" + to_string(_max) + "km/h)";
                }
            }
        }
        cout << strmax << endl;
    }else{
        cout << "No existen animales en la granja" << endl;
    }
}
void Granja::masEdad(){
    int edadmax = 0;
    string stredad = "";
    if (indice > 0){
        for(int i=0;i < indice;i++){
            if(lista[i]->getEdad() > edadmax){
                edadmax = lista[i]->getEdad();
                stredad = "El animal mas viejo tiene " + to_string(edadmax) + " anios, se llama " + lista[i]->getNom();
            }
        }
        cout << stredad << endl;
    }else{
        cout << "No existen animales en la granja" << endl;
    }
}



