#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio2() {
    int num;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if (num & 1) {
        cout << num << " es impar" << endl;
    } else {
        cout << num << " es par" << endl;
    }
}
