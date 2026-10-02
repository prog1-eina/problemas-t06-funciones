/******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Resumen: Programa interactivo que pregunta repetidamente por un mes y
 *          un año y escribe en la pantalla el número de días que tiene el mes.
 *          Problemas de Programación 1 con funciones (tema 6).
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Constante que almacena el año en el que se instauró el calendario gregoriano
 * en España.
 */
const int AGNO_INICIO_GREGORIANO = 1582;

/*
 * Pre:  agno > 1582
 * Post: Devuelve «true» si y solo si el año «agno» es bisiesto de acuerdo con
 *       las reglas del calendario gregoriano.
 */
bool esBisiesto(unsigned agno) {
    if (agno % 400 == 0) {
        return true;
    } else if (agno % 100 == 0) {
        return false;
    } else if (agno % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

/*
 * Programa que pide al usuario un año y escribe en la pantalla si es bisiesto
 * o no.
 */
int main() {
    cout << "Escriba un un año: ";
    unsigned agno;
    cin >> agno;

    if (esBisiesto(agno)) {
        cout << "El año " << agno << " es bisiesto." << endl;
    } else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }
    
    return 0;
}