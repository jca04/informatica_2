#include <iostream>
#include "ejercicios.h"

using namespace std;


void ejercicio4() {
    int a, b;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    int minorNum = (a < b) ? a : b;

    cout << "El menor es: " << minorNum << endl;
}
