#include <iostream>
#include <limits>
#include <sstream>
#include "ejercicios.h"

using namespace std;

void ejercicio25() {
    double num;

    while(true) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Tipo de dato invalido. Ingrese un numero." << endl;
            continue;
        } else {
            break;
        }
    }

    ostringstream oss; // crea un flujo de salida a cadena
    oss << num;
    string numStr = oss.str();

    int cont = 0;
    for(char c : numStr) {
        if (isdigit(c)) {
            cont++;
        }
    }

    cout << num << " tiene " << cont << " digitos." << endl;
}
