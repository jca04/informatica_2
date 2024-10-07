#include "users.h"
#include "encrypt.h"
#include "decrypt.h"
#include "utils.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

bool isAdmin = false;

bool validateAdmin() {

    string sudoContent = readFile("sudo.txt");
    stringstream ss(sudoContent);
    string cedula, clave;

    getline(ss, cedula, ',');
    getline(ss, clave, ',');

    string inputClave;
    cout << "Ingrese la clave del administrador: ";
    cin >> inputClave;

    // Desencriptar la clave almacenada
    string claveDesencriptada = decryptFirstMethod(clave, 4);

    // Convertir la clave ingresada a binaario
    string binary = convertToBinary(inputClave);

    // Encriptar y desencriptar la clave ingresada
    string inputClaveEncrypt = firstMethod(binary, 4);

    string inputClaveDesencriptada = decryptFirstMethod(inputClaveEncrypt, 4);


    if (claveDesencriptada == inputClaveDesencriptada) {
        isAdmin = true;
        return true;
    } else {
        return false;
    }
}

void registerUser() {
    if (!isAdmin) {
        cout << "Acceso denegado. Solo el administrador puede registrar usuarios." << endl;
        return;
    }

    ofstream userFile("users.txt", ios::app);

    string cedula, clave;
    double saldo;

    cout << "Ingrese la cedula: ";
    cin >> cedula;

    cout << "Ingrese la clave: ";
    cin >> clave;

    cout << "Ingrese el saldo: ";
    cin >> saldo;

    // Encriptar la clave
    string claveBinaria = convertToBinary(clave);
    string claveEncriptada = firstMethod(claveBinaria, 4);

    // Guardar el usuario en el archivo
    userFile << cedula << "," << claveEncriptada << "," << saldo << endl;
    userFile.close();
    cout << "Usuario registrado exitosamente." << endl;
}

void accessUser() {
    string cedula, clave;

    cout << "Ingrese su cedula: ";
    cin >> cedula;

    cout << "Ingrese su clave: ";
    cin >> clave;

    try {
        // Abrir el archivo de usuarios
        ifstream userFile("users.txt");
        if (!userFile) {
            cerr << "No se pudo abrir el archivo de usuarios." << endl;
            return;
        }

        string line;
        bool userFound = false; // Para verificar si el usuario fue encontrado
        double saldo = 0.0; // Para almacenar el saldo del usuario encontrado

        while (getline(userFile, line)) {
            string cedulaGuardada, claveGuardada;
            double saldoGuardado;

            // Leer los datos del usuario
            stringstream ss(line);
            getline(ss, cedulaGuardada, ',');
            getline(ss, claveGuardada, ',');
            ss >> saldoGuardado;

            // Desencriptar la clave guardada
            string claveGuardadaDes = decryptFirstMethod(claveGuardada, 4);

            // Encriptar la clave ingresada por el usuario
            string claveBin = convertToBinary(clave);
            string claveEnc = firstMethod(claveBin, 4);
            string claveDesc = decryptFirstMethod(claveEnc, 4);

            // Verificar si las credenciales son correctas
            if (cedula == cedulaGuardada && claveGuardadaDes == claveDesc) {
                userFound = true;
                saldo = saldoGuardado; // Almacenar el saldo
                cout << "Saldo actual: " << saldo << endl;

                // Cobro de acceso
                saldo -= 1000;

                char option;
                cout << "¿Desea retirar dinero? (s/n): ";
                cin >> option;

                if (option == 's') {
                    double amount;
                    cout << "Ingrese la cantidad a retirar: ";
                    cin >> amount;

                    if (amount <= saldo) {
                        saldo -= amount;
                        cout << "Retiro exitoso. Nuevo saldo menos el cobro de acceso (1000): " << saldo << endl;
                    } else {
                        cout << "Fondos insuficientes." << endl;
                    }
                }

                // Actualizar saldo en el archivo
                // Crear un archivo temporal para la actualización
                ofstream tempFile("temp.txt");
                userFile.clear();
                userFile.seekg(0); // Volver al inicio del archivo

                while (getline(userFile, line)) {
                    if (line.find(cedula) != string::npos) {
                        // Guardar el usuario con saldo actualizado
                        tempFile << cedula << "," << claveGuardada << "," << saldo << endl;
                    } else {
                        tempFile << line << endl; // Copiar el resto de los usuarios
                    }
                }

                userFile.close();
                tempFile.close();

                // Reemplazar el archivo original
                remove("users.txt");
                rename("temp.txt", "users.txt");
                break;
            }
        }

        if (!userFound) {
            cout << "Usuario no encontrado o credenciales incorrectas." << endl;
        }

        userFile.close();
    } catch (const exception &e) {
        cerr << "Error inesperado: " << e.what() << endl;
    }
}


void users() {
    int choice;

    do {
        cout << "1. Acceder como administrador\n";
        cout << "2. Registrar usuario\n";
        cout << "3. Acceder como usuario\n";
        cout << "4. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (validateAdmin()) {
                    cout << "Acceso como administrador validado.\n";
                } else {
                    cout << "Acceso denegado.\n";
                }
                break;
            case 2:
                registerUser();
                break;
            case 3:
                accessUser();
                break;
        }
    } while(choice != 4);

    isAdmin = false;
}
