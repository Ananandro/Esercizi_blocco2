#include <iostream>
#include <cmath>


using namespace std;




int main(){

    float v[10];

    cout << "Inserisci 10 numeri decimali ed io li arrotondo: " << endl;

    for(int i=0; i<10; i++){

        cin >> v[i];
    }

    cout << "Ecco i valori approssimati all' intero piu' vicino: " << endl;

    for(int z=0; z < 10; z++){

        cout << round(v[z]) << endl;
    }

    return 0;

}