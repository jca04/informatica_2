#include <iostream>
#include <vector>
#include <problemas.h>
#include "funciones.h"

using namespace std;

vector<int> serieCollatz(int semilla) {
    vector<int> serie;
    int n = semilla;

    while(n != 1){
        serie.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    serie.push_back(1);
    return serie;
}

void problema16() {
    int k = leerNumeroEntero("Ingrese un numero entero: ");

    while (true) {
        if (k <= 0) {
            k = leerNumeroEntero("Ingrese un numero entero positivo: ");
            continue;
        } else {
            break;
        }
    }

    vector<vector<int>> series;
    int semillaConMayorLongitud = 0;
    int longitudMayor = 0;

    for (int j = 1; j < k; j++) {
        vector<int> serie = serieCollatz(j);
        series.push_back(serie);

        if (serie.size() > longitudMayor) {
            longitudMayor = serie.size();
            semillaConMayorLongitud = j;
        }
    }

    cout << "La semilla mas larga es con la semilla: " << semillaConMayorLongitud << ", " << "teniendo " << longitudMayor << " terminos." << endl;

    for (const auto& serie : series) {
        if (serie.size() == longitudMayor) {
            for (int num : serie) {
                cout << num << " ";
            }
        }
    }
}
