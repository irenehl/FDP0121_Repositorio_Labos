/*
Escriba una función para determinar si un año es, o no, bisiesto. Su función deberá 
recibir como parámetros el año y deberá retornar un valor booleano de acuerdo a si el 
año cumple ser bisiesto o no. Utilice el algoritmo ya visto en clases anteriores.

Condiciones a cumplirse:
    Si es divisible entre 4
    No es divisible entre 100 o es divisible entre 400
*/

#include <iostream>
using namespace std;

bool bisiesto(int a);

int main(void) {
    int anio = 0;

    cout << "Digite anio: "; cin >> anio;

    /*
        if(bisiesto(anio))
            cout << "Si es";
        else 
            cout << "No es";
    */

    bisiesto(anio) ? cout << "Es bisiesto" << endl : cout << "No lo es" << endl;

    return 0;
}

bool bisiesto(int a) {
    if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        return true;
    else
        return false;
}