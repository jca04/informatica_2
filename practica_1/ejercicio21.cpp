#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio21() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    string mayusLet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char newChar = (mayusLet.find(c) < mayusLet.length()) ? tolower(c) : toupper(c);

    cout << "Letra convertida: " << newChar << endl;
}
