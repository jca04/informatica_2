#include <iostream>
#include <limits>
#include <cctype>
#include "problemas.h"

using namespace std;

void problema8() {

    string cadena;

    cout << "Ingrese una palabra: " << endl;
    getline(cin, cadena);

    string numeros = "";
    string texto = "";

    for (char c : cadena) {
        if (isdigit(c)) {
            numeros += c;
        } else {
            texto += c;
        }
    }

    cout << "Original: " << cadena << endl;
    cout << "Texto: " << texto << endl;
    cout << "Numero: " << numeros << endl;
}
