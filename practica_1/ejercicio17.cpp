#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio17() {

    bool finish = false;
    int largestNum;

    while (!finish) {
        int num;
        cout << "Ingrese un numero o ingrese 0 para salir: " << endl;
        cin >> num;

        if (num > largestNum) {
            largestNum = num;
        }

        if (num == 0) finish = true;

    }

    cout << "El numero mayor fue: " << largestNum << endl;

}
