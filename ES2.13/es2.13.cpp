#include <time.h>
#include <iostream>

using namespace std;

int main(){

    srand(time(NULL));

    int v[20];

    cout << "Ora genero 20 numeri random e li metto in ordine decrescente" << endl;

    for(int i=0; i<20; i++){
        v[i] = (rand()%1000);
        cout << v[i] << "  ";
    }

    for 




}