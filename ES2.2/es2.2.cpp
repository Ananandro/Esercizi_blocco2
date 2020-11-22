#include <cmath>
#include <iostream>

using namespace std;

int numSplitter(int x, int y)
{

    int res;
    int vect[10];

    for (int i = 0; i < 10; i++) {

        vect[i] = (int)(x / pow(10, i)) % 10;
    }

    res = vect[y-1];

    return res;
}

int main()
{

    int num;
    int ind;

    cout << "Inserisci un numero:" << endl;
    cin >> num;
    cout << "Ora inserisci un indice:" << endl;
    cin >> ind;
    cout << "La cifra dell'indice da te specificato e': " << numSplitter(num, ind);

    return 0;
}