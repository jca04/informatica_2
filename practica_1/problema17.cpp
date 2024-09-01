#include <iostream>
#include <cctype>
#include <cmath>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema17() {

    int k = leerNumeroEntero("Ingrese un numero entero: ");

    while(true) {
        if (k <= 0) {
            k = leerNumeroEntero("Ingrese un numero entero positivo y mayor que cero: ");
            continue;
        } else {
            break;
        }
    }

    int numeroTriangular = 0;
    int n = 1;

    while(true) {

        numeroTriangular = (n * (n + 1)) / 2;
        int divisores = 0;

        for (int i = 1; i <= sqrt(numeroTriangular); i++) {

            if (numeroTriangular % i == 0) {
                if (i * i == numeroTriangular) {
                    divisores++;
                } else {
                    divisores += 2;
                }
            }
        }

        if (divisores > k) {
            cout << "El numero es: " << numeroTriangular << " que tienen " << divisores << " divisores" << endl;
            break;
        }

        n++;
    }


}
