#include <iostream>
#include <cctype>
#include <problemas.h>
#include <cmath>
#include "funciones.h"

using namespace std;



void problema10() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while(true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo y mayor a cero: ");
            continue;
        } else {
            break;
        }
    }

    int cont = 0;
    int numero = 2; // empiezo en el primer numero primo

    while (true) {
        if (esPrimo(numero)) {
            cont++;
            if (cont == num) {
                break;
            }
        }
        numero++;
    }

    cout << "El primo numero " << num << " es: " << numero << endl;

}
