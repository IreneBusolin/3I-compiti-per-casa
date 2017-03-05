#include <iostream>
#include <stdlib.h>

using namespace std;

//prototipi funzioni
int OttieniDimensione(int);

//funzione principale
main ()
{
    int NumComponenti, i, r, prodotto=1, somma=0;
    int v[10];

    cout << "*** PRODOTTO E SOMMA DELLE COMPONENTI ***" << endl << endl;
    NumComponenti = OttieniDimensione(NumComponenti);
    for (i=0; i < NumComponenti; i++) {
        cout << "Inserisci la " << i+1 << "' componente: ";
        cin >> v[i];
    }
    for (i=0; i < NumComponenti; i++){
        r=i%2;
        if (r = 0){
            prodotto*=v[i];
        }
        else {
            somma+=v[i];
        }
    }
    cout << "Il prodotto delle componenti di posti pari e': " << prodotto << endl;
    cout << "La somma delle componenti di posti dispari e': " << somma << endl;
    system("PAUSE");
    return 0;
}

//dichiarazione funzione
int OttieniDimensione(int NumComponenti){
    cout << "Quante componenti vuoi inserire?: ";
    cin >> NumComponenti;
    while (NumComponenti > 10 || NumComponenti < 0){
        cout << "ERRORE! Puoi inserire un minimo di zero componenti e un massimo di 10." << endl;
        cout << "Quante componenti vuoi inserire?: ";
        cin >> NumComponenti;
    }
    return NumComponenti;
}














