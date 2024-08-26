#include <iostream>
#include <problemas.h>

using namespace std;

void problema7() {

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    int suma = 0;
    int cont = 1;

    while (cont < num) {

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        if (n2 % 2 == 0 && n2 < num) {
            suma += n2;
        }

        cont++;
    }

    cout << "El resultado de la suma es: " << suma << endl;

}
