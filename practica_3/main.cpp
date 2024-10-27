#include "utils.h"
#include "encrypt.h"
#include "decrypt.h"
#include "users.h"
#include <iostream>
#include <filesystem>
#include <limits>

using namespace std;

int main()
{
    int opcion;

    while (true) {
        cout << "Selecciona una opcion:" << endl;
        cout << "1. Codificar archivo" << endl;
        cout << "2. Decodificar archivo" << endl;
        cout << "3. Sistema de usuarios" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";

        cin >> opcion;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no valida. Por favor ingrese un número." << endl;
            continue;
        }

        switch (opcion) {
        case 1:
            cout << "Codificando archivo..." << endl;
            encrypt();
            break;
        case 2:
            cout << "Decodificando archivo..." << endl;
            decrypt();
            break;
        case 3:
            cout << "Sistema de usuarios..." << endl;
            users();
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            return 0;
        default:
            cout << "Opcion no valida. Intente nuevamente." << endl;
            break;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}
