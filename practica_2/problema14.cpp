#include <iostream>
#include "problemas.h"

using namespace std;


int SIZE = 5;


void imprimirMatriz(int **matriz) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void rotarMatriz90Grados(int **matriz) {

    // Transponer la matriz
    for (int i = 0; i < SIZE; ++i) {
        for (int j = i; j < SIZE; ++j) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }

    // Invertir las filas
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE / 2; ++j) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][SIZE - j - 1];
            matriz[i][SIZE - j - 1] = temp;
        }
    }
}

void problema14() {

    int **matrix = new int*[SIZE];
    for (int i = 0; i < SIZE; i++) {
        matrix[i] = new int[SIZE];
    }

    int number = 1;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = number++;
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matrix);

    // Rotar matriz 90 grados
    rotarMatriz90Grados(matrix);

    cout << endl;

    cout << "Matriz rotada 90 grados" << endl;
    imprimirMatriz(matrix);

    cout << endl;

    rotarMatriz90Grados(matrix);

    cout << "Matriz rotada 180 grados " << endl;
    imprimirMatriz(matrix);

    cout << endl;

    rotarMatriz90Grados(matrix);

    cout << "Matriz rotada 270 grados " << endl;
    imprimirMatriz(matrix);


    for (int i = 0; i < SIZE; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;


}
