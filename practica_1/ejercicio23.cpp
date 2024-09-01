#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

// hallo el MCD usando el algoritmo de euclides
int calcMCD(int a, int b) {

    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int calcMCM(int a, int b) {
    int mcd = calcMCD(a, b);
    return (a * b) / mcd;
}

void ejercicio23() {

    int a = leerNumeroEntero("Ingrese el primer numero: ");
    int b = leerNumeroEntero("Ingrese el segundo numero: ");

    while (true) {
        if (a < 0) {
            a = leerNumeroEntero("Ingrese un numero positivo para el primer numero: ");
            continue;
        } else if (b < 0) {
            b = leerNumeroEntero("Ingrese un numero positivo para el segundo numero: ");
            continue;
        } else {
            break;
        }
    }

    int mcm = calcMCM(a, b);


    cout << "El MCM de " << a << " y " << b << " es: " << mcm << endl;

}
