#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema13() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while(true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo: ");
            continue;
        } else {
            break;
        }
    }

    int suma = 0;
    int numero = 2; // primer primo


    while(numero < num) {
        if(esPrimo(numero)) {
            suma += numero;
        }
        numero++;
    }

    cout << "El resultado de la suma es: " << suma << endl;

}
