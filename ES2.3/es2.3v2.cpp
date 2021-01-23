
#include <iostream>



using namespace std;





int main(){

    char sos[100];
    int indice;

    cout << "Inserire una frase di massimo 100 caratteri: " << endl;
    cin.get(sos, 100);
    cout << "Ora inserisci un indice: " << endl;
    cin >> indice;
    cout << "Il carattere presente all'indice specificato e': " << sos[(indice-1)] << endl;

    return 0;

}
