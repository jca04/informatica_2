#include <iostream>
#include "ejercicios.h"
#include <limits>

using namespace std;

void ejercicio15() {

    bool finish = false;
    double suma = 0;

    while (!finish) {
        double num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        if (!(cin >> num)) {
            cout << "Tipo de dato invalido. Ingrese un numero: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (num == 0) finish = true;

        suma += num;
    }

    cout << "El resultado de la sumatoria es: " << suma << endl;
}
