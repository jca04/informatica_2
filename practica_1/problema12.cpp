#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema12() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while(true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo mayor a cero: ");
            continue;
        } else {
            break;
        }
    }

    int mayorFactoPrimo = 0;

    for (int i = 1; i <= num; i++) {
        if (esPrimo(i)) {
            if (num % i == 0 && i > mayorFactoPrimo) {
                mayorFactoPrimo = i;
            }
        }
    }

    cout << "El mayor factor primo de " << num << " es: " << mayorFactoPrimo << endl;

}
