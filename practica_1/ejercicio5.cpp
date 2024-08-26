#include <iostream>
#include "ejercicios.h"
#include <cmath>

using namespace std;

void ejercicio5() {
    int a, b;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    if (b == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return;
    }


    int res = round(static_cast<double>(a) / b);

    cout << a << "/" << b << "=" << res <<endl;
}
