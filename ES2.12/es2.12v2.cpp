#include <iostream>
#include <time.h>


using namespace std;



int main(){

    int num;
    int guess;

    srand(time(NULL));

    num = (rand()%1000) + 1;

    cout << "Prova ad indovinare il numero compreso tra 1 e 1000: " << endl;
    cin >> guess;

    while(guess != num){

        if(guess > num){

            cout << "Prova un numero piu' piccolo" << endl;
        }
        if(guess < num){

            cout << "Prova un numero piu' grande" << endl;
        }

        cin >> guess;
    }

    if(guess == num){

        cout << "Congratulazioni! Hai indovinato il numero." << endl;
    }

    return 0;

}