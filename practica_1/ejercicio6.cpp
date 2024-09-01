#include <iostream>
#include <sstream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;


void ejercicio6() {

    int a = leerNumeroEntero("Ingrese el primer numero (base): ");
    int b = leerNumeroEntero("Ingrese el segundo numero (exponente): ");

    int res = 1;

    while (true) {
        if (b > 31) {
            b = leerNumeroEntero("El exponente es muy grande. Ingrese un numero menor a 31: ");
            continue;
        } else if (b < 0) {
            b = leerNumeroEntero("No se permite exponentes negativos. Ingrese un numero positivo: ");
            continue;
        } else {
            break;
        }
    }

    if (b == 0) {
        cout << a << "^" << b << "=" << 1 << endl;
        return;
    }


    for (int i = 0; i < b; i++) {
        res *= a;
    }

    cout << a << "^" << b << "=" << res << endl;
}
