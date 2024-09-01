#include <iostream>
#include <limits>
#include "ejercicios.h"

using namespace std;

void ejercicio3() {
    double a, b;

    cout << "Ingrese el primer numero: " << endl;
    while(!(cin >> a)) {
        cout << "Entrada invalida. Ingrese un numero" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingrese el segundo numero: " << endl;
    while(!(cin >> b)) {
        cout << "Entrada invalida. Ingrese un numero" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double biggerNum = (a > b) ? a : b;

    cout << "El mayor es: " << biggerNum << endl;
}
