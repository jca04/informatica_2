#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio8() {
    int num = leerNumeroEntero("Ingrese un numero: ");

    while (true) {
        if (num > 32) {
            num = leerNumeroEntero("Numero muy grande. Ingrese un numero menor a 32: ");
            continue;
        } else if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero positivo: ");
            continue;
        } else {
            break;
        }
    }

    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << num << "!" << "=" << fact << endl;
}
