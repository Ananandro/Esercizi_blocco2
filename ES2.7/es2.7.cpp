#include <iostream>


using namespace std;

/*
I know the program is not the most efficient and it could be done in better ways,
but I need to practice with pointers and with functions, so I have decided to split
the program in 2 functions:
    - the first function had to get as input all the students' marks, returning the pointer of a newly created dynamic array.
    - the second function had to calculate the average of the marks given as input
Both functions are being called in the main() cause why not.
Also i wanted to make sure to pass the dynamic array to different functions while trying to make things a bit more diffucult.
*/


int* getMarks(int x){

    int *v = new int[x];

    for(int i=0; i < x; i++){

        cin >> v[i];

    }

    return v;
}

float AvgCalculator(int *z, int t){                                 //i m trying to take as input both the dynamic array (pointer) and its dimension to make the average calculation easier


    float avgg = 0.0;                                               //set to zero cause it may have random values in it, initialized as float because yes

    for(int u = 0; u < t; u++){

        avgg += (float)z[u];
    }

    avgg /= (float)t;

    delete[] z;                                                    //this SHOULD delete *v since the array is passed for reference

    return avgg;

}



int main(){

    int dim;

    cout << "Inserisci numero di studenti." << endl;
    cin >> dim;
    cout << "Ora inserisci i voti." << endl;

    float average = AvgCalculator(getMarks(dim), dim);            //will this even work?

    cout << "La media dei voti e':" << endl << average;
    
 //   delete[] v;           //<-- this does not work

    return 0;
}