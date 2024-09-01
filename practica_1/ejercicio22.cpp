#include <iostream>
#include "ejercicios.h"
#include "funciones.h"

using namespace std;

void ejercicio22() {

    int segundos = leerNumeroEntero("Ingrese los segundos: ");

    while (true) {
        if (segundos < 0) {
            segundos = leerNumeroEntero("Ingrese los segundos positivos: ");
        } else {
            break;
        }
    }

    int minutos = segundos / 60;
    int horas = minutos / 60;

    int newSeg = (segundos % 60);
    int newMin = (minutos % 60);

    cout << horas << ":" << newMin << ":" << newSeg <<endl;

}
