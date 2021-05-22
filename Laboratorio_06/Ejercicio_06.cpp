/*
Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los
enteros en ese intervalo que son números pares, sume los num pares e impares  y muestre un promedio de estos
*/

#include <iostream>
using namespace std;

int main(void) {
    int limiteInferior = 0, limiteSuperior = 0, sumaPares = 0, contadorPares = 0, sumaImpares = 0, contadorImpares = 0;
    float promedioPares = 0, promedioImpares = 0;

    cout << "Primer num: "; cin >> limiteInferior;
    cout << "Segundo num: "; cin >> limiteSuperior;

    for(int i = limiteInferior; i <= limiteSuperior; i++) {

        if(i % 2 == 0) {
            sumaPares += i;
            contadorPares++;
        }
        else {
            sumaImpares += i;
            contadorImpares++;
        }
    }

    promedioPares = sumaPares / contadorPares;
    promedioImpares = sumaImpares / contadorImpares;

    cout << "Promedio num pares: " << promedioPares << endl;
    cout << "Promedio impares: " << promedioImpares << endl;

    return 0;
}