#include <iostream>
#include "ejercicios.h"

using namespace std;


void ejercicio11() {
    int num;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << i << "x" << num << "=" << num * i << endl;
    }
}
