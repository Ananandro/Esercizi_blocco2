#include <iostream>

using namespace std;

int maxFinder(const int *y){

    int res = y[0];

    for(int u = 0 ; u < 10; u++){

        if (y[u] > res){
            res = y[u];
        }
        
    }
    
    return res;
}


int main()
{

    int num[10];

    cout << "Inserisci 10 numeri interi e trovero' il numero piu' grande." << endl;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }

    cout << "Il numero piu' grande che hai inserito e': " << maxFinder(num);

    return 0;

}