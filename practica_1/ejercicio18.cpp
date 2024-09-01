#include <iostream>
#include <cmath>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;


void ejercicio18() {
    int num = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero positivo");
        } else {
            break;
        }
    }

    int sqrtRes = static_cast<int>(sqrt(num));

    int multRes = sqrtRes * sqrtRes;

    if (num == multRes) {
        cout << num << " es un cuadrado perfecto" << endl;
    } else {
        cout << num << " NO es un cuadrado perfecto" << endl;
    }

}
