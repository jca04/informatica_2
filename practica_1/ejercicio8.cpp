#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio8() {
    int num;

    cout << "Ingresa un numero: " << endl;
    cin >> num;

    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << num << "!" << "=" << fact << endl;
}
