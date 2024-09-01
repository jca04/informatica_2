#include <iostream>
#include <string>
#include <cctype>
#include <problemas.h>

using namespace std;

void problema1(){

    char caracter;
    string input;

    while(true) {
        cout << "Ingrese un caracter: ";
        getline(cin, input); // leo toda la entrada

        if (input.length() != 1) {
            cout << "Entrada invalida. Ingrese un solo caracter." << endl;
            continue;
        }

        caracter = input[0];

        if (!isalpha(caracter)) {
            cout << "La entrada no es una letra. Ingrese un caracter alfabetico." << endl;
            continue;
        }

        caracter = tolower(caracter);

        string vocales = "aeiou";
        string consonantes = "bcdfghjklmnopqrstvwxyz";

        if (vocales.find(caracter) != string::npos) {
            cout << caracter << " es una vocal" << endl;
            break;
        } else if (consonantes.find(caracter) != string::npos) {
            cout << caracter << " es una consonante" << endl;
            break;
        } else {
            cout << "No es una letra valida." << endl;
        }
     }

}
