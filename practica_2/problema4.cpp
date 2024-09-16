#include <iostream>
#include <cctype>
#include <limits>
#include "problemas.h"

using namespace std;

void problema4() {

    string cadena;
    bool finish = false;
    int signo = 1;

    while (!finish) {
        cout << "Ingrese una cadena numerica: " << endl;
        cin >> cadena;

        finish = true;  // Asumimos que la entrada es válida inicialmente.

        // Comprobamos si la cadena está vacía
        if (cadena.empty()) {
            finish = false;
            cout << "Error: La cadena no debe estar vacía." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Validar si el primer carácter es un signo negativo
        size_t inicio = 0;
        if (cadena[0] == '-') {
            if (cadena.length() == 1) { // Si solo contiene el signo menos
                finish = false;
                cout << "Error: La cadena no puede ser solo un signo negativo." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            inicio = 1;
            signo = -1;  // Si tiene un signo negativo
        }

        // Validar que el resto de los caracteres sean dígitos
        for (size_t i = inicio; i < cadena.length(); i++) {
            if (!isdigit(cadena[i])) {
                finish = false;
                signo = 1;
                cout << "Error: La cadena debe contener solo numeros." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }
    }

    // Convertir la cadena a número teniendo en cuenta el signo
    int numero = 0;
    size_t start = (signo == -1 ? 1 : 0);

    for (size_t i = start; i < cadena.size(); i++) {
        // ej cadena = 1234
        // numero = 0
        // 0 * 10 + (1) = 1
        // 1 * 10 + (2) = 12
        // 12 * 10 + (3) = 123
        // 123 * 10 + (4) = 1234
        numero = numero * 10 + (cadena[i] - '0');
    }

    cout << (numero * signo) << endl;
}
