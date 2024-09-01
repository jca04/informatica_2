#include <iostream>
#include <cctype>
#include <problemas.h>
#include "funciones.h"

using namespace std;

bool verificarPalindromo(int num) {

    string numToStr = to_string(num);
    string pal = "";

    for (int i = numToStr.length() - 1; i >= 0; i--) {
        pal += numToStr[i];
    }

    if (numToStr == pal) {
        return true;
    }

    return false;

}

void problema14() {

    int palindromoMasGrande = 0;
    int multiplicando;
    int multiplicador;

    for (int i = 100; i <= 999; i++) {
        for (int j = i + 1; j <= 999; j++) {
            int mult = i * j;
            if (verificarPalindromo(mult)) {
                if (mult > palindromoMasGrande) {
                    palindromoMasGrande = mult;
                    multiplicando = i;
                    multiplicador = j;
                }
            }
        }
    }

    cout << multiplicando << "*" << multiplicador << "=" << palindromoMasGrande << endl;

}
