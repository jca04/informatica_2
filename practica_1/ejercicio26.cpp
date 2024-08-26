#include <iostream>
#include "ejercicios.h"

using namespace std;

bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void ejercicio26() {

    double a, b, c;

    cout << "Ingrese la primera longitud: " << endl;
    cin >> a;

    cout << "Ingrese la segunda longitud: " << endl;
    cin >> b;

    cout << "Ingrese la tercera longitud: " << endl;
    cin >> c;

    bool verify = isTriangle(a, b, c);

    if (!verify) {
        cout << "Las longitudes ingresadas no forman un triangulo." << endl;
        return;
    }


    if (a == b && b == c) {
        cout << "Se forma un triangulo equilatero." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Se forma un triangulo isosceles." << endl;
    } else {
        cout << "Se forma un triangulo escaleno." << endl;
    }
}
