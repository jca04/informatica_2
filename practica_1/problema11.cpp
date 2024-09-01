#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int mcm(int a, int b) {
    return (a / mcd(a, b)) * b;
}


void problema11(){

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while (true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo mayor que cero: ");
            continue;
        } else{
            break;
        }
    }

    int resultado = 1;

    for (int i = 1; i <= num; i++) {
        resultado = mcm(resultado, i);
    }

    cout << "El minimo comun multiplo es: " << resultado << endl;

}
