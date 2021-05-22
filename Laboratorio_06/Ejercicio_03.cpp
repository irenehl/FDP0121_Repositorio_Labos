/*
Escriba un programa que solicite n números desde el teclado, y calcule: la 
suma de todos los números ingresados y su promedio.
*/

#include <iostream>
using namespace std;

int main(void) {
    int cantidad = 0;
    float suma = 0, numero = 0, promedio = 0;

    cout << "Cantidad de num a ingresar: "; cin >> cantidad;

    for(int i = 0; i < cantidad; i++) {
        cout << "Num: "; cin >> numero;

        suma += numero;
        // suma = suma + numero;
        // primera vez, suponiendo que mande 1
        // suma = 0 + 1
        // segunda vez, suponiendo que mande 2
        // suma = 1 + 2 = 3
    }
    
    promedio = (suma / cantidad);

    cout << "El promedio es: " << promedio << endl;

    return 0;
}