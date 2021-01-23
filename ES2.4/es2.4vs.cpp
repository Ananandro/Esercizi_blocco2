#include <iostream>
#include <cmath>

using namespace std;




int main(){

    float num[10];
    int z;

    cout << "Inserire fino a 10 numeri decimali. Inserendo uno 0 si termina la procedura." << endl;

    for(int i=0; i<10; i++){

        cin >> num[i];

        if(num[i] == 0.0){

            z = i;
            i=10;
        }
        else z=10;
    }

    cout << "I numeri arrotondati sono: " << endl;

    for(int y=0; y<z; y++){

        cout << int(round(num[y])) << endl;

    }

    return 0;

}