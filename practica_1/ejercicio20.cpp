#include <iostream>
#include <cmath>
#include "ejercicios.h"

using namespace std;


void ejercicio20() {

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    string pal = to_string(num);
    string rev = "";

    for (int i = pal.length() - 1; i >= 0; i--) {
        rev += pal[i];
    }

    if (pal == rev) {
        cout << num << " es un numero palindromo" << endl;
    } else {
        cout << num << " NO es un numero palindromo" << endl;
    }

}
