#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

double expNum(double num, int exp) {

    if (exp < 0) {
        cout << "Exponente negativo no permitido. " << endl;
        return -1;
    }

    double res = 1;

    for (int i = 0; i < exp; i++) {
        res *= num;
    }

    return res;
}

void ejercicio12() {
    int num = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (num <= 0) {
            num = leerNumeroEntero("El numero debe ser positivo y mayor que cero: ");
        } else {
            break;
        }
    }

    for (int i = 1; i <= 5; i++) {
        double result = expNum(num, i);
        if (result != -1) {
            cout << num << "^" << i << "=" << expNum(num, i) << endl;
        }
    }
}
