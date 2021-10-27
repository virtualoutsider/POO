#include "CentroCultural.h"
#include <typeinfo>
#include <iostream>
using namespace std;
CentroCultural::CentroCultural()
{
    indice = 0;

    //ctor
}

CentroCultural::~CentroCultural()
{
    //dtor
}
void CentroCultural::agregarObra()
{
    int codigo,var1,var2; //var1 es usada para base o peso, var2 es usada para altura o volumen
    string nombreobra,nombreart,nacionalidad;
    int op = 0;
    if(indice > 20){
        cout << "No mas lugares..." << endl;
    }else{
        cout << "Es una escultura o es un cuadro? ( 1 -  Escultura | 2 - Cuadro): "; cin >> op;
        if(op == 1){
            cout << "Ingrese el codigo : "; cin >> codigo;
            if(buscar(codigo) == false){
                cout << "Ingrese el nombre de la escultura: "; cin >> nombreobra;
                cout << "Ingrese el nombre del artista: "; cin >> nombreart;
                cout << "Ingrese la nacionalidad del artista: "; cin >> nacionalidad;
                cout << "Ingrese el peso de la escultura: "; cin >> var1;
                cout << "Ingrese el volumen de la escultura: "; cin >> var2;
                listita[indice] = new Escultura(codigo,nombreobra,nombreart,nacionalidad,var1,var2);
            }else{
                cout << "Error, ese codigo ya existe..." << endl;
                return;
            }
        }else if (op == 2){
            cout << "Ingrese el codigo : "; cin >> codigo;
            if(buscar(codigo) == false){
                cout << "Ingrese el nombre del cuadro: "; cin >> nombreobra;
                cout << "Ingrese el nombre del artista: "; cin >> nombreart;
                cout << "Ingrese la nacionalidad del artista: "; cin >> nacionalidad;
                cout << "Ingrese el base del cuadro: "; cin >> var1;
                cout << "Ingrese el altura del cuadro: "; cin >> var2;
                while(var2 < 50 || var2 > 200){
                    cout << "Ingrese un valor de altura correcto (50-200): ";
                    cin >> var2;
                }
                listita[indice] = new Cuadro(codigo,nombreobra,nombreart,nacionalidad,var1,var2);
            }else{
                cout << "Error, ese codigo ya existe..." << endl;
                return;
            }
        }else{
            cout << "Opcion incorrecta " << endl;
            return;
        }
        indice++;
        cout << "Agrege un elemento" << endl;
    }
}
Obra * CentroCultural::mayorAltura()
{
    Obra * temp;
    int b = 0;
    int maximo=0;

    for(int i=0;i<indice;i++){
        if(typeid(listita[i]) == typeid(temp)){
            if( listita[i]->getAlt() > maximo){
                //b = 1;
                temp = listita[i];
                maximo = listita[i]->getAlt();
            }
        }
    }

    if(b == 1){
        cout << "El cuadro mas alto es" << endl;
        cout << "============================" << endl;
        temp->mostrar();
        return temp;
    }
    cout << "No se han ingresado cuadros..."<<endl;
    return 0;
}
void CentroCultural::mostrar()
{
    if(indice > 0){
        for(int i=0;i<indice;i++){
            listita[i]->mostrar();
            cout << "============================" << endl;
        }
        return;
    }
    cout << "No se han ingresado obras..." << endl;
}
Obra* CentroCultural::obrasArgentinas()
{
    int z = 0;
    int y=0;
    for(int i=0;i<indice;i++){
        if(listita[i]->getNac() == "Argentino" || listita[i]->getNac() == "Argentina"){
            z++;
        }
    }
    if(z > 0){
        Obra * lista[z];

        for(int i=0;i < indice;i++){
            if(listita[i]->getNac() == "Argentino" ||  listita[i]->getNac() == "Argentina"){
                lista[y] = listita[i];
                y++;
            }
        }
        cout << endl << "Las obras argentinas son: " << endl;
        cout << "============================" << endl;
        for(int i=0;i<z;i++){
            lista[i]->mostrar();
            cout << "============================" << endl;
        }
        return *(lista);
    }
    cout << "No se presentaron obras argentinas"<<endl;
    return 0;


}
bool CentroCultural::buscar(int codex)
{
    for(int i=0;i<indice;i++){
        if(listita[i]->getcod() == codex){
            return true;
        }
    }
    return false;
}



