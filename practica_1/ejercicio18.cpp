#include <iostream>
#include <cmath>
#include "ejercicios.h"

using namespace std;


void ejercicio18() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num < 0) {
        cout << "Ingrese un numero positivo" << endl;
        return;
    }

    int sqrtRes = static_cast<int>(sqrt(num));

    int multRes = sqrtRes * sqrtRes;

    if (num == multRes) {
        cout << num << " es un cuadrado perfecto" << endl;
    } else {
        cout << num << " NO es un cuadrado perfecto" << endl;
    }

}
