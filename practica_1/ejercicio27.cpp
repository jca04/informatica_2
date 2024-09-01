#include <iostream>
#include <limits>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

char validarOperacion() {
    char operacion;

    while (true) {
        cout << "Ingrese una operacion (suma (+), resta (-), multiplicacion (*), division (/)): ";
        cin >> operacion;

        if (operacion == '+' || operacion == '-' || operacion == '*' || operacion == '/') {
            break;
        } else {
            cout << "Ingrese una operacion valida." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada inválida
        }
    }

    return operacion;
}

void ejercicio27() {
    double num1 = validarDoubleInput("Ingrese el primer numero: ");

    char operacion = validarOperacion();

    double num2 = validarDoubleInput("Ingrese el segundo numero: ");

    double resultado;

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
