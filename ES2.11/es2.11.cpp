#include <iostream>
#include <math.h>

using namespace std;


int var = 0;

void support(int poi[], int gg){

    poi[var] = gg;
    var++;
}


bool isPrime(int n)
{

    int i;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        return false;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    }

    return true;
}

void fattorizz(int num, int vect[])
{

    while (num != 1) {
        for (int u = 2; u <= num; u++) {

            if (isPrime(u) == true) {

                if ((num % u) == 0) {

                    support(vect, u);
                    num = num / u;
                }
            }
        }
    }
}



int main()
{

    int numero;
    int fattori[50] = { 0 };
    int asasas = 1;

    cout << "Inserire un numero, determinero' se e' perfetto: " << endl;
    cin >> numero;

    fattorizz(numero, fattori);

    for(int i=0; i<50; i++){

        asasas += fattori[i];
    }

    if(asasas == numero){
        
        cout << "Il numero " << numero << " e' un numero perfetto." << endl;
    }
    else{
        cout << "Il numero " << numero << " non e' un numero perfetto." << endl;
    }

    return 0;
}