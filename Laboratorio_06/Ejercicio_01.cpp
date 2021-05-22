/*
Solicite n carácteres desde teclado y luego indique cuántas vocales han sido
digitadas.
*/

#include <iostream>
using namespace std;

int main(void) {
    int cantidad = 0, cantidadVocales = 0;
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
                // cantidadVocales = cantidadVocales + 1
                // cantidadVocales += 1;
                break;
            default:
                break;
        }
    }

    cout << "Cantidad vocales: " << cantidadVocales << endl;

    return 0;
}

/*
LA PRIMERA VEZ QUE CORRE (tomando en cuenta que la cantidad es = 4)

for(int i = 0; i < 4; i++) {
        cout << "Digite letra: "; cin >> letra;
        letra = a

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cantidadVocales++;
                cantidadVocales ahora tiene 1
                break;
            default:
                break;
        }
    }

SEGUNDA VEZ QUE CORRE
for(int i = 0; 1 < 4; i++) {
        cout << "Digite letra: "; cin >> letra;
        letra = q

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cantidadVocales++;
                cantidadVocales ahora tiene 1
                break;
            default:
                q entra en el default
                break;
        }
    }

TERCERA VEZ QUE CORRE
for(int i = 0; 2 < 4; i++) {
        cout << "Digite letra: "; cin >> letra;
        letra = e

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cantidadVocales++;
                cantidadVocales ahora tiene 2
                break;
            default:
                break;
        }
    }

CUARTA VEZ QUE CORRE
for(int i = 0; 3 < 4; i++) {
        cout << "Digite letra: "; cin >> letra;
        letra = d

        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cantidadVocales++;
                cantidadVocales ahora tiene 2
                break;
            default:
                d entra aqui
                break;
        }
    }

QUINTA VEZ QUE CORRE
for(int i = 0; 4 < 4; i++) {
    ya no entra en el for porque no se cumple la condicion
    }
*/