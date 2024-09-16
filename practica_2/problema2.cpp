#include <iostream>
#include <map>

#include "problemas.h"

using namespace std;

void problema2() {

    srand(time(0));

    char letras[200];

    // creo un map para ir guardando las veces que se repitan las letras
    map<char, int> caracteres;

    for (int i = 0; i < 200; i++) {
        char ch = 'A' + rand() % 26;
        letras[i] = ch;
    }

    for (const char &c : letras) {
        if (!caracteres[c]) {
            caracteres[c] = 1;
        }

        caracteres[c] += 1;
    }

    for (int i = 0; i < 200; i++) {
        cout << *(letras + i) << " ";
    }

    cout << endl;

    for (const auto& car : caracteres) {
        cout << car.first << ": " << car.second << endl;
    }

}
