#include <iostream>
#include <limits>
#include <set>
#include "problemas.h"

using namespace std;

int pedirEntero() {
    int num;
    while (true) {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Por favor, ingrese un número entero: ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return num;
        }
    }
}

void problema12() {

    int n;

    do {
        cout << "Ingrese el tamano de la matriz cuadrada (n x n): ";
        n = pedirEntero();
        if (n <= 0) {
            cout << "El tamano debe ser mayor que 0. Intente de nuevo." << endl;
        }
    } while (n <= 0);

    int matriz[n][n];
    set<int> numerosIngresados;  // Conjunto para almacenar los números únicos

    // Ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz (sin repetir numeros):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int numero;
            do {
                cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
                numero = pedirEntero();

                // Verificar si el número ya fue ingresado
                if (numerosIngresados.find(numero) != numerosIngresados.end()) {
                    cout << "El numero ya fue ingresado. Por favor, ingrese otro numero." << endl;
                } else {
                    matriz[i][j] = numero;
                    numerosIngresados.insert(numero);  // Guardar el número en el set
                    break;  // Salir del bucle ya que el número es válido
                }
            } while (true);
        }
    }

    int sumaObjetivo = 0;
    bool esCuadradoMagico = false;

    // Suma de la primera fila y lo ponemos como la suma objetivo
    for (int i = 0; i < n; ++i) {
        sumaObjetivo += matriz[0][i];
    }

    while (!esCuadradoMagico) {

        // Verifico las filas
        for (int i = 1; i < n; ++i) {
            int sumaFila = 0;
            for (int j = 0; j < n; ++j) {
                sumaFila += matriz[i][j];
            }
            if (sumaFila != sumaObjetivo) {
                break;
            }
        }

        // Verifico las columnas
        for (int i = 0; i < n; ++i) {
            int sumaColumna = 0;
            for (int j = 0; j < i; ++j) {
                sumaColumna += matriz[i][j];
            }
            if (sumaColumna != sumaObjetivo) {
                break;
            }
        }

        // Verifico las diagonales
        int sumaDiagonal1 = 0, sumaDiagonal2 = 0;
        for (int i = 0; i < n; ++i) {
            sumaDiagonal1 += matriz[i][i];
            sumaDiagonal2 += matriz[i][n - i - 1];
        }

        if (sumaDiagonal1 != sumaObjetivo || sumaDiagonal2 != sumaObjetivo) {
            break;
        }

        esCuadradoMagico = true;

    }

    if (esCuadradoMagico) {
        cout << "Es cuadrado magico" << endl;
    } else {
        cout << "No es cuadrado magico" << endl;
    }


    // Mostrar la matriz ingresada
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}
