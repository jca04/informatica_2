#include <iostream>
#include <cstdlib>
#include <limits>
#include "ejercicios.h"

using namespace std;


void ejercicio29() {

    int low = 0;
    int high = 100;
    int guess;
    char response;

    cout << "Piensa en un numero entre 0 y 100. ¡No lo ingreses en el programa!" << endl;

    while (low <= high) {
        guess = (low + high) / 2;
        cout << "Es tu numero " << guess << " (Ingrese '>' si es mayor, '<' si es menor, '=' si es igual): ";

        while(true) {
            cin >> response;

            if (cin.fail() || (response != '>' && response != '<' && response != '=')) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada invalida. Por favor ingresa '>', '<' o '=': ";
            } else {
                break;
            }
        }

        if (response == '=') {
            cout << "El programa adivino tu numero correctamente" << endl;
            break;
        } else if (response == '>') {
            low = guess + 1;
        } else if (response == '<') {
            high = guess - 1;
        }
    }

}
