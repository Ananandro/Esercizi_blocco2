#include <time.h>
#include <iostream>



using namespace std;


bool eOrdinato(int vect[]){

    for(int b=0; b<9; b++){

        if(vect[b] > vect[(b+1)]) return false;
    }

    return true;
}



int main(){

    srand(time(NULL));

    int num[20];
    int y;

    cout << "Array non ordinato: " << endl;

    for(int i=0; i<10; i++){

        num[i] = rand()%1001;
        cout << num[i] << endl;
    }


    while(eOrdinato(num) == false){

        for(int x=0; x<9; x++){

            if(num[x] > num[(x+1)]){

                y = num[x];
                num[x] = num[(x+1)];
                num[(x+1)] = y;
            }
        }


    }

    cout << "L'array ordinato in ordine crescente e': " << endl;

    for(int m=0; m<10; m++){

        cout << num[m] << endl;
    }

    return 0;
}