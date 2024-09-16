#include <iostream>
#include "ejercicios.h"

using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);


void ejercicio1() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
}

void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam - 1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}


// Cuál es su dirección en memoria? ¿Cuántos bytes se dedican para almacenar cada elemento de array?
// R: la dirección en memoria de array es la DM del primer elemento del arreglo. Debido a que es un arreglo de enteros para cada elemento se dedican 4 bytes

// Cuál es la dirección y el contenido en memoria del elemento array[3]?
// R: La dirección del elemento array[3]: DM de array + 3 * 4 y el contenido antes de aplicar func_b es 3 y despues de aplicar func_b es 6.

// Describa el efecto que tiene la función fun_b, sobre el arreglo array.
// R: Usando el debugger se puede observar que la función de func_b es invertir el arreglo.
