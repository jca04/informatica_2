#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio3() {

    cout << "Tamano de los tipos de datos en bytes:" << endl;
    cout << "char: " << sizeof(char) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "short: " << sizeof(short) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "float: " << sizeof(float) << " byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " byte(s)" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
    cout << "long long int: " << sizeof(long long int) << " byte(s)" << endl;


    unsigned short b[4][2] = { { 77, 50 }, { 5, 2 }, { 28, 39 }, { 99, 3 } };

    // Sistema hexadecimal
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A = 10, B = 11, C = 12, D = 13, E = 14, F = 15

    // 0x0A12 a decimal = 0 * 16^3 + A * 16^2 + 1 * 16^1 + 2 16^0 = 2578

    // b[0][0] = 0x0A12
    // b[0][1] = 0x0A12 + 2 bytes = 0x0A14
    // b[1][0] = 0x0A16
    // b[1][1] = 0x0A18 = 2584

    // 2586 -> hex
    // 2586 / 16 = 161 residuo = 10 = A
    // 161 / 16 = 10 residuo = 1
    // 10 / 16 = 0 residuo = 10 = A

    // b[2][0] = 0x0A1A

    // 2588 / 16 = 161 residuo = 12 = C
    // 161 / 16 = 10 residuo = 1
    // 10 / 16 = 0 residuo = 10 = A

    // b[2][1] = 0x0A1C

    // b[3][0] = 0x0A1E

    // 2592 / 16 = 162 residuo = 0
    // 162 / 16 = 10 residuo = 2
    // 10 / 16 = 0 residuo 10 = A

    // b[3][1] = 0x0A20

    // Determine de acuerdo a lo ilustrado en la Figura 1 el valor correspondiente de las siguientes expresiones:
    // b = es un puntero que apunta al primer elemento del arreglo b[0] = 0x0A12
    // b + 2 = va a apuntar al segundo elemento que seria b[2][0] = 0x0A1A
    // *(b + 2) = el contenido de b[2][0] = 28
    // *(b + 2) + 1 = 29
    // *(*(b + 2) + 1) = representa el contenido de b[2][1] = 39
    // b[3][1] = 0x0A20
    // *b++ = b[0][0] (porque se aumenta despues de que se haya utilizado) = 77
    int array[3][3][3] = [
        [1, 2, 3],
        [5, 8, 19],
        [7, 2 , 0]
    ]

    *

}
