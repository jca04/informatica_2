#include <iostream>
#include <cctype>
#include <limits>
#include "ejercicios.h"

using namespace std;

bool esLetra(char c) {
    return isalpha(c);
}

char leerCaracter() {
    char c;
    while (true) {
        cout << "Ingrese una letra: ";
        cin >> c;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Ingrese un solo caracter." << endl;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (esLetra(c)) {
            return c;
        } else {
            cout << "Entrada invalida. Ingrese un caracter." << endl;
        }
    }
}

void ejercicio21() {
    char c = leerCaracter();

    string mayusLet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char newChar = (mayusLet.find(c) < mayusLet.length()) ? tolower(c) : toupper(c);

    cout << "Letra convertida: " << newChar << endl;
}
