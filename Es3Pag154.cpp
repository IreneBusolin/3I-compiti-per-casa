#include <iostream>
#include <stdlib.h>

using namespace std;

//prototipi funzioni
int OttieniDimensione(int);

main ()
{
    int NumElementi, i;
    int v[10];

    cout << "*** ORDINE INVERSO ***" << endl << endl;
    NumElementi = OttieniDimensione(NumElementi);
    for (i=0; i < NumElementi; i++) {
        cout << "Inserisci il " << i+1 << "' elemento: ";
        cin >> v[i];
    }
    cout << "L'ordine inverso degli elementi inseriti e': ";
    for (i = NumElementi-1; i >= 0; i--){
        cout << v[i] << "; ";
    }

system("PAUSE");
return 0;
}

int OttieniDimensione(int NumElementi){
    cout << "Quanti elementi vuoi inserire?: ";
    cin >> NumElementi;
    while (NumElementi > 10 || NumElementi < 0){
        cout << "ERRORE! Puoi inserire un minimo di 0 elementi e un massimo di 10." << endl;
        cout << "Quanti elementi vuoi inserire?: ";
        cin >> NumElementi;
    }
    return NumElementi;
}
