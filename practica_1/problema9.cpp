#include <iostream>
#include <cctype>
#include <problemas.h>
#include "funciones.h"

using namespace std;

int expNum(int num, int exp) {

    if (num == 0) {
        return 1;
    }

    int res = 1;

    for (int i = 0; i < exp; i++) {
        res *= num;
    }

    return res;

}

void problema9() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while (true) {
        if (num < 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo: ");
            continue;
        } else {
            break;
        }
    }

    string intToStr = to_string(num);

    int suma = 0;

    for(char c : intToStr) {
        int numCharacter = c - '0';
        suma += expNum(numCharacter, numCharacter);
    }

    cout << "El resultado de la suma es: " << suma << endl;

}
