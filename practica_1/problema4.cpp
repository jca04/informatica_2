#include <iostream>
#include <iomanip>
#include <problemas.h>
#include "funciones.h"

using namespace std;

bool validarTiempo(int tiempo) {
    int horas = tiempo / 100;
    int minutos = tiempo % 100;
    return (horas >= 0 && horas < 24 && minutos >= 0 && minutos < 60);
}

int horaAMinuto(int hora) {
    int horas = hora / 100;
    int minutos = hora % 100;
    return horas * 60 + minutos;
}

int minutosAHora(int minutosTotales) {
    int horas = minutosTotales / 60;
    int minutos = minutosTotales % 60;
    return horas * 100 + minutos;
}

void problema4() {
    int horaDelDia = leerNumeroEntero("Ingrese una hora del dia: ");

    int duracion = leerNumeroEntero("Ingrese una duracion: ");

    while(true) {
        if (!validarTiempo(horaDelDia)) {
            cout << horaDelDia << " es un tiempo invalido." << endl;
            horaDelDia = leerNumeroEntero("Ingrese una hora del dia valida: ");
            continue;
        } else if (!validarTiempo(duracion)) {
            cout << duracion << " es un tiempo invalido." << endl;
            duracion = leerNumeroEntero("Ingrese una duracion valida: ");
            continue;
        } else {
            break;
        }
    }

    int minutosHora = horaAMinuto(horaDelDia);
    int minutosDuracion = horaAMinuto(duracion);

    int minutosResultado = minutosHora + minutosDuracion;

    int horaResultado = minutosAHora(minutosResultado);

    cout << "La hora es " << setw(4) << setfill('0') << horaResultado << "." << endl;
}
