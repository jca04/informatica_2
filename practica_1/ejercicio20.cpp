#include <iostream>
#include <cmath>
#include <string>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

bool esPalindromo(const string &numero) {
    string numeroSinPunto = "";
    for (char c : numero) {
        if (c != '.') {
            numeroSinPunto += c;
        }
    }

    int n = numeroSinPunto.size();
    string numeroRev = "";
    for (int i = n - 1; i >= 0; i--) {
        numeroRev += numeroSinPunto[i];
    }

    if (numeroSinPunto == numeroRev) {
        return true;
    } else {
        return false;
    }

}

void ejercicio20() {

    cout << "Ingrese un numero: " << endl;
    string num;

    getline(cin, num);

    if (esPalindromo(num)) {
        cout << num << " es un numero palindromo" << endl;
    } else {
        cout << num << " NO es un numero palindromo" << endl;
    }

}
