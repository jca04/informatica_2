#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio24() {

    int num = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (num <= 1) {
            num = leerNumeroEntero("Ingrese un numero mayor a 1: ");
            continue;
        } else {
            break;
        }
    }

    for(int i = 0; i < num; i++) {
        cout << "+";
    }
    cout << endl;

    for (int j = 0; j < num - 2; j++) {
        cout << "+";
        for (int k = 0; k < num - 2; k++) {
            cout << " ";
        }
        cout << "+";
        cout << endl;
    }

    for (int l = 0; l < num; l++) {
        cout << "+";
    }
    cout << endl;

}
