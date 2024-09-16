#include <iostream>
#include <limits>
#include <cctype>
#include <unordered_set>
#include <map>
#include <algorithm>
#include "problemas.h"

using namespace std;

bool esNumeroRomanoValido(const string &numeroRomano, const map<char, int> &romanoArabigo) {
    unordered_set<char> repetibles = {'I', 'X', 'C', 'M'};
    unordered_set<char> noRepetibles = {'V', 'L', 'D'};
    int repeticionActual = 1;

    string numeroRomanoMayus = numeroRomano;
    transform(numeroRomanoMayus.begin(), numeroRomanoMayus.end(), numeroRomanoMayus.begin(), ::toupper);

    for (size_t i = 0; i < numeroRomanoMayus.size(); i++) {
        char c = numeroRomanoMayus[i];

        if (romanoArabigo.find(c) == romanoArabigo.end()) {
            return false; // Caracter no valido
        }

        // Verificar repeticiones
        if (i > 0 && numeroRomanoMayus[i] == numeroRomanoMayus[i - 1]) {
            repeticionActual++;
            if (repeticionActual > 3 && repetibles.count(c)) {
                return false; // No se permiten más de tres repeticiones
            }

            if (repeticionActual > 1 && noRepetibles.count(c)) {
                return false; // No se permiten repeticiones en V, L, D
            }
        } else {
            repeticionActual = 1;
        }

        // Verificar sustracción
        if (i > 0) {
            char anterior = numeroRomanoMayus[i - 1];
            if (romanoArabigo.at(anterior) < romanoArabigo.at(c)) {
                // Verificar si la sustracción es válida
                if (!((anterior == 'I' && (c == 'V' || c == 'X')) ||
                      (anterior == 'X' && (c == 'L' || c == 'C')) ||
                      (anterior == 'C' && (c == 'D' || c == 'M')))) {
                    return false; // Sustracción inválida
                }
                // Evitar doble sustracción
                if (i > 1) {
                    char anteriorAnterior = numeroRomanoMayus[i - 2];
                    if (romanoArabigo.at(anteriorAnterior) < romanoArabigo.at(anterior)) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

void problema10() {

    string numeroRomano;

    map<char, int> romanoArabigo = {
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}
    };

    while (true) {
        cout << "Ingrese un numero en el sistema romano: " << endl;
        getline(cin, numeroRomano);

        if (!esNumeroRomanoValido(numeroRomano, romanoArabigo)) {
            cout << "Ingrese un numero romano valido. Solo se permiten los caracteres: I, V, X, L, C, D, M." << endl;
            continue;
        } else {
            break;
        }
    }

    string numeroRomanoMayus = "";

    for (char c : numeroRomano) {
        numeroRomanoMayus += toupper(c);
    }

    int suma = 0;
    size_t size = numeroRomanoMayus.size();

    for (size_t i = 0; i < size; i++) {
        char actualNumeroRomano  = numeroRomanoMayus[i]; // 1000
        bool esUltimo = (i == size - 1);

        if (!esUltimo) {
            char siguienteNumeroRomano = numeroRomanoMayus[i + 1]; // 1000

            if (romanoArabigo[actualNumeroRomano] >=  romanoArabigo[siguienteNumeroRomano]) {
                suma += romanoArabigo[actualNumeroRomano];
            } else {
                suma -= romanoArabigo[actualNumeroRomano];
            }

        } else {
            // como ya no habria un siguiente valor lo sumo
            suma += romanoArabigo[actualNumeroRomano]; //666
        }
    }

    cout << "El numero ingresado fue: " << numeroRomanoMayus << endl;
    cout << "Que corresponde a: " << suma << endl;
}
