#include <iostream>
#include <string>
#include <problemas.h>

using namespace std;

void problema1(){

    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    string vocales = "aeiou";
    string consonantes = "bcdfghjklmnopqrstvwxyz";

    caracter = tolower(caracter);

    if (vocales.find(caracter) != string::npos) {
        cout << caracter << " es una vocal" << endl;
    } else if (consonantes.find(caracter) != string::npos) {
        cout << caracter << " es una consonante" << endl;
    } else {
        cout << "no es una letra" << endl;
    }


}
