#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio10() {
    int num;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if (num <= 0) {
        cout << "El numero debe ser mayor que 0." << endl;
        return;
    }

    cout << "Multiplos de " << num << " menores que 100" << endl;

    for (int i = num; i < 100; i += num) {
        cout << i << endl;
    }
}
