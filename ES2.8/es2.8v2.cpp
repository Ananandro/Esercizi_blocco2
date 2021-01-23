#include <iostream>


using namespace std;





int main(){

    int num[10];
    int max;


    cout << "Inserisci 10 numeri interi ed io trovero' il numero piu' grande." << endl;

    for(int i=0; i<10; i++){

        cin >> num[i];
    }

    max = num[0];

    for(int z=0; z<10; z++){

        if(num[z] > max) max = num[z];
    }

    cout << "Il numero piu' grande inserito e': " << max << endl;

    return 0;
}