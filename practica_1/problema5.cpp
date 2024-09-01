#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema5() {

    int num = leerNumeroEntero("Ingrese el numero del patron (tiene que ser impar): ");

    while(true) {

        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero impar positivo: ");
            continue;
        }

        if (num % 2 == 0) {
            cout << "El numero tiene que ser impar" << endl;
            num = leerNumeroEntero("Ingrese el numero del patron (tiene que ser impar): ");
        } else {
            break;
        }
    }

    // parte superior

    for (int i = 1; i <= num; i+=2) {

        int s = (num - i) / 2; // espacios

        for (int j = 0; j < s; j++) {
            cout << " ";
        }


        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }


    // parte inferior

    for (int i = num - 2; i > 0; i-=2) {

        int s = (num - i) / 2;

        for (int j = 0; j < s; j++) {
            cout << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
