#include <iostream>
#include <cmath>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio19() {

    int num = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero positivo: ");
        } else {
            break;
        }
    }

    if (esPrimo(num)) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " NO es un numero primo" << endl;
    }


}
