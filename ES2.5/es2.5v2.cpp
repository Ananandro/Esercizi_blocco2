#include <iostream>
#include <cmath>


using namespace std;



int main(){

    float cat1, cat2, ipo;

    cout << "Inserire due cateti e ne calcolero' l'ipotenusa. \nInserire cateto 1: ";
    cin >> cat1;
    cout << "Ora inserire cateto 2: ";
    cin >> cat2;

    ipo = sqrt((pow(cat1, 2) + pow(cat2, 2)));

    cout << "L'ipotenusa calcolata e': " << ipo << endl;

    return 0;
}