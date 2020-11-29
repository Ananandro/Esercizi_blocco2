#include <time.h>
#include <iostream>

using namespace std;


int main(){

    srand(time(NULL));

    int nr;
    int tent;

    nr = (rand()%1000) + 1;

    cout << "Prova a indovinare il numero tra 1 e 1000:" << endl;
    cin >> tent;

    while(tent != nr){

        if(tent > nr){

            cout << "Prova con un numero piu' piccolo." << endl;
        }

        if(tent < nr){

            cout << "Prova con un numero piu' grande." << endl;
        }

        cin >> tent;
    }

    if(tent == nr){

        cout << "Complimenti, hai indovinato il numero!";
    }

    return 0;
}