#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio28(){

    int num;
    cout << "Ingrese el numero de elementos: ";
    cin >> num;

    if (num <= 0) {
        cout << "Ingrese un numero mayor a 0" << endl;
        return;
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
