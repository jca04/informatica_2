#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio6() {
    int a, b;
    int res = 1;
    int aux;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    if (b == 0) {
        cout << a << "^" << b << "=" << 1 << endl;
        return;
    }

    for (int i = 0; i < b; i++) {
        aux = a;
        res *= aux;
    }

    cout << a << "^" << b << "=" << res << endl;
}
