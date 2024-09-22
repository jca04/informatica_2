#include <iostream>
#include <limits>
#include "problemas.h"

using namespace std;


int countPaths(int **matrix, int rows, int cols) {

    // Inicializar la celda de destino con 1 (un solo camino para llegar a si misma)
    // [0 , 0, 0]
    // [0 , 0, 0]
    // [0 , 0, 1]
    matrix[rows - 1][cols - 1] = 1;

    // Llenar la ultima fila (solo se puede mover hacia la derecha)
    // [0, 0, 0]
    // [0, 0 ,0]
    // [1, 1, 1]
    for (int j = cols - 2; j >= 0; j--) {
        matrix[rows - 1][j] = 1; // Solo hay un camino hacia la derecha
    }

    // Llenar la ultima columna (solo se pude mover hacia abajo)
    // [0, 0, 1]
    // [0, 0, 1]
    // [1, 1, 1]
    for (int i = rows - 2; i >= 0; i--) {
        matrix[i][cols - 1] = 1; // Solo hay un camino hacia abajo
    }

    // Llenar el resto de la matriz
    // [0, 0, 1]
    // [3, 2, 1]
    // [1, 1, 1]
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = cols - 2; j >= 0; j--) {
            matrix[i][j] = matrix[i + 1][j] + matrix[i][j + 1]; // Sumar caminos de abajo y derecha
        }
    }

    return matrix[0][0]; // El numero de caminos desde la esquina superior izquierda estara en matrix[0][0]

}

void problema16() {

    unsigned int malla;

    cout << "Ingrese el tamano de la malla: ";
    cin >> malla;


    // Crear una matriz de tamaño (malla + 1) x (malla + 1) para incluir los puntos
    int dimention = malla + 1;


    int **matrix = new int*[dimention];
    for (int i = 0; i < dimention; i++) {
        matrix[i] = new int[dimention];
    }

    int possiblePaths = countPaths(matrix, dimention, dimention);

    cout << "Para una malla de " << malla << "x" << malla << " puntos hay " << possiblePaths << " caminos." << endl;

    for (int i = 0; i < dimention; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;

}
