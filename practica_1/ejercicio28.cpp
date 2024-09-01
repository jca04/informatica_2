#include <iostream>
#include <limits>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio28(){

    int num = leerNumeroEntero("Ingrese el numero de elementos: ");

    while(true) {
        if (num <= 0) {
            cout << "Ingrese un numero mayor a 0" << endl;
            num = leerNumeroEntero("Ingrese el numero de elementos: ");
        } else {
            break;
        }
    }

    double suma = 0.0;
    double signo = 1.0;

    for (int i = 0; i < num; i++) {

        double serie = signo / (2 * i + 1);

        suma += serie;

        signo *= -1;
    }

    double piAprox = 4 * suma;

    cout << "pi es aproximadamente: " << piAprox << endl;

}
