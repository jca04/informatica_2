#include <iostream>
#include <limits>
#include "problemas.h"

using namespace std;

unsigned long long int fact(int num) {
    unsigned long long int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }

    return result;
}

void eliminarIndice(int digitos[], int& tam, int indice) {
    for (int i = indice; i < tam - 1; ++i) {
        digitos[i] = digitos[i + 1]; // Mueve los elementos hacia la izquierda
    }
    tam--; // Reducir el tamaño del array lógicamente
}

void problema18() {

    unsigned long long int n;

    while (true) {
        cout << "Ingrese el numero para hallar la enesima permutacion lexicografica: ";
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no valida. Por favor ingrese un numero entero." << endl;
        } else if (n < 0) {
            cout << "Por favor ingrese un numero entero positivo." << endl;
        } else if (n  < 1 || n > fact(10)){
            cout << "El valor de n debe estar entre 1 y " << fact(10) << endl;
        } else {
            break;
        }
    }

    unsigned long long int num = n;

    int digitos[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = 10;

    // Decrementamos n para trabajar con índice basado en 0
    n--;

    string permutacion = "";

    // Iterar para encontrar cada posición de la permutación
    for (int i = 9; i >= 0; i--) {
        int factorial = fact(i);  // Calcular el factorial del tamaño restante
        int index = n / factorial;     // Índice del dígito actual

        // Agregar el dígito correspondiente a la permutación
        permutacion += to_string(digitos[index]);

        // Eliminar el dígito ya seleccionado desplazando los elementos hacia la izquierda
        eliminarIndice(digitos, tam, index);

        // Actualizar n para la siguiente posición
        n %= factorial;
    }

    cout << "La permutacion numero " << num << " es: " << permutacion << endl;


}
