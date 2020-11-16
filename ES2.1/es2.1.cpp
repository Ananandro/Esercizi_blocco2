#include <iostream>

using namespace std;

int sum(int v[])
{

    int tot = 0;

    for (int z = 0; z < 10; z++) {

        tot += v[z];

        if (v[z] == 0)
            break;
    }

    return tot;
}

int main()
{

    int val[10];
    int i;

    cout << "Inserisci 10 valori e sara' calcolata la somma. \nNel caso volessi inserire meno di 10 numeri, premi zero" << endl;

    for (i = 0; i < 10; i++) {

        cin >> val[i];

        if (val[i] == 0)
            break;
    }

    cout << "la somma dei numeri da te inseriti e': " << sum(val);

    return 0;
}