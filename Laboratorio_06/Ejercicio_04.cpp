/*
Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los
enteros en ese intervalo que son números pares.
*/

#include <iostream>
using namespace std;

int main(void) {
    int limiteInferior = 0, limiteSuperior = 0;

    cout << "Primer num: "; cin >> limiteInferior;
    cout << "Segundo num: "; cin >> limiteSuperior;

    for(int i = limiteInferior; i <= limiteSuperior; i++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}