#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio15() {

    bool finish = false;
    int suma = 0;

    while (!finish) {
        int num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        cin >> num;

        if (num == 0) finish = true;

        suma += num;
    }

    cout << "El resultado de la sumatoria es: " << suma << endl;
}
