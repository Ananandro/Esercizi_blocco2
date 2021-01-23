#include <iostream>


using namespace std;


int main(){

    int num_stu;
    float avg = 0;

    cout << "Inserire il numero totale di studenti: ";
    cin >> num_stu;

    float *voti = new float[num_stu];

    cout << "Ora inserire i voti per ogni studente e ne calcolero' la media" << endl;

    for(int i=0; i<num_stu; i++){

        cin >> voti[i];
    }

    for(int z=0; z<num_stu; z++){

        avg += voti[z];
    }

    delete voti;

    cout << "La media dei voti dell'esame e': " << (avg/float(num_stu)) << endl;

    return 0;
}












