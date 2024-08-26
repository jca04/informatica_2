#include <iostream>
#include <problemas.h>

using namespace std;

void problema3() {

    int mes;
    cout << "Ingrese un mes: ";
    cin >> mes;

    int dia;
    cout << "Ingrese un dia: ";
    cin >> dia;

    if (mes > 12) {
        cout << mes << " es un mes invalido." << endl;
        return;
    }

    if (dia > 31) {
        cout << dia << " es un dia invalido." << endl;
        return;
    }

    if (mes == 2 && dia == 29) {
        cout << dia << "/" << mes << " es valido en bisiesto." << endl;
        return;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia == 31){
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
            return;
        }
    }

    cout << dia << "/" << mes << " es una fecha valida." << endl;

}
