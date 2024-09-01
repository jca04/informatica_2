#include <iostream>
#include "ejercicios.h"
#include "problemas.h"

using namespace std;

// Función para mostrar el menú principal
void mostrarMenuPrincipal() {
    cout << "Menu Principal" << endl;
    cout << "1. Ver Ejercicios" << endl;
    cout << "2. Ver Problemas" << endl;
    cout << "0. Salir" << endl;
}

// Función para mostrar el menú de ejercicios
void mostrarMenuEjercicios() {
    cout << "Menu de Ejercicios" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Ejercicio 4" << endl;
    cout << "5. Ejercicio 5" << endl;
    cout << "6. Ejercicio 6" << endl;
    cout << "7. Ejercicio 7" << endl;
    cout << "8. Ejercicio 8" << endl;
    cout << "9. Ejercicio 9" << endl;
    cout << "10. Ejercicio 10" << endl;
    cout << "11. Ejercicio 11" << endl;
    cout << "12. Ejercicio 12" << endl;
    cout << "13. Ejercicio 13" << endl;
    cout << "14. Ejercicio 14" << endl;
    cout << "15. Ejercicio 15" << endl;
    cout << "16. Ejercicio 16" << endl;
    cout << "17. Ejercicio 17" << endl;
    cout << "18. Ejercicio 18" << endl;
    cout << "19. Ejercicio 19" << endl;
    cout << "20. Ejercicio 20" << endl;
    cout << "21. Ejercicio 21" << endl;
    cout << "22. Ejercicio 22" << endl;
    cout << "23. Ejercicio 23" << endl;
    cout << "24. Ejercicio 24" << endl;
    cout << "25. Ejercicio 25" << endl;
    cout << "26. Ejercicio 26" << endl;
    cout << "27. Ejercicio 27" << endl;
    cout << "28. Ejercicio 28" << endl;
    cout << "29. Ejercicio 29" << endl;
    cout << "30. Ejercicio 30" << endl;
    cout << "0. Volver al Menu Principal" << endl;
}

// Función para mostrar el menú de problemas
void mostrarMenuProblemas() {
    cout << "Menu de Problemas" << endl;
    cout << "1. Problema 1" << endl;
    cout << "2. Problema 2" << endl;
    cout << "3. Problema 3" << endl;
    cout << "4. Problema 4" << endl;
    cout << "5. Problema 5" << endl;
    cout << "6. Problema 6" << endl;
    cout << "7. Problema 7" << endl;
    cout << "8. Problema 8" << endl;
    cout << "9. Problema 9" << endl;
    cout << "10. Problema 10" << endl;
    cout << "11. Problema 11" << endl;
    cout << "12. Problema 12" << endl;
    cout << "13. Problema 13" << endl;
    cout << "14. Problema 14" << endl;
    cout << "15. Problema 15" << endl;
    cout << "16. Problema 16" << endl;
    cout << "17. Problema 17" << endl;
    cout << "0. Volver al Menu Principal" << endl;
}

void ejecutarEjercicio(int opcion) {
    switch(opcion) {
    case 1: ejercicio1(); break;
    case 2: ejercicio2(); break;
    case 3: ejercicio3(); break;
    case 4: ejercicio4(); break;
    case 5: ejercicio5(); break;
    case 6: ejercicio6(); break;
    case 7: ejercicio7(); break;
    case 8: ejercicio8(); break;
    case 9: ejercicio9(); break;
    case 10: ejercicio10(); break;
    case 11: ejercicio11(); break;
    case 12: ejercicio12(); break;
    case 13: ejercicio13(); break;
    case 14: ejercicio14(); break;
    case 15: ejercicio15(); break;
    case 16: ejercicio16(); break;
    case 17: ejercicio17(); break;
    case 18: ejercicio18(); break;
    case 19: ejercicio19(); break;
    case 20: ejercicio20(); break;
    case 21: ejercicio21(); break;
    case 22: ejercicio22(); break;
    case 23: ejercicio23(); break;
    case 24: ejercicio24(); break;
    case 25: ejercicio25(); break;
    case 26: ejercicio26(); break;
    case 27: ejercicio27(); break;
    case 28: ejercicio28(); break;
    case 29: ejercicio29(); break;
    case 30: ejercicio30(); break;
    default: cout << "Opcion no valida para ejercicios." << endl; break;
    }
}

void ejecutarProblema(int opcion) {
    switch(opcion) {
    case 1: problema1(); break;
    case 2: problema2(); break;
    case 3: problema3(); break;
    case 4: problema4(); break;
    case 5: problema5(); break;
    case 6: problema6(); break;
    case 7: problema7(); break;
    case 8: problema8(); break;
    case 9: problema9(); break;
    case 10: problema10(); break;
    case 11: problema11(); break;
    case 12: problema12(); break;
    case 13: problema13(); break;
    case 14: problema14(); break;
    case 15: problema15(); break;
    case 16: problema16(); break;
    case 17: problema17(); break;
    default: cout << "Opcion no valida para problemas." << endl; break;
    }
}

int main() {
    int opcionPrincipal;
    int opcionSubmenu;

    do {
        mostrarMenuPrincipal();
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        switch(opcionPrincipal) {
        case 1: // Menú de Ejercicios
            do {
                mostrarMenuEjercicios();
                cout << "Seleccione un ejercicio: ";
                cin >> opcionSubmenu;

                if (opcionSubmenu != 0) {
                    ejecutarEjercicio(opcionSubmenu);
                    cout << "Desea ver mas ejercicios (s/n): ";
                    char respuesta;
                    cin >> respuesta;
                    if (respuesta == 'n' || respuesta == 'N') {
                        opcionSubmenu = 0; // Salir del bucle de ejercicios
                    }
                }
            } while(opcionSubmenu != 0);
            break;

        case 2: // Menú de Problemas
            do {
                mostrarMenuProblemas();
                cout << "Seleccione un problema: ";
                cin >> opcionSubmenu;

                if (opcionSubmenu != 0) {
                    ejecutarProblema(opcionSubmenu);
                    cout << "Desea ver mas problemas (s/n): ";
                    char respuesta;
                    cin >> respuesta;
                    if (respuesta == 'n' || respuesta == 'N') {
                        opcionSubmenu = 0; // Salir del bucle de problemas
                    }
                }
            } while(opcionSubmenu != 0);
            break;

        case 0:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
        }
        cout << endl;
    } while(opcionPrincipal != 0);

    return 0;
}
