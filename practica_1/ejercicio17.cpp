#include <iostream>
#include "ejercicios.h"
#include <limits>

using namespace std;

void ejercicio17() {

    bool finish = false;
    double largestNum;

    while (!finish) {
        double num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        if (!(cin >> num)) {
            cout << "Tipo de dato invalido. Ingrese un numero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (num > largestNum) {
            largestNum = num;
        }

        if (num == 0) finish = true;

    }

    cout << "El numero mayor fue: " << largestNum << endl;

}
