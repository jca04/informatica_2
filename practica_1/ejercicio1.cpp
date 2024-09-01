#include <iostream>
#include <limits>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio1() {
    int a = leerNumeroEntero("Ingrese el primer numero: ");
    int b = leerNumeroEntero("Ingrese el segundo numero: ");

    if (b != 0) {
        cout << "El residuo de la division " << a << " / " << b << " es: " << (a % b) << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }
};
