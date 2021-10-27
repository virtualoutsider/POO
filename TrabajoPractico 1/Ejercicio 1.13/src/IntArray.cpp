#include "IntArray.h"
#include <iostream>
using namespace std;
IntArray::IntArray(int sz)
{

    sized = sz;
    used = 0;
    p = new int[0];
    /*for(int i = 1;i<=sized;i++){
        p[i] = i;
    }*/
    //ctor
}
IntArray::IntArray(int sz,int qtty,int *vec){

    sized = sz;
    used = qtty;
    if(used > sized){
        used = sized;
    }
    p = new int[sized];
    for(int i = 0; i < used;i++){
        p[i] = vec[i];
    }

}
IntArray::~IntArray()
{
    delete [] p;
    //dtor
}
void IntArray::prtArr(int amount){
    cout << "Array: ";
    if(used > 0){
        if(amount > 0){
           for(int i = 0;i<amount;i++){
            cout << p[i] << " ; ";
           }
           cout << endl;
        }else{
            for(int i = 0;i<used;i++){
                cout << p[i] << " ; ";
            }
            cout << endl;
        }
    }else{
        cout << "Es vacio";
    }
    cout << endl;
}
double IntArray::getAvg(){
    double cant = 0;
    for(int i = 0;i < used;i++){
        cant += p[i];
    }
    return cant/used;
}
