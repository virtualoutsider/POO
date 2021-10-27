#include <iostream>
#include "IntArray.h"
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();

using namespace std;
int main()
{
    IntArray A(30);
    int v_aux[]={23,4,54,634,6677,32,56};
    IntArray B(40,sizeof(v_aux)/sizeof(int),v_aux);
    A.prtArr();
    B.prtArr();
    B.prtArr(3);
    cout<<"\n\nObjeto B -"<<endl;
    cout<<" size:"<<B.getSize()<<endl;
    cout<<" used:"<<B.getUsed()<<endl;
    cout<<" promedio:"<<B.getAvg()<<endl;
    PRESS_KEY;
    return 0;
}
