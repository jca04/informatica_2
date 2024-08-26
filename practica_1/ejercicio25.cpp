#include <iostream>
#include "ejercicios.h"

using namespace std;

void ejercicio25() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    string numStr = to_string(num);

    int numSize = numStr.size();

    cout << num << " tiene " << numSize << " digitos." << endl;
}
