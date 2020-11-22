#include <iostream>


using namespace std;

float NumToFar(float x){

    float res = (1.8 * x) + 32.0;
    return res;

}

float FarToCel(float y){

    float result = (y - 32.0) / 1.8;
    return result;

}


int main(){

    float cels, fare;
    cout << "Ora ti spammo un po' di valori. In realta' e' una tabella di valori Celsius - Farenheit." << endl;
    cout << "Numero \t \t Farenheit \t \t Celsius" << endl;

    for(float i = -40.0; i <= 250.0; i += 0.25){

        fare = NumToFar(i);
        cels = FarToCel(fare);
        cout << i << "\t \t" << fare << "\t \t" << cels << endl;

    }

}