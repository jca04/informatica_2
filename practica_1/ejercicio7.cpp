#include <iostream>
#include "ejercicios.h"

using namespace std;


void ejercicio7() {

    int num;

    cout << "Ingresa un numero: " << endl;
    cin >> num;

    int sum;

    for (int i = 0; i <= num; i++) {
        sum += i;
    }

    cout << "La sumatoria desde " << 0 << " hasta " << num << " es: " << sum << endl;
}
