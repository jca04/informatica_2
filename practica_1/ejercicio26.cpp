#include <iostream>
#include <limits>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void ejercicio26() {

    double a = validarDoubleInput("Ingrese la primera longitud: ");
    double b = validarDoubleInput("Ingrese la segunda longitud: ");
    double c = validarDoubleInput("Ingrese la tercera longitud: ");

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
