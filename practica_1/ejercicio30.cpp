#include <iostream>
#include <cstdlib>
#include "ejercicios.h"

using namespace std;

void ejercicio30() {
    srand(time(0));

    int guessedNum = rand() % 101;
    bool guessed = false;
    int num;
    int attempts;

    do {

        cout << "Cual crees que sea el numero: " << endl;
        cin >> num;

        if (num == guessedNum) {
            guessed = true;
        } else if (num > guessedNum) {
            cout << "El numero a adivinar es menor." << endl;
        } else if (num < guessedNum) {
            cout << "El numero a adivinar es mayor." << endl;
        }

        attempts++;

    } while(!guessed);

    cout << "Felicitaciones adivinaste el numero en " << attempts << " intentos" << endl;

}
