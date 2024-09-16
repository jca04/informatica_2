#include <iostream>
#include <cctype>
#include <limits>
#include "problemas.h"

using namespace std;

void problema6() {

    string palabra;

    cout << "Ingrese una palabra: " << endl;
    getline(cin, palabra);

    string nuevaPalabra = "";

    for (char c : palabra) {
        if (islower(c)) {
            nuevaPalabra += toupper(c);
        } else {
            nuevaPalabra += c;
        }
    }

    cout << "Original: " << palabra << ". " << "En mayuscula: " << nuevaPalabra << endl;
}
