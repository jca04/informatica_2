#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio13() {

    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    cout << "Los divisores de n son: " << endl;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
