#include <iostream>
#include <set>
#include <problemas.h>
#include "funciones.h"


using namespace std;

void problema8() {

    int a = leerNumeroEntero("Ingrese el numero a: ");

    while(true) {
        if (a <= 0) {
            a = leerNumeroEntero("Ingrese un numero positivo para a: ");
            continue;
        } else {
            break;
        }
    }

    int b = leerNumeroEntero("Ingrese el numero b: ");

    while(true) {
        if (b <= 0) {
            b = leerNumeroEntero("Ingrese un numero positivo para b: ");
            continue;
        } else {
            break;
        }
    }

    int c = leerNumeroEntero("Ingrese el numero c: ");

    while(true) {
        if (c <= 0) {
            c = leerNumeroEntero("Ingrese un numero positivo para c: ");
            continue;
        } else {
            break;
        }
    }


    set<int> multiplos;

    for (int i = a; i < c; i += a) {
        multiplos.insert(i);
    }

    for (int i = b; i < c; i += b) {
        multiplos.insert(i);
    }

    int suma = 0;

    for (const int& num : multiplos) {
        suma += num;
    }

    for (const int& num : multiplos) {
        cout << num << " ";
    }

    cout << "= " << suma << endl;

}
