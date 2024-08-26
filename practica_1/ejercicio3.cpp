#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio3() {
    int a, b;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    int biggerNum = (a > b) ? a : b;

    cout << "El mayor es: " << biggerNum << endl;
}
