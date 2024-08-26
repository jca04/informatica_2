#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio27() {
    double num1, num2;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    char operacion;
    cout << "Ingrese una operacion (suma (+), resta(-), multiplicacion(*) y division(/)): " << endl;
    cin >> operacion;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/') {
        cout << "Operacion no valida" << endl;
        return;
    }

    int resultado;

    if (operacion == '+') {
        resultado = num1 + num2;
    } else if (operacion == '-') {
        resultado = num1 - num2;
    } else if (operacion == '*') {
        resultado = num1 * num2;
    } else if (operacion == '/') {
        resultado = num1 / num2;
    }

    cout << num1 << operacion << num2 << "=" << resultado << endl;
}
