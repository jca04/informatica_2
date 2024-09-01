#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;


void ejercicio11() {
    int num = leerNumeroEntero("Ingrese un numero: ");

    while (true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero positivo mayor que cero: ");
        } else {
            break;
        }
    }

    for (int i = 1; i <= 10; i++) {
        cout << i << "x" << num << "=" << num * i << endl;
    }
}
