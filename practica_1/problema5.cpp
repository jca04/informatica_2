#include <iostream>
#include <problemas.h>

using namespace std;

void problema5() {

    int num;
    cout << "Ingrese el numero del patron: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero tiene que ser impar" << endl;
        return;
    }

    // parte superior

    for (int i = 1; i <= num; i+=2) {

        int s = (num - i) / 2; // espacios

        for (int j = 0; j < s; j++) {
            cout << " ";
        }


        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }


    // parte inferior

    for (int i = num - 2; i > 0; i-=2) {

        int s = (num - i) / 2;

        for (int j = 0; j < s; j++) {
            cout << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
