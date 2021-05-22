/*
Solicite n carácteres desde teclado, luego indique la cantidad de vocales y la 
cantidad de no vocales que fueron digitados.
*/

#include <iostream>
using namespace std;

int main(void) {
    int cantidad = 0, cantidadVocales = 0, cantidadConsonantes = 0;
    char letra;

    cout << "Digite cantidad de digitos que quiere ingresar: "; cin >> cantidad;

    for(int i = 0; i < cantidad; i++) {
        cout << "Digite letra: "; cin >> letra;

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cantidadVocales++;
                break;
            default:
                cantidadConsonantes++;
                break;
        }
    }

    cout << "Cantidad vocales: " << cantidadVocales << endl;
    cout << "Cantidad de consonantes: " << cantidadConsonantes << endl;

    return 0;
}