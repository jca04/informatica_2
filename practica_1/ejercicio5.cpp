#include <iostream>
#include "ejercicios.h"
#include <cmath>
#include <limits>

using namespace std;

void ejercicio5() {

    double a, b;

    cout << "Ingrese el primer numero: " << endl;
    while(!(cin >> a)) {
        cout << "Entrada invalida. Ingrese un numero: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingrese el segundo numero: " << endl;
    while(!(cin >> b)) {
        cout << "Entrada invalida. Ingrese un numero: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (b == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return;
    }

    int res = round(a / b);

    cout << a << "/" << b << "=" << res <<endl;
}
