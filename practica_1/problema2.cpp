#include <iostream>
#include <problemas.h>
#include "funciones.h"

using namespace std;

void problema2() {

    int billetes = leerNumeroEntero("Ingrese los billetes: ");

    int billetesDe50000 = billetes / 50000;
    billetes %= 50000;

    int billetesDe20000 = billetes / 20000;

    billetes %= 20000;

    int billetesDe10000 = billetes / 10000;
    billetes %= 10000;

    int billetesDe5000 = billetes / 5000;
    billetes %= 5000;

    int billetesDe2000 = billetes / 2000;
    billetes %= 2000;

    int billetesDe1000 = billetes / 1000;
    billetes %= 1000;

    int monedasDe500 = billetes / 500;
    billetes %= 500;

    int monedasDe200 = billetes / 200;
    billetes %= 200;

    int monedasDe100 = billetes / 100;
    billetes %= 100;

    int monedasDe50 = billetes / 50;
    billetes %= 50;


    cout << "50000" << " : " << billetesDe50000 << endl;
    cout << "20000" << " : " << billetesDe20000 << endl;
    cout << "10000" << " : " << billetesDe10000 << endl;
    cout << "5000" << " : " << billetesDe5000 << endl;
    cout << "2000" << " : " << billetesDe2000 << endl;
    cout << "1000" << " : " << billetesDe1000 << endl;
    cout << "500" << " : " << monedasDe500 << endl;
    cout << "200" << " : " << monedasDe200 << endl;
    cout << "100" << " : " << monedasDe100 << endl;
    cout << "50" << " : " << monedasDe50 << endl;
    cout << "Faltante: " << billetes << endl;
}
