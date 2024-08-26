#include <iostream>
#include "ejercicios.h"
#include <cmath>

using namespace std;

void ejercicio9() {
    double radio;

    cout << "Ingrese el radio: " << endl;
    cin >> radio;

    double perimetro = 2 * 3.1416 * radio;
    double area = 3.1416 * pow(radio, 2);

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

}
