#include <cmath>
#include <iostream>
#include <cstring>

using namespace std;


int main()
{

    char fras[100];
    int ind;

    cout << "Inserisci una frase:" << endl;
    cin.get(fras, 99);
    cout << "Bene, ora inserisci un indice." << endl << "Nota che i numeri <1 non saranno accettati." << endl;
    cin >> ind;
    cout << "La cifra dell'indice da te specificato e': " << fras[ind-1];

    return 0;
}