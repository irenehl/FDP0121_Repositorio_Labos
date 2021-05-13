/*
    Despliegue un menú que le pida al usuario que ingrese una de las siguientes 
    opciones:
    a) Sumar dos números.
    b) Restar dos números.
    c) Multiplicar dos números.
    d) Dividir dos números.
    La opción tendrá que ser ingresada por medio de teclado, al igual que los dos 
    operandos.
*/
#include <iostream>
using namespace std;

int main(void) {
    // Opcion 1
    int num1 = 0, num2 = 0, total = 0, opcion = 0;

    cout << "Calculadora" << endl;
    cout << "1. Sumar dos números." << endl;
    cout << "2. Resta numeros" << endl;
    cout << "3. Multiplicar numeros" << endl;
    cout << "4. Dividir numeros" << endl;
    cout << "Su opcion: "; cin >> opcion;

    switch(opcion) {
        case 1: 
            cout << "Num 1: "; cin >> num1;
            cout << "Num 2: "; cin >> num2;

            total = num1 + num2;

            cout << "La suma es: " << total;
            break;
        case 2:
            cout << "Num 1: "; cin >> num1;
            cout << "Num 2: "; cin >> num2;

            total = num1 - num2;

            cout << "La resta es: " << total;
            break;
        case 3: 
            cout << "Num 1: "; cin >> num1;
            cout << "Num 2: "; cin >> num2;

            total = num1 * num2;

            cout << "La multiplicacion es: " << total;
            break;
        case 4:
            cout << "Num 1: "; cin >> num1;
            cout << "Num 2: "; cin >> num2;

            total = num1 / num2;

            cout << "La division es: " << total;
            break;
        default:
            cout << "Nel meco" << endl;
    }

    /* Estructura con if

    if(opcion == 1) {
        codigo
    }
    else if(opcion == 2) {
        codigo
    }
    else if(opcion == 3) {
        codigo
    }
    else if(opcion == 4) {
        codigo
    }
    else {
        nel meco
    }
    */

    return 0;
}
