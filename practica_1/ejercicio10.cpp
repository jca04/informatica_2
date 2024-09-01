#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio10() {

    int num = leerNumeroEntero("Ingrese un numero: ");

    while (true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero mayor que 0: ");
        } else {
            break;
        }
    }

    cout << "Multiplos de " << num << " menores que 100" << endl;

    for (int i = num; i < 100; i += num) {
        cout << i << endl;
    }
}
