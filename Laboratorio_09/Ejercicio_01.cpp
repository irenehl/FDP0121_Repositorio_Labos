/*
Escriba una función de tres argumentos que reciba, desde main, un número entero en base
diez, lo convierte a su binario equivalente y lo almacene en un arreglo que será pasado en
el segundo argumento. En el tercer argumento coloque la cantidad de dígitos calculados. 
Luego, la función main invocará a una función que imprimirá el número binario, 
mandándole el arreglo y la cantidad.

*/

#include <iostream>
using namespace std;

void convertirBinario(int num, int *arreglo, int *digitos);

int main(void) {
    int num = 0, digitos = 0;
    int* arreglo = new int[30];

    cin >> num;

    convertirBinario(num, arreglo, &digitos);

    for(int i = digitos - 1; i >= 0; i--) {
        cout << arreglo[i] << " "; 
    }

    cout << endl;

    return 0;
}

void convertirBinario(int num, int *arreglo, int *digitos) {
    int auxPos = 0;

    while(num != 0) {
        arreglo[auxPos] += num % 2;
        num /= 2;

        (*digitos)++;
        auxPos++;
    }
}

