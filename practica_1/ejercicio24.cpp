#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio24() {

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        cout << "El numero debe ser mayor que 1." << endl;
        return;
    }

    for(int i = 0; i < num; i++) {
        cout << "+";
    }
    cout << endl;

    for (int j = 0; j < num - 2; j++) {
        cout << "+";
        for (int k = 0; k < num - 2; k++) {
            cout << " ";
        }
        cout << "+";
        cout << endl;
    }

    for (int l = 0; l < num; l++) {
        cout << "+";
    }
    cout << endl;

}
