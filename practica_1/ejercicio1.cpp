#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio1() {
    int a, b;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    if (b != 0) {
        cout << "El residuo de la division " << a << " / " << b << " es: " << (a % b) << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }
};
