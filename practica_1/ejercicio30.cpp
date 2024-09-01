#include <iostream>
#include <cstdlib>
#include "ejercicios.h"
#include <limits>
#include "funciones.h"

using namespace std;

void ejercicio30() {
    srand(time(0));

    int guessedNum = rand() % 101;
    bool guessed = false;
    int num;
    int attempts;

    do {

        cout << "Cual crees que sea el numero (entre 0 y 100): " << endl;
        cin >> num;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese un numero entero." << endl;
            continue;
        }

        if (num < 0 || num > 100) {
            cout << "El numero debe estar entre 0 y 100. Intente nuevamente." << endl;
            continue;
        }

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
