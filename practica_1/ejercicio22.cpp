#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio22() {

    int segundos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;

    int minutos = segundos / 60;
    int horas = minutos / 60;

    int newSeg = (segundos % 60);
    int newMin = (minutos % 60);

    cout << horas << ":" << newMin << ":" << newSeg <<endl;

}
