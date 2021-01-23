#include <iostream>

using namespace std;


int powint(int base, int rep){

    if(rep == 0) return 1;

    int res = 1;

    if (rep != 0){

        while(rep > 0){

            res *= base;
            rep--;
        }

    }

    return res;
}


/*  
    Ho deciso di usare una procedura per alleggerire il main e per avere una miglior organizzazione generale del programma.
    A differenza delle funzioni, le procedure eseguono semplicemente una serie di istruzioni senza dare in output alcun risultato,
    di conseguenza questa procedura non ha il return.   
*/

void numSplitter(int v[], int x){

    for(int i=0; i < 10; i++){

        v[i] = ((x / powint(10, i)) % 10);
    }

}




int main(){

    int num[10];
    int numero;
    int indice;

    cout << "Inserisci un numero a 5 cifre: " << endl;
    cin >> numero;
    cout << "Ora inserisci un indice: " << endl;
    cin >> indice;

    numSplitter(num, numero);

    cout << "La cifra dell'indice specificato e': " << num[(indice-1)] << endl;

    return 0;
}