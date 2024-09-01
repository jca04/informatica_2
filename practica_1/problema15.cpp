#include <iostream>
#include <vector>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema15() {

    int num = leerNumeroEntero("Ingrese un numero entero: ");

    while (true) {
        if (num <= 0) {
            num = leerNumeroEntero("Ingrese un numero entero positivo mayor que cero: ");
            continue;
        } else if (num % 2 == 0) {
            num = leerNumeroEntero("Ingrese un numero impar: ");
            continue;
        } else {
            break;
        }
    }

    vector<vector<int>> espiral(num, vector<int>(num, 0));

    // coordenadas
    int x = num / 2; // Inicia en el centro
    int y = num / 2;
    int n = 1;
    espiral[x][y] = n;

    int step = 1;

    while(step < num) {

        // mover a la derecha
        for (int i = 0; i < step; i++) {
            y++;
            espiral[x][y] = ++n;
        }


        // mover hacia abajo
        for (int i = 0; i < step; i++) {
            x++;
            espiral[x][y] = ++n;
        }

        step++;

        //mover hacia la izquierda
        for (int i = 0; i < step; i++) {
            y--;
            espiral[x][y] = ++n;
        }

        // mover hacia arriba
        for (int i = 0; i < step; i++) {
            x--;
            espiral[x][y] = ++n;
        }

        step++;

    }

    // mover hacia la derecha para completar el espiral
    for (int i = 0; i < step - 1; i++) {
        y++;
        espiral[x][y] = ++n;
    }

    cout << "Espiral de " << num << "x" << num << ":" << endl;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << espiral[i][j] << "\t"; // tab
        }
        cout << endl;
    }

    int sumaDiagonales = 0;
    for (int i = 0; i < num; i++) {
        sumaDiagonales += espiral[i][i];  // Diagonal principal
        sumaDiagonales += espiral[i][num - i - 1]; // Diagonal secundaria
    }

    // Resto el valor central para que no se duplique en la suma
    sumaDiagonales -= espiral[num / 2][num / 2];

    cout << "En una espiral " << num << "x" << num << " la suma es: " << sumaDiagonales << endl;
}
