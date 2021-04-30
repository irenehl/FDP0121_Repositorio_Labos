/*
Realice un programa que solicite al usuario dos números, opere estos números  mediante una suma y a dicha suma sáquele raíz cuadrada. Muestre en consola el  valor de la suma y de la raíz cuadrada. 

Pasos a seguir:
1. Crear variables para almacenar num
1.1 Solicitar dos numeros al usario
2. Crear una variable para almacenar la suma
2.1 Realizar la suma
3. Incluir la libreria
3.1 Crear una variable para almacenar la raiz
3.2 Sacar la raiz
4. Mostrar valores
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    float num1 = 0, num2 = 0, suma = 0, raiz = 0;

    cout << "Digite num 1: "; cin >> num1;
    cout << "Digita num 2: "; cin >> num2;

    suma = num1 + num2;

    raiz = sqrt(suma);

    cout << "Suma: " << suma;
    cout << "\nRaiz: " << raiz;

    return 0;
}