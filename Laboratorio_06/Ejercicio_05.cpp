/*
Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los
enteros en ese intervalo que son números pares, sume los num pares y muestre un promedio de estos
*/

#include <iostream>
using namespace std;

int main(void) {
    int limiteInferior = 0, limiteSuperior = 0, suma = 0, contador = 0;
    float promedio = 0;

    cout << "Primer num: "; cin >> limiteInferior;
    cout << "Segundo num: "; cin >> limiteSuperior;

    for(int i = limiteInferior; i <= limiteSuperior; i++) {
        if(i % 2 == 0) {
            suma += i;
            contador++;
        }
    }

    promedio = suma / contador;

    cout << "Promedio: " << promedio << endl;

    return 0;
}