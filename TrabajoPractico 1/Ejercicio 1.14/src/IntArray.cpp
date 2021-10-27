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
    cout << "Array: [";
    if(used > 0){
        if(amount > 0){
           for(int i = 0;i<amount;i++){
            cout << p[i] << " ; ";
           }
           cout <<"]"<< endl;
        }else{
            for(int i = 0;i<used;i++){
                cout << p[i] << " ; ";
            }
            cout <<"]"<< endl;
        }
    }else{
        cout << "Es vacio";
    }
    cout <<endl;
}

void IntArray::addElement(int qtty,int *vec){
    used += qtty;
    if (used > sized){
        sized = used + 5;
        aumentar();
    }
    for(int i = 0; i < qtty;i++){
        p[i+used-qtty] = vec[i];
    }

}

void IntArray::addElement(int xx){
    p[used] = xx;
    used++;
    if (used > sized){
        sized = used + 5;
        aumentar();
    }

}

void IntArray::aumentar(){
    int vec[sized];
    for(int i =0;i<sized;i++){
        vec[i] = p[i];
    }
    delete [] p;
    p = new int[sized];
    for(int i = 0; i < used;i++){
        p[i] = vec[i];
    }
}

