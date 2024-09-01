#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

double calcFactorial (int num) {

    if (num == 0) {
        return 1;
    }

    int fact = 1;

    for (int i = 1; i <= num; i++) {
        int aux = i;
        fact *= aux;
    }

    return fact;

}

void problema6() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while (true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero positivo: ");
        } else {
            break;
        }
    }

    double e = 0;
    int cont = 0;

    while (cont < num) {

        double div = 1 / calcFactorial(cont);

        e += div;

        cont++;
    }

    cout << "e es aproximadamente: " << e << endl;

}
