#include <iostream>

using namespace std;

int maxFinder1(const int *y){

    int res1 = y[0];

    for(int u = 0 ; u < 10; u++){

        if (y[u] > res1){
            res1 = y[u];
        }
    }   
    return res1;
}

int maxFinder2(const int *c, int z){

    int res2 = c[1];

    for(int t=0; t<10; t++){
        
        if((c[t] > res2) && (z =! c[t])){

            res2 = c[t];
        }
    }
    return res2;
}


int main()
{

    int num[10];
    int max1;

    cout << "Inserisci 10 numeri interi e trovero' i due numeri piu' grandi." << endl;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }

    max1 = maxFinder1(num);
    cout << "I due numeri piu' grandi che hai inserito sono: " << max1 << " e " << maxFinder2(num, max1);

    return 0;

}