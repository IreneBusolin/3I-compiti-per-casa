#include <iostream>
using namespace std;
main (void)
{
    int N=0;
    int num=0;
    int resto=0;
    int I=1;

    cout<<"QUESTO PROGRAMMA PERMETTE DI VISUALIZZARE I PRIMI 'N' NUMERI PARI"<< endl;
    cout<<endl<<"Quanti numeri vuoi inserire?"<< endl;
    cin>>N;
    cout<<endl<<"I primi numeri pari sono: ";
    while (I<=N)
    {
        resto=num%2;
        if (resto==0)
        {
            cout<<"";
            cout<<num<<"; ";
            I++;
        }
        num++;
    }
}
