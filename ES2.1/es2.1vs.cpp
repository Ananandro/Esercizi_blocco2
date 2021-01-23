#include <iostream>



using namespace std;






int main(){

    int num[10] = {0};
    int somma = 0;
    int z;

    cout << "Inserire 10 numeri e ne calcolero' la somma, nel caso si volesse inserire meno di 10 numeri, inserire 0" << endl;
    
    for(int i=0; i<10; i++){

        cin >> num[i];
        
        if(num[i] == 0){

            z = i;
            i = 10;
        }
        else z = 10;
    }

    for(int y=0; y < z; y++){

        somma += num[y];
    }

    cout << "La somma dei numeri inseriti e': " << somma << endl;

    return 0;

}