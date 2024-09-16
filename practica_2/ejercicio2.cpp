#include <iostream>
#include "ejercicios.h"

using namespace std;

void func_c(double *a, int n, double *promedio, double *suma) {
    int i;
    for (i = 0; i < n; i++) {
        *suma += *(a + i);
    }
    *promedio = (*suma / static_cast<double>(n)); // esta haciendo esta división double / int y no se puede hacer, toca castear n a double
}

void ejercicio2() {
    double a[10] = { 4, 5, 2, 3, 9, 7, 1, 2, 6, 3 };
    double promedio;
    double suma = 0.0;
    func_c(a, 10, &promedio, &suma);
    cout << "Promedio: " << promedio << endl;
    cout << "Suma: " << suma << endl;
}
