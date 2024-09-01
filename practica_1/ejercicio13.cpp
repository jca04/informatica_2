#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio13() {

    int n = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (n <= 0) {
            n = leerNumeroEntero("Ingrese un numero positivo para encontrar sus divisores: ");
        } else {
            break;
        }
    }

    cout << "Los divisores de n son: " << endl;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
