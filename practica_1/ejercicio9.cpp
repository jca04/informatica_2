#include <iostream>
#include "ejercicios.h"
#include <cmath>
#include <limits>

using namespace std;

void ejercicio9() {
    double radio;

    cout << "Ingrese el radio: " << endl;
    while(!(cin >> radio)) {
        cout << "Tipo de dato invalido. Ingrese un numero: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double perimetro = 2 * 3.1416 * radio;
    double area = 3.1416 * pow(radio, 2);

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

}
