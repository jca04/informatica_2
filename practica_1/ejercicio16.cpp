#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio16() {

    bool finish = false;
    int suma = 0;
    double promedio = 0;
    int cont = 0;

    while (!finish) {
        int num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        cin >> num;

        if (num != 0) {
            suma += num;
            cont++;
        }

        if (num == 0) finish = true;
    }

    promedio = suma / cont;

    cout << "El promedio es: " << promedio << endl;

}
