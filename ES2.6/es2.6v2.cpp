#include <iostream>


using namespace std;



int main(){

    float reference = -40.0;
    float tf, tc;

    cout << "Ora stampero' una tabella di temperature." << endl;
    cout << "Valore di riferimento\t\tTemperatura in Farenheit\t\tTemperatura in Celsius" << endl;

    for(reference; reference <= 250.0; reference+=0.25){

        cout << reference << "\t\t\t\t";
        tf = (1.8 * reference) + 32.0;
        cout << tf << "\t\t\t\t";
        tc = (tf - 32.0) / 1.8;
        cout << tc << endl;

    }

    return 0;
}