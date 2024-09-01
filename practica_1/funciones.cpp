#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include "funciones.h"

using namespace std;

int leerNumeroEntero(const string &mensaje) {
    int num;
    string input;

    while (true) {
        cout << mensaje;
        getline(cin, input); // leo la entrada como una cadena
        stringstream stream(input); // creo un stream de string a partir de la entrada

        if (stream >> num && stream.eof()) {
            return num;  // Retorna el número si la entrada es válida.
        } else {
            cout << "Entrada invalida. Ingrese un numero entero." << endl;
            stream.clear(); // limpiar el stream para el siguiente intento
        }
    }
}

double validarDoubleInput (const string &mensaje) {
    double valor;
    while(true) {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Ingrese un numero." << endl;
        } else {
            break;
        }
    }
    return valor;
}

bool esPrimo(int num) {

    if (num <= 1) {
        return false;
    }

    if (num == 2 || num == 3) {
        return true;
    }

    if (num % 2 == 0) {
        return false; // numeros pares mayores que 2 no son primos
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
