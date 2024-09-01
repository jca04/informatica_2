#include <iostream>
#include "ejercicios.h"
#include <limits>

using namespace std;

void ejercicio16() {

    bool finish = false;
    double suma = 0;
    double promedio = 0;
    int cont = 0;

    while (!finish) {
        double num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        if (!(cin >> num)) {
            cout << "Tipo de dato invalido. Ingrese un numero: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (num != 0) {
            suma += num;
            cont++;
        }

        if (num == 0) finish = true;
    }

    if (cont > 0) {
        promedio = suma / cont;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros." << endl;
    }

}
