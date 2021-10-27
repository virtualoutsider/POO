#include "IntArray.h"
#include <iostream>
using namespace std;
IntArray::IntArray(int sz)
{

    sized = sz;
    used = 0;
    p = new int[0];
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

void IntArray::addElement (int pos, int qtty, int *vec){
    if((used+qtty) > sized){

        sized = used + qtty + 5;
        aumentar();

    }

    if(pos >= sized){

        for(int i = 0; i < qtty;i++){
            p[i+used] = vec[i];
        }
        used += qtty;

    }else if(pos <= 0){

        for(int i = 0;i < qtty;i++){
            for(int j=used;j>0;j--){
                p[j] = p[j-1];
            }
            p[i] = vec[i];
        }
        used += qtty;

    }else{

        for(int i = 0;i < qtty;i++){
            for(int j = used+qtty;j >= pos;j--){
                p[j] = p[j-1];
            }
            p[pos] = vec[i];
            pos++;
        }
        used += qtty;
    }
}

void IntArray::addElement (int pos, int xx){
    if (used+1 > sized){
        sized = used + 5;
        aumentar();
    }
    if(pos > sized){
        p[used] = xx;
        used++;
    }else if(pos <= 0){
        for(int i=used;i >= pos;i--){
            p[i] = p[i-1];
        }
        p[0] = xx;
        used++;
    }else{
        for(int i = used;i >= pos;i--){
            p[i] = p[i-1];
        }
        p[pos] = xx;
        used++;
    }
}

void IntArray::aumentar(){
    int vec1[sized];
    for(int i=0;i<sized;i++){
        vec1[i] = p[i];
    }
    delete [] p;
    p = new int[sized];
    for(int i = 0; i < used;i++){
        p[i] = vec1[i];
    }
}

