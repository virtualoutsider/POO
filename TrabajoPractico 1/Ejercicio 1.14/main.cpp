#include <iostream>
#include "IntArray.h"
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();

using namespace std;
int main()
{
    int v_aux[]={0,5,10,15,20,25,30,35,40};
    IntArray A(10,sizeof(v_aux)/sizeof(int),v_aux);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    A.addElement(77);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    A.addElement(11);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    A.addElement(8,v_aux);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    PRESS_KEY;
    return 0;
}
