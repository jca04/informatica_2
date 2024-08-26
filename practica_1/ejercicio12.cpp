#include <iostream>
#include "ejercicios.h"

using namespace std;

double expNum(double num, int exp) {

    int res = 1;
    int aux = 1;
    int cont = 1;
    while (cont <= exp) {
        aux = num;
        res *= aux;
        cont++;
    }

    return res;

}

void ejercicio12() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= 5; i++) {
        cout << num << "^" << i << "=" << expNum(num, i) << endl;
    }
}
