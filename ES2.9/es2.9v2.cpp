#include <iostream>


using namespace std;





int main(){

    int num[10];
    int max1;
    int max2;


    cout << "Inserisci 10 numeri interi ed io trovero' i due numeri piu' grandi." << endl;

    for(int i=0; i<10; i++){

        cin >> num[i];
    }

    max1 = num[0];
    max2 = num[1];

    for(int z=0; z<10; z++){

        if((num[z] == max1) && (num[z] != num[0])) max2 = num[z];

        if(num[z] > max1){
            
            max2 = max1;
            max1 = num[z];
        
        }
        
    }

    cout << "I due numeri piu' grandi inseriti sono: " << max1 << " e " << max2 << endl;

    return 0;
}