#include <iostream>
#include <cmath>


using namespace std;



int main(){


    float c1, c2;
    float res;

    cout << "Dati 2 cateti calcolero' l'ipotenusa." << endl;
    cout << "Inserire cateto 1:" << endl;
    cin >> c1;
    cout << "Inserire cateto 2:" << endl;
    cin >> c2;

    res = sqrt((pow(c1, 2.0) + pow(c2, 2.0)));

    cout << "L'ipotenusa vale: " << res;
}