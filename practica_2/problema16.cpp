#include <iostream>
#include <limits>
#include "problemas.h"

using namespace std;

unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}

unsigned long long caminos(int n) {
    return factorial(2 * n) / (factorial(n) * factorial(n));
}


void problema16() {

    /// los caminos posibles es el numero de formas en que se pueden organizar estos movimients. Es una combinación
    /// C(2n, n) = (2n)!/n!n!

    int n;
    while (true) {
        cout << "Ingrese el tamano de la malla (n): ";
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no valida. Por favor ingrese un numero entero." << endl;
        } else if (n < 0) {
            cout << "Por favor ingrese un numero entero positivo." << endl;
        } else {
            break;
        }
    }


    unsigned long long posiblesCaminos = caminos(n);

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << posiblesCaminos << " caminos." << endl;


}
