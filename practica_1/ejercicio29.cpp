#include <iostream>
#include <cstdlib>
#include "ejercicios.h"

using namespace std;


void ejercicio29() {


    srand(time(0));
    bool guessed = false;
    char symbol;
    int machNum = rand() % 101;

    do {
        cout << "Es " << machNum << " tu numero (Ingrese '>', '<', '='): " << endl;
        cin >> symbol;

        if (symbol != '=' && symbol != '>' && symbol != '<') {
            cout << "Ingrese un simbolo valido." << endl;
        } else {

            if (symbol == '=') {
                guessed = true;
                cout << "Numero adivinado" << endl;
            } else if (symbol == '>') {
                machNum = machNum + rand() % (101 - machNum);
            } else if (symbol == '<') {
                machNum = rand() % machNum;
            }

        }

    } while(!guessed);

}
