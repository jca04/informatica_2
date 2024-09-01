#include <iostream>
#include <limits>
#include "ejercicios.h"

using namespace std;


void ejercicio4() {
    int a, b;

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

    int minorNum = (a < b) ? a : b;

    cout << "El menor es: " << minorNum << endl;
}
