/*
Solicite n números enteros desde teclado, luego calcule y muestre lo siguiente: la 
suma de todos esos números, el producto de todos esos números, cuántos números eran 
positivos y cuántos números eran negativos.
*/

#include <iostream>
using namespace std;

int main(void) {
    int cantidad = 0, suma = 0, multiplicacion = 1, positivos = 0, 
    numero = 0, negativos = 0;

    cout << "Cantidad a ingresar: "; cin >> cantidad;

    for(int i = 0; i < cantidad; i++) {
        cout << "Digite num: "; cin >> numero;

        suma += numero;
        multiplicacion *= numero;

        if(numero >= 0)
            positivos++;
        else   
            negativos++;
    }

    cout << "Suma: " << suma << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;

    return 0;
}