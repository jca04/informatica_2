#include <iostream>
#include <sstream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;


void ejercicio7() {

    int num = leerNumeroEntero("Ingrese un numero: ");

    while(true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero positivo: ");
            continue;
        } else {
            break;
        }
    }

    int sum = 0;

    for (int i = 0; i <= num; i++) {
        sum += i;
    }

    cout << "La sumatoria desde " << 0 << " hasta " << num << " es: " << sum << endl;
}
