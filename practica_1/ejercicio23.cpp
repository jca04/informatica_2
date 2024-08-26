#include <iostream>
#include "ejercicios.h"

using namespace std;

// hallo el MCD usando el algoritmo de euclides
int calcMCD(int a, int b) {

    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int calcMCM(int a, int b) {
    int mcd = calcMCD(a, b);
    return (a * b) / mcd;
}

void ejercicio23() {

    int a, b;

    cout << "Ingrese el primer valor: " << endl;
    cin >> a;

    cout << "Ingrese el segundo valor: " << endl;
    cin >> b;

    int mcm = calcMCM(a, b);


    cout << "El MCM de " << a << " y " << b << " es: " << mcm << endl;

}
