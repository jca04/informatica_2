#include <iostream>
#include <cmath>
#include "ejercicios.h"

using namespace std;

bool esPrimo(int num) {

    if (num <= 1) {
        return false;
    }

    if (num == 2 || num == 3) {
        return true;
    }

    if (num % 2 == 0) {
        return false; // numeros pares mayores que 2 no son primos
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void ejercicio19() {

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPrimo(num)) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " NO es un numero primo" << endl;
    }


}
