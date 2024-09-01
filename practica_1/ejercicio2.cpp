#include <iostream>
#include <limits>
#include <sstream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio2() {
    int num = leerNumeroEntero("Ingrese un numero: ");

    if (num & 1) {
        cout << num << " es impar" << endl;
    } else {
        cout << num << " es par" << endl;
    }
}
